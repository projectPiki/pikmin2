

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JUTDirectPrint::JUTDirectPrint()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80029BCC
 * Size:	000074
 */
void JUTDirectPrint::start()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r0, -0x7778(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  li        r3, 0x2C
	  bl        -0x5D48
	  mr.       r31, r3
	  beq-      .loc_0x58
	  li        r0, -0x1
	  li        r4, 0
	  stw       r0, 0x18(r31)
	  li        r5, 0
	  li        r6, 0
	  bl        0x380
	  mr        r3, r31
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0xFF
	  bl        0x570

	.loc_0x58:
	  stw       r31, -0x7778(r13)

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r3, -0x7778(r13)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80029C40
 * Size:	0000F8
 */
void JUTDirectPrint::erase(int, int, int, int)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beqlr-
	  lhz       r0, 0x4(r3)
	  cmplwi    r0, 0x190
	  ble-      .loc_0x20
	  rlwinm    r4,r4,1,0,30
	  rlwinm    r6,r6,1,0,30

	.loc_0x20:
	  lhz       r0, 0x6(r3)
	  cmplwi    r0, 0x12C
	  ble-      .loc_0x34
	  rlwinm    r5,r5,1,0,30
	  rlwinm    r7,r7,1,0,30

	.loc_0x34:
	  lhz       r8, 0x8(r3)
	  rlwinm    r0,r4,1,0,30
	  lwz       r9, 0x14(r3)
	  li        r10, 0
	  mullw     r4, r8, r5
	  rlwinm    r4,r4,1,0,30
	  add       r8, r4, r0
	  add       r8, r9, r8
	  b         .loc_0xEC

	.loc_0x58:
	  cmpwi     r6, 0
	  li        r9, 0
	  ble-      .loc_0xD8
	  cmpwi     r6, 0x8
	  subi      r5, r6, 0x8
	  ble-      .loc_0xB4
	  addi      r0, r5, 0x7
	  li        r4, 0x1080
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r5, 0
	  ble-      .loc_0xB4

	.loc_0x88:
	  sth       r4, 0x0(r8)
	  addi      r9, r9, 0x8
	  sth       r4, 0x2(r8)
	  sth       r4, 0x4(r8)
	  sth       r4, 0x6(r8)
	  sth       r4, 0x8(r8)
	  sth       r4, 0xA(r8)
	  sth       r4, 0xC(r8)
	  sth       r4, 0xE(r8)
	  addi      r8, r8, 0x10
	  bdnz+     .loc_0x88

	.loc_0xB4:
	  sub       r0, r6, r9
	  li        r4, 0x1080
	  mtctr     r0
	  cmpw      r9, r6
	  bge-      .loc_0xD8

	.loc_0xC8:
	  sth       r4, 0x0(r8)
	  addi      r8, r8, 0x2
	  addi      r9, r9, 0x1
	  bdnz+     .loc_0xC8

	.loc_0xD8:
	  lhz       r0, 0x8(r3)
	  addi      r10, r10, 0x1
	  sub       r0, r0, r6
	  rlwinm    r0,r0,1,0,30
	  add       r8, r8, r0

	.loc_0xEC:
	  cmpw      r10, r7
	  blt+      .loc_0x58
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80029D38
 * Size:	000254
 */
void JUTDirectPrint::drawChar(int, int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r7, 0x804A
	  cmpwi     r6, 0x64
	  mr        r9, r6
	  stmw      r27, 0xC(r1)
	  addi      r7, r7, 0xE0
	  blt-      .loc_0x20
	  subi      r9, r6, 0x64

	.loc_0x20:
	  lis       r8, 0x6666
	  cmpwi     r6, 0x64
	  addi      r0, r8, 0x6667
	  addi      r30, r7, 0x180
	  mulhw     r0, r0, r9
	  srawi     r6, r0, 0x1
	  rlwinm    r8,r6,1,31,31
	  srawi     r0, r0, 0x1
	  add       r6, r6, r8
	  mulli     r8, r6, 0x5
	  rlwinm    r6,r0,1,31,31
	  add       r0, r0, r6
	  mulli     r0, r0, 0x7
	  sub       r6, r9, r8
	  rlwinm    r0,r0,2,0,29
	  mulli     r8, r6, 0x6
	  add       r30, r30, r0
	  bge-      .loc_0x70
	  addi      r30, r7, 0x80
	  add       r30, r30, r0

	.loc_0x70:
	  lhz       r0, 0x8(r3)
	  li        r9, 0x190
	  lhz       r11, 0x4(r3)
	  li        r10, 0x12C
	  mullw     r6, r0, r5
	  lhz       r0, 0x6(r3)
	  subc      r5, r11, r9
	  lwz       r12, 0x14(r3)
	  mr        r9, r30
	  subfe     r5, r5, r5
	  addi      r5, r5, 0x2
	  subc      r0, r0, r10
	  subfe     r10, r0, r0
	  li        r11, 0
	  addi      r0, r10, 0x2
	  mullw     r6, r0, r6
	  mullw     r4, r4, r5
	  rlwinm    r6,r6,1,0,30
	  rlwinm    r4,r4,1,0,30
	  add       r10, r6, r4
	  mulli     r4, r5, 0x6
	  add       r10, r12, r10

	.loc_0xC8:
	  lwz       r6, 0x0(r9)
	  cmpwi     r5, 0x1
	  addi      r9, r9, 0x4
	  slw       r12, r6, r8
	  bne-      .loc_0xE4
	  rlwinm    r6,r12,31,1,6
	  b         .loc_0x114

	.loc_0xE4:
	  addi      r30, r7, 0x2B4
	  rlwinm    r6,r12,6,28,29
	  rlwinm    r31,r12,4,28,29
	  rlwinm    r12,r12,8,28,29
	  lwzx      r6, r30, r6
	  lwzx      r31, r30, r31
	  lwzx      r12, r30, r12
	  rlwinm    r6,r6,4,0,27
	  rlwinm    r31,r31,8,0,23
	  or        r6, r12, r6
	  or        r6, r31, r6
	  rlwinm    r6,r6,19,0,12

	.loc_0x114:
	  addi      r12, r4, 0x1
	  rlwinm    r12,r12,31,1,31
	  mtctr     r12
	  cmpwi     r4, 0
	  ble-      .loc_0x228

	.loc_0x128:
	  rlwinm.   r28,r6,0,1,1
	  beq-      .loc_0x138
	  lhz       r30, 0x20(r3)
	  b         .loc_0x13C

	.loc_0x138:
	  li        r30, 0x40

	.loc_0x13C:
	  rlwinm.   r12,r6,0,0,0
	  beq-      .loc_0x14C
	  lhz       r29, 0x22(r3)
	  b         .loc_0x150

	.loc_0x14C:
	  li        r29, 0x20

	.loc_0x150:
	  rlwinm.   r27,r6,0,2,2
	  beq-      .loc_0x160
	  lhz       r12, 0x22(r3)
	  b         .loc_0x164

	.loc_0x160:
	  li        r12, 0x20

	.loc_0x164:
	  cmplwi    r28, 0
	  beq-      .loc_0x174
	  lhz       r31, 0x1C(r3)
	  b         .loc_0x178

	.loc_0x174:
	  li        r31, 0

	.loc_0x178:
	  add       r12, r30, r12
	  cmpwi     r0, 0x1
	  add       r12, r29, r12
	  or        r12, r31, r12
	  sth       r12, 0x0(r10)
	  rlwinm    r29,r12,0,16,31
	  ble-      .loc_0x1A0
	  lhz       r12, 0x8(r3)
	  rlwinm    r12,r12,1,0,30
	  sthx      r29, r10, r12

	.loc_0x1A0:
	  cmplwi    r27, 0
	  beq-      .loc_0x1B0
	  lhz       r29, 0x26(r3)
	  b         .loc_0x1B4

	.loc_0x1B0:
	  li        r29, 0x40

	.loc_0x1B4:
	  cmplwi    r28, 0
	  beq-      .loc_0x1C4
	  lhz       r30, 0x28(r3)
	  b         .loc_0x1C8

	.loc_0x1C4:
	  li        r30, 0x20

	.loc_0x1C8:
	  rlwinm.   r12,r6,0,3,3
	  beq-      .loc_0x1D8
	  lhz       r12, 0x28(r3)
	  b         .loc_0x1DC

	.loc_0x1D8:
	  li        r12, 0x20

	.loc_0x1DC:
	  cmplwi    r27, 0
	  beq-      .loc_0x1EC
	  lhz       r31, 0x1C(r3)
	  b         .loc_0x1F0

	.loc_0x1EC:
	  li        r31, 0

	.loc_0x1F0:
	  add       r12, r29, r12
	  cmpwi     r0, 0x1
	  add       r12, r30, r12
	  or        r12, r31, r12
	  sth       r12, 0x2(r10)
	  rlwinm    r27,r12,0,16,31
	  ble-      .loc_0x21C
	  lhz       r12, 0x8(r3)
	  rlwinm    r12,r12,1,0,30
	  addi      r12, r12, 0x2
	  sthx      r27, r10, r12

	.loc_0x21C:
	  rlwinm    r6,r6,2,0,29
	  addi      r10, r10, 0x4
	  bdnz+     .loc_0x128

	.loc_0x228:
	  lhz       r6, 0x8(r3)
	  addi      r11, r11, 0x1
	  cmpwi     r11, 0x7
	  mullw     r6, r6, r0
	  sub       r6, r6, r4
	  rlwinm    r6,r6,1,0,30
	  add       r10, r10, r6
	  blt+      .loc_0xC8
	  lmw       r27, 0xC(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80029F8C
 * Size:	000034
 */
void JUTDirectPrint::changeFrameBuffer(void*, unsigned short, unsigned short)
{
	/*
	.loc_0x0:
	  stw       r4, 0x0(r3)
	  addi      r0, r5, 0xF
	  rlwinm    r0,r0,0,16,27
	  stw       r4, 0x14(r3)
	  sth       r5, 0x4(r3)
	  sth       r6, 0x6(r3)
	  sth       r0, 0x8(r3)
	  lhz       r4, 0x8(r3)
	  lhz       r0, 0x6(r3)
	  mullw     r0, r4, r0
	  rlwinm    r0,r0,1,0,30
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000228
 */
void JUTDirectPrint::printSub(unsigned short, unsigned short, const char*,
                              __va_list_struct*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000280
 */
void JUTDirectPrint::print(unsigned short, unsigned short, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80029FC0
 * Size:	00002C
 */
void JUTDirectPrint::drawString(unsigned short, unsigned short, char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r7, r6
	  subi      r6, r2, 0x7DB0
	  stw       r0, 0x14(r1)
	  crclr     6, 0x6
	  bl        .loc_0x2C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x2C:
	*/
}

/*
 * --INFO--
 * Address:	80029FEC
 * Size:	000174
 */
void JUTDirectPrint::drawString_f(unsigned short, unsigned short, const char*,
                                  ...)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1A0(r1)
	  mflr      r0
	  stw       r0, 0x1A4(r1)
	  stmw      r24, 0x180(r1)
	  mr        r24, r3
	  mr        r25, r4
	  bne-      cr1, .loc_0x3C
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x3C:
	  stw       r3, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  lwz       r0, 0x14(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x160
	  addi      r3, r1, 0x1A8
	  addi      r0, r1, 0x8
	  lis       r4, 0x400
	  stw       r3, 0x6C(r1)
	  mr        r26, r5
	  mr        r27, r25
	  stw       r4, 0x68(r1)
	  addi      r3, r1, 0x68
	  stw       r0, 0x70(r1)
	  beq-      .loc_0x160
	  mr        r5, r6
	  mr        r6, r3
	  addi      r3, r1, 0x74
	  li        r4, 0x100
	  bl        0x9D5D8
	  mr.       r28, r3
	  mr        r29, r25
	  ble-      .loc_0x154
	  lis       r3, 0x804A
	  addi      r30, r1, 0x74
	  rlwinm    r25,r25,0,16,31
	  addi      r31, r3, 0xE0
	  b         .loc_0x14C

	.loc_0xC4:
	  lbz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,25,31
	  lbzx      r6, r31, r0
	  cmpwi     r6, 0xFE
	  bne-      .loc_0xE4
	  mr        r27, r29
	  addi      r26, r26, 0x7
	  b         .loc_0x144

	.loc_0xE4:
	  cmpwi     r6, 0xFD
	  bne-      .loc_0x128
	  rlwinm    r6,r27,0,16,31
	  lis       r3, 0x2AAB
	  sub       r4, r6, r25
	  addi      r5, r4, 0x2F
	  subi      r0, r3, 0x5555
	  mulhw     r3, r0, r5
	  addi      r0, r6, 0x30
	  srawi     r3, r3, 0x3
	  rlwinm    r4,r3,1,31,31
	  add       r3, r3, r4
	  mulli     r3, r3, 0x30
	  sub       r3, r5, r3
	  sub       r0, r0, r3
	  rlwinm    r27,r0,0,16,31
	  b         .loc_0x144

	.loc_0x128:
	  cmpwi     r6, 0xFF
	  beq-      .loc_0x140
	  mr        r3, r24
	  rlwinm    r4,r27,0,16,31
	  rlwinm    r5,r26,0,16,31
	  bl        -0x3F0

	.loc_0x140:
	  addi      r27, r27, 0x6

	.loc_0x144:
	  subi      r28, r28, 0x1
	  addi      r30, r30, 0x1

	.loc_0x14C:
	  cmpwi     r28, 0
	  bgt+      .loc_0xC4

	.loc_0x154:
	  lwz       r3, 0x14(r24)
	  lwz       r4, 0xC(r24)
	  bl        0xC2600

	.loc_0x160:
	  lmw       r24, 0x180(r1)
	  lwz       r0, 0x1A4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1A0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002A160
 * Size:	000030
 */
void JUTDirectPrint::setCharColor(JUtility::TColor)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r4
	  lbz       r4, 0x0(r4)
	  lbz       r5, 0x1(r6)
	  stw       r0, 0x14(r1)
	  lbz       r6, 0x2(r6)
	  bl        .loc_0x30
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x30:
	*/
}

/*
 * --INFO--
 * Address:	8002A190
 * Size:	00017C
 */
void JUTDirectPrint::setCharColor(unsigned char, unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  rlwinm    r0,r5,0,24,31
	  lis       r8, 0x4330
	  rlwinm    r7,r4,0,24,31
	  xoris     r0, r0, 0x8000
	  stw       r8, 0x58(r1)
	  xoris     r7, r7, 0x8000
	  rlwinm    r9,r6,0,24,31
	  stw       r0, 0x5C(r1)
	  xoris     r9, r9, 0x8000
	  lfd       f0, -0x7D58(r2)
	  li        r10, 0xFF
	  lfd       f1, 0x58(r1)
	  lfd       f2, -0x7D60(r2)
	  fsub      f1, f1, f0
	  stw       r7, 0x54(r1)
	  lfd       f3, -0x7D68(r2)
	  stw       r8, 0x50(r1)
	  fmul      f1, f2, f1
	  lfd       f6, -0x7D90(r2)
	  lfd       f2, 0x50(r1)
	  stw       r9, 0x4C(r1)
	  fsub      f2, f2, f0
	  lfd       f8, -0x7D98(r2)
	  stw       r8, 0x48(r1)
	  fmadd     f1, f3, f2, f1
	  lfd       f3, -0x7D78(r2)
	  lfd       f2, 0x48(r1)
	  stw       r0, 0x1C(r1)
	  fsub      f2, f2, f0
	  lfd       f9, -0x7DA0(r2)
	  stw       r8, 0x18(r1)
	  lfd       f10, -0x7DA8(r2)
	  lfd       f4, 0x18(r1)
	  stw       r7, 0x14(r1)
	  fsub      f5, f4, f0
	  lfd       f4, -0x7D70(r2)
	  stw       r8, 0x10(r1)
	  fmadd     f1, f4, f2, f1
	  lfd       f7, 0x10(r1)
	  fmul      f6, f6, f5
	  stw       r9, 0xC(r1)
	  lfd       f5, -0x7D88(r2)
	  fadd      f1, f3, f1
	  fsub      f7, f7, f0
	  stw       r8, 0x8(r1)
	  fctiwz    f1, f1
	  stw       r0, 0x3C(r1)
	  fmsub     f7, f8, f7, f6
	  lfd       f3, 0x8(r1)
	  stw       r8, 0x38(r1)
	  lfd       f6, -0x7D80(r2)
	  stfd      f1, 0x60(r1)
	  fsub      f1, f3, f0
	  lfd       f2, 0x38(r1)
	  fmadd     f3, f9, f1, f7
	  stb       r4, 0x18(r3)
	  lwz       r0, 0x64(r1)
	  fsub      f2, f2, f0
	  stb       r5, 0x19(r3)
	  rlwinm    r0,r0,8,16,23
	  fadd      f3, f10, f3
	  stb       r6, 0x1A(r3)
	  fmul      f2, f5, f2
	  stb       r10, 0x1B(r3)
	  fctiwz    f3, f3
	  stw       r7, 0x34(r1)
	  stw       r8, 0x30(r1)
	  lfd       f1, 0x30(r1)
	  stw       r9, 0x2C(r1)
	  fsub      f1, f1, f0
	  stw       r8, 0x28(r1)
	  fmsub     f1, f9, f1, f2
	  lfd       f2, 0x28(r1)
	  stfd      f3, 0x20(r1)
	  fsub      f0, f2, f0
	  sth       r0, 0x1C(r3)
	  lwz       r0, 0x24(r1)
	  fnmsub    f0, f6, f0, f1
	  sth       r0, 0x1E(r3)
	  rlwinm    r4,r0,31,17,31
	  rlwinm    r0,r0,30,18,31
	  sth       r4, 0x20(r3)
	  fadd      f0, f10, f0
	  sth       r0, 0x22(r3)
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  sth       r0, 0x24(r3)
	  rlwinm    r4,r0,31,17,31
	  rlwinm    r0,r0,30,18,31
	  sth       r4, 0x26(r3)
	  sth       r0, 0x28(r3)
	  addi      r1, r1, 0x70
	  blr
	*/
}