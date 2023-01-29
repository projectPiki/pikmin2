

/*
 * --INFO--
 * Address:	800F7148
 * Size:	000244
 */
void THPVideoDecode(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stmw      r27, 0x24(r1)
	  mr.       r27, r3
	  addi      r28, r4, 0
	  addi      r29, r5, 0
	  addi      r30, r6, 0
	  addi      r31, r7, 0
	  beq-      .loc_0x1F4
	  cmplwi    r28, 0
	  beq-      .loc_0x1FC
	  cmplwi    r29, 0
	  beq-      .loc_0x1FC
	  cmplwi    r30, 0
	  beq-      .loc_0x1FC
	  cmplwi    r31, 0
	  beq-      .loc_0x204
	  bl        -0x22B6C
	  rlwinm.   r0,r3,0,3,3
	  beq-      .loc_0x224
	  lwz       r0, -0x6E6C(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x22C
	  stw       r31, -0x6E74(r13)
	  li        r4, 0x6BC
	  lwz       r3, -0x6E74(r13)
	  addi      r0, r3, 0x1F
	  rlwinm    r3,r0,0,0,26
	  stw       r3, -0x6E70(r13)
	  addi      r0, r3, 0x6BC
	  stw       r0, -0x6E74(r13)
	  lwz       r3, -0x6E70(r13)
	  bl        -0xA9FC
	  lwz       r3, -0x6E70(r13)
	  li        r4, 0x21
	  li        r0, 0
	  stw       r4, 0x6A4(r3)
	  li        r31, 0
	  lwz       r3, -0x6E70(r13)
	  sth       r0, 0x698(r3)
	  lwz       r3, -0x6E70(r13)
	  stw       r27, 0x69C(r3)

	.loc_0xAC:
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x69C(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x69C(r4)
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0xFF
	  bne-      .loc_0x214
	  b         .loc_0xD8

	.loc_0xCC:
	  lwz       r3, 0x0(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r4)

	.loc_0xD8:
	  lwz       r3, -0x6E70(r13)
	  addi      r4, r3, 0x69C
	  lwz       r3, 0x69C(r3)
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0xFF
	  beq+      .loc_0xCC
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r4)
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0xD7
	  bgt-      .loc_0x134
	  cmplwi    r0, 0xC4
	  bne-      .loc_0x11C
	  bl        0x790
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x21C
	  b         .loc_0x1D0

	.loc_0x11C:
	  cmplwi    r0, 0xC0
	  bne-      .loc_0x20C
	  bl        0x164
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x21C
	  b         .loc_0x1D0

	.loc_0x134:
	  cmplwi    r0, 0xD8
	  blt-      .loc_0x194
	  cmplwi    r0, 0xDF
	  bgt-      .loc_0x194
	  cmplwi    r0, 0xDD
	  bne-      .loc_0x154
	  bl        0xC44
	  b         .loc_0x1D0

	.loc_0x154:
	  cmplwi    r0, 0xDB
	  bne-      .loc_0x16C
	  bl        0x384
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x21C
	  b         .loc_0x1D0

	.loc_0x16C:
	  cmplwi    r0, 0xDA
	  bne-      .loc_0x188
	  bl        0x250
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x21C
	  li        r31, 0x1
	  b         .loc_0x1D0

	.loc_0x188:
	  cmplwi    r0, 0xD8
	  beq-      .loc_0x1D0
	  b         .loc_0x20C

	.loc_0x194:
	  cmplwi    r0, 0xE0
	  blt-      .loc_0x1D0
	  blt-      .loc_0x1A8
	  cmplwi    r0, 0xEF
	  ble-      .loc_0x1B0

	.loc_0x1A8:
	  cmplwi    r0, 0xFE
	  bne-      .loc_0x20C

	.loc_0x1B0:
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x69C(r3)
	  addi      r5, r3, 0x69C
	  lbz       r3, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  rlwimi    r0,r3,8,16,23
	  add       r0, r4, r0
	  stw       r0, 0x0(r5)

	.loc_0x1D0:
	  rlwinm.   r0,r31,0,24,31
	  beq+      .loc_0xAC
	  bl        .loc_0x244
	  addi      r3, r28, 0
	  addi      r4, r29, 0
	  addi      r5, r30, 0
	  bl        0xE48
	  li        r3, 0
	  b         .loc_0x230

	.loc_0x1F4:
	  li        r3, 0x19
	  b         .loc_0x230

	.loc_0x1FC:
	  li        r3, 0x1B
	  b         .loc_0x230

	.loc_0x204:
	  li        r3, 0x1A
	  b         .loc_0x230

	.loc_0x20C:
	  li        r3, 0xB
	  b         .loc_0x230

	.loc_0x214:
	  li        r3, 0x3
	  b         .loc_0x230

	.loc_0x21C:
	  rlwinm    r3,r3,0,24,31
	  b         .loc_0x230

	.loc_0x224:
	  li        r3, 0x1C
	  b         .loc_0x230

	.loc_0x22C:
	  li        r3, 0x1D

	.loc_0x230:
	  lmw       r27, 0x24(r1)
	  lwz       r0, 0x3C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr

	.loc_0x244:
	*/
}

/*
 * --INFO--
 * Address:	800F738C
 * Size:	000044
 */
void __THPSetupBuffers(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6E74(r13)
	  lis       r3, 0x804F
	  addi      r5, r3, 0x7498
	  addi      r0, r4, 0x1F
	  rlwinm    r6,r0,0,0,26
	  stw       r6, 0x0(r5)
	  addi      r3, r6, 0x80
	  addi      r0, r6, 0x100
	  stw       r3, 0x4(r5)
	  addi      r4, r6, 0x180
	  addi      r3, r6, 0x200
	  stw       r0, 0x8(r5)
	  addi      r0, r6, 0x280
	  stw       r4, 0xC(r5)
	  stw       r3, 0x10(r5)
	  stw       r0, 0x14(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F73D0
 * Size:	00013C
 */
void __THPReadFrameHeader(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x69C(r4)
	  addi      r0, r3, 0x2
	  stw       r0, 0x69C(r4)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x69C(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x69C(r4)
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0x8
	  beq-      .loc_0x34
	  li        r3, 0xA
	  blr

	.loc_0x34:
	  lwz       r5, -0x6E70(r13)
	  lwz       r4, 0x69C(r5)
	  lbz       r3, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  rlwimi    r0,r3,8,16,23
	  sth       r0, 0x694(r5)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x69C(r4)
	  addi      r0, r3, 0x2
	  stw       r0, 0x69C(r4)
	  lwz       r5, -0x6E70(r13)
	  lwz       r4, 0x69C(r5)
	  lbz       r3, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  rlwimi    r0,r3,8,16,23
	  sth       r0, 0x692(r5)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x69C(r4)
	  addi      r0, r3, 0x2
	  stw       r0, 0x69C(r4)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x69C(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x69C(r4)
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0x3
	  beq-      .loc_0xA8
	  li        r3, 0xC
	  blr

	.loc_0xA8:
	  li        r7, 0
	  li        r6, 0
	  b         .loc_0x128

	.loc_0xB4:
	  lwz       r4, -0x6E70(r13)
	  rlwinm.   r0,r7,0,24,31
	  lwz       r3, 0x69C(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x69C(r4)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x69C(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x69C(r4)
	  lbz       r3, 0x0(r3)
	  bne-      .loc_0xE8
	  cmplwi    r3, 0x22
	  bne-      .loc_0xF8

	.loc_0xE8:
	  rlwinm.   r0,r7,0,24,31
	  beq-      .loc_0x100
	  cmplwi    r3, 0x11
	  beq-      .loc_0x100

	.loc_0xF8:
	  li        r3, 0x13
	  blr

	.loc_0x100:
	  lwz       r5, -0x6E70(r13)
	  addi      r0, r6, 0x680
	  addi      r6, r6, 0x6
	  lwz       r4, 0x69C(r5)
	  addi      r7, r7, 0x1
	  addi      r3, r4, 0x1
	  stw       r3, 0x69C(r5)
	  lbz       r4, 0x0(r4)
	  lwz       r3, -0x6E70(r13)
	  stbx      r4, r3, r0

	.loc_0x128:
	  rlwinm    r0,r7,0,24,31
	  cmplwi    r0, 0x3
	  blt+      .loc_0xB4
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F750C
 * Size:	00011C
 */
void __THPReadScaneHeader(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x69C(r4)
	  addi      r0, r3, 0x2
	  stw       r0, 0x69C(r4)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x69C(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x69C(r4)
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0x3
	  beq-      .loc_0x34
	  li        r3, 0xC
	  blr

	.loc_0x34:
	  li        r9, 0
	  li        r8, 0
	  b         .loc_0xC4

	.loc_0x40:
	  lwz       r6, -0x6E70(r13)
	  addi      r0, r8, 0x681
	  addi      r4, r8, 0x682
	  lwz       r5, 0x69C(r6)
	  li        r3, 0x1
	  addi      r5, r5, 0x1
	  stw       r5, 0x69C(r6)
	  lwz       r7, -0x6E70(r13)
	  lwz       r6, 0x69C(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x69C(r7)
	  lbz       r7, 0x0(r6)
	  lwz       r5, -0x6E70(r13)
	  srawi     r6, r7, 0x4
	  stbx      r6, r5, r0
	  rlwinm    r7,r7,0,28,31
	  slw       r0, r3, r6
	  lwz       r5, -0x6E70(r13)
	  stbx      r7, r5, r4
	  lwz       r4, -0x6E70(r13)
	  lbz       r4, 0x6A8(r4)
	  and.      r0, r4, r0
	  bne-      .loc_0xA4
	  li        r3, 0xF
	  blr

	.loc_0xA4:
	  addi      r0, r7, 0x1
	  slw       r0, r3, r0
	  and.      r0, r4, r0
	  bne-      .loc_0xBC
	  li        r3, 0xF
	  blr

	.loc_0xBC:
	  addi      r8, r8, 0x6
	  addi      r9, r9, 0x1

	.loc_0xC4:
	  rlwinm    r0,r9,0,24,31
	  cmplwi    r0, 0x3
	  blt+      .loc_0x40
	  lwz       r5, -0x6E70(r13)
	  li        r0, 0
	  li        r3, 0
	  lwz       r4, 0x69C(r5)
	  addi      r4, r4, 0x3
	  stw       r4, 0x69C(r5)
	  lwz       r5, -0x6E70(r13)
	  lhz       r4, 0x692(r5)
	  addi      r4, r4, 0xF
	  srawi     r4, r4, 0x4
	  addze     r4, r4
	  sth       r4, 0x696(r5)
	  lwz       r4, -0x6E70(r13)
	  sth       r0, 0x684(r4)
	  lwz       r4, -0x6E70(r13)
	  sth       r0, 0x68A(r4)
	  lwz       r4, -0x6E70(r13)
	  sth       r0, 0x690(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F7628
 * Size:	0003BC
 */
void __THPReadQuantizationTable(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x188(r1)
	  lis       r4, 0x8048
	  subi      r4, r4, 0x5B70
	  stmw      r21, 0x15C(r1)
	  addi      r6, r4, 0x50
	  lwz       r3, -0x6E70(r13)
	  lwz       r5, 0x69C(r3)
	  addi      r8, r3, 0x69C
	  addi      r3, r1, 0x14
	  lbz       r7, 0x0(r5)
	  addi      r0, r5, 0x2
	  lbz       r5, 0x1(r5)
	  rlwimi    r5,r7,8,16,23
	  stw       r0, 0x0(r8)
	  rlwinm    r7,r5,0,16,31
	  lis       r0, 0x4330
	  lfd       f0, -0x6BE8(r2)
	  subi      r7, r7, 0x2

	.loc_0x48:
	  lwz       r11, -0x6E70(r13)
	  addi      r5, r4, 0
	  li        r9, 0
	  lwz       r10, 0x69C(r11)
	  addi      r8, r10, 0x1
	  stw       r8, 0x69C(r11)
	  lbz       r8, 0x0(r10)
	  b         .loc_0x228

	.loc_0x68:
	  lwz       r30, -0x6E70(r13)
	  addi      r28, r9, 0x1
	  addi      r29, r9, 0x2
	  lwz       r27, 0x69C(r30)
	  addi      r12, r9, 0x3
	  addi      r11, r9, 0x4
	  addi      r10, r27, 0x1
	  stw       r10, 0x69C(r30)
	  addi      r10, r9, 0x5
	  rlwinm    r28,r28,0,16,31
	  lbz       r30, 0x0(r27)
	  rlwinm    r29,r29,0,16,31
	  lbz       r27, 0x0(r5)
	  rlwinm    r12,r12,0,16,31
	  stw       r30, 0x154(r1)
	  rlwinm    r27,r27,2,0,29
	  stw       r0, 0x150(r1)
	  rlwinm    r11,r11,0,16,31
	  rlwinm    r10,r10,0,16,31
	  lfd       f1, 0x150(r1)
	  fsubs     f1, f1, f0
	  stfsx     f1, r3, r27
	  lwz       r27, -0x6E70(r13)
	  lwz       r31, 0x69C(r27)
	  addi      r30, r31, 0x1
	  stw       r30, 0x69C(r27)
	  lbz       r30, 0x0(r31)
	  lbzx      r28, r4, r28
	  stw       r30, 0x14C(r1)
	  rlwinm    r28,r28,2,0,29
	  stw       r0, 0x148(r1)
	  lfd       f1, 0x148(r1)
	  fsubs     f1, f1, f0
	  stfsx     f1, r3, r28
	  lwz       r28, -0x6E70(r13)
	  lwz       r31, 0x69C(r28)
	  addi      r30, r31, 0x1
	  stw       r30, 0x69C(r28)
	  lbz       r30, 0x0(r31)
	  lbzx      r29, r4, r29
	  stw       r30, 0x144(r1)
	  rlwinm    r29,r29,2,0,29
	  stw       r0, 0x140(r1)
	  lfd       f1, 0x140(r1)
	  fsubs     f1, f1, f0
	  stfsx     f1, r3, r29
	  lwz       r31, -0x6E70(r13)
	  lwz       r30, 0x69C(r31)
	  addi      r29, r30, 0x1
	  stw       r29, 0x69C(r31)
	  lbz       r29, 0x0(r30)
	  lbzx      r12, r4, r12
	  stw       r29, 0x13C(r1)
	  rlwinm    r12,r12,2,0,29
	  stw       r0, 0x138(r1)
	  lfd       f1, 0x138(r1)
	  fsubs     f1, f1, f0
	  stfsx     f1, r3, r12
	  lwz       r30, -0x6E70(r13)
	  lwz       r29, 0x69C(r30)
	  addi      r12, r29, 0x1
	  stw       r12, 0x69C(r30)
	  lbz       r12, 0x0(r29)
	  lbzx      r11, r4, r11
	  stw       r12, 0x134(r1)
	  rlwinm    r11,r11,2,0,29
	  stw       r0, 0x130(r1)
	  lfd       f1, 0x130(r1)
	  fsubs     f1, f1, f0
	  stfsx     f1, r3, r11
	  lwz       r29, -0x6E70(r13)
	  lwz       r12, 0x69C(r29)
	  addi      r11, r12, 0x1
	  stw       r11, 0x69C(r29)
	  lbz       r11, 0x0(r12)
	  lbzx      r10, r4, r10
	  stw       r11, 0x12C(r1)
	  rlwinm    r10,r10,2,0,29
	  stw       r0, 0x128(r1)
	  lfd       f1, 0x128(r1)
	  fsubs     f1, f1, f0
	  stfsx     f1, r3, r10
	  lwz       r30, -0x6E70(r13)
	  addi      r11, r9, 0x6
	  addi      r10, r9, 0x7
	  lwz       r29, 0x69C(r30)
	  rlwinm    r11,r11,0,16,31
	  rlwinm    r10,r10,0,16,31
	  addi      r12, r29, 0x1
	  stw       r12, 0x69C(r30)
	  addi      r5, r5, 0x8
	  addi      r9, r9, 0x8
	  lbz       r12, 0x0(r29)
	  lbzx      r11, r4, r11
	  stw       r12, 0x124(r1)
	  rlwinm    r11,r11,2,0,29
	  stw       r0, 0x120(r1)
	  lfd       f1, 0x120(r1)
	  fsubs     f1, f1, f0
	  stfsx     f1, r3, r11
	  lwz       r29, -0x6E70(r13)
	  lwz       r12, 0x69C(r29)
	  addi      r11, r12, 0x1
	  stw       r11, 0x69C(r29)
	  lbz       r11, 0x0(r12)
	  lbzx      r10, r4, r10
	  stw       r11, 0x11C(r1)
	  rlwinm    r10,r10,2,0,29
	  stw       r0, 0x118(r1)
	  lfd       f1, 0x118(r1)
	  fsubs     f1, f1, f0
	  stfsx     f1, r3, r10

	.loc_0x228:
	  rlwinm    r10,r9,0,16,31
	  cmplwi    r10, 0x40
	  blt+      .loc_0x68
	  lwz       r29, -0x6E70(r13)
	  addi      r27, r6, 0
	  rlwinm    r28,r8,8,0,23
	  li        r5, 0
	  li        r8, 0
	  b         .loc_0x394

	.loc_0x24C:
	  rlwinm    r11,r5,2,14,29
	  lfd       f1, 0x0(r27)
	  lfsx      f2, r3, r11
	  addi      r9, r5, 0x1
	  rlwinm    r12,r9,2,14,29
	  lfd       f3, 0x0(r6)
	  fmul      f1, f2, f1
	  addi      r9, r5, 0x2
	  rlwinm    r26,r9,2,14,29
	  addi      r9, r5, 0x3
	  fmul      f1, f3, f1
	  rlwinm    r25,r9,2,14,29
	  addi      r10, r5, 0x4
	  rlwinm    r24,r10,2,14,29
	  frsp      f1, f1
	  add       r9, r29, r11
	  addi      r10, r5, 0x7
	  stfsx     f1, r28, r9
	  addi      r9, r5, 0x5
	  rlwinm    r23,r9,2,14,29
	  lfsx      f2, r3, r12
	  addi      r9, r5, 0x6
	  lfd       f1, 0x0(r27)
	  rlwinm    r22,r9,2,14,29
	  add       r9, r29, r12
	  fmul      f1, f2, f1
	  lfd       f3, 0x8(r6)
	  rlwinm    r21,r10,2,14,29
	  add       r30, r29, r26
	  add       r31, r29, r25
	  fmul      f1, f3, f1
	  add       r12, r29, r24
	  add       r11, r29, r23
	  add       r10, r29, r22
	  addi      r5, r5, 0x8
	  frsp      f1, f1
	  addi      r8, r8, 0x1
	  stfsx     f1, r28, r9
	  add       r9, r29, r21
	  lfsx      f2, r3, r26
	  lfd       f1, 0x0(r27)
	  lfd       f3, 0x10(r6)
	  fmul      f1, f2, f1
	  fmul      f1, f3, f1
	  frsp      f1, f1
	  stfsx     f1, r28, r30
	  lfsx      f2, r3, r25
	  lfd       f1, 0x0(r27)
	  lfd       f3, 0x18(r6)
	  fmul      f1, f2, f1
	  fmul      f1, f3, f1
	  frsp      f1, f1
	  stfsx     f1, r28, r31
	  lfsx      f2, r3, r24
	  lfd       f1, 0x0(r27)
	  lfd       f3, 0x20(r6)
	  fmul      f1, f2, f1
	  fmul      f1, f3, f1
	  frsp      f1, f1
	  stfsx     f1, r28, r12
	  lfsx      f2, r3, r23
	  lfd       f1, 0x0(r27)
	  lfd       f3, 0x28(r6)
	  fmul      f1, f2, f1
	  fmul      f1, f3, f1
	  frsp      f1, f1
	  stfsx     f1, r28, r11
	  lfsx      f2, r3, r22
	  lfd       f1, 0x0(r27)
	  lfd       f3, 0x30(r6)
	  fmul      f1, f2, f1
	  fmul      f1, f3, f1
	  frsp      f1, f1
	  stfsx     f1, r28, r10
	  lfd       f1, 0x0(r27)
	  addi      r27, r27, 0x8
	  lfsx      f2, r3, r21
	  lfd       f3, 0x38(r6)
	  fmul      f1, f2, f1
	  fmul      f1, f3, f1
	  frsp      f1, f1
	  stfsx     f1, r28, r9

	.loc_0x394:
	  rlwinm    r9,r8,0,16,31
	  cmplwi    r9, 0x8
	  blt+      .loc_0x24C
	  subi      r7, r7, 0x41
	  rlwinm.   r5,r7,0,16,31
	  bne+      .loc_0x48
	  li        r3, 0
	  lmw       r21, 0x15C(r1)
	  addi      r1, r1, 0x188
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F79E4
 * Size:	0001E0
 */
void __THPReadHuffmanTableSpecification(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x6E74(r13)
	  lwz       r3, -0x6E70(r13)
	  addi      r0, r4, 0x101
	  stw       r4, -0x6ED8(r13)
	  addi      r5, r3, 0x69C
	  stw       r0, -0x6ED4(r13)
	  lwz       r3, 0x69C(r3)
	  lbz       r4, 0x0(r3)
	  addi      r0, r3, 0x2
	  lbz       r3, 0x1(r3)
	  rlwimi    r3,r4,8,16,23
	  rlwinm    r30,r3,0,16,31
	  stw       r0, 0x0(r5)
	  subi      r30, r30, 0x2

	.loc_0x50:
	  lwz       r5, -0x6E70(r13)
	  li        r29, 0
	  li        r3, 0
	  lwz       r4, 0x69C(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x69C(r5)
	  lbz       r6, 0x0(r4)
	  lwz       r4, -0x6E70(r13)
	  srawi     r0, r6, 0x4
	  lwz       r5, 0x69C(r4)
	  rlwinm    r4,r6,1,27,30
	  rlwinm    r0,r0,0,24,31
	  add       r0, r4, r0
	  stw       r5, -0x6EDC(r13)
	  rlwinm    r31,r0,0,24,31
	  b         .loc_0x154

	.loc_0x90:
	  lwz       r5, -0x6E70(r13)
	  addi      r3, r3, 0x8
	  lwz       r4, 0x69C(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x69C(r5)
	  lwz       r5, -0x6E70(r13)
	  lbz       r0, 0x0(r4)
	  lwz       r4, 0x69C(r5)
	  add       r29, r29, r0
	  addi      r0, r4, 0x1
	  stw       r0, 0x69C(r5)
	  lwz       r5, -0x6E70(r13)
	  lbz       r0, 0x0(r4)
	  lwz       r4, 0x69C(r5)
	  add       r29, r29, r0
	  addi      r0, r4, 0x1
	  stw       r0, 0x69C(r5)
	  lwz       r5, -0x6E70(r13)
	  lbz       r0, 0x0(r4)
	  lwz       r4, 0x69C(r5)
	  add       r29, r29, r0
	  addi      r0, r4, 0x1
	  stw       r0, 0x69C(r5)
	  lwz       r5, -0x6E70(r13)
	  lbz       r0, 0x0(r4)
	  lwz       r4, 0x69C(r5)
	  add       r29, r29, r0
	  addi      r0, r4, 0x1
	  stw       r0, 0x69C(r5)
	  lwz       r5, -0x6E70(r13)
	  lbz       r0, 0x0(r4)
	  lwz       r4, 0x69C(r5)
	  add       r29, r29, r0
	  addi      r0, r4, 0x1
	  stw       r0, 0x69C(r5)
	  lwz       r5, -0x6E70(r13)
	  lbz       r0, 0x0(r4)
	  lwz       r4, 0x69C(r5)
	  add       r29, r29, r0
	  addi      r0, r4, 0x1
	  stw       r0, 0x69C(r5)
	  lwz       r5, -0x6E70(r13)
	  lbz       r0, 0x0(r4)
	  lwz       r4, 0x69C(r5)
	  add       r29, r29, r0
	  addi      r0, r4, 0x1
	  stw       r0, 0x69C(r5)
	  lbz       r0, 0x0(r4)
	  add       r29, r29, r0

	.loc_0x154:
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x10
	  blt+      .loc_0x90
	  mulli     r3, r31, 0xE0
	  lwz       r5, -0x6E70(r13)
	  lwz       r4, 0x69C(r5)
	  addi      r0, r3, 0x340
	  stwx      r4, r5, r0
	  rlwinm    r0,r29,0,16,31
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x69C(r4)
	  add       r0, r3, r0
	  stw       r0, 0x69C(r4)
	  bl        .loc_0x1E0
	  bl        0x144
	  mr        r3, r31
	  bl        0x1A4
	  lwz       r5, -0x6E70(r13)
	  addi      r0, r29, 0x11
	  sub       r30, r30, r0
	  li        r0, 0x1
	  lbz       r4, 0x6A8(r5)
	  slw       r3, r0, r31
	  or        r3, r4, r3
	  rlwinm.   r0,r30,0,16,31
	  stb       r3, 0x6A8(r5)
	  bne+      .loc_0x50
	  lwz       r0, 0x24(r1)
	  li        r3, 0
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr

	.loc_0x1E0:
	*/
}

/*
 * --INFO--
 * Address:	800F7BC4
 * Size:	0000F0
 */
void __THPHuffGenerateSizeTable(void)
{
	/*
	.loc_0x0:
	  li        r6, 0
	  li        r7, 0x1

	.loc_0x8:
	  lwz       r3, -0x6EDC(r13)
	  subi      r0, r7, 0x1
	  rlwinm    r5,r7,0,24,31
	  lbzx      r8, r3, r0
	  cmpwi     r8, 0
	  addi      r3, r8, 0
	  beq-      .loc_0xD4
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0xBC

	.loc_0x30:
	  lwz       r4, -0x6ED8(r13)
	  mr        r0, r6
	  addi      r6, r6, 0x1
	  stbx      r5, r4, r0
	  addi      r0, r6, 0
	  addi      r6, r6, 0x1
	  lwz       r4, -0x6ED8(r13)
	  stbx      r5, r4, r0
	  addi      r0, r6, 0
	  addi      r6, r6, 0x1
	  lwz       r4, -0x6ED8(r13)
	  stbx      r5, r4, r0
	  addi      r0, r6, 0
	  addi      r6, r6, 0x1
	  lwz       r4, -0x6ED8(r13)
	  stbx      r5, r4, r0
	  addi      r0, r6, 0
	  addi      r6, r6, 0x1
	  lwz       r4, -0x6ED8(r13)
	  stbx      r5, r4, r0
	  addi      r0, r6, 0
	  addi      r6, r6, 0x1
	  lwz       r4, -0x6ED8(r13)
	  stbx      r5, r4, r0
	  addi      r0, r6, 0
	  addi      r6, r6, 0x1
	  lwz       r4, -0x6ED8(r13)
	  stbx      r5, r4, r0
	  addi      r0, r6, 0
	  addi      r6, r6, 0x1
	  lwz       r4, -0x6ED8(r13)
	  stbx      r5, r4, r0
	  bdnz+     .loc_0x30
	  andi.     r3, r3, 0x7
	  beq-      .loc_0xD4

	.loc_0xBC:
	  mtctr     r3

	.loc_0xC0:
	  lwz       r4, -0x6ED8(r13)
	  mr        r0, r6
	  addi      r6, r6, 0x1
	  stbx      r5, r4, r0
	  bdnz+     .loc_0xC0

	.loc_0xD4:
	  addi      r7, r7, 0x1
	  cmpwi     r7, 0x10
	  ble+      .loc_0x8
	  lwz       r3, -0x6ED8(r13)
	  li        r0, 0
	  stbx      r0, r3, r6
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F7CB4
 * Size:	000068
 */
void __THPHuffGenerateCodeTable(void)
{
	/*
	.loc_0x0:
	  lwz       r6, -0x6ED8(r13)
	  li        r8, 0
	  lwz       r5, -0x6ED4(r13)
	  li        r9, 0
	  lbz       r7, 0x0(r6)
	  li        r3, 0x1
	  b         .loc_0x54

	.loc_0x1C:
	  rlwinm    r4,r7,0,24,31
	  b         .loc_0x34

	.loc_0x24:
	  rlwinm    r0,r8,1,15,30
	  sthx      r9, r5, r0
	  addi      r8, r8, 0x1
	  addi      r9, r9, 0x1

	.loc_0x34:
	  rlwinm    r0,r8,0,16,31
	  lbzx      r0, r6, r0
	  cmplw     r4, r0
	  beq+      .loc_0x24
	  rlwinm    r0,r9,0,16,31
	  slw       r0, r0, r3
	  rlwinm    r9,r0,0,16,31
	  addi      r7, r7, 0x1

	.loc_0x54:
	  rlwinm    r0,r8,0,16,31
	  lbzx      r0, r6, r0
	  cmplwi    r0, 0
	  bne+      .loc_0x1C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F7D1C
 * Size:	0001BC
 */
void __THPHuffGenerateDecoderTables(void)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r3,0,24,31
	  lwz       r4, -0x6E70(r13)
	  mulli     r3, r0, 0xE0
	  addi      r7, r3, 0x300
	  li        r0, 0x4
	  add       r7, r4, r7
	  mtctr     r0
	  addi      r6, r7, 0x4
	  li        r8, 0
	  li        r9, 0x1

	.loc_0x28:
	  lwz       r3, -0x6EDC(r13)
	  subi      r5, r9, 0x1
	  lbzx      r0, r3, r5
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  lwz       r3, -0x6ED4(r13)
	  rlwinm    r0,r8,1,0,30
	  lhzx      r0, r3, r0
	  sub       r0, r8, r0
	  stw       r0, 0x8C(r6)
	  lwz       r3, -0x6EDC(r13)
	  lwz       r4, -0x6ED4(r13)
	  lbzx      r0, r3, r5
	  add       r8, r8, r0
	  rlwinm    r3,r8,1,0,30
	  subi      r0, r3, 0x2
	  lhzx      r0, r4, r0
	  stw       r0, 0x44(r6)
	  b         .loc_0x80

	.loc_0x74:
	  li        r0, -0x1
	  stw       r0, 0x44(r6)
	  stw       r0, 0x8C(r6)

	.loc_0x80:
	  lwz       r3, -0x6EDC(r13)
	  addi      r5, r9, 0
	  addi      r9, r9, 0x1
	  lbzx      r0, r3, r5
	  addi      r6, r6, 0x4
	  cmplwi    r0, 0
	  beq-      .loc_0xD4
	  lwz       r3, -0x6ED4(r13)
	  rlwinm    r0,r8,1,0,30
	  lhzx      r0, r3, r0
	  sub       r0, r8, r0
	  stw       r0, 0x8C(r6)
	  lwz       r3, -0x6EDC(r13)
	  lwz       r4, -0x6ED4(r13)
	  lbzx      r0, r3, r5
	  add       r8, r8, r0
	  rlwinm    r3,r8,1,0,30
	  subi      r0, r3, 0x2
	  lhzx      r0, r4, r0
	  stw       r0, 0x44(r6)
	  b         .loc_0xE0

	.loc_0xD4:
	  li        r0, -0x1
	  stw       r0, 0x44(r6)
	  stw       r0, 0x8C(r6)

	.loc_0xE0:
	  lwz       r3, -0x6EDC(r13)
	  addi      r5, r9, 0
	  addi      r9, r9, 0x1
	  lbzx      r0, r3, r5
	  addi      r6, r6, 0x4
	  cmplwi    r0, 0
	  beq-      .loc_0x134
	  lwz       r3, -0x6ED4(r13)
	  rlwinm    r0,r8,1,0,30
	  lhzx      r0, r3, r0
	  sub       r0, r8, r0
	  stw       r0, 0x8C(r6)
	  lwz       r3, -0x6EDC(r13)
	  lwz       r4, -0x6ED4(r13)
	  lbzx      r0, r3, r5
	  add       r8, r8, r0
	  rlwinm    r3,r8,1,0,30
	  subi      r0, r3, 0x2
	  lhzx      r0, r4, r0
	  stw       r0, 0x44(r6)
	  b         .loc_0x140

	.loc_0x134:
	  li        r0, -0x1
	  stw       r0, 0x44(r6)
	  stw       r0, 0x8C(r6)

	.loc_0x140:
	  lwz       r3, -0x6EDC(r13)
	  addi      r5, r9, 0
	  addi      r9, r9, 0x1
	  lbzx      r0, r3, r5
	  addi      r6, r6, 0x4
	  cmplwi    r0, 0
	  beq-      .loc_0x194
	  lwz       r3, -0x6ED4(r13)
	  rlwinm    r0,r8,1,0,30
	  lhzx      r0, r3, r0
	  sub       r0, r8, r0
	  stw       r0, 0x8C(r6)
	  lwz       r3, -0x6EDC(r13)
	  lwz       r4, -0x6ED4(r13)
	  lbzx      r0, r3, r5
	  add       r8, r8, r0
	  rlwinm    r3,r8,1,0,30
	  subi      r0, r3, 0x2
	  lhzx      r0, r4, r0
	  stw       r0, 0x44(r6)
	  b         .loc_0x1A0

	.loc_0x194:
	  li        r0, -0x1
	  stw       r0, 0x44(r6)
	  stw       r0, 0x8C(r6)

	.loc_0x1A0:
	  addi      r6, r6, 0x4
	  addi      r9, r9, 0x1
	  bdnz+     .loc_0x28
	  lis       r3, 0x10
	  subi      r0, r3, 0x1
	  stw       r0, 0x88(r7)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F7ED8
 * Size:	000054
 */
void __THPRestartDefinition(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x6E70(r13)
	  li        r0, 0x1
	  stb       r0, 0x6A9(r3)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x69C(r4)
	  addi      r0, r3, 0x2
	  stw       r0, 0x69C(r4)
	  lwz       r5, -0x6E70(r13)
	  lwz       r4, 0x69C(r5)
	  lbz       r3, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  rlwimi    r0,r3,8,16,23
	  sth       r0, 0x6AA(r5)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x69C(r4)
	  addi      r0, r3, 0x2
	  stw       r0, 0x69C(r4)
	  lwz       r3, -0x6E70(r13)
	  lhz       r0, 0x6AA(r3)
	  sth       r0, 0x6AC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F7F2C
 * Size:	00024C
 */
void __THPPrepBitStream(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  lwz       r3, -0x6E70(r13)
	  lwz       r0, 0x69C(r3)
	  addi      r4, r3, 0x6A4
	  lwz       r3, 0x6A4(r3)
	  rlwinm    r5,r0,0,0,29
	  cmplwi    r3, 0x21
	  rlwinm    r0,r0,0,30,31
	  beq-      .loc_0x3C
	  subfic    r0, r0, 0x3
	  rlwinm    r0,r0,3,0,28
	  sub       r0, r3, r0
	  stw       r0, 0x0(r4)
	  b         .loc_0x48

	.loc_0x3C:
	  rlwinm    r3,r0,3,0,28
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r4)

	.loc_0x48:
	  lwz       r4, -0x6E70(r13)
	  li        r3, 0
	  li        r8, 0
	  stw       r5, 0x69C(r4)
	  lwz       r0, 0x0(r5)
	  lwz       r4, -0x6E70(r13)
	  stw       r0, 0x6A0(r4)

	.loc_0x64:
	  lwz       r4, -0x6E70(r13)
	  li        r0, 0x1
	  slw       r0, r0, r3
	  lbz       r4, 0x6A8(r4)
	  and.      r0, r4, r0
	  beq-      .loc_0x190
	  li        r0, 0x10
	  mtctr     r0
	  addi      r7, r8, 0
	  li        r12, 0

	.loc_0x8C:
	  lwz       r0, -0x6E70(r13)
	  li        r5, 0xFF
	  li        r31, 0
	  add       r4, r0, r12
	  addi      r0, r4, 0x300
	  stbx      r5, r8, r0
	  b         .loc_0xFC

	.loc_0xA8:
	  lwz       r11, -0x6E70(r13)
	  subfic    r4, r31, 0x4
	  rlwinm    r0,r31,2,0,29
	  add       r5, r8, r11
	  add       r10, r5, r0
	  lwz       r0, 0x348(r10)
	  srw       r9, r12, r4
	  cmpw      r9, r0
	  bgt-      .loc_0xF8
	  lwz       r6, 0x340(r5)
	  addi      r5, r31, 0x1
	  lwz       r4, 0x390(r10)
	  addi      r0, r11, 0x300
	  li        r31, 0x63
	  add       r4, r4, r6
	  lbzx      r4, r9, r4
	  stbx      r4, r7, r0
	  lwz       r4, -0x6E70(r13)
	  addi      r0, r4, 0x320
	  stbx      r5, r7, r0

	.loc_0xF8:
	  addi      r31, r31, 0x1

	.loc_0xFC:
	  cmplwi    r31, 0x5
	  blt+      .loc_0xA8
	  lwz       r0, -0x6E70(r13)
	  addi      r12, r12, 0x1
	  li        r5, 0xFF
	  add       r4, r0, r12
	  addi      r0, r4, 0x300
	  stbx      r5, r8, r0
	  li        r31, 0
	  addi      r7, r7, 0x1
	  b         .loc_0x17C

	.loc_0x128:
	  lwz       r11, -0x6E70(r13)
	  subfic    r4, r31, 0x4
	  rlwinm    r0,r31,2,0,29
	  add       r5, r8, r11
	  add       r10, r5, r0
	  lwz       r0, 0x348(r10)
	  srw       r9, r12, r4
	  cmpw      r9, r0
	  bgt-      .loc_0x178
	  lwz       r6, 0x340(r5)
	  addi      r5, r31, 0x1
	  lwz       r4, 0x390(r10)
	  addi      r0, r11, 0x300
	  li        r31, 0x63
	  add       r4, r4, r6
	  lbzx      r4, r9, r4
	  stbx      r4, r7, r0
	  lwz       r4, -0x6E70(r13)
	  addi      r0, r4, 0x320
	  stbx      r5, r7, r0

	.loc_0x178:
	  addi      r31, r31, 0x1

	.loc_0x17C:
	  cmplwi    r31, 0x5
	  blt+      .loc_0x128
	  addi      r7, r7, 0x1
	  addi      r12, r12, 0x1
	  bdnz+     .loc_0x8C

	.loc_0x190:
	  addi      r3, r3, 0x1
	  cmplwi    r3, 0x4
	  addi      r8, r8, 0xE0
	  blt+      .loc_0x64
	  lwz       r9, -0x6E70(r13)
	  lbz       r4, 0x682(r9)
	  lbz       r0, 0x688(r9)
	  lbz       r3, 0x68E(r9)
	  rlwinm    r5,r4,1,0,30
	  lbz       r7, 0x687(r9)
	  rlwinm    r4,r0,1,0,30
	  lbz       r6, 0x68D(r9)
	  lbz       r0, 0x681(r9)
	  rlwinm    r3,r3,1,0,30
	  rlwinm    r7,r7,1,0,30
	  rlwinm    r6,r6,1,0,30
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  addi      r3, r3, 0x1
	  rlwinm    r0,r0,1,0,30
	  mulli     r8, r0, 0xE0
	  mulli     r7, r7, 0xE0
	  mulli     r6, r6, 0xE0
	  mulli     r5, r5, 0xE0
	  mulli     r4, r4, 0xE0
	  mulli     r3, r3, 0xE0
	  addi      r8, r8, 0x300
	  addi      r7, r7, 0x300
	  addi      r6, r6, 0x300
	  addi      r5, r5, 0x300
	  addi      r4, r4, 0x300
	  addi      r0, r3, 0x300
	  add       r8, r9, r8
	  add       r3, r9, r7
	  stw       r8, -0x6F80(r13)
	  add       r6, r9, r6
	  add       r5, r9, r5
	  stw       r3, -0x6F60(r13)
	  add       r3, r9, r4
	  add       r0, r9, r0
	  stw       r6, -0x6F40(r13)
	  stw       r5, -0x6F20(r13)
	  stw       r3, -0x6F00(r13)
	  stw       r0, -0x6EE0(r13)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F8178
 * Size:	00010C
 */
void __THPDecompressYUV(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  lwz       r6, -0x6E70(r13)
	  stw       r3, 0x6B0(r6)
	  lwz       r6, -0x6E70(r13)
	  stw       r4, 0x6B4(r6)
	  lwz       r4, -0x6E70(r13)
	  stw       r5, 0x6B8(r4)
	  lwz       r4, -0x6E70(r13)
	  lhz       r31, 0x698(r4)
	  lhz       r30, 0x694(r4)
	  mfspr     r4, 0x395
	  mfspr     r0, 0x396
	  stw       r4, -0x6E7C(r13)
	  stw       r0, -0x6E78(r13)
	  li        r3, 0x7
	  oris      r3, r3, 0x7
	  mtspr     917, r3
	  li        r3, 0x3D04
	  oris      r3, r3, 0x3D04
	  mtspr     918, r3
	  bl        -0x2AC
	  lwz       r4, -0x6E70(r13)
	  lhz       r0, 0x692(r4)
	  cmplwi    r0, 0x200
	  bne-      .loc_0x98
	  cmplwi    r30, 0x1C0
	  bne-      .loc_0x98
	  b         .loc_0x88

	.loc_0x80:
	  bl        .loc_0x10C
	  addi      r31, r31, 0x10

	.loc_0x88:
	  rlwinm    r0,r31,0,16,31
	  cmplw     r0, r30
	  blt+      .loc_0x80
	  b         .loc_0xE4

	.loc_0x98:
	  lwz       r4, -0x6E70(r13)
	  lhz       r0, 0x692(r4)
	  cmplwi    r0, 0x280
	  bne-      .loc_0xD8
	  cmplwi    r30, 0x1E0
	  bne-      .loc_0xD8
	  b         .loc_0xBC

	.loc_0xB4:
	  bl        0x1AE0
	  addi      r31, r31, 0x10

	.loc_0xBC:
	  rlwinm    r0,r31,0,16,31
	  cmplw     r0, r30
	  blt+      .loc_0xB4
	  b         .loc_0xE4
	  b         .loc_0xD8

	.loc_0xD0:
	  bl        0x3550
	  addi      r31, r31, 0x10

	.loc_0xD8:
	  rlwinm    r0,r31,0,16,31
	  cmplw     r0, r30
	  blt+      .loc_0xD0

	.loc_0xE4:
	  lwz       r4, -0x6E7C(r13)
	  lwz       r0, -0x6E78(r13)
	  mtspr     917, r4
	  mtspr     918, r0
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr

	.loc_0x10C:
	*/
}

/*
 * --INFO--
 * Address:	800F8284
 * Size:	001A88
 */
void __THPDecompressiMCURow512x448(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stfd      f31, 0x30(r1)
	  stfd      f30, 0x28(r1)
	  stfd      f29, 0x20(r1)
	  stfd      f28, 0x18(r1)
	  stfd      f27, 0x10(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x7380
	  li        r3, 0x3
	  stw       r30, 0x8(r1)
	  bl        -0xB868
	  lfs       f27, -0x6BE0(r2)
	  li        r30, 0
	  lfs       f28, -0x6BDC(r2)
	  lfs       f29, -0x6BD8(r2)
	  lfs       f30, -0x6BD4(r2)
	  lfs       f31, -0x6BD0(r2)
	  b         .loc_0x19E0

	.loc_0x54:
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x118(r31)
	  bl        0x4F64
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x11C(r31)
	  bl        0x4F58
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x120(r31)
	  bl        0x4F4C
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x124(r31)
	  bl        0x4F40
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x128(r31)
	  bl        0x55B0
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x12C(r31)
	  bl        0x5C4C
	  lwz       r3, 0x100(r31)
	  li        r0, 0x200
	  lwz       r4, -0x6E70(r13)
	  subi      r9, r31, 0x8
	  stw       r3, -0x6EC0(r13)
	  rlwinm    r3,r30,4,20,27
	  stw       r0, -0x6EA0(r13)
	  lbz       r0, 0x680(r4)
	  rlwinm    r0,r0,8,0,23
	  add       r0, r4, r0
	  stw       r0, -0x6E80(r13)
	  lwz       r8, 0x118(r31)
	  lwz       r7, -0x6E80(r13)
	  li        r4, 0x8
	  mtctr     r4

	.loc_0xD8:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r4, 0x2(r8)
	  or.       r6, r6, r0

	.loc_0xF8:
	  cmpwi     r6, 0
	  bne-      .loc_0x244
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r9),0,0
	  bne-      .loc_0x1A8
	  psq_st    f4,0x10(r9),0,0
	  cmpwi     r4, 0
	  psq_st    f4,0x18(r9),0,0
	  bne-      .loc_0x134
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r9),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0xD8
	  b         .loc_0x30C

	.loc_0x134:
	  addi      r8, r8, 0x10
	  ps_msub   f13, f7, f28, f7
	  addi      r7, r7, 0x20
	  ps_merge00f2, f7, f7
	  lwz       r5, 0x4(r8)
	  ps_sub    f1, f28, f29
	  ps_msub   f12, f7, f27, f13
	  lhz       r4, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r9),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r9),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r9),0,0
	  bdnz+     .loc_0xF8
	  b         .loc_0x30C

	.loc_0x1A8:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r4, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r9),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r9),0,0
	  bdnz+     .loc_0xF8
	  b         .loc_0x30C

	.loc_0x244:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r4, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r9),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r9),0,0
	  psq_stu   f10,0x8(r9),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  bdnz+     .loc_0xF8

	.loc_0x30C:
	  lwz       r8, -0x6EC0(r13)
	  mr        r9, r31
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r9),0,0
	  rlwinm    r4,r3,2,0,29
	  psq_l     f6,0x80(r9),0,0
	  rlwinm    r6,r0,2,0,29
	  psq_l     f5,0x40(r9),0,0
	  mr        r7, r4
	  ps_add    f9, f7, f6
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r4, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0x364:
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r9, r9, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r9),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r9),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r9),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r4),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r4),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f3, f3, f31
	  add       r4, r8, r6
	  bdnz+     .loc_0x364
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f1,0x10(r4),0x6,6
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r4),0x6,6
	  psq_st    f2,0x8(r4),0x6,6
	  lwz       r8, 0x11C(r31)
	  lwz       r7, -0x6E80(r13)
	  addi      r10, r3, 0x8
	  subi      r9, r31, 0x8
	  li        r4, 0x8
	  mtctr     r4

	.loc_0x4E8:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r4, 0x2(r8)
	  or.       r6, r6, r0

	.loc_0x508:
	  cmpwi     r6, 0
	  bne-      .loc_0x654
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r9),0,0
	  bne-      .loc_0x5B8
	  psq_st    f4,0x10(r9),0,0
	  cmpwi     r4, 0
	  psq_st    f4,0x18(r9),0,0
	  bne-      .loc_0x544
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r9),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0x4E8
	  b         .loc_0x71C

	.loc_0x544:
	  addi      r8, r8, 0x10
	  ps_msub   f13, f7, f28, f7
	  addi      r7, r7, 0x20
	  ps_merge00f2, f7, f7
	  lwz       r5, 0x4(r8)
	  ps_sub    f1, f28, f29
	  ps_msub   f12, f7, f27, f13
	  lhz       r4, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r9),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r9),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r9),0,0
	  bdnz+     .loc_0x508
	  b         .loc_0x71C

	.loc_0x5B8:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r4, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r9),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r9),0,0
	  bdnz+     .loc_0x508
	  b         .loc_0x71C

	.loc_0x654:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r4, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r9),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r9),0,0
	  psq_stu   f10,0x8(r9),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  bdnz+     .loc_0x508

	.loc_0x71C:
	  lwz       r8, -0x6EC0(r13)
	  mr        r9, r31
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r9),0,0
	  rlwinm    r10,r10,2,0,29
	  psq_l     f6,0x80(r9),0,0
	  rlwinm    r6,r0,2,0,29
	  psq_l     f5,0x40(r9),0,0
	  mr        r7, r10
	  ps_add    f9, f7, f6
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r4, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0x774:
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r9, r9, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r9),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r9),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r9),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r4),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r4),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f3, f3, f31
	  add       r4, r8, r6
	  bdnz+     .loc_0x774
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f1,0x10(r4),0x6,6
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r4),0x6,6
	  psq_st    f2,0x8(r4),0x6,6
	  lwz       r8, 0x120(r31)
	  lwz       r7, -0x6E80(r13)
	  subi      r9, r31, 0x8
	  li        r4, 0x8
	  mtctr     r4

	.loc_0x8F4:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r4, 0x2(r8)
	  or        r6, r6, r0

	.loc_0x914:
	  cmpwi     r6, 0
	  bne-      .loc_0xA60
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r9),0,0
	  bne-      .loc_0x9C4
	  psq_st    f4,0x10(r9),0,0
	  cmpwi     r4, 0
	  psq_st    f4,0x18(r9),0,0
	  bne-      .loc_0x950
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r9),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0x8F4
	  b         .loc_0xB28

	.loc_0x950:
	  ps_msub   f13, f7, f28, f7
	  addi      r8, r8, 0x10
	  ps_merge00f2, f7, f7
	  addi      r7, r7, 0x20
	  ps_sub    f1, f28, f29
	  lwz       r5, 0x4(r8)
	  ps_msub   f12, f7, f27, f13
	  lhz       r4, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r9),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r9),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r9),0,0
	  bdnz+     .loc_0x914
	  b         .loc_0xB28

	.loc_0x9C4:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r4, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r9),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r9),0,0
	  bdnz+     .loc_0x914
	  b         .loc_0xB28

	.loc_0xA60:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r4, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r9),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r9),0,0
	  psq_stu   f10,0x8(r9),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  bdnz+     .loc_0x914

	.loc_0xB28:
	  lwz       r8, -0x6EC0(r13)
	  mr        r9, r31
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r9),0,0
	  rlwinm    r7,r0,3,0,28
	  psq_l     f6,0x80(r9),0,0
	  rlwinm    r4,r3,2,0,29
	  psq_l     f5,0x40(r9),0,0
	  rlwinm    r6,r0,2,0,29
	  ps_add    f9, f7, f6
	  add       r7, r7, r4
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r4, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0xB84:
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r9, r9, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r9),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r9),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r9),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r4),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r4),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f3, f3, f31
	  add       r4, r8, r6
	  bdnz+     .loc_0xB84
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  psq_st    f1,0x10(r4),0x6,6
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r4),0x6,6
	  psq_st    f2,0x8(r4),0x6,6
	  lwz       r8, 0x124(r31)
	  lwz       r7, -0x6E80(r13)
	  addi      r9, r3, 0x8
	  subi      r10, r31, 0x8
	  li        r4, 0x8
	  mtctr     r4

	.loc_0xD08:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r4, 0x2(r8)
	  or        r6, r6, r0

	.loc_0xD28:
	  cmpwi     r6, 0
	  bne-      .loc_0xE74
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r10),0,0
	  bne-      .loc_0xDD8
	  psq_st    f4,0x10(r10),0,0
	  cmpwi     r4, 0
	  psq_st    f4,0x18(r10),0,0
	  bne-      .loc_0xD64
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r10),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0xD08
	  b         .loc_0xF3C

	.loc_0xD64:
	  ps_msub   f13, f7, f28, f7
	  addi      r8, r8, 0x10
	  ps_merge00f2, f7, f7
	  addi      r7, r7, 0x20
	  ps_sub    f1, f28, f29
	  lwz       r5, 0x4(r8)
	  ps_msub   f12, f7, f27, f13
	  lhz       r4, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r10),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r10),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r10),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r10),0,0
	  bdnz+     .loc_0xD28
	  b         .loc_0xF3C

	.loc_0xDD8:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r4, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r10),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r10),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r10),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r10),0,0
	  bdnz+     .loc_0xD28
	  b         .loc_0xF3C

	.loc_0xE74:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r4, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r10),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r10),0,0
	  psq_stu   f10,0x8(r10),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r10),0,0
	  bdnz+     .loc_0xD28

	.loc_0xF3C:
	  lwz       r8, -0x6EC0(r13)
	  mr        r10, r31
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r10),0,0
	  rlwinm    r7,r0,3,0,28
	  psq_l     f6,0x80(r10),0,0
	  rlwinm    r9,r9,2,0,29
	  psq_l     f5,0x40(r10),0,0
	  rlwinm    r6,r0,2,0,29
	  ps_add    f9, f7, f6
	  add       r7, r7, r9
	  psq_l     f4,0xC0(r10),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r4, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0xF98:
	  psq_l     f11,0x20(r10),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r10),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r10),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r10),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r10, r10, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r10),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r10),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r10),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r10),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r4),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r4),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f3, f3, f31
	  add       r4, r8, r6
	  bdnz+     .loc_0xF98
	  psq_l     f11,0x20(r10),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r10),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r10),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r10),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  psq_st    f1,0x10(r4),0x6,6
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r4),0x6,6
	  psq_st    f2,0x8(r4),0x6,6
	  lwz       r4, 0x104(r31)
	  li        r0, 0x100
	  lwz       r5, -0x6E70(r13)
	  stw       r4, -0x6EC0(r13)
	  rlwinm    r3,r3,31,1,31
	  subi      r9, r31, 0x8
	  stw       r0, -0x6EA0(r13)
	  lbz       r0, 0x686(r5)
	  rlwinm    r0,r0,8,0,23
	  add       r0, r5, r0
	  stw       r0, -0x6E80(r13)
	  lwz       r8, 0x128(r31)
	  lwz       r7, -0x6E80(r13)
	  li        r4, 0x8
	  mtctr     r4

	.loc_0x1140:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r4, 0x2(r8)
	  or.       r6, r6, r0

	.loc_0x1160:
	  cmpwi     r6, 0
	  bne-      .loc_0x12AC
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r9),0,0
	  bne-      .loc_0x1210
	  psq_st    f4,0x10(r9),0,0
	  cmpwi     r4, 0
	  psq_st    f4,0x18(r9),0,0
	  bne-      .loc_0x119C
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r9),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0x1140
	  b         .loc_0x1374

	.loc_0x119C:
	  addi      r8, r8, 0x10
	  ps_msub   f13, f7, f28, f7
	  addi      r7, r7, 0x20
	  ps_merge00f2, f7, f7
	  lwz       r5, 0x4(r8)
	  ps_sub    f1, f28, f29
	  ps_msub   f12, f7, f27, f13
	  lhz       r4, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r9),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r9),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r9),0,0
	  bdnz+     .loc_0x1160
	  b         .loc_0x1374

	.loc_0x1210:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r4, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r9),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r9),0,0
	  bdnz+     .loc_0x1160
	  b         .loc_0x1374

	.loc_0x12AC:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r4, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r9),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r9),0,0
	  psq_stu   f10,0x8(r9),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  bdnz+     .loc_0x1160

	.loc_0x1374:
	  lwz       r8, -0x6EC0(r13)
	  mr        r9, r31
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r9),0,0
	  rlwinm    r4,r3,2,0,29
	  psq_l     f6,0x80(r9),0,0
	  rlwinm    r6,r0,2,0,29
	  psq_l     f5,0x40(r9),0,0
	  mr        r7, r4
	  ps_add    f9, f7, f6
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r4, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0x13CC:
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r9, r9, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r9),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r9),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r9),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r4),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r4),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f3, f3, f31
	  add       r4, r8, r6
	  bdnz+     .loc_0x13CC
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f1,0x10(r4),0x6,6
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r4),0x6,6
	  psq_st    f2,0x8(r4),0x6,6
	  lwz       r0, 0x108(r31)
	  lwz       r4, -0x6E70(r13)
	  subi      r8, r31, 0x8
	  stw       r0, -0x6EC0(r13)
	  lbz       r0, 0x68C(r4)
	  rlwinm    r0,r0,8,0,23
	  add       r0, r4, r0
	  stw       r0, -0x6E80(r13)
	  lwz       r9, 0x12C(r31)
	  lwz       r7, -0x6E80(r13)
	  li        r4, 0x8
	  mtctr     r4

	.loc_0x1568:
	  psq_l     f7,0x0(r9),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r9)
	  lwz       r0, 0x8(r9)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r9)
	  lhz       r4, 0x2(r9)
	  or.       r6, r6, r0

	.loc_0x1588:
	  cmpwi     r6, 0
	  bne-      .loc_0x16D4
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r8),0,0
	  bne-      .loc_0x1638
	  psq_st    f4,0x10(r8),0,0
	  cmpwi     r4, 0
	  psq_st    f4,0x18(r8),0,0
	  bne-      .loc_0x15C4
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r8),0,0
	  addi      r9, r9, 0x10
	  bdnz+     .loc_0x1568
	  b         .loc_0x179C

	.loc_0x15C4:
	  addi      r9, r9, 0x10
	  ps_msub   f13, f7, f28, f7
	  addi      r7, r7, 0x20
	  ps_merge00f2, f7, f7
	  lwz       r5, 0x4(r9)
	  ps_sub    f1, f28, f29
	  ps_msub   f12, f7, f27, f13
	  lhz       r4, 0x2(r9)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r9),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r9)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r9)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r8),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r8),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r8),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r8),0,0
	  bdnz+     .loc_0x1588
	  b         .loc_0x179C

	.loc_0x1638:
	  psq_l     f1,0x4(r9),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r9, r9, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r9)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r9)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r9)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r4, 0x2(r9)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r9),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r8),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r8),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r8),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r8),0,0
	  bdnz+     .loc_0x1588
	  b         .loc_0x179C

	.loc_0x16D4:
	  psq_l     f2,0x4(r9),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r9),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r9),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r9, r9, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r9)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r9)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r9)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r4, 0x2(r9)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r9),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r8),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r8),0,0
	  psq_stu   f10,0x8(r8),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r8),0,0
	  bdnz+     .loc_0x1588

	.loc_0x179C:
	  lwz       r7, -0x6EC0(r13)
	  mr        r8, r31
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r8),0,0
	  rlwinm    r3,r3,2,0,29
	  psq_l     f6,0x80(r8),0,0
	  rlwinm    r5,r0,2,0,29
	  psq_l     f5,0x40(r8),0,0
	  mr        r6, r3
	  ps_add    f9, f7, f6
	  psq_l     f4,0xC0(r8),0,0
	  ps_sub    f3, f7, f6
	  add       r5, r6, r5
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r4, r7, r6
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r3, r7, r5
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0x17F4:
	  psq_l     f11,0x20(r8),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r8),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r8),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r8),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r8, r8, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r8),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r8),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r8),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r8),0,0
	  ps_sub    f9, f9, f8
	  addi      r6, r6, 0x2
	  psq_st    f2,0x0(r4),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r4),0x6,6
	  addi      r5, r5, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r4),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r3),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r3),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r3),0x6,6
	  add       r4, r7, r6
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f3, f3, f31
	  add       r3, r7, r5
	  bdnz+     .loc_0x17F4
	  psq_l     f11,0x20(r8),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r8),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r8),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r8),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r4),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f1,0x10(r3),0x6,6
	  psq_st    f3,0x10(r4),0x6,6
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r4),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r3),0x6,6
	  psq_st    f2,0x8(r3),0x6,6
	  lwz       r4, -0x6E70(r13)
	  lbz       r0, 0x6A9(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x19DC
	  lhz       r3, 0x6AC(r4)
	  subi      r3, r3, 0x1
	  rlwinm.   r0,r3,0,16,31
	  sth       r3, 0x6AC(r4)
	  bne-      .loc_0x19DC
	  lwz       r3, -0x6E70(r13)
	  lhz       r0, 0x6AA(r3)
	  sth       r0, 0x6AC(r3)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x6A4(r4)
	  addi      r0, r3, 0x6
	  rlwinm    r3,r0,0,0,28
	  addi      r0, r3, 0x1
	  stw       r0, 0x6A4(r4)
	  lwz       r3, -0x6E70(r13)
	  lwz       r0, 0x6A4(r3)
	  cmplwi    r0, 0x21
	  ble-      .loc_0x19C0
	  li        r0, 0x21
	  stw       r0, 0x6A4(r3)

	.loc_0x19C0:
	  lwz       r3, -0x6E70(r13)
	  li        r0, 0
	  sth       r0, 0x684(r3)
	  lwz       r3, -0x6E70(r13)
	  sth       r0, 0x68A(r3)
	  lwz       r3, -0x6E70(r13)
	  sth       r0, 0x690(r3)

	.loc_0x19DC:
	  addi      r30, r30, 0x1

	.loc_0x19E0:
	  lwz       r3, -0x6E70(r13)
	  rlwinm    r4,r30,0,24,31
	  lhz       r0, 0x696(r3)
	  cmpw      r4, r0
	  blt+      .loc_0x54
	  lwz       r3, 0x6B0(r3)
	  li        r5, 0x2000
	  lwz       r4, 0x100(r31)
	  bl        -0xD2E0
	  lwz       r3, -0x6E70(r13)
	  li        r5, 0x800
	  lwz       r4, 0x104(r31)
	  lwz       r3, 0x6B4(r3)
	  bl        -0xD2F4
	  lwz       r3, -0x6E70(r13)
	  li        r5, 0x800
	  lwz       r4, 0x108(r31)
	  lwz       r3, 0x6B8(r3)
	  bl        -0xD308
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x6B0(r4)
	  addi      r0, r3, 0x2000
	  stw       r0, 0x6B0(r4)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x6B4(r4)
	  addi      r0, r3, 0x800
	  stw       r0, 0x6B4(r4)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x6B8(r4)
	  addi      r0, r3, 0x800
	  stw       r0, 0x6B8(r4)
	  lwz       r0, 0x3C(r1)
	  lfd       f31, 0x30(r1)
	  lfd       f30, 0x28(r1)
	  lfd       f29, 0x20(r1)
	  lfd       f28, 0x18(r1)
	  lfd       f27, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F9D0C
 * Size:	001A8C
 */
void __THPDecompressiMCURow640x480(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stfd      f31, 0x30(r1)
	  stfd      f30, 0x28(r1)
	  stfd      f29, 0x20(r1)
	  stfd      f28, 0x18(r1)
	  stfd      f27, 0x10(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x7380
	  li        r3, 0x3
	  stw       r30, 0x8(r1)
	  bl        -0xD2F0
	  lfs       f27, -0x6BE0(r2)
	  li        r30, 0
	  lfs       f28, -0x6BDC(r2)
	  lfs       f29, -0x6BD8(r2)
	  lfs       f30, -0x6BD4(r2)
	  lfs       f31, -0x6BD0(r2)
	  b         .loc_0x19E4

	.loc_0x54:
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x118(r31)
	  bl        0x34DC
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x11C(r31)
	  bl        0x34D0
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x120(r31)
	  bl        0x34C4
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x124(r31)
	  bl        0x34B8
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x128(r31)
	  bl        0x3B28
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x12C(r31)
	  bl        0x41C4
	  lwz       r3, 0x10C(r31)
	  li        r0, 0x280
	  lwz       r4, -0x6E70(r13)
	  subi      r9, r31, 0x8
	  stw       r3, -0x6EC0(r13)
	  rlwinm    r3,r30,4,20,27
	  stw       r0, -0x6EA0(r13)
	  lbz       r0, 0x680(r4)
	  rlwinm    r0,r0,8,0,23
	  add       r0, r4, r0
	  stw       r0, -0x6E80(r13)
	  lwz       r8, 0x118(r31)
	  lwz       r7, -0x6E80(r13)
	  li        r4, 0x8
	  mtctr     r4

	.loc_0xD8:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r4, 0x2(r8)
	  or.       r6, r6, r0

	.loc_0xF8:
	  cmpwi     r6, 0
	  bne-      .loc_0x244
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r9),0,0
	  bne-      .loc_0x1A8
	  psq_st    f4,0x10(r9),0,0
	  cmpwi     r4, 0
	  psq_st    f4,0x18(r9),0,0
	  bne-      .loc_0x134
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r9),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0xD8
	  b         .loc_0x30C

	.loc_0x134:
	  addi      r8, r8, 0x10
	  ps_msub   f13, f7, f28, f7
	  addi      r7, r7, 0x20
	  ps_merge00f2, f7, f7
	  lwz       r5, 0x4(r8)
	  ps_sub    f1, f28, f29
	  ps_msub   f12, f7, f27, f13
	  lhz       r4, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r9),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r9),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r9),0,0
	  bdnz+     .loc_0xF8
	  b         .loc_0x30C

	.loc_0x1A8:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r4, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r9),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r9),0,0
	  bdnz+     .loc_0xF8
	  b         .loc_0x30C

	.loc_0x244:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r4, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r9),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r9),0,0
	  psq_stu   f10,0x8(r9),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  bdnz+     .loc_0xF8

	.loc_0x30C:
	  lwz       r8, -0x6EC0(r13)
	  mr        r9, r31
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r9),0,0
	  rlwinm    r4,r3,2,0,29
	  psq_l     f6,0x80(r9),0,0
	  rlwinm    r6,r0,2,0,29
	  psq_l     f5,0x40(r9),0,0
	  mr        r7, r4
	  ps_add    f9, f7, f6
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r4, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0x364:
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r9, r9, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r9),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r9),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r9),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r4),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r4),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f3, f3, f31
	  add       r4, r8, r6
	  bdnz+     .loc_0x364
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f1,0x10(r4),0x6,6
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r4),0x6,6
	  psq_st    f2,0x8(r4),0x6,6
	  lwz       r8, 0x11C(r31)
	  lwz       r7, -0x6E80(r13)
	  addi      r10, r3, 0x8
	  subi      r9, r31, 0x8
	  li        r4, 0x8
	  mtctr     r4

	.loc_0x4E8:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r4, 0x2(r8)
	  or.       r6, r6, r0

	.loc_0x508:
	  cmpwi     r6, 0
	  bne-      .loc_0x654
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r9),0,0
	  bne-      .loc_0x5B8
	  psq_st    f4,0x10(r9),0,0
	  cmpwi     r4, 0
	  psq_st    f4,0x18(r9),0,0
	  bne-      .loc_0x544
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r9),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0x4E8
	  b         .loc_0x71C

	.loc_0x544:
	  addi      r8, r8, 0x10
	  ps_msub   f13, f7, f28, f7
	  addi      r7, r7, 0x20
	  ps_merge00f2, f7, f7
	  lwz       r5, 0x4(r8)
	  ps_sub    f1, f28, f29
	  ps_msub   f12, f7, f27, f13
	  lhz       r4, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r9),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r9),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r9),0,0
	  bdnz+     .loc_0x508
	  b         .loc_0x71C

	.loc_0x5B8:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r4, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r9),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r9),0,0
	  bdnz+     .loc_0x508
	  b         .loc_0x71C

	.loc_0x654:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r4, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r9),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r9),0,0
	  psq_stu   f10,0x8(r9),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  bdnz+     .loc_0x508

	.loc_0x71C:
	  lwz       r8, -0x6EC0(r13)
	  mr        r9, r31
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r9),0,0
	  rlwinm    r10,r10,2,0,29
	  psq_l     f6,0x80(r9),0,0
	  rlwinm    r6,r0,2,0,29
	  psq_l     f5,0x40(r9),0,0
	  mr        r7, r10
	  ps_add    f9, f7, f6
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r4, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0x774:
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r9, r9, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r9),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r9),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r9),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r4),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r4),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f3, f3, f31
	  add       r4, r8, r6
	  bdnz+     .loc_0x774
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f1,0x10(r4),0x6,6
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r4),0x6,6
	  psq_st    f2,0x8(r4),0x6,6
	  lwz       r8, 0x120(r31)
	  lwz       r7, -0x6E80(r13)
	  subi      r9, r31, 0x8
	  li        r4, 0x8
	  mtctr     r4

	.loc_0x8F4:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r4, 0x2(r8)
	  or        r6, r6, r0

	.loc_0x914:
	  cmpwi     r6, 0
	  bne-      .loc_0xA60
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r9),0,0
	  bne-      .loc_0x9C4
	  psq_st    f4,0x10(r9),0,0
	  cmpwi     r4, 0
	  psq_st    f4,0x18(r9),0,0
	  bne-      .loc_0x950
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r9),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0x8F4
	  b         .loc_0xB28

	.loc_0x950:
	  ps_msub   f13, f7, f28, f7
	  addi      r8, r8, 0x10
	  ps_merge00f2, f7, f7
	  addi      r7, r7, 0x20
	  ps_sub    f1, f28, f29
	  lwz       r5, 0x4(r8)
	  ps_msub   f12, f7, f27, f13
	  lhz       r4, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r9),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r9),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r9),0,0
	  bdnz+     .loc_0x914
	  b         .loc_0xB28

	.loc_0x9C4:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r4, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r9),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r9),0,0
	  bdnz+     .loc_0x914
	  b         .loc_0xB28

	.loc_0xA60:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r4, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r9),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r9),0,0
	  psq_stu   f10,0x8(r9),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  bdnz+     .loc_0x914

	.loc_0xB28:
	  lwz       r8, -0x6EC0(r13)
	  mr        r9, r31
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r9),0,0
	  rlwinm    r7,r0,3,0,28
	  psq_l     f6,0x80(r9),0,0
	  rlwinm    r4,r3,2,0,29
	  psq_l     f5,0x40(r9),0,0
	  rlwinm    r6,r0,2,0,29
	  ps_add    f9, f7, f6
	  add       r7, r7, r4
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r4, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0xB84:
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r9, r9, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r9),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r9),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r9),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r4),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r4),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f3, f3, f31
	  add       r4, r8, r6
	  bdnz+     .loc_0xB84
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  psq_st    f1,0x10(r4),0x6,6
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r4),0x6,6
	  psq_st    f2,0x8(r4),0x6,6
	  lwz       r8, 0x124(r31)
	  lwz       r7, -0x6E80(r13)
	  addi      r9, r3, 0x8
	  subi      r10, r31, 0x8
	  li        r4, 0x8
	  mtctr     r4

	.loc_0xD08:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r4, 0x2(r8)
	  or        r6, r6, r0

	.loc_0xD28:
	  cmpwi     r6, 0
	  bne-      .loc_0xE74
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r10),0,0
	  bne-      .loc_0xDD8
	  psq_st    f4,0x10(r10),0,0
	  cmpwi     r4, 0
	  psq_st    f4,0x18(r10),0,0
	  bne-      .loc_0xD64
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r10),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0xD08
	  b         .loc_0xF3C

	.loc_0xD64:
	  ps_msub   f13, f7, f28, f7
	  addi      r8, r8, 0x10
	  ps_merge00f2, f7, f7
	  addi      r7, r7, 0x20
	  ps_sub    f1, f28, f29
	  lwz       r5, 0x4(r8)
	  ps_msub   f12, f7, f27, f13
	  lhz       r4, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r10),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r10),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r10),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r10),0,0
	  bdnz+     .loc_0xD28
	  b         .loc_0xF3C

	.loc_0xDD8:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r4, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r10),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r10),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r10),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r10),0,0
	  bdnz+     .loc_0xD28
	  b         .loc_0xF3C

	.loc_0xE74:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r4, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r10),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r10),0,0
	  psq_stu   f10,0x8(r10),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r10),0,0
	  bdnz+     .loc_0xD28

	.loc_0xF3C:
	  lwz       r8, -0x6EC0(r13)
	  mr        r10, r31
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r10),0,0
	  rlwinm    r7,r0,3,0,28
	  psq_l     f6,0x80(r10),0,0
	  rlwinm    r9,r9,2,0,29
	  psq_l     f5,0x40(r10),0,0
	  rlwinm    r6,r0,2,0,29
	  ps_add    f9, f7, f6
	  add       r7, r7, r9
	  psq_l     f4,0xC0(r10),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r4, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0xF98:
	  psq_l     f11,0x20(r10),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r10),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r10),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r10),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r10, r10, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r10),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r10),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r10),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r10),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r4),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r4),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f3, f3, f31
	  add       r4, r8, r6
	  bdnz+     .loc_0xF98
	  psq_l     f11,0x20(r10),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r10),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r10),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r10),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  psq_st    f1,0x10(r4),0x6,6
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r4),0x6,6
	  psq_st    f2,0x8(r4),0x6,6
	  lwz       r4, 0x110(r31)
	  li        r0, 0x140
	  lwz       r5, -0x6E70(r13)
	  stw       r4, -0x6EC0(r13)
	  rlwinm    r3,r3,31,1,31
	  subi      r9, r31, 0x8
	  stw       r0, -0x6EA0(r13)
	  lbz       r0, 0x686(r5)
	  rlwinm    r0,r0,8,0,23
	  add       r0, r5, r0
	  stw       r0, -0x6E80(r13)
	  lwz       r8, 0x128(r31)
	  lwz       r7, -0x6E80(r13)
	  li        r4, 0x8
	  mtctr     r4

	.loc_0x1140:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r4, 0x2(r8)
	  or.       r6, r6, r0

	.loc_0x1160:
	  cmpwi     r6, 0
	  bne-      .loc_0x12AC
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r9),0,0
	  bne-      .loc_0x1210
	  psq_st    f4,0x10(r9),0,0
	  cmpwi     r4, 0
	  psq_st    f4,0x18(r9),0,0
	  bne-      .loc_0x119C
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r9),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0x1140
	  b         .loc_0x1374

	.loc_0x119C:
	  addi      r8, r8, 0x10
	  ps_msub   f13, f7, f28, f7
	  addi      r7, r7, 0x20
	  ps_merge00f2, f7, f7
	  lwz       r5, 0x4(r8)
	  ps_sub    f1, f28, f29
	  ps_msub   f12, f7, f27, f13
	  lhz       r4, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r9),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r9),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r9),0,0
	  bdnz+     .loc_0x1160
	  b         .loc_0x1374

	.loc_0x1210:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r4, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r9),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r9),0,0
	  bdnz+     .loc_0x1160
	  b         .loc_0x1374

	.loc_0x12AC:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r4, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r9),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r9),0,0
	  psq_stu   f10,0x8(r9),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  bdnz+     .loc_0x1160

	.loc_0x1374:
	  lwz       r8, -0x6EC0(r13)
	  mr        r9, r31
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r9),0,0
	  rlwinm    r4,r3,2,0,29
	  psq_l     f6,0x80(r9),0,0
	  rlwinm    r6,r0,2,0,29
	  psq_l     f5,0x40(r9),0,0
	  mr        r7, r4
	  ps_add    f9, f7, f6
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r4, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0x13CC:
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r9, r9, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r9),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r9),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r9),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r4),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r4),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f3, f3, f31
	  add       r4, r8, r6
	  bdnz+     .loc_0x13CC
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r4),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f1,0x10(r4),0x6,6
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r4),0x6,6
	  psq_st    f2,0x8(r4),0x6,6
	  lwz       r0, 0x114(r31)
	  lwz       r4, -0x6E70(r13)
	  subi      r8, r31, 0x8
	  stw       r0, -0x6EC0(r13)
	  lbz       r0, 0x68C(r4)
	  rlwinm    r0,r0,8,0,23
	  add       r0, r4, r0
	  stw       r0, -0x6E80(r13)
	  lwz       r9, 0x12C(r31)
	  lwz       r7, -0x6E80(r13)
	  li        r4, 0x8
	  mtctr     r4

	.loc_0x1568:
	  psq_l     f7,0x0(r9),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r9)
	  lwz       r0, 0x8(r9)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r9)
	  lhz       r4, 0x2(r9)
	  or.       r6, r6, r0

	.loc_0x1588:
	  cmpwi     r6, 0
	  bne-      .loc_0x16D4
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r8),0,0
	  bne-      .loc_0x1638
	  psq_st    f4,0x10(r8),0,0
	  cmpwi     r4, 0
	  psq_st    f4,0x18(r8),0,0
	  bne-      .loc_0x15C4
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r8),0,0
	  addi      r9, r9, 0x10
	  bdnz+     .loc_0x1568
	  b         .loc_0x179C

	.loc_0x15C4:
	  addi      r9, r9, 0x10
	  ps_msub   f13, f7, f28, f7
	  addi      r7, r7, 0x20
	  ps_merge00f2, f7, f7
	  lwz       r5, 0x4(r9)
	  ps_sub    f1, f28, f29
	  ps_msub   f12, f7, f27, f13
	  lhz       r4, 0x2(r9)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r9),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r9)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r9)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r8),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r8),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r8),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r8),0,0
	  bdnz+     .loc_0x1588
	  b         .loc_0x179C

	.loc_0x1638:
	  psq_l     f1,0x4(r9),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r9, r9, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r9)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r9)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r9)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r4, 0x2(r9)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r9),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r8),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r8),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r8),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r8),0,0
	  bdnz+     .loc_0x1588
	  b         .loc_0x179C

	.loc_0x16D4:
	  psq_l     f2,0x4(r9),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r9),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r9),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r9, r9, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r9)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r9)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r9)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r4, 0x2(r9)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r9),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r8),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r8),0,0
	  psq_stu   f10,0x8(r8),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r8),0,0
	  bdnz+     .loc_0x1588

	.loc_0x179C:
	  lwz       r7, -0x6EC0(r13)
	  mr        r8, r31
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r8),0,0
	  rlwinm    r3,r3,2,0,29
	  psq_l     f6,0x80(r8),0,0
	  rlwinm    r5,r0,2,0,29
	  psq_l     f5,0x40(r8),0,0
	  mr        r6, r3
	  ps_add    f9, f7, f6
	  psq_l     f4,0xC0(r8),0,0
	  ps_sub    f3, f7, f6
	  add       r5, r6, r5
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r4, r7, r6
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r3, r7, r5
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0x17F4:
	  psq_l     f11,0x20(r8),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r8),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r8),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r8),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r8, r8, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r8),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r8),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r8),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r8),0,0
	  ps_sub    f9, f9, f8
	  addi      r6, r6, 0x2
	  psq_st    f2,0x0(r4),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r4),0x6,6
	  addi      r5, r5, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r4),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r3),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r3),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r3),0x6,6
	  add       r4, r7, r6
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f3, f3, f31
	  add       r3, r7, r5
	  bdnz+     .loc_0x17F4
	  psq_l     f11,0x20(r8),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r8),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r8),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r8),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r4),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f1,0x10(r3),0x6,6
	  psq_st    f3,0x10(r4),0x6,6
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r4),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r3),0x6,6
	  psq_st    f2,0x8(r3),0x6,6
	  lwz       r4, -0x6E70(r13)
	  lbz       r0, 0x6A9(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x19E0
	  lhz       r3, 0x6AC(r4)
	  subi      r0, r3, 0x1
	  sth       r0, 0x6AC(r4)
	  lwz       r3, -0x6E70(r13)
	  lhz       r0, 0x6AC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x19E0
	  lhz       r0, 0x6AA(r3)
	  sth       r0, 0x6AC(r3)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x6A4(r4)
	  addi      r0, r3, 0x6
	  rlwinm    r3,r0,0,0,28
	  addi      r0, r3, 0x1
	  stw       r0, 0x6A4(r4)
	  lwz       r3, -0x6E70(r13)
	  lwz       r0, 0x6A4(r3)
	  cmplwi    r0, 0x20
	  ble-      .loc_0x19C4
	  li        r0, 0x21
	  stw       r0, 0x6A4(r3)

	.loc_0x19C4:
	  lwz       r3, -0x6E70(r13)
	  li        r0, 0
	  sth       r0, 0x684(r3)
	  lwz       r3, -0x6E70(r13)
	  sth       r0, 0x68A(r3)
	  lwz       r3, -0x6E70(r13)
	  sth       r0, 0x690(r3)

	.loc_0x19E0:
	  addi      r30, r30, 0x1

	.loc_0x19E4:
	  lwz       r3, -0x6E70(r13)
	  rlwinm    r4,r30,0,24,31
	  lhz       r0, 0x696(r3)
	  cmpw      r4, r0
	  blt+      .loc_0x54
	  lwz       r3, 0x6B0(r3)
	  li        r5, 0x2800
	  lwz       r4, 0x10C(r31)
	  bl        -0xED6C
	  lwz       r3, -0x6E70(r13)
	  li        r5, 0xA00
	  lwz       r4, 0x110(r31)
	  lwz       r3, 0x6B4(r3)
	  bl        -0xED80
	  lwz       r3, -0x6E70(r13)
	  li        r5, 0xA00
	  lwz       r4, 0x114(r31)
	  lwz       r3, 0x6B8(r3)
	  bl        -0xED94
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x6B0(r4)
	  addi      r0, r3, 0x2800
	  stw       r0, 0x6B0(r4)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x6B4(r4)
	  addi      r0, r3, 0xA00
	  stw       r0, 0x6B4(r4)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x6B8(r4)
	  addi      r0, r3, 0xA00
	  stw       r0, 0x6B8(r4)
	  lwz       r0, 0x3C(r1)
	  lfd       f31, 0x30(r1)
	  lfd       f30, 0x28(r1)
	  lfd       f29, 0x20(r1)
	  lfd       f28, 0x18(r1)
	  lfd       f27, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FB798
 * Size:	001AAC
 */
void __THPDecompressiMCURowNxN(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x40(r1)
	  stfd      f31, 0x38(r1)
	  stfd      f30, 0x30(r1)
	  stfd      f29, 0x28(r1)
	  stfd      f28, 0x20(r1)
	  stfd      f27, 0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  addi      r30, r4, 0x7380
	  stw       r29, 0xC(r1)
	  stw       r28, 0x8(r1)
	  lwz       r3, -0x6E70(r13)
	  lhz       r28, 0x692(r3)
	  li        r3, 0x3
	  bl        -0xED8C
	  lfs       f27, -0x6BE0(r2)
	  rlwinm    r31,r28,31,1,31
	  lfs       f28, -0x6BDC(r2)
	  li        r29, 0
	  lfs       f29, -0x6BD8(r2)
	  lfs       f30, -0x6BD4(r2)
	  lfs       f31, -0x6BD0(r2)
	  b         .loc_0x19F0

	.loc_0x68:
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x118(r30)
	  bl        .loc_0x1AAC
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x11C(r30)
	  bl        .loc_0x1AAC
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x120(r30)
	  bl        .loc_0x1AAC
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x124(r30)
	  bl        .loc_0x1AAC
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x128(r30)
	  bl        0x2088
	  lwz       r3, -0x6E70(r13)
	  lwz       r4, 0x12C(r30)
	  bl        0x2724
	  lwz       r0, 0x10C(r30)
	  rlwinm    r4,r29,4,20,27
	  lwz       r5, -0x6E70(r13)
	  subi      r3, r30, 0x8
	  stw       r0, -0x6EC0(r13)
	  stw       r28, -0x6EA0(r13)
	  lbz       r0, 0x680(r5)
	  rlwinm    r0,r0,8,0,23
	  add       r0, r5, r0
	  stw       r0, -0x6E80(r13)
	  lwz       r9, 0x118(r30)
	  lwz       r8, -0x6E80(r13)
	  li        r5, 0x8
	  mtctr     r5

	.loc_0xE8:
	  psq_l     f7,0x0(r9),0x5,5
	  psq_l     f6,0x0(r8),0,0
	  lwz       r7, 0xC(r9)
	  lwz       r0, 0x8(r9)
	  ps_mul    f7, f7, f6
	  lwz       r6, 0x4(r9)
	  lhz       r5, 0x2(r9)
	  or.       r7, r7, r0

	.loc_0x108:
	  cmpwi     r7, 0
	  bne-      .loc_0x254
	  ps_merge00f4, f7, f7
	  cmpwi     r6, 0
	  psq_st    f4,0x8(r3),0,0
	  bne-      .loc_0x1B8
	  psq_st    f4,0x10(r3),0,0
	  cmpwi     r5, 0
	  psq_st    f4,0x18(r3),0,0
	  bne-      .loc_0x144
	  addi      r8, r8, 0x20
	  psq_stu   f4,0x20(r3),0,0
	  addi      r9, r9, 0x10
	  bdnz+     .loc_0xE8
	  b         .loc_0x31C

	.loc_0x144:
	  addi      r9, r9, 0x10
	  ps_msub   f13, f7, f28, f7
	  addi      r8, r8, 0x20
	  ps_merge00f2, f7, f7
	  lwz       r6, 0x4(r9)
	  ps_sub    f1, f28, f29
	  ps_msub   f12, f7, f27, f13
	  lhz       r5, 0x2(r9)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r8),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r9),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r7, 0xC(r9)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r9)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r3),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r3),0,0
	  ps_merge10f10, f10, f10
	  or        r7, r7, r0
	  psq_stu   f9,0x8(r3),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r3),0,0
	  bdnz+     .loc_0x108
	  b         .loc_0x31C

	.loc_0x1B8:
	  psq_l     f1,0x4(r9),0x5,5
	  psq_l     f2,0x8(r8),0,0
	  addi      r9, r9, 0x10
	  ps_mul    f1, f1, f2
	  addi      r8, r8, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r7, 0xC(r9)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r9)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r6, 0x4(r9)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r5, 0x2(r9)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r9),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r8),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r3),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r7, r7, r0
	  psq_stu   f4,0x8(r3),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r3),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r3),0,0
	  bdnz+     .loc_0x108
	  b         .loc_0x31C

	.loc_0x254:
	  psq_l     f2,0x4(r9),0x5,5
	  psq_l     f10,0x8(r8),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r9),0x5,5
	  psq_l     f9,0x10(r8),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r9),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r8),0,0
	  addi      r9, r9, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r8, r8, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r7, 0xC(r9)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r9)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r6, 0x4(r9)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r5, 0x2(r9)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r9),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r8),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r3),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r3),0,0
	  psq_stu   f10,0x8(r3),0,0
	  or        r7, r7, r0
	  psq_stu   f4,0x8(r3),0,0
	  bdnz+     .loc_0x108

	.loc_0x31C:
	  lwz       r9, -0x6EC0(r13)
	  mr        r3, r30
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r3),0,0
	  rlwinm    r5,r4,2,0,29
	  psq_l     f6,0x80(r3),0,0
	  rlwinm    r7,r0,2,0,29
	  psq_l     f5,0x40(r3),0,0
	  mr        r8, r5
	  ps_add    f9, f7, f6
	  psq_l     f4,0xC0(r3),0,0
	  ps_sub    f3, f7, f6
	  add       r7, r8, r7
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r6, r9, r8
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r5, r9, r7
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0x374:
	  psq_l     f11,0x20(r3),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r3),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r3),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r3),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r3, r3, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r3),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r3),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r3),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r3),0,0
	  ps_sub    f9, f9, f8
	  addi      r8, r8, 0x2
	  psq_st    f2,0x0(r6),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r6),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r6),0x6,6
	  addi      r7, r7, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r6),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r5),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r5),0x6,6
	  add       r6, r9, r8
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r5),0x6,6
	  ps_add    f3, f3, f31
	  add       r5, r9, r7
	  bdnz+     .loc_0x374
	  psq_l     f11,0x20(r3),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r3),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r3),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r3),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r6),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r5),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r6),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f1,0x10(r5),0x6,6
	  psq_st    f3,0x10(r6),0x6,6
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r6),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r5),0x6,6
	  psq_st    f2,0x8(r5),0x6,6
	  lwz       r8, 0x11C(r30)
	  lwz       r7, -0x6E80(r13)
	  addi      r10, r4, 0x8
	  subi      r9, r30, 0x8
	  li        r3, 0x8
	  mtctr     r3

	.loc_0x4F8:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r3, 0x2(r8)
	  or.       r6, r6, r0

	.loc_0x518:
	  cmpwi     r6, 0
	  bne-      .loc_0x664
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r9),0,0
	  bne-      .loc_0x5C8
	  psq_st    f4,0x10(r9),0,0
	  cmpwi     r3, 0
	  psq_st    f4,0x18(r9),0,0
	  bne-      .loc_0x554
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r9),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0x4F8
	  b         .loc_0x72C

	.loc_0x554:
	  addi      r8, r8, 0x10
	  ps_msub   f13, f7, f28, f7
	  addi      r7, r7, 0x20
	  ps_merge00f2, f7, f7
	  lwz       r5, 0x4(r8)
	  ps_sub    f1, f28, f29
	  ps_msub   f12, f7, f27, f13
	  lhz       r3, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r9),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r9),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r9),0,0
	  bdnz+     .loc_0x518
	  b         .loc_0x72C

	.loc_0x5C8:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r3, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r9),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r9),0,0
	  bdnz+     .loc_0x518
	  b         .loc_0x72C

	.loc_0x664:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r3, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r9),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r9),0,0
	  psq_stu   f10,0x8(r9),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  bdnz+     .loc_0x518

	.loc_0x72C:
	  lwz       r8, -0x6EC0(r13)
	  mr        r9, r30
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r9),0,0
	  rlwinm    r10,r10,2,0,29
	  psq_l     f6,0x80(r9),0,0
	  rlwinm    r6,r0,2,0,29
	  psq_l     f5,0x40(r9),0,0
	  mr        r7, r10
	  ps_add    f9, f7, f6
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r3, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0x784:
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r9, r9, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r9),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r9),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r9),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r3),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r3),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r3),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f3, f3, f31
	  add       r3, r8, r6
	  bdnz+     .loc_0x784
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f1,0x10(r3),0x6,6
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r3),0x6,6
	  psq_st    f2,0x8(r3),0x6,6
	  lwz       r8, 0x120(r30)
	  lwz       r7, -0x6E80(r13)
	  subi      r9, r30, 0x8
	  li        r3, 0x8
	  mtctr     r3

	.loc_0x904:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r3, 0x2(r8)
	  or        r6, r6, r0

	.loc_0x924:
	  cmpwi     r6, 0
	  bne-      .loc_0xA70
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r9),0,0
	  bne-      .loc_0x9D4
	  psq_st    f4,0x10(r9),0,0
	  cmpwi     r3, 0
	  psq_st    f4,0x18(r9),0,0
	  bne-      .loc_0x960
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r9),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0x904
	  b         .loc_0xB38

	.loc_0x960:
	  ps_msub   f13, f7, f28, f7
	  addi      r8, r8, 0x10
	  ps_merge00f2, f7, f7
	  addi      r7, r7, 0x20
	  ps_sub    f1, f28, f29
	  lwz       r5, 0x4(r8)
	  ps_msub   f12, f7, f27, f13
	  lhz       r3, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r9),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r9),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r9),0,0
	  bdnz+     .loc_0x924
	  b         .loc_0xB38

	.loc_0x9D4:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r3, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r9),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r9),0,0
	  bdnz+     .loc_0x924
	  b         .loc_0xB38

	.loc_0xA70:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r3, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r9),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r9),0,0
	  psq_stu   f10,0x8(r9),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  bdnz+     .loc_0x924

	.loc_0xB38:
	  lwz       r8, -0x6EC0(r13)
	  mr        r9, r30
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r9),0,0
	  rlwinm    r7,r0,3,0,28
	  psq_l     f6,0x80(r9),0,0
	  rlwinm    r3,r4,2,0,29
	  psq_l     f5,0x40(r9),0,0
	  rlwinm    r6,r0,2,0,29
	  ps_add    f9, f7, f6
	  add       r7, r7, r3
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r3, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0xB94:
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r9, r9, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r9),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r9),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r9),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r3),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r3),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r3),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f3, f3, f31
	  add       r3, r8, r6
	  bdnz+     .loc_0xB94
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  psq_st    f1,0x10(r3),0x6,6
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r3),0x6,6
	  psq_st    f2,0x8(r3),0x6,6
	  lwz       r8, 0x124(r30)
	  lwz       r7, -0x6E80(r13)
	  addi      r9, r4, 0x8
	  subi      r10, r30, 0x8
	  li        r3, 0x8
	  mtctr     r3

	.loc_0xD18:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r3, 0x2(r8)
	  or        r6, r6, r0

	.loc_0xD38:
	  cmpwi     r6, 0
	  bne-      .loc_0xE84
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r10),0,0
	  bne-      .loc_0xDE8
	  psq_st    f4,0x10(r10),0,0
	  cmpwi     r3, 0
	  psq_st    f4,0x18(r10),0,0
	  bne-      .loc_0xD74
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r10),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0xD18
	  b         .loc_0xF4C

	.loc_0xD74:
	  ps_msub   f13, f7, f28, f7
	  addi      r8, r8, 0x10
	  ps_merge00f2, f7, f7
	  addi      r7, r7, 0x20
	  ps_sub    f1, f28, f29
	  lwz       r5, 0x4(r8)
	  ps_msub   f12, f7, f27, f13
	  lhz       r3, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r10),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r10),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r10),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r10),0,0
	  bdnz+     .loc_0xD38
	  b         .loc_0xF4C

	.loc_0xDE8:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r3, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r10),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r10),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r10),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r10),0,0
	  bdnz+     .loc_0xD38
	  b         .loc_0xF4C

	.loc_0xE84:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r3, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r10),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r10),0,0
	  psq_stu   f10,0x8(r10),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r10),0,0
	  bdnz+     .loc_0xD38

	.loc_0xF4C:
	  lwz       r8, -0x6EC0(r13)
	  mr        r10, r30
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r10),0,0
	  rlwinm    r7,r0,3,0,28
	  psq_l     f6,0x80(r10),0,0
	  rlwinm    r9,r9,2,0,29
	  psq_l     f5,0x40(r10),0,0
	  rlwinm    r6,r0,2,0,29
	  ps_add    f9, f7, f6
	  add       r7, r7, r9
	  psq_l     f4,0xC0(r10),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r3, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0xFA8:
	  psq_l     f11,0x20(r10),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r10),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r10),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r10),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r10, r10, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r10),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r10),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r10),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r10),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r3),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r3),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r3),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f3, f3, f31
	  add       r3, r8, r6
	  bdnz+     .loc_0xFA8
	  psq_l     f11,0x20(r10),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r10),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r10),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r10),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  psq_st    f1,0x10(r3),0x6,6
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r3),0x6,6
	  psq_st    f2,0x8(r3),0x6,6
	  lwz       r0, 0x110(r30)
	  lwz       r3, -0x6E70(r13)
	  rlwinm    r4,r4,31,1,31
	  stw       r0, -0x6EC0(r13)
	  subi      r9, r30, 0x8
	  stw       r31, -0x6EA0(r13)
	  lbz       r0, 0x686(r3)
	  rlwinm    r0,r0,8,0,23
	  add       r0, r3, r0
	  stw       r0, -0x6E80(r13)
	  lwz       r8, 0x128(r30)
	  lwz       r7, -0x6E80(r13)
	  li        r3, 0x8
	  mtctr     r3

	.loc_0x114C:
	  psq_l     f7,0x0(r8),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r8)
	  lwz       r0, 0x8(r8)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r8)
	  lhz       r3, 0x2(r8)
	  or.       r6, r6, r0

	.loc_0x116C:
	  cmpwi     r6, 0
	  bne-      .loc_0x12B8
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r9),0,0
	  bne-      .loc_0x121C
	  psq_st    f4,0x10(r9),0,0
	  cmpwi     r3, 0
	  psq_st    f4,0x18(r9),0,0
	  bne-      .loc_0x11A8
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r9),0,0
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0x114C
	  b         .loc_0x1380

	.loc_0x11A8:
	  addi      r8, r8, 0x10
	  ps_msub   f13, f7, f28, f7
	  addi      r7, r7, 0x20
	  ps_merge00f2, f7, f7
	  lwz       r5, 0x4(r8)
	  ps_sub    f1, f28, f29
	  ps_msub   f12, f7, f27, f13
	  lhz       r3, 0x2(r8)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r8),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r8)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r8)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r9),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r9),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r9),0,0
	  bdnz+     .loc_0x116C
	  b         .loc_0x1380

	.loc_0x121C:
	  psq_l     f1,0x4(r8),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r8, r8, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r8)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r8)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r3, 0x2(r8)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r9),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r9),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r9),0,0
	  bdnz+     .loc_0x116C
	  b         .loc_0x1380

	.loc_0x12B8:
	  psq_l     f2,0x4(r8),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r8),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r8),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r8, r8, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r8)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r8)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r8)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r3, 0x2(r8)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r8),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r9),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r9),0,0
	  psq_stu   f10,0x8(r9),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r9),0,0
	  bdnz+     .loc_0x116C

	.loc_0x1380:
	  lwz       r8, -0x6EC0(r13)
	  mr        r9, r30
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r9),0,0
	  rlwinm    r3,r4,2,0,29
	  psq_l     f6,0x80(r9),0,0
	  rlwinm    r6,r0,2,0,29
	  psq_l     f5,0x40(r9),0,0
	  mr        r7, r3
	  ps_add    f9, f7, f6
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f3, f7, f6
	  add       r6, r7, r6
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r5, r8, r7
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r3, r8, r6
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0x13D8:
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r9, r9, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r9),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r9),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r9),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r9),0,0
	  ps_sub    f9, f9, f8
	  addi      r7, r7, 0x2
	  psq_st    f2,0x0(r5),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r5),0x6,6
	  addi      r6, r6, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r3),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r3),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r3),0x6,6
	  add       r5, r8, r7
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f3, f3, f31
	  add       r3, r8, r6
	  bdnz+     .loc_0x13D8
	  psq_l     f11,0x20(r9),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r9),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r9),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r9),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r5),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r5),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f1,0x10(r3),0x6,6
	  psq_st    f3,0x10(r5),0x6,6
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r5),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r3),0x6,6
	  psq_st    f2,0x8(r3),0x6,6
	  lwz       r0, 0x114(r30)
	  lwz       r3, -0x6E70(r13)
	  subi      r8, r30, 0x8
	  stw       r0, -0x6EC0(r13)
	  lbz       r0, 0x68C(r3)
	  rlwinm    r0,r0,8,0,23
	  add       r0, r3, r0
	  stw       r0, -0x6E80(r13)
	  lwz       r9, 0x12C(r30)
	  lwz       r7, -0x6E80(r13)
	  li        r3, 0x8
	  mtctr     r3

	.loc_0x1574:
	  psq_l     f7,0x0(r9),0x5,5
	  psq_l     f6,0x0(r7),0,0
	  lwz       r6, 0xC(r9)
	  lwz       r0, 0x8(r9)
	  ps_mul    f7, f7, f6
	  lwz       r5, 0x4(r9)
	  lhz       r3, 0x2(r9)
	  or.       r6, r6, r0

	.loc_0x1594:
	  cmpwi     r6, 0
	  bne-      .loc_0x16E0
	  ps_merge00f4, f7, f7
	  cmpwi     r5, 0
	  psq_st    f4,0x8(r8),0,0
	  bne-      .loc_0x1644
	  psq_st    f4,0x10(r8),0,0
	  cmpwi     r3, 0
	  psq_st    f4,0x18(r8),0,0
	  bne-      .loc_0x15D0
	  addi      r7, r7, 0x20
	  psq_stu   f4,0x20(r8),0,0
	  addi      r9, r9, 0x10
	  bdnz+     .loc_0x1574
	  b         .loc_0x17A8

	.loc_0x15D0:
	  addi      r9, r9, 0x10
	  ps_msub   f13, f7, f28, f7
	  addi      r7, r7, 0x20
	  ps_merge00f2, f7, f7
	  lwz       r5, 0x4(r9)
	  ps_sub    f1, f28, f29
	  ps_msub   f12, f7, f27, f13
	  lhz       r3, 0x2(r9)
	  ps_merge11f10, f7, f13
	  psq_l     f6,0x0(r7),0,0
	  ps_nmadd  f11, f7, f1, f12
	  ps_add    f8, f2, f10
	  psq_l     f7,0x0(r9),0x5,5
	  ps_merge11f9, f12, f11
	  ps_sub    f10, f2, f10
	  lwz       r6, 0xC(r9)
	  ps_add    f3, f2, f9
	  lwz       r0, 0x8(r9)
	  ps_sub    f9, f2, f9
	  psq_stu   f8,0x8(r8),0,0
	  ps_merge10f9, f9, f9
	  psq_stu   f3,0x8(r8),0,0
	  ps_merge10f10, f10, f10
	  or        r6, r6, r0
	  psq_stu   f9,0x8(r8),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f10,0x8(r8),0,0
	  bdnz+     .loc_0x1594
	  b         .loc_0x17A8

	.loc_0x1644:
	  psq_l     f1,0x4(r9),0x5,5
	  psq_l     f2,0x8(r7),0,0
	  addi      r9, r9, 0x10
	  ps_mul    f1, f1, f2
	  addi      r7, r7, 0x20
	  ps_sub    f12, f7, f1
	  ps_add    f13, f7, f1
	  lwz       r6, 0xC(r9)
	  ps_madd   f11, f1, f27, f12
	  ps_nmadd  f10, f1, f27, f13
	  ps_mul    f3, f12, f28
	  ps_merge00f11, f13, f11
	  lwz       r0, 0x8(r9)
	  ps_nmadd  f9, f1, f30, f3
	  ps_merge00f10, f10, f12
	  lwz       r5, 0x4(r9)
	  ps_sub    f9, f9, f13
	  ps_nmadd  f8, f7, f29, f3
	  lhz       r3, 0x2(r9)
	  ps_merge11f13, f13, f9
	  ps_msub   f3, f12, f27, f9
	  psq_l     f7,0x0(r9),0x5,5
	  ps_add    f2, f11, f13
	  ps_sub    f8, f8, f3
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f12, f3, f8
	  ps_sub    f11, f11, f13
	  psq_stu   f2,0x8(r8),0,0
	  ps_add    f4, f10, f12
	  ps_sub    f1, f10, f12
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r8),0,0
	  ps_merge10f1, f1, f1
	  ps_merge10f11, f11, f11
	  psq_stu   f1,0x8(r8),0,0
	  ps_mul    f7, f7, f6
	  psq_stu   f11,0x8(r8),0,0
	  bdnz+     .loc_0x1594
	  b         .loc_0x17A8

	.loc_0x16E0:
	  psq_l     f2,0x4(r9),0x5,5
	  psq_l     f10,0x8(r7),0,0
	  ps_mul    f2, f2, f10
	  psq_l     f13,0x8(r9),0x5,5
	  psq_l     f9,0x10(r7),0,0
	  ps_merge01f4, f7, f2
	  psq_l     f12,0xC(r9),0,0x5
	  ps_merge01f1, f2, f7
	  psq_l     f8,0x18(r7),0,0
	  addi      r9, r9, 0x10
	  ps_madd   f11, f13, f9, f4
	  ps_nmadd  f10, f13, f9, f4
	  ps_madd   f9, f12, f8, f1
	  ps_nmadd  f8, f12, f8, f1
	  addi      r7, r7, 0x20
	  ps_add    f4, f11, f9
	  ps_sub    f12, f11, f9
	  ps_msub   f13, f8, f27, f9
	  lwz       r6, 0xC(r9)
	  ps_sub    f3, f8, f10
	  ps_add    f1, f10, f13
	  ps_sub    f13, f10, f13
	  ps_mul    f3, f3, f28
	  lwz       r0, 0x8(r9)
	  ps_merge00f1, f4, f1
	  ps_nmadd  f9, f10, f30, f3
	  ps_msub   f11, f8, f29, f3
	  lwz       r5, 0x4(r9)
	  ps_sub    f9, f9, f4
	  ps_merge00f13, f13, f12
	  lhz       r3, 0x2(r9)
	  ps_madd   f10, f12, f27, f9
	  ps_merge11f8, f4, f9
	  psq_l     f7,0x0(r9),0x5,5
	  ps_sub    f11, f11, f10
	  ps_add    f12, f1, f8
	  psq_l     f6,0x0(r7),0,0
	  ps_merge11f11, f10, f11
	  ps_sub    f4, f1, f8
	  ps_mul    f7, f7, f6
	  ps_add    f10, f13, f11
	  ps_sub    f9, f13, f11
	  ps_merge10f10, f10, f10
	  psq_stu   f12,0x8(r8),0,0
	  ps_merge10f4, f4, f4
	  psq_stu   f9,0x8(r8),0,0
	  psq_stu   f10,0x8(r8),0,0
	  or        r6, r6, r0
	  psq_stu   f4,0x8(r8),0,0
	  bdnz+     .loc_0x1594

	.loc_0x17A8:
	  lwz       r7, -0x6EC0(r13)
	  mr        r8, r30
	  lwz       r0, -0x6EA0(r13)
	  psq_l     f7,0x0(r8),0,0
	  rlwinm    r3,r4,2,0,29
	  psq_l     f6,0x80(r8),0,0
	  rlwinm    r5,r0,2,0,29
	  psq_l     f5,0x40(r8),0,0
	  mr        r6, r3
	  ps_add    f9, f7, f6
	  psq_l     f4,0xC0(r8),0,0
	  ps_sub    f3, f7, f6
	  add       r5, r6, r5
	  ps_add    f9, f9, f31
	  li        r0, 0x3
	  ps_add    f8, f5, f4
	  add       r4, r7, r6
	  ps_sub    f2, f5, f4
	  ps_add    f4, f9, f8
	  add       r3, r7, r5
	  ps_add    f3, f3, f31
	  mtctr     r0

	.loc_0x1800:
	  psq_l     f11,0x20(r8),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r8),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r8),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r8),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  addi      r8, r8, 0x8
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  psq_l     f7,0x0(r8),0,0
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  psq_l     f6,0x80(r8),0,0
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  psq_l     f5,0x40(r8),0,0
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_l     f4,0xC0(r8),0,0
	  ps_sub    f9, f9, f8
	  addi      r6, r6, 0x2
	  psq_st    f2,0x0(r4),0x6,6
	  ps_msub   f11, f11, f29, f3
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f3,0x10(r4),0x6,6
	  addi      r5, r5, 0x2
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r4),0x6,6
	  ps_sub    f2, f13, f10
	  ps_add    f9, f7, f6
	  psq_st    f3,0x0(r3),0x6,6
	  ps_sub    f3, f7, f6
	  ps_add    f9, f9, f31
	  psq_st    f2,0x8(r3),0x6,6
	  ps_add    f8, f5, f4
	  ps_sub    f2, f5, f4
	  psq_st    f1,0x10(r3),0x6,6
	  add       r4, r7, r6
	  ps_add    f4, f9, f8
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f3, f3, f31
	  add       r3, r7, r5
	  bdnz+     .loc_0x1800
	  psq_l     f11,0x20(r8),0,0
	  ps_msub   f2, f2, f27, f8
	  psq_l     f10,0x60(r8),0,0
	  ps_sub    f12, f9, f8
	  ps_add    f1, f3, f2
	  psq_l     f9,0xA0(r8),0,0
	  ps_sub    f13, f3, f2
	  psq_l     f8,0xE0(r8),0,0
	  ps_add    f3, f9, f10
	  ps_sub    f9, f9, f10
	  ps_add    f2, f11, f8
	  ps_sub    f11, f11, f8
	  ps_add    f8, f2, f3
	  ps_sub    f10, f2, f3
	  ps_add    f3, f9, f11
	  ps_add    f2, f4, f8
	  ps_mul    f3, f3, f28
	  ps_sub    f0, f4, f8
	  ps_madd   f9, f9, f30, f3
	  psq_st    f2,0x0(r4),0x6,6
	  ps_sub    f9, f9, f8
	  ps_msub   f11, f11, f29, f3
	  psq_st    f0,0x18(r3),0x6,6
	  ps_add    f2, f1, f9
	  ps_msub   f10, f10, f27, f9
	  ps_sub    f1, f1, f9
	  psq_st    f2,0x8(r4),0x6,6
	  ps_add    f3, f13, f10
	  ps_add    f11, f11, f10
	  psq_st    f1,0x10(r3),0x6,6
	  psq_st    f3,0x10(r4),0x6,6
	  ps_sub    f2, f12, f11
	  ps_add    f3, f12, f11
	  psq_st    f2,0x18(r4),0x6,6
	  ps_sub    f2, f13, f10
	  psq_st    f3,0x0(r3),0x6,6
	  psq_st    f2,0x8(r3),0x6,6
	  lwz       r5, -0x6E70(r13)
	  lbz       r0, 0x6A9(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x19EC
	  lhz       r4, 0x6AC(r5)
	  subi      r0, r4, 0x1
	  sth       r0, 0x6AC(r5)
	  lwz       r4, -0x6E70(r13)
	  lhz       r0, 0x6AC(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x19EC
	  lhz       r0, 0x6AA(r4)
	  sth       r0, 0x6AC(r4)
	  lwz       r4, -0x6E70(r13)
	  lwz       r3, 0x6A4(r4)
	  addi      r0, r3, 0x6
	  rlwinm    r3,r0,0,0,28
	  addi      r0, r3, 0x1
	  stw       r0, 0x6A4(r4)
	  lwz       r3, -0x6E70(r13)
	  lwz       r0, 0x6A4(r3)
	  cmplwi    r0, 0x20
	  ble-      .loc_0x19D0
	  li        r0, 0x21
	  stw       r0, 0x6A4(r3)

	.loc_0x19D0:
	  lwz       r3, -0x6E70(r13)
	  li        r0, 0
	  sth       r0, 0x684(r3)
	  lwz       r3, -0x6E70(r13)
	  sth       r0, 0x68A(r3)
	  lwz       r3, -0x6E70(r13)
	  sth       r0, 0x690(r3)

	.loc_0x19EC:
	  addi      r29, r29, 0x1

	.loc_0x19F0:
	  lwz       r3, -0x6E70(r13)
	  rlwinm    r4,r29,0,24,31
	  lhz       r0, 0x696(r3)
	  cmpw      r4, r0
	  blt+      .loc_0x68
	  rlwinm    r29,r28,28,4,31
	  lwz       r3, 0x6B0(r3)
	  lwz       r4, 0x10C(r30)
	  rlwinm    r5,r28,4,0,23
	  bl        -0x10808
	  lwz       r3, -0x6E70(r13)
	  rlwinm    r5,r29,6,0,25
	  lwz       r4, 0x110(r30)
	  lwz       r3, 0x6B4(r3)
	  bl        -0x1081C
	  lwz       r3, -0x6E70(r13)
	  rlwinm    r5,r29,6,0,25
	  lwz       r4, 0x114(r30)
	  lwz       r3, 0x6B8(r3)
	  bl        -0x10830
	  lwz       r5, -0x6E70(r13)
	  rlwinm    r0,r29,8,0,23
	  rlwinm    r4,r29,6,0,25
	  lwz       r3, 0x6B0(r5)
	  add       r0, r3, r0
	  stw       r0, 0x6B0(r5)
	  lwz       r3, -0x6E70(r13)
	  lwz       r0, 0x6B4(r3)
	  add       r0, r0, r4
	  stw       r0, 0x6B4(r3)
	  lwz       r3, -0x6E70(r13)
	  lwz       r0, 0x6B8(r3)
	  add       r0, r0, r4
	  stw       r0, 0x6B8(r3)
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x38(r1)
	  lfd       f30, 0x30(r1)
	  lfd       f29, 0x28(r1)
	  lfd       f28, 0x20(r1)
	  lfd       f27, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  lwz       r28, 0x8(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr

	.loc_0x1AAC:
	*/
}

/*
 * --INFO--
 * Address:	800FD244
 * Size:	00067C
 */
void __THPHuffDecodeDCTCompY(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  dcbz      r0, r4
	  lwz       r12, -0x6F80(r13)
	  lwz       r11, 0x6A4(r3)
	  addi      r9, r12, 0x20
	  lwz       r10, 0x6A0(r3)
	  addi      r5, r11, 0x4
	  cmpwi     r11, 0x1C
	  rlwnm     r8,r10,r5,27,31
	  bgt-      .loc_0xF4
	  lbzx      r5, r12, r8
	  lbzx      r9, r9, r8
	  cmpwi     r5, 0xFF
	  beq-      .loc_0x50
	  add       r11, r11, r9
	  stw       r11, 0x6A4(r3)
	  b         .loc_0x298

	.loc_0x50:
	  addi      r6, r12, 0x44
	  addi      r11, r11, 0x5
	  li        r0, 0x14
	  li        r5, 0x5
	  addi      r6, r6, 0x14

	.loc_0x64:
	  cmpwi     r11, 0x21
	  rlwinm    r8,r8,1,0,30
	  beq-      .loc_0x84
	  rlwnm     r9,r10,r11,31,31
	  lwzu      r0, 0x4(r6)
	  or        r8, r8, r9
	  addi      r11, r11, 0x1
	  b         .loc_0xC8

	.loc_0x84:
	  lwz       r9, 0x69C(r3)
	  li        r11, 0x1
	  lwzu      r10, 0x4(r9)
	  lwzu      r0, 0x4(r6)
	  stw       r9, 0x69C(r3)
	  rlwimi    r8,r10,1,31,31
	  stw       r10, 0x6A0(r3)
	  b         .loc_0xB4

	.loc_0xA4:
	  rlwinm    r8,r8,1,0,30
	  rlwnm     r9,r10,r11,31,31
	  lwzu      r0, 0x4(r6)
	  or        r8, r8, r9

	.loc_0xB4:
	  cmpw      r8, r0
	  addi      r11, r11, 0x1
	  addi      r5, r5, 0x1
	  bgt+      .loc_0xA4
	  b         .loc_0xD4

	.loc_0xC8:
	  cmpw      r8, r0
	  addi      r5, r5, 0x1
	  bgt+      .loc_0x64

	.loc_0xD4:
	  stw       r11, 0x6A4(r3)
	  rlwinm    r0,r5,2,0,29
	  add       r5, r12, r0
	  lwz       r6, 0x40(r12)
	  lwz       r0, 0x8C(r5)
	  add       r0, r0, r6
	  lbzx      r5, r8, r0
	  b         .loc_0x298

	.loc_0xF4:
	  cmpwi     r11, 0x21
	  lwz       r8, 0x69C(r3)
	  beq-      .loc_0x1B0
	  cmpwi     r11, 0x20
	  rlwnm     r5,r10,r5,27,31
	  beq-      .loc_0x134
	  lbzx      r8, r12, r5
	  lbzx      r9, r9, r5
	  cmpwi     r8, 0xFF
	  add       r5, r11, r9
	  beq-      .loc_0x214
	  cmpwi     r5, 0x21
	  stw       r5, 0x6A4(r3)
	  bgt-      .loc_0x214
	  mr        r5, r8
	  b         .loc_0x298

	.loc_0x134:
	  lwzu      r10, 0x4(r8)
	  stw       r8, 0x69C(r3)
	  rlwimi    r5,r10,4,28,31
	  lbzx      r8, r12, r5
	  lbzx      r9, r9, r5
	  stw       r10, 0x6A0(r3)
	  cmpwi     r8, 0xFF
	  stw       r9, 0x6A4(r3)
	  beq-      .loc_0x160
	  mr        r5, r8
	  b         .loc_0x298

	.loc_0x160:
	  addi      r6, r12, 0x44
	  li        r11, 0x14
	  addi      r6, r6, 0x14
	  rlwinm    r8,r5,27,0,4
	  li        r11, 0x5
	  rlwimi    r8,r10,31,1,31

	.loc_0x178:
	  subfic    r10, r11, 0x1F
	  lwzu      r0, 0x4(r6)
	  srw       r5, r8, r10
	  cmpw      r5, r0
	  addi      r11, r11, 0x1
	  bgt+      .loc_0x178
	  stw       r11, 0x6A4(r3)

	.loc_0x194:
	  rlwinm    r0,r11,2,0,29
	  lwz       r7, 0x40(r12)
	  add       r6, r12, r0
	  lwz       r0, 0x8C(r6)
	  add       r0, r0, r7
	  lbzx      r5, r5, r0
	  b         .loc_0x298

	.loc_0x1B0:
	  lwzu      r10, 0x4(r8)
	  rlwinm    r5,r10,5,27,31
	  stw       r8, 0x69C(r3)
	  lbzx      r11, r12, r5
	  lbzx      r9, r9, r5
	  cmpwi     r11, 0xFF
	  stw       r10, 0x6A0(r3)
	  addi      r9, r9, 0x1
	  beq-      .loc_0x1E0
	  stw       r9, 0x6A4(r3)
	  mr        r5, r11
	  b         .loc_0x298

	.loc_0x1E0:
	  li        r11, 0x5
	  li        r6, 0x14

	.loc_0x1E8:
	  subfic    r8, r11, 0x1F
	  addi      r11, r11, 0x1
	  addi      r6, r6, 0x4
	  srw       r5, r10, r8
	  add       r7, r12, r6
	  lwz       r0, 0x44(r7)
	  cmpw      r5, r0
	  bgt+      .loc_0x1E8
	  addi      r0, r11, 0x1
	  stw       r0, 0x6A4(r3)
	  b         .loc_0x194

	.loc_0x214:
	  subfic    r0, r11, 0x21
	  li        r5, -0x1
	  slw       r7, r5, r0
	  andc      r5, r10, r7
	  addi      r7, r12, 0x44
	  lwz       r8, 0x69C(r3)
	  subfic    r6, r11, 0x21
	  addi      r11, r6, 0x1
	  rlwinm    r6,r6,2,0,29
	  lwzu      r10, 0x4(r8)
	  add       r7, r7, r6
	  stw       r8, 0x69C(r3)
	  rlwinm    r5,r5,1,0,30
	  stw       r10, 0x6A0(r3)
	  rlwimi    r5,r10,1,31,31
	  lwzu      r6, 0x4(r7)
	  li        r8, 0x2
	  b         .loc_0x270

	.loc_0x25C:
	  rlwinm    r5,r5,1,0,30
	  addi      r11, r11, 0x1
	  lwzu      r6, 0x4(r7)
	  add       r5, r5, r9
	  addi      r8, r8, 0x1

	.loc_0x270:
	  cmpw      r5, r6
	  rlwnm     r9,r10,r8,31,31
	  bgt+      .loc_0x25C
	  stw       r8, 0x6A4(r3)
	  rlwinm    r0,r11,2,0,29
	  add       r6, r12, r0
	  lwz       r7, 0x40(r12)
	  lwz       r0, 0x8C(r6)
	  add       r0, r0, r7
	  lbzx      r5, r5, r0

	.loc_0x298:
	  li        r0, 0x20
	  dcbz      r4, r0
	  li        r7, 0
	  li        r0, 0x40
	  dcbz      r4, r0
	  cmpwi     r5, 0
	  beq-      .loc_0x334
	  lwz       r7, 0x6A4(r3)
	  subfic    r8, r7, 0x21
	  lwz       r6, 0x6A0(r3)
	  subc.     r9, r5, r8
	  subi      r10, r7, 0x1
	  bgt-      .loc_0x2E4
	  add       r0, r7, r5
	  slw       r7, r6, r10
	  stw       r0, 0x6A4(r3)
	  subfic    r0, r5, 0x20
	  srw       r7, r7, r0
	  b         .loc_0x310

	.loc_0x2E4:
	  lwz       r7, 0x69C(r3)
	  slw       r0, r6, r10
	  lwzu      r6, 0x4(r7)
	  addi      r9, r9, 0x1
	  stw       r6, 0x6A0(r3)
	  srw       r6, r6, r8
	  stw       r7, 0x69C(r3)
	  add       r0, r6, r0
	  stw       r9, 0x6A4(r3)
	  subfic    r9, r5, 0x20
	  srw       r7, r0, r9

	.loc_0x310:
	  extsh     r0, r7
	  cntlzw    r6, r0
	  subfic    r0, r5, 0x20
	  cmpw      r6, r0
	  ble-      .loc_0x334
	  li        r0, -0x1
	  slw       r0, r0, r5
	  add       r7, r0, r7
	  addi      r7, r7, 0x1

	.loc_0x334:
	  li        r0, 0x60
	  dcbz      r4, r0
	  lha       r0, 0x684(r3)
	  add       r0, r0, r7
	  sth       r0, 0x684(r3)
	  sth       r0, 0x0(r4)
	  lwz       r8, -0x6F20(r13)
	  lwz       r6, 0x6A4(r3)
	  addi      r7, r8, 0x20
	  lwz       r0, 0x6A0(r3)
	  li        r5, 0x1
	  lis       r9, 0x8048
	  subi      r10, r9, 0x5B70
	  b         .loc_0x658

	.loc_0x36C:
	  addi      r31, r6, 0x4
	  cmpwi     r6, 0x1C
	  rlwnm     r12,r0,r31,27,31
	  bgt-      .loc_0x430
	  lbzx      r30, r8, r12
	  lbzx      r31, r7, r12
	  cmpwi     r30, 0xFF
	  beq-      .loc_0x394
	  add       r6, r6, r31
	  b         .loc_0x5B8

	.loc_0x394:
	  addi      r6, r6, 0x5
	  addi      r9, r8, 0x44
	  li        r11, 0x14
	  li        r31, 0x5
	  addi      r9, r9, 0x14

	.loc_0x3A8:
	  cmpwi     r6, 0x21
	  rlwinm    r12,r12,1,0,30
	  beq-      .loc_0x3C8
	  rlwnm     r30,r0,r6,31,31
	  lwzu      r11, 0x4(r9)
	  or        r12, r12, r30
	  addi      r6, r6, 0x1
	  b         .loc_0x408

	.loc_0x3C8:
	  lwz       r30, 0x69C(r3)
	  li        r6, 0x1
	  lwzu      r0, 0x4(r30)
	  lwzu      r11, 0x4(r9)
	  stw       r30, 0x69C(r3)
	  rlwimi    r12,r0,1,31,31
	  b         .loc_0x3F4

	.loc_0x3E4:
	  rlwinm    r12,r12,1,0,30
	  rlwnm     r30,r0,r6,31,31
	  lwzu      r11, 0x4(r9)
	  or        r12, r12, r30

	.loc_0x3F4:
	  cmpw      r12, r11
	  addi      r6, r6, 0x1
	  addi      r31, r31, 0x1
	  bgt+      .loc_0x3E4
	  b         .loc_0x414

	.loc_0x408:
	  cmpw      r12, r11
	  addi      r31, r31, 0x1
	  bgt+      .loc_0x3A8

	.loc_0x414:
	  rlwinm    r9,r31,2,0,29
	  lwz       r11, 0x40(r8)
	  add       r9, r8, r9
	  lwz       r9, 0x8C(r9)
	  add       r9, r9, r11
	  lbzx      r30, r12, r9
	  b         .loc_0x5B8

	.loc_0x430:
	  cmpwi     r6, 0x21
	  lwz       r12, 0x69C(r3)
	  beq-      .loc_0x46C
	  cmpwi     r6, 0x20
	  rlwnm     r31,r0,r31,27,31
	  beq-      .loc_0x4D0
	  lbzx      r30, r8, r31
	  lbzx      r29, r7, r31
	  cmpwi     r30, 0xFF
	  add       r31, r6, r29
	  beq-      .loc_0x53C
	  cmpwi     r31, 0x21
	  bgt-      .loc_0x53C
	  mr        r6, r31
	  b         .loc_0x5B8

	.loc_0x46C:
	  lwzu      r0, 0x4(r12)
	  rlwinm    r31,r0,5,27,31
	  stw       r12, 0x69C(r3)
	  lbzx      r30, r8, r31
	  lbzx      r12, r7, r31
	  cmpwi     r30, 0xFF
	  addi      r6, r12, 0x1
	  beq-      .loc_0x490
	  b         .loc_0x5B8

	.loc_0x490:
	  li        r30, 0x5
	  li        r6, 0x14

	.loc_0x498:
	  subfic    r12, r30, 0x1F
	  addi      r30, r30, 0x1
	  addi      r6, r6, 0x4
	  srw       r31, r0, r12
	  add       r12, r8, r6
	  lwz       r9, 0x44(r12)
	  cmpw      r31, r9
	  bgt+      .loc_0x498
	  lwz       r11, 0x40(r8)
	  addi      r6, r30, 0x1
	  lwz       r9, 0x8C(r12)
	  add       r9, r9, r11
	  lbzx      r30, r31, r9
	  b         .loc_0x5B8

	.loc_0x4D0:
	  lwzu      r0, 0x4(r12)
	  stw       r12, 0x69C(r3)
	  rlwimi    r31,r0,4,28,31
	  lbzx      r30, r8, r31
	  lbzx      r6, r7, r31
	  cmpwi     r30, 0xFF
	  beq-      .loc_0x4F0
	  b         .loc_0x5B8

	.loc_0x4F0:
	  addi      r9, r8, 0x44
	  li        r6, 0x14
	  addi      r9, r9, 0x14
	  rlwinm    r12,r31,27,0,4
	  li        r6, 0x5
	  rlwimi    r12,r0,31,1,31

	.loc_0x508:
	  subfic    r30, r6, 0x1F
	  lwzu      r11, 0x4(r9)
	  srw       r31, r12, r30
	  cmpw      r31, r11
	  addi      r6, r6, 0x1
	  bgt+      .loc_0x508
	  rlwinm    r9,r6,2,0,29
	  lwz       r11, 0x40(r8)
	  add       r9, r8, r9
	  lwz       r9, 0x8C(r9)
	  add       r9, r9, r11
	  lbzx      r30, r31, r9
	  b         .loc_0x5B8

	.loc_0x53C:
	  subfic    r9, r6, 0x21
	  li        r11, -0x1
	  slw       r9, r11, r9
	  andc      r31, r0, r9
	  addi      r9, r8, 0x44
	  lwz       r12, 0x69C(r3)
	  subfic    r11, r6, 0x21
	  addi      r30, r11, 0x1
	  rlwinm    r11,r11,2,0,29
	  lwzu      r0, 0x4(r12)
	  add       r9, r9, r11
	  stw       r12, 0x69C(r3)
	  rlwinm    r31,r31,1,0,30
	  rlwimi    r31,r0,1,31,31
	  lwzu      r11, 0x4(r9)
	  li        r6, 0x2
	  b         .loc_0x594

	.loc_0x580:
	  rlwinm    r31,r31,1,0,30
	  addi      r30, r30, 0x1
	  lwzu      r11, 0x4(r9)
	  add       r31, r31, r29
	  addi      r6, r6, 0x1

	.loc_0x594:
	  cmpw      r31, r11
	  rlwnm     r29,r0,r6,31,31
	  bgt+      .loc_0x580
	  rlwinm    r9,r30,2,0,29
	  lwz       r11, 0x40(r8)
	  add       r9, r8, r9
	  lwz       r9, 0x8C(r9)
	  add       r9, r9, r11
	  lbzx      r30, r31, r9

	.loc_0x5B8:
	  andi.     r29, r30, 0xF
	  srawi     r30, r30, 0x4
	  beq-      .loc_0x648
	  add       r5, r5, r30
	  subfic    r31, r6, 0x21
	  subc.     r12, r29, r31
	  subi      r9, r6, 0x1
	  bgt-      .loc_0x5EC
	  add       r6, r6, r29
	  slw       r11, r0, r9
	  subfic    r9, r29, 0x20
	  srw       r30, r11, r9
	  b         .loc_0x610

	.loc_0x5EC:
	  lwz       r11, 0x69C(r3)
	  slw       r9, r0, r9
	  lwzu      r0, 0x4(r11)
	  addi      r6, r12, 0x1
	  stw       r11, 0x69C(r3)
	  srw       r11, r0, r31
	  add       r9, r11, r9
	  subfic    r12, r29, 0x20
	  srw       r30, r9, r12

	.loc_0x610:
	  cntlzw    r11, r30
	  subfic    r9, r29, 0x20
	  cmpw      r11, r9
	  ble-      .loc_0x630
	  li        r9, -0x1
	  slw       r9, r9, r29
	  add       r30, r9, r30
	  addi      r30, r30, 0x1

	.loc_0x630:
	  add       r9, r10, r5
	  lbz       r9, 0x0(r9)
	  extsh     r11, r30
	  rlwinm    r9,r9,1,0,30
	  sthx      r11, r4, r9
	  b         .loc_0x654

	.loc_0x648:
	  cmpwi     r30, 0xF
	  bne-      .loc_0x660
	  addi      r5, r5, 0xF

	.loc_0x654:
	  addi      r5, r5, 0x1

	.loc_0x658:
	  cmpwi     r5, 0x40
	  blt+      .loc_0x36C

	.loc_0x660:
	  stw       r6, 0x6A4(r3)
	  stw       r0, 0x6A0(r3)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FD8C0
 * Size:	0006A8
 */
void __THPHuffDecodeDCTCompU(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  dcbz      r0, r4
	  lwz       r12, -0x6F60(r13)
	  lwz       r11, 0x6A4(r3)
	  addi      r9, r12, 0x20
	  lwz       r10, 0x6A0(r3)
	  addi      r5, r11, 0x4
	  cmpwi     r11, 0x1C
	  rlwnm     r8,r10,r5,27,31
	  bgt-      .loc_0xF0
	  lbzx      r5, r12, r8
	  lbzx      r9, r9, r8
	  cmpwi     r5, 0xFF
	  beq-      .loc_0x4C
	  add       r11, r11, r9
	  stw       r11, 0x6A4(r3)
	  b         .loc_0x294

	.loc_0x4C:
	  addi      r6, r12, 0x44
	  addi      r11, r11, 0x5
	  li        r0, 0x14
	  li        r5, 0x5
	  addi      r6, r6, 0x14

	.loc_0x60:
	  cmpwi     r11, 0x21
	  rlwinm    r8,r8,1,0,30
	  beq-      .loc_0x80
	  rlwnm     r9,r10,r11,31,31
	  lwzu      r0, 0x4(r6)
	  or        r8, r8, r9
	  addi      r11, r11, 0x1
	  b         .loc_0xC4

	.loc_0x80:
	  lwz       r9, 0x69C(r3)
	  li        r11, 0x1
	  lwzu      r10, 0x4(r9)
	  lwzu      r0, 0x4(r6)
	  stw       r9, 0x69C(r3)
	  rlwimi    r8,r10,1,31,31
	  stw       r10, 0x6A0(r3)
	  b         .loc_0xB0

	.loc_0xA0:
	  rlwinm    r8,r8,1,0,30
	  rlwnm     r9,r10,r11,31,31
	  lwzu      r0, 0x4(r6)
	  or        r8, r8, r9

	.loc_0xB0:
	  cmpw      r8, r0
	  addi      r11, r11, 0x1
	  addi      r5, r5, 0x1
	  bgt+      .loc_0xA0
	  b         .loc_0xD0

	.loc_0xC4:
	  cmpw      r8, r0
	  addi      r5, r5, 0x1
	  bgt+      .loc_0x60

	.loc_0xD0:
	  stw       r11, 0x6A4(r3)
	  rlwinm    r0,r5,2,0,29
	  add       r5, r12, r0
	  lwz       r6, 0x40(r12)
	  lwz       r0, 0x8C(r5)
	  add       r0, r0, r6
	  lbzx      r5, r8, r0
	  b         .loc_0x294

	.loc_0xF0:
	  cmpwi     r11, 0x21
	  lwz       r8, 0x69C(r3)
	  beq-      .loc_0x1AC
	  cmpwi     r11, 0x20
	  rlwnm     r5,r10,r5,27,31
	  beq-      .loc_0x130
	  lbzx      r8, r12, r5
	  lbzx      r9, r9, r5
	  cmpwi     r8, 0xFF
	  add       r5, r11, r9
	  beq-      .loc_0x210
	  cmpwi     r5, 0x21
	  stw       r5, 0x6A4(r3)
	  bgt-      .loc_0x210
	  mr        r5, r8
	  b         .loc_0x294

	.loc_0x130:
	  lwzu      r10, 0x4(r8)
	  stw       r8, 0x69C(r3)
	  rlwimi    r5,r10,4,28,31
	  lbzx      r8, r12, r5
	  lbzx      r9, r9, r5
	  stw       r10, 0x6A0(r3)
	  cmpwi     r8, 0xFF
	  stw       r9, 0x6A4(r3)
	  beq-      .loc_0x15C
	  mr        r5, r8
	  b         .loc_0x294

	.loc_0x15C:
	  addi      r6, r12, 0x44
	  li        r11, 0x14
	  addi      r6, r6, 0x14
	  rlwinm    r8,r5,27,0,4
	  li        r11, 0x5
	  rlwimi    r8,r10,31,1,31

	.loc_0x174:
	  subfic    r10, r11, 0x1F
	  lwzu      r0, 0x4(r6)
	  srw       r5, r8, r10
	  cmpw      r5, r0
	  addi      r11, r11, 0x1
	  bgt+      .loc_0x174
	  stw       r11, 0x6A4(r3)

	.loc_0x190:
	  rlwinm    r0,r11,2,0,29
	  lwz       r7, 0x40(r12)
	  add       r6, r12, r0
	  lwz       r0, 0x8C(r6)
	  add       r0, r0, r7
	  lbzx      r5, r5, r0
	  b         .loc_0x294

	.loc_0x1AC:
	  lwzu      r10, 0x4(r8)
	  rlwinm    r5,r10,5,27,31
	  stw       r8, 0x69C(r3)
	  lbzx      r11, r12, r5
	  lbzx      r9, r9, r5
	  cmpwi     r11, 0xFF
	  stw       r10, 0x6A0(r3)
	  addi      r9, r9, 0x1
	  beq-      .loc_0x1DC
	  stw       r9, 0x6A4(r3)
	  mr        r5, r11
	  b         .loc_0x294

	.loc_0x1DC:
	  li        r11, 0x5
	  li        r6, 0x14

	.loc_0x1E4:
	  subfic    r8, r11, 0x1F
	  addi      r11, r11, 0x1
	  addi      r6, r6, 0x4
	  srw       r5, r10, r8
	  add       r7, r12, r6
	  lwz       r0, 0x44(r7)
	  cmpw      r5, r0
	  bgt+      .loc_0x1E4
	  addi      r0, r11, 0x1
	  stw       r0, 0x6A4(r3)
	  b         .loc_0x190

	.loc_0x210:
	  subfic    r0, r11, 0x21
	  li        r5, -0x1
	  slw       r7, r5, r0
	  andc      r5, r10, r7
	  addi      r7, r12, 0x44
	  lwz       r8, 0x69C(r3)
	  subfic    r6, r11, 0x21
	  addi      r11, r6, 0x1
	  rlwinm    r6,r6,2,0,29
	  lwzu      r10, 0x4(r8)
	  add       r7, r7, r6
	  stw       r8, 0x69C(r3)
	  rlwinm    r5,r5,1,0,30
	  stw       r10, 0x6A0(r3)
	  rlwimi    r5,r10,1,31,31
	  lwzu      r6, 0x4(r7)
	  li        r8, 0x2
	  b         .loc_0x26C

	.loc_0x258:
	  rlwinm    r5,r5,1,0,30
	  addi      r11, r11, 0x1
	  lwzu      r6, 0x4(r7)
	  add       r5, r5, r9
	  addi      r8, r8, 0x1

	.loc_0x26C:
	  cmpw      r5, r6
	  rlwnm     r9,r10,r8,31,31
	  bgt+      .loc_0x258
	  stw       r8, 0x6A4(r3)
	  rlwinm    r0,r11,2,0,29
	  add       r6, r12, r0
	  lwz       r7, 0x40(r12)
	  lwz       r0, 0x8C(r6)
	  add       r0, r0, r7
	  lbzx      r5, r5, r0

	.loc_0x294:
	  li        r0, 0x20
	  dcbz      r4, r0
	  li        r7, 0
	  li        r0, 0x40
	  dcbz      r4, r0
	  cmpwi     r5, 0
	  beq-      .loc_0x330
	  lwz       r9, 0x6A4(r3)
	  subfic    r10, r9, 0x21
	  lwz       r7, 0x6A0(r3)
	  subc.     r11, r5, r10
	  subi      r12, r9, 0x1
	  bgt-      .loc_0x2E0
	  add       r0, r9, r5
	  slw       r9, r7, r12
	  stw       r0, 0x6A4(r3)
	  subfic    r0, r5, 0x20
	  srw       r7, r9, r0
	  b         .loc_0x30C

	.loc_0x2E0:
	  lwz       r9, 0x69C(r3)
	  slw       r0, r7, r12
	  lwzu      r7, 0x4(r9)
	  addi      r11, r11, 0x1
	  stw       r7, 0x6A0(r3)
	  srw       r7, r7, r10
	  stw       r9, 0x69C(r3)
	  add       r0, r7, r0
	  stw       r11, 0x6A4(r3)
	  subfic    r11, r5, 0x20
	  srw       r7, r0, r11

	.loc_0x30C:
	  extsh     r0, r7
	  cntlzw    r6, r0
	  subfic    r0, r5, 0x20
	  cmpw      r6, r0
	  ble-      .loc_0x330
	  li        r0, -0x1
	  slw       r0, r0, r5
	  add       r7, r0, r7
	  addi      r7, r7, 0x1

	.loc_0x330:
	  li        r0, 0x60
	  dcbz      r4, r0
	  lha       r0, 0x68A(r3)
	  lis       r5, 0x8048
	  subi      r8, r5, 0x5B70
	  add       r0, r0, r7
	  sth       r0, 0x68A(r3)
	  li        r6, 0x1
	  sth       r0, 0x0(r4)
	  b         .loc_0x690

	.loc_0x358:
	  lwz       r30, -0x6F00(r13)
	  lwz       r31, 0x6A4(r3)
	  addi      r11, r30, 0x20
	  lwz       r12, 0x6A0(r3)
	  addi      r5, r31, 0x4
	  cmpwi     r31, 0x1C
	  rlwnm     r10,r12,r5,27,31
	  bgt-      .loc_0x438
	  lbzx      r5, r30, r10
	  lbzx      r11, r11, r10
	  cmpwi     r5, 0xFF
	  beq-      .loc_0x394
	  add       r31, r31, r11
	  stw       r31, 0x6A4(r3)
	  b         .loc_0x5DC

	.loc_0x394:
	  addi      r7, r30, 0x44
	  addi      r31, r31, 0x5
	  li        r0, 0x14
	  li        r5, 0x5
	  addi      r7, r7, 0x14

	.loc_0x3A8:
	  cmpwi     r31, 0x21
	  rlwinm    r10,r10,1,0,30
	  beq-      .loc_0x3C8
	  rlwnm     r11,r12,r31,31,31
	  lwzu      r0, 0x4(r7)
	  or        r10, r10, r11
	  addi      r31, r31, 0x1
	  b         .loc_0x40C

	.loc_0x3C8:
	  lwz       r11, 0x69C(r3)
	  li        r31, 0x1
	  lwzu      r12, 0x4(r11)
	  lwzu      r0, 0x4(r7)
	  stw       r11, 0x69C(r3)
	  rlwimi    r10,r12,1,31,31
	  stw       r12, 0x6A0(r3)
	  b         .loc_0x3F8

	.loc_0x3E8:
	  rlwinm    r10,r10,1,0,30
	  rlwnm     r11,r12,r31,31,31
	  lwzu      r0, 0x4(r7)
	  or        r10, r10, r11

	.loc_0x3F8:
	  cmpw      r10, r0
	  addi      r31, r31, 0x1
	  addi      r5, r5, 0x1
	  bgt+      .loc_0x3E8
	  b         .loc_0x418

	.loc_0x40C:
	  cmpw      r10, r0
	  addi      r5, r5, 0x1
	  bgt+      .loc_0x3A8

	.loc_0x418:
	  stw       r31, 0x6A4(r3)
	  rlwinm    r0,r5,2,0,29
	  add       r5, r30, r0
	  lwz       r7, 0x40(r30)
	  lwz       r0, 0x8C(r5)
	  add       r0, r0, r7
	  lbzx      r5, r10, r0
	  b         .loc_0x5DC

	.loc_0x438:
	  cmpwi     r31, 0x21
	  lwz       r10, 0x69C(r3)
	  beq-      .loc_0x4F4
	  cmpwi     r31, 0x20
	  rlwnm     r5,r12,r5,27,31
	  beq-      .loc_0x478
	  lbzx      r10, r30, r5
	  lbzx      r11, r11, r5
	  cmpwi     r10, 0xFF
	  add       r5, r31, r11
	  beq-      .loc_0x558
	  cmpwi     r5, 0x21
	  stw       r5, 0x6A4(r3)
	  bgt-      .loc_0x558
	  mr        r5, r10
	  b         .loc_0x5DC

	.loc_0x478:
	  lwzu      r12, 0x4(r10)
	  stw       r10, 0x69C(r3)
	  rlwimi    r5,r12,4,28,31
	  lbzx      r10, r30, r5
	  lbzx      r11, r11, r5
	  stw       r12, 0x6A0(r3)
	  cmpwi     r10, 0xFF
	  stw       r11, 0x6A4(r3)
	  beq-      .loc_0x4A4
	  mr        r5, r10
	  b         .loc_0x5DC

	.loc_0x4A4:
	  addi      r7, r30, 0x44
	  li        r31, 0x14
	  addi      r7, r7, 0x14
	  rlwinm    r10,r5,27,0,4
	  li        r31, 0x5
	  rlwimi    r10,r12,31,1,31

	.loc_0x4BC:
	  subfic    r12, r31, 0x1F
	  lwzu      r0, 0x4(r7)
	  srw       r5, r10, r12
	  cmpw      r5, r0
	  addi      r31, r31, 0x1
	  bgt+      .loc_0x4BC
	  stw       r31, 0x6A4(r3)

	.loc_0x4D8:
	  rlwinm    r0,r31,2,0,29
	  lwz       r9, 0x40(r30)
	  add       r7, r30, r0
	  lwz       r0, 0x8C(r7)
	  add       r0, r0, r9
	  lbzx      r5, r5, r0
	  b         .loc_0x5DC

	.loc_0x4F4:
	  lwzu      r12, 0x4(r10)
	  rlwinm    r5,r12,5,27,31
	  stw       r10, 0x69C(r3)
	  lbzx      r31, r30, r5
	  lbzx      r11, r11, r5
	  cmpwi     r31, 0xFF
	  stw       r12, 0x6A0(r3)
	  addi      r11, r11, 0x1
	  beq-      .loc_0x524
	  stw       r11, 0x6A4(r3)
	  mr        r5, r31
	  b         .loc_0x5DC

	.loc_0x524:
	  li        r31, 0x5
	  li        r7, 0x14

	.loc_0x52C:
	  subfic    r10, r31, 0x1F
	  addi      r31, r31, 0x1
	  addi      r7, r7, 0x4
	  srw       r5, r12, r10
	  add       r9, r30, r7
	  lwz       r0, 0x44(r9)
	  cmpw      r5, r0
	  bgt+      .loc_0x52C
	  addi      r0, r31, 0x1
	  stw       r0, 0x6A4(r3)
	  b         .loc_0x4D8

	.loc_0x558:
	  subfic    r0, r31, 0x21
	  li        r5, -0x1
	  slw       r9, r5, r0
	  andc      r5, r12, r9
	  addi      r9, r30, 0x44
	  lwz       r10, 0x69C(r3)
	  subfic    r7, r31, 0x21
	  addi      r31, r7, 0x1
	  rlwinm    r7,r7,2,0,29
	  lwzu      r12, 0x4(r10)
	  add       r9, r9, r7
	  stw       r10, 0x69C(r3)
	  rlwinm    r5,r5,1,0,30
	  stw       r12, 0x6A0(r3)
	  rlwimi    r5,r12,1,31,31
	  lwzu      r7, 0x4(r9)
	  li        r10, 0x2
	  b         .loc_0x5B4

	.loc_0x5A0:
	  rlwinm    r5,r5,1,0,30
	  addi      r31, r31, 0x1
	  lwzu      r7, 0x4(r9)
	  add       r5, r5, r11
	  addi      r10, r10, 0x1

	.loc_0x5B4:
	  cmpw      r5, r7
	  rlwnm     r11,r12,r10,31,31
	  bgt+      .loc_0x5A0
	  stw       r10, 0x6A4(r3)
	  rlwinm    r0,r31,2,0,29
	  add       r7, r30, r0
	  lwz       r9, 0x40(r30)
	  lwz       r0, 0x8C(r7)
	  add       r0, r0, r9
	  lbzx      r5, r5, r0

	.loc_0x5DC:
	  rlwinm.   r30,r5,0,28,31
	  srawi     r7, r5, 0x4
	  beq-      .loc_0x680
	  add       r6, r6, r7
	  lwz       r9, 0x6A4(r3)
	  subfic    r10, r9, 0x21
	  lwz       r7, 0x6A0(r3)
	  sub.      r11, r30, r10
	  subi      r12, r9, 0x1
	  bgt-      .loc_0x61C
	  add       r0, r9, r30
	  slw       r9, r7, r12
	  stw       r0, 0x6A4(r3)
	  subfic    r0, r30, 0x20
	  srw       r7, r9, r0
	  b         .loc_0x648

	.loc_0x61C:
	  lwz       r9, 0x69C(r3)
	  slw       r0, r7, r12
	  lwzu      r7, 0x4(r9)
	  addi      r11, r11, 0x1
	  stw       r7, 0x6A0(r3)
	  srw       r7, r7, r10
	  stw       r9, 0x69C(r3)
	  add       r0, r7, r0
	  stw       r11, 0x6A4(r3)
	  subfic    r11, r30, 0x20
	  srw       r7, r0, r11

	.loc_0x648:
	  cntlzw    r5, r7
	  subfic    r0, r30, 0x20
	  cmpw      r5, r0
	  ble-      .loc_0x668
	  li        r0, -0x1
	  slw       r0, r0, r30
	  add       r7, r0, r7
	  addi      r7, r7, 0x1

	.loc_0x668:
	  add       r5, r8, r6
	  lbz       r0, 0x0(r5)
	  extsh     r5, r7
	  rlwinm    r0,r0,1,0,30
	  sthx      r5, r4, r0
	  b         .loc_0x68C

	.loc_0x680:
	  cmpwi     r7, 0xF
	  bne-      .loc_0x698
	  addi      r6, r6, 0xF

	.loc_0x68C:
	  addi      r6, r6, 0x1

	.loc_0x690:
	  cmpwi     r6, 0x40
	  blt+      .loc_0x358

	.loc_0x698:
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FDF68
 * Size:	0006A8
 */
void __THPHuffDecodeDCTCompV(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  dcbz      r0, r4
	  lwz       r12, -0x6F40(r13)
	  lwz       r11, 0x6A4(r3)
	  addi      r9, r12, 0x20
	  lwz       r10, 0x6A0(r3)
	  addi      r5, r11, 0x4
	  cmpwi     r11, 0x1C
	  rlwnm     r8,r10,r5,27,31
	  bgt-      .loc_0xF0
	  lbzx      r5, r12, r8
	  lbzx      r9, r9, r8
	  cmpwi     r5, 0xFF
	  beq-      .loc_0x4C
	  add       r11, r11, r9
	  stw       r11, 0x6A4(r3)
	  b         .loc_0x294

	.loc_0x4C:
	  addi      r6, r12, 0x44
	  addi      r11, r11, 0x5
	  li        r0, 0x14
	  li        r5, 0x5
	  addi      r6, r6, 0x14

	.loc_0x60:
	  cmpwi     r11, 0x21
	  rlwinm    r8,r8,1,0,30
	  beq-      .loc_0x80
	  rlwnm     r9,r10,r11,31,31
	  lwzu      r0, 0x4(r6)
	  or        r8, r8, r9
	  addi      r11, r11, 0x1
	  b         .loc_0xC4

	.loc_0x80:
	  lwz       r9, 0x69C(r3)
	  li        r11, 0x1
	  lwzu      r10, 0x4(r9)
	  lwzu      r0, 0x4(r6)
	  stw       r9, 0x69C(r3)
	  rlwimi    r8,r10,1,31,31
	  stw       r10, 0x6A0(r3)
	  b         .loc_0xB0

	.loc_0xA0:
	  rlwinm    r8,r8,1,0,30
	  rlwnm     r9,r10,r11,31,31
	  lwzu      r0, 0x4(r6)
	  or        r8, r8, r9

	.loc_0xB0:
	  cmpw      r8, r0
	  addi      r11, r11, 0x1
	  addi      r5, r5, 0x1
	  bgt+      .loc_0xA0
	  b         .loc_0xD0

	.loc_0xC4:
	  cmpw      r8, r0
	  addi      r5, r5, 0x1
	  bgt+      .loc_0x60

	.loc_0xD0:
	  stw       r11, 0x6A4(r3)
	  rlwinm    r0,r5,2,0,29
	  add       r5, r12, r0
	  lwz       r6, 0x40(r12)
	  lwz       r0, 0x8C(r5)
	  add       r0, r0, r6
	  lbzx      r5, r8, r0
	  b         .loc_0x294

	.loc_0xF0:
	  cmpwi     r11, 0x21
	  lwz       r8, 0x69C(r3)
	  beq-      .loc_0x1AC
	  cmpwi     r11, 0x20
	  rlwnm     r5,r10,r5,27,31
	  beq-      .loc_0x130
	  lbzx      r8, r12, r5
	  lbzx      r9, r9, r5
	  cmpwi     r8, 0xFF
	  add       r5, r11, r9
	  beq-      .loc_0x210
	  cmpwi     r5, 0x21
	  stw       r5, 0x6A4(r3)
	  bgt-      .loc_0x210
	  mr        r5, r8
	  b         .loc_0x294

	.loc_0x130:
	  lwzu      r10, 0x4(r8)
	  stw       r8, 0x69C(r3)
	  rlwimi    r5,r10,4,28,31
	  lbzx      r8, r12, r5
	  lbzx      r9, r9, r5
	  stw       r10, 0x6A0(r3)
	  cmpwi     r8, 0xFF
	  stw       r9, 0x6A4(r3)
	  beq-      .loc_0x15C
	  mr        r5, r8
	  b         .loc_0x294

	.loc_0x15C:
	  addi      r6, r12, 0x44
	  li        r11, 0x14
	  addi      r6, r6, 0x14
	  rlwinm    r8,r5,27,0,4
	  li        r11, 0x5
	  rlwimi    r8,r10,31,1,31

	.loc_0x174:
	  subfic    r10, r11, 0x1F
	  lwzu      r0, 0x4(r6)
	  srw       r5, r8, r10
	  cmpw      r5, r0
	  addi      r11, r11, 0x1
	  bgt+      .loc_0x174
	  stw       r11, 0x6A4(r3)

	.loc_0x190:
	  rlwinm    r0,r11,2,0,29
	  lwz       r7, 0x40(r12)
	  add       r6, r12, r0
	  lwz       r0, 0x8C(r6)
	  add       r0, r0, r7
	  lbzx      r5, r5, r0
	  b         .loc_0x294

	.loc_0x1AC:
	  lwzu      r10, 0x4(r8)
	  rlwinm    r5,r10,5,27,31
	  stw       r8, 0x69C(r3)
	  lbzx      r11, r12, r5
	  lbzx      r9, r9, r5
	  cmpwi     r11, 0xFF
	  stw       r10, 0x6A0(r3)
	  addi      r9, r9, 0x1
	  beq-      .loc_0x1DC
	  stw       r9, 0x6A4(r3)
	  mr        r5, r11
	  b         .loc_0x294

	.loc_0x1DC:
	  li        r11, 0x5
	  li        r6, 0x14

	.loc_0x1E4:
	  subfic    r8, r11, 0x1F
	  addi      r11, r11, 0x1
	  addi      r6, r6, 0x4
	  srw       r5, r10, r8
	  add       r7, r12, r6
	  lwz       r0, 0x44(r7)
	  cmpw      r5, r0
	  bgt+      .loc_0x1E4
	  addi      r0, r11, 0x1
	  stw       r0, 0x6A4(r3)
	  b         .loc_0x190

	.loc_0x210:
	  subfic    r0, r11, 0x21
	  li        r5, -0x1
	  slw       r7, r5, r0
	  andc      r5, r10, r7
	  addi      r7, r12, 0x44
	  lwz       r8, 0x69C(r3)
	  subfic    r6, r11, 0x21
	  addi      r11, r6, 0x1
	  rlwinm    r6,r6,2,0,29
	  lwzu      r10, 0x4(r8)
	  add       r7, r7, r6
	  stw       r8, 0x69C(r3)
	  rlwinm    r5,r5,1,0,30
	  stw       r10, 0x6A0(r3)
	  rlwimi    r5,r10,1,31,31
	  lwzu      r6, 0x4(r7)
	  li        r8, 0x2
	  b         .loc_0x26C

	.loc_0x258:
	  rlwinm    r5,r5,1,0,30
	  addi      r11, r11, 0x1
	  lwzu      r6, 0x4(r7)
	  add       r5, r5, r9
	  addi      r8, r8, 0x1

	.loc_0x26C:
	  cmpw      r5, r6
	  rlwnm     r9,r10,r8,31,31
	  bgt+      .loc_0x258
	  stw       r8, 0x6A4(r3)
	  rlwinm    r0,r11,2,0,29
	  add       r6, r12, r0
	  lwz       r7, 0x40(r12)
	  lwz       r0, 0x8C(r6)
	  add       r0, r0, r7
	  lbzx      r5, r5, r0

	.loc_0x294:
	  li        r0, 0x20
	  dcbz      r4, r0
	  li        r7, 0
	  li        r0, 0x40
	  dcbz      r4, r0
	  cmpwi     r5, 0
	  beq-      .loc_0x330
	  lwz       r9, 0x6A4(r3)
	  subfic    r10, r9, 0x21
	  lwz       r7, 0x6A0(r3)
	  sub.      r11, r5, r10
	  subi      r12, r9, 0x1
	  bgt-      .loc_0x2E0
	  add       r0, r9, r5
	  slw       r9, r7, r12
	  stw       r0, 0x6A4(r3)
	  subfic    r0, r5, 0x20
	  srw       r7, r9, r0
	  b         .loc_0x30C

	.loc_0x2E0:
	  lwz       r9, 0x69C(r3)
	  slw       r0, r7, r12
	  lwzu      r7, 0x4(r9)
	  addi      r11, r11, 0x1
	  stw       r7, 0x6A0(r3)
	  srw       r7, r7, r10
	  stw       r9, 0x69C(r3)
	  add       r0, r7, r0
	  stw       r11, 0x6A4(r3)
	  subfic    r11, r5, 0x20
	  srw       r7, r0, r11

	.loc_0x30C:
	  extsh     r0, r7
	  cntlzw    r6, r0
	  subfic    r0, r5, 0x20
	  cmpw      r6, r0
	  ble-      .loc_0x330
	  li        r0, -0x1
	  slw       r0, r0, r5
	  add       r7, r0, r7
	  addi      r7, r7, 0x1

	.loc_0x330:
	  li        r0, 0x60
	  dcbz      r4, r0
	  lha       r0, 0x690(r3)
	  lis       r5, 0x8048
	  subi      r8, r5, 0x5B70
	  add       r0, r0, r7
	  sth       r0, 0x690(r3)
	  li        r6, 0x1
	  sth       r0, 0x0(r4)
	  b         .loc_0x690

	.loc_0x358:
	  lwz       r30, -0x6EE0(r13)
	  lwz       r31, 0x6A4(r3)
	  addi      r11, r30, 0x20
	  lwz       r12, 0x6A0(r3)
	  addi      r5, r31, 0x4
	  cmpwi     r31, 0x1C
	  rlwnm     r10,r12,r5,27,31
	  bgt-      .loc_0x438
	  lbzx      r5, r30, r10
	  lbzx      r11, r11, r10
	  cmpwi     r5, 0xFF
	  beq-      .loc_0x394
	  add       r31, r31, r11
	  stw       r31, 0x6A4(r3)
	  b         .loc_0x5DC

	.loc_0x394:
	  addi      r7, r30, 0x44
	  addi      r31, r31, 0x5
	  li        r0, 0x14
	  li        r5, 0x5
	  addi      r7, r7, 0x14

	.loc_0x3A8:
	  cmpwi     r31, 0x21
	  rlwinm    r10,r10,1,0,30
	  beq-      .loc_0x3C8
	  rlwnm     r11,r12,r31,31,31
	  lwzu      r0, 0x4(r7)
	  or        r10, r10, r11
	  addi      r31, r31, 0x1
	  b         .loc_0x40C

	.loc_0x3C8:
	  lwz       r11, 0x69C(r3)
	  li        r31, 0x1
	  lwzu      r12, 0x4(r11)
	  lwzu      r0, 0x4(r7)
	  stw       r11, 0x69C(r3)
	  rlwimi    r10,r12,1,31,31
	  stw       r12, 0x6A0(r3)
	  b         .loc_0x3F8

	.loc_0x3E8:
	  rlwinm    r10,r10,1,0,30
	  rlwnm     r11,r12,r31,31,31
	  lwzu      r0, 0x4(r7)
	  or        r10, r10, r11

	.loc_0x3F8:
	  cmpw      r10, r0
	  addi      r31, r31, 0x1
	  addi      r5, r5, 0x1
	  bgt+      .loc_0x3E8
	  b         .loc_0x418

	.loc_0x40C:
	  cmpw      r10, r0
	  addi      r5, r5, 0x1
	  bgt+      .loc_0x3A8

	.loc_0x418:
	  stw       r31, 0x6A4(r3)
	  rlwinm    r0,r5,2,0,29
	  add       r5, r30, r0
	  lwz       r7, 0x40(r30)
	  lwz       r0, 0x8C(r5)
	  add       r0, r0, r7
	  lbzx      r5, r10, r0
	  b         .loc_0x5DC

	.loc_0x438:
	  cmpwi     r31, 0x21
	  lwz       r10, 0x69C(r3)
	  beq-      .loc_0x4F4
	  cmpwi     r31, 0x20
	  rlwnm     r5,r12,r5,27,31
	  beq-      .loc_0x478
	  lbzx      r10, r30, r5
	  lbzx      r11, r11, r5
	  cmpwi     r10, 0xFF
	  add       r5, r31, r11
	  beq-      .loc_0x558
	  cmpwi     r5, 0x21
	  stw       r5, 0x6A4(r3)
	  bgt-      .loc_0x558
	  mr        r5, r10
	  b         .loc_0x5DC

	.loc_0x478:
	  lwzu      r12, 0x4(r10)
	  stw       r10, 0x69C(r3)
	  rlwimi    r5,r12,4,28,31
	  lbzx      r10, r30, r5
	  lbzx      r11, r11, r5
	  stw       r12, 0x6A0(r3)
	  cmpwi     r10, 0xFF
	  stw       r11, 0x6A4(r3)
	  beq-      .loc_0x4A4
	  mr        r5, r10
	  b         .loc_0x5DC

	.loc_0x4A4:
	  addi      r7, r30, 0x44
	  li        r31, 0x14
	  addi      r7, r7, 0x14
	  rlwinm    r10,r5,27,0,4
	  li        r31, 0x5
	  rlwimi    r10,r12,31,1,31

	.loc_0x4BC:
	  subfic    r12, r31, 0x1F
	  lwzu      r0, 0x4(r7)
	  srw       r5, r10, r12
	  cmpw      r5, r0
	  addi      r31, r31, 0x1
	  bgt+      .loc_0x4BC
	  stw       r31, 0x6A4(r3)

	.loc_0x4D8:
	  rlwinm    r0,r31,2,0,29
	  lwz       r9, 0x40(r30)
	  add       r7, r30, r0
	  lwz       r0, 0x8C(r7)
	  add       r0, r0, r9
	  lbzx      r5, r5, r0
	  b         .loc_0x5DC

	.loc_0x4F4:
	  lwzu      r12, 0x4(r10)
	  rlwinm    r5,r12,5,27,31
	  stw       r10, 0x69C(r3)
	  lbzx      r31, r30, r5
	  lbzx      r11, r11, r5
	  cmpwi     r31, 0xFF
	  stw       r12, 0x6A0(r3)
	  addi      r11, r11, 0x1
	  beq-      .loc_0x524
	  stw       r11, 0x6A4(r3)
	  mr        r5, r31
	  b         .loc_0x5DC

	.loc_0x524:
	  li        r31, 0x5
	  li        r7, 0x14

	.loc_0x52C:
	  subfic    r10, r31, 0x1F
	  addi      r31, r31, 0x1
	  addi      r7, r7, 0x4
	  srw       r5, r12, r10
	  add       r9, r30, r7
	  lwz       r0, 0x44(r9)
	  cmpw      r5, r0
	  bgt+      .loc_0x52C
	  addi      r0, r31, 0x1
	  stw       r0, 0x6A4(r3)
	  b         .loc_0x4D8

	.loc_0x558:
	  subfic    r0, r31, 0x21
	  li        r5, -0x1
	  slw       r9, r5, r0
	  andc      r5, r12, r9
	  addi      r9, r30, 0x44
	  lwz       r10, 0x69C(r3)
	  subfic    r7, r31, 0x21
	  addi      r31, r7, 0x1
	  rlwinm    r7,r7,2,0,29
	  lwzu      r12, 0x4(r10)
	  add       r9, r9, r7
	  stw       r10, 0x69C(r3)
	  rlwinm    r5,r5,1,0,30
	  stw       r12, 0x6A0(r3)
	  rlwimi    r5,r12,1,31,31
	  lwzu      r7, 0x4(r9)
	  li        r10, 0x2
	  b         .loc_0x5B4

	.loc_0x5A0:
	  rlwinm    r5,r5,1,0,30
	  addi      r31, r31, 0x1
	  lwzu      r7, 0x4(r9)
	  add       r5, r5, r11
	  addi      r10, r10, 0x1

	.loc_0x5B4:
	  cmpw      r5, r7
	  rlwnm     r11,r12,r10,31,31
	  bgt+      .loc_0x5A0
	  stw       r10, 0x6A4(r3)
	  rlwinm    r0,r31,2,0,29
	  add       r7, r30, r0
	  lwz       r9, 0x40(r30)
	  lwz       r0, 0x8C(r7)
	  add       r0, r0, r9
	  lbzx      r5, r5, r0

	.loc_0x5DC:
	  rlwinm.   r30,r5,0,28,31
	  srawi     r7, r5, 0x4
	  beq-      .loc_0x680
	  add       r6, r6, r7
	  lwz       r9, 0x6A4(r3)
	  subfic    r10, r9, 0x21
	  lwz       r7, 0x6A0(r3)
	  sub.      r11, r30, r10
	  subi      r12, r9, 0x1
	  bgt-      .loc_0x61C
	  add       r0, r9, r30
	  slw       r9, r7, r12
	  stw       r0, 0x6A4(r3)
	  subfic    r0, r30, 0x20
	  srw       r7, r9, r0
	  b         .loc_0x648

	.loc_0x61C:
	  lwz       r9, 0x69C(r3)
	  slw       r0, r7, r12
	  lwzu      r7, 0x4(r9)
	  addi      r11, r11, 0x1
	  stw       r7, 0x6A0(r3)
	  srw       r7, r7, r10
	  stw       r9, 0x69C(r3)
	  add       r0, r7, r0
	  stw       r11, 0x6A4(r3)
	  subfic    r11, r30, 0x20
	  srw       r7, r0, r11

	.loc_0x648:
	  cntlzw    r5, r7
	  subfic    r0, r30, 0x20
	  cmpw      r5, r0
	  ble-      .loc_0x668
	  li        r0, -0x1
	  slw       r0, r0, r30
	  add       r7, r0, r7
	  addi      r7, r7, 0x1

	.loc_0x668:
	  add       r5, r8, r6
	  lbz       r0, 0x0(r5)
	  extsh     r5, r7
	  rlwinm    r0,r0,1,0,30
	  sthx      r5, r4, r0
	  b         .loc_0x68C

	.loc_0x680:
	  cmpwi     r7, 0xF
	  bne-      .loc_0x698
	  addi      r6, r6, 0xF

	.loc_0x68C:
	  addi      r6, r6, 0x1

	.loc_0x690:
	  cmpwi     r6, 0x40
	  blt+      .loc_0x358

	.loc_0x698:
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FE610
 * Size:	0000A0
 */
void THPInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x7380
	  lwz       r3, -0x7C50(r13)
	  bl        -0x12BA4
	  lis       r4, 0xE000
	  stw       r4, 0x100(r31)
	  addi      r4, r4, 0x2000
	  stw       r4, 0x104(r31)
	  addi      r4, r4, 0x800
	  stw       r4, 0x108(r31)
	  lis       r4, 0xE000
	  stw       r4, 0x10C(r31)
	  addi      r4, r4, 0x2A00
	  stw       r4, 0x110(r31)
	  addi      r4, r4, 0xA80
	  stw       r4, 0x114(r31)
	  li        r3, 0x4
	  oris      r3, r3, 0x4
	  mtspr     914, r3
	  li        r3, 0x5
	  oris      r3, r3, 0x5
	  mtspr     915, r3
	  li        r3, 0x6
	  oris      r3, r3, 0x6
	  mtspr     916, r3
	  li        r3, 0x7
	  oris      r3, r3, 0x7
	  mtspr     917, r3
	  li        r0, 0x1
	  stw       r0, -0x6E6C(r13)
	  li        r3, 0x1
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}
