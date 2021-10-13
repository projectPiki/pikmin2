

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void og::Screen::CallBack_CounterSlot::__ct((char**, unsigned short,
                                             unsigned short, JKRArchive*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032A754
 * Size:	000030
 */
void og::Screen::CallBack_CounterSlot::init((J2DScreen*, unsigned long long,
                                             unsigned long long,
                                             unsigned long long, unsigned long*,
                                             bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r11, 0x18(r1)
	  lbz       r0, 0x1F(r1)
	  stw       r11, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        -0x1EE8C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032A784
 * Size:	000010
 */
void og::Screen::CallBack_CounterSlot::setPuyoParam((float, float, float))
{
	/*
	.loc_0x0:
	  stfs      f1, 0xBC(r3)
	  stfs      f2, 0xC0(r3)
	  stfs      f3, 0xC4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032A794
 * Size:	000270
 */
void og::Screen::CallBack_CounterSlot::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lhz       r31, 0x2C(r3)
	  lhz       r0, 0x2E(r3)
	  cmpw      r31, r0
	  ble-      .loc_0x2C
	  mr        r31, r0

	.loc_0x2C:
	  lbz       r0, 0xA8(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x138
	  lbz       r0, 0xAC(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x138
	  li        r6, 0
	  li        r7, 0
	  mr        r0, r6
	  li        r3, 0x1
	  mtctr     r31
	  cmpwi     r31, 0
	  ble-      .loc_0x9C

	.loc_0x60:
	  lwz       r5, 0x7C(r30)
	  lwz       r4, 0xB0(r30)
	  lwzx      r5, r5, r6
	  cmpw      r7, r4
	  lwz       r5, 0x0(r5)
	  bgt-      .loc_0x8C
	  lbz       r4, 0xA9(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x8C
	  stb       r3, 0xB0(r5)
	  b         .loc_0x90

	.loc_0x8C:
	  stb       r0, 0xB0(r5)

	.loc_0x90:
	  addi      r6, r6, 0x4
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x60

	.loc_0x9C:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0xB4(r30)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0xB4(r30)
	  lfs       f1, 0xB4(r30)
	  lfs       f0, 0xB8(r30)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x118
	  lfs       f0, -0x498(r2)
	  stfs      f0, 0xB4(r30)
	  lwz       r3, 0xB0(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0xB0(r30)
	  lwz       r4, 0xB0(r30)
	  lhz       r0, 0x2C(r30)
	  cmpw      r4, r0
	  blt-      .loc_0x110
	  lhz       r0, 0x2E(r30)
	  cmpw      r4, r0
	  blt-      .loc_0x104
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0xA8(r30)
	  stb       r0, 0xAB(r30)

	.loc_0x104:
	  li        r0, 0x1
	  stb       r0, 0xAA(r30)
	  b         .loc_0x118

	.loc_0x110:
	  mr        r3, r30
	  bl        .loc_0x270

	.loc_0x118:
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x258

	.loc_0x138:
	  mr        r3, r30
	  bl        -0x1E454
	  lbz       r0, 0xA9(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x258
	  cmpwi     r31, 0
	  li        r4, 0
	  ble-      .loc_0x258
	  cmpwi     r31, 0x8
	  subi      r5, r31, 0x8
	  ble-      .loc_0x228
	  addi      r0, r5, 0x7
	  li        r3, 0
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r5, 0
	  ble-      .loc_0x228

	.loc_0x17C:
	  lwz       r5, 0x7C(r30)
	  li        r12, 0
	  addi      r10, r3, 0x4
	  addi      r9, r3, 0x8
	  lwzx      r5, r5, r3
	  addi      r8, r3, 0xC
	  addi      r7, r3, 0x10
	  addi      r6, r3, 0x14
	  lwz       r11, 0x0(r5)
	  addi      r5, r3, 0x18
	  addi      r0, r3, 0x1C
	  addi      r3, r3, 0x20
	  stb       r12, 0xB0(r11)
	  addi      r4, r4, 0x8
	  lwz       r11, 0x7C(r30)
	  lwzx      r10, r11, r10
	  lwz       r10, 0x0(r10)
	  stb       r12, 0xB0(r10)
	  lwz       r10, 0x7C(r30)
	  lwzx      r9, r10, r9
	  lwz       r9, 0x0(r9)
	  stb       r12, 0xB0(r9)
	  lwz       r9, 0x7C(r30)
	  lwzx      r8, r9, r8
	  lwz       r8, 0x0(r8)
	  stb       r12, 0xB0(r8)
	  lwz       r8, 0x7C(r30)
	  lwzx      r7, r8, r7
	  lwz       r7, 0x0(r7)
	  stb       r12, 0xB0(r7)
	  lwz       r7, 0x7C(r30)
	  lwzx      r6, r7, r6
	  lwz       r6, 0x0(r6)
	  stb       r12, 0xB0(r6)
	  lwz       r6, 0x7C(r30)
	  lwzx      r5, r6, r5
	  lwz       r5, 0x0(r5)
	  stb       r12, 0xB0(r5)
	  lwz       r5, 0x7C(r30)
	  lwzx      r5, r5, r0
	  lwz       r5, 0x0(r5)
	  stb       r12, 0xB0(r5)
	  bdnz+     .loc_0x17C

	.loc_0x228:
	  sub       r0, r31, r4
	  rlwinm    r6,r4,2,0,29
	  li        r5, 0
	  mtctr     r0
	  cmpw      r4, r31
	  bge-      .loc_0x258

	.loc_0x240:
	  lwz       r3, 0x7C(r30)
	  lwzx      r3, r3, r6
	  addi      r6, r6, 0x4
	  lwz       r3, 0x0(r3)
	  stb       r5, 0xB0(r3)
	  bdnz+     .loc_0x240

	.loc_0x258:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x270:
	*/
}

/*
 * --INFO--
 * Address:	8032AA04
 * Size:	000094
 */
void og::Screen::CallBack_CounterSlot::slot_up((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lhz       r0, 0x2E(r3)
	  cmpw      r4, r0
	  ble-      .loc_0x44
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  mr        r6, r4
	  li        r4, 0xA9
	  subi      r3, r3, 0xA88
	  subi      r5, r5, 0xA74
	  crclr     6, 0x6
	  bl        -0x300400
	  b         .loc_0x80

	.loc_0x44:
	  beq-      .loc_0x80
	  lwz       r3, 0x7C(r31)
	  rlwinm    r0,r4,2,0,29
	  lfs       f1, 0xBC(r31)
	  lwzx      r3, r3, r0
	  lfs       f2, 0xC0(r31)
	  lwz       r3, 0x8(r3)
	  lfs       f3, 0xC4(r31)
	  lfs       f4, -0x498(r2)
	  bl        -0x1B94
	  lwz       r4, 0xC8(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x80
	  lwz       r3, -0x6858(r13)
	  bl        -0x1E0D0

	.loc_0x80:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032AA98
 * Size:	0000C0
 */
void og::Screen::CallBack_CounterSlot::startSlot((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0xAC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0xA8(r31)
	  lfs       f4, -0x498(r2)
	  stb       r3, 0xA9(r31)
	  stb       r0, 0xAA(r31)
	  stw       r0, 0xB0(r31)
	  stfs      f4, 0xB4(r31)
	  stfs      f1, 0xB8(r31)
	  stb       r3, 0x84(r31)
	  lhz       r0, 0x2E(r31)
	  cmpwi     r0, 0
	  bge-      .loc_0x78
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0xA88
	  li        r4, 0xA9
	  subi      r5, r5, 0xA74
	  li        r6, 0
	  crclr     6, 0x6
	  bl        -0x3004C8
	  b         .loc_0xAC

	.loc_0x78:
	  beq-      .loc_0xAC
	  lwz       r3, 0x7C(r31)
	  lfs       f1, 0xBC(r31)
	  lwz       r3, 0x0(r3)
	  lfs       f2, 0xC0(r31)
	  lwz       r3, 0x8(r3)
	  lfs       f3, 0xC4(r31)
	  bl        -0x1C54
	  lwz       r4, 0xC8(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0xAC
	  lwz       r3, -0x6858(r13)
	  bl        -0x1E190

	.loc_0xAC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032AB58
 * Size:	000554
 */
void og::Screen::CallBack_CounterSlot::setValue((bool, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stfd      f29, 0x80(r1)
	  psq_st    f29,0x88(r1),0,0
	  stfd      f28, 0x70(r1)
	  psq_st    f28,0x78(r1),0,0
	  stmw      r23, 0x4C(r1)
	  mr        r23, r3
	  mr        r24, r4
	  lbz       r0, 0x86(r3)
	  mr        r25, r5
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  li        r0, 0
	  stw       r0, 0x24(r23)
	  stw       r0, 0x28(r23)

	.loc_0x54:
	  lwz       r3, 0x24(r23)
	  bl        -0x281F0
	  sth       r3, 0x2C(r23)
	  lhz       r27, 0x2C(r23)
	  lhz       r0, 0x30(r23)
	  cmpw      r27, r0
	  bge-      .loc_0x74
	  mr        r27, r0

	.loc_0x74:
	  lis       r4, 0x8051
	  lis       r3, 0xCCCD
	  lfd       f28, -0x460(r2)
	  addi      r29, r4, 0x3C0C
	  subi      r31, r3, 0x3333
	  li        r26, 0
	  li        r28, 0
	  lis       r30, 0x4330
	  b         .loc_0x274

	.loc_0x98:
	  xoris     r0, r26, 0x8000
	  stw       r30, 0x30(r1)
	  lfd       f1, -0x480(r2)
	  stw       r0, 0x34(r1)
	  lfd       f0, 0x30(r1)
	  fsub      f2, f0, f28
	  bl        -0x25B1FC
	  bl        -0x2690C0
	  lwz       r4, 0x24(r23)
	  lbz       r0, 0x86(r23)
	  divwu     r3, r4, r3
	  cmplwi    r0, 0
	  mulhwu    r0, r31, r3
	  rlwinm    r0,r0,29,3,31
	  mulli     r0, r0, 0xA
	  sub       r0, r3, r0
	  rlwinm    r5,r0,0,16,31
	  beq-      .loc_0xF8
	  lwz       r3, 0x7C(r23)
	  li        r5, 0xA
	  lwz       r4, 0x80(r23)
	  lwzx      r3, r3, r28
	  bl        -0x24CE8
	  b         .loc_0x168

	.loc_0xF8:
	  lbz       r0, 0x89(r23)
	  cmplwi    r0, 0
	  beq-      .loc_0x158
	  bl        -0x2616BC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x34(r1)
	  lwz       r3, 0x7C(r23)
	  stw       r0, 0x30(r1)
	  lfd       f2, -0x460(r2)
	  lfd       f0, 0x30(r1)
	  lfs       f1, -0x478(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, -0x474(r2)
	  lwzx      r3, r3, r28
	  lwz       r4, 0x80(r23)
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r5,r0,0,16,31
	  bl        -0x24D48
	  b         .loc_0x168

	.loc_0x158:
	  lwz       r3, 0x7C(r23)
	  lwz       r4, 0x80(r23)
	  lwzx      r3, r3, r28
	  bl        -0x24D5C

	.loc_0x168:
	  lwz       r3, 0x7C(r23)
	  lwzx      r3, r3, r28
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x26C
	  cmpw      r26, r27
	  bge-      .loc_0x264
	  lbz       r0, 0xAC(r23)
	  cmplwi    r0, 0
	  beq-      .loc_0x198
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)

	.loc_0x198:
	  lhz       r0, 0x2C(r23)
	  addi      r4, r26, 0x1
	  cmpw      r4, r0
	  ble-      .loc_0x1E4
	  lbz       r0, 0x86(r23)
	  cmplwi    r0, 0
	  beq-      .loc_0x1CC
	  lwz       r12, 0x0(r3)
	  li        r4, 0xFF
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x254

	.loc_0x1CC:
	  lwz       r12, 0x0(r3)
	  lbz       r4, 0x90(r23)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x254

	.loc_0x1E4:
	  lwz       r12, 0x0(r3)
	  li        r4, 0xFF
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x7C(r23)
	  rlwinm.   r0,r24,0,24,31
	  lwzx      r3, r3, r28
	  lwz       r3, 0x8(r3)
	  beq-      .loc_0x248
	  xoris     r4, r26, 0x8000
	  lis       r0, 0x4330
	  stw       r4, 0x3C(r1)
	  lis       r4, 0x8051
	  lfd       f2, -0x460(r2)
	  stw       r0, 0x38(r1)
	  lfs       f4, -0x470(r2)
	  lfd       f0, 0x38(r1)
	  lfs       f1, 0x3C0C(r4)
	  fsubs     f0, f0, f2
	  lfs       f2, 0x4(r29)
	  lfs       f3, 0x8(r29)
	  fmuls     f4, f4, f0
	  bl        -0x1EC0
	  b         .loc_0x254

	.loc_0x248:
	  rlwinm.   r0,r25,0,24,31
	  beq-      .loc_0x254
	  bl        -0x1F18

	.loc_0x254:
	  lwz       r3, 0x7C(r23)
	  lwzx      r3, r3, r28
	  bl        -0x24E04
	  b         .loc_0x26C

	.loc_0x264:
	  li        r0, 0
	  stb       r0, 0xB0(r3)

	.loc_0x26C:
	  addi      r28, r28, 0x4
	  addi      r26, r26, 0x1

	.loc_0x274:
	  lhz       r0, 0x2E(r23)
	  cmpw      r26, r0
	  blt+      .loc_0x98
	  lfs       f3, 0x40(r23)
	  rlwinm    r3,r27,0,16,31
	  cmplw     r3, r0
	  lfs       f5, -0x498(r2)
	  fmr       f28, f3
	  ble-      .loc_0x29C
	  mr        r3, r0

	.loc_0x29C:
	  rlwinm    r3,r3,0,16,31
	  cmplwi    r3, 0x2
	  blt-      .loc_0x2FC
	  subi      r3, r3, 0x1
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x38(r1)
	  lfd       f1, -0x460(r2)
	  stw       r3, 0x3C(r1)
	  lfs       f2, 0x34(r23)
	  lfd       f0, 0x38(r1)
	  lfs       f4, 0x48(r23)
	  fsubs     f0, f0, f1
	  lfs       f1, 0x38(r23)
	  fmadds    f6, f2, f0, f4
	  fcmpo     cr0, f6, f1
	  ble-      .loc_0x2FC
	  fmuls     f2, f3, f1
	  lfs       f1, -0x46C(r2)
	  lfs       f0, -0x468(r2)
	  fmuls     f1, f4, f1
	  fdivs     f28, f2, f6
	  fsubs     f0, f0, f28
	  fmuls     f5, f1, f0

	.loc_0x2FC:
	  lfs       f0, 0x50(r23)
	  lwz       r3, 0x6C(r23)
	  lfs       f1, 0x44(r23)
	  fadds     f29, f0, f5
	  stfs      f28, 0xCC(r3)
	  stfs      f1, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x6C(r23)
	  lfs       f0, 0x54(r23)
	  stfs      f29, 0xD4(r3)
	  stfs      f0, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x6C(r23)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x6C(r23)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lfs       f29, 0xC0(r4)
	  lwz       r12, 0x138(r12)
	  lfs       f31, 0xB8(r4)
	  lfs       f30, 0xBC(r4)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x6C(r23)
	  addi      r3, r1, 0x10
	  lwz       r0, 0x14(r1)
	  lwz       r12, 0x0(r4)
	  stw       r0, 0x1C(r1)
	  lwz       r12, 0x134(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x10(r1)
	  lwz       r3, 0x6C(r23)
	  stw       r0, 0x18(r1)
	  bl        -0x2F2BE0
	  lfs       f0, 0x0(r3)
	  li        r26, 0
	  li        r25, 0
	  stfs      f0, 0x58(r23)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x5C(r23)
	  b         .loc_0x514

	.loc_0x3C8:
	  lwz       r3, 0x7C(r23)
	  lwzx      r3, r3, r25
	  lwz       r24, 0x0(r3)
	  cmplwi    r24, 0
	  beq-      .loc_0x50C
	  xoris     r3, r26, 0x8000
	  lfs       f0, 0x34(r23)
	  lis       r0, 0x4330
	  stw       r3, 0x3C(r1)
	  fneg      f0, f0
	  lfd       f3, -0x460(r2)
	  stw       r0, 0x38(r1)
	  mr        r3, r24
	  lfs       f5, 0x58(r23)
	  addi      r4, r1, 0x20
	  lfd       f1, 0x38(r1)
	  fmuls     f2, f0, f28
	  lfs       f0, 0x48(r23)
	  fsubs     f3, f1, f3
	  lfs       f4, 0x5C(r23)
	  lfs       f1, 0x4C(r23)
	  fadds     f0, f5, f0
	  fmuls     f3, f3, f2
	  stfs      f4, 0x24(r1)
	  fadds     f2, f4, f1
	  fadds     f1, f3, f0
	  fadds     f0, f5, f3
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x20(r1)
	  bl        -0x2F3060
	  lbz       r0, 0x84(r23)
	  cmplwi    r0, 0
	  beq-      .loc_0x480
	  lbz       r0, 0xAC(r23)
	  cmplwi    r0, 0
	  bne-      .loc_0x480
	  mr        r3, r24
	  li        r4, 0x4
	  bl        -0x2F2300
	  lwz       r3, 0x7C(r23)
	  lfs       f0, 0x44(r23)
	  lwzx      r3, r3, r25
	  stfs      f28, 0xC(r3)
	  stfs      f0, 0x10(r3)
	  b         .loc_0x4AC

	.loc_0x480:
	  lwz       r4, 0x60(r23)
	  mr        r3, r24
	  bl        -0x2F2324
	  lfs       f0, 0x44(r23)
	  mr        r3, r24
	  stfs      f28, 0xCC(r24)
	  stfs      f0, 0xD0(r24)
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4AC:
	  stfs      f31, 0xB8(r24)
	  mr        r3, r24
	  stfs      f30, 0xBC(r24)
	  stfs      f29, 0xC0(r24)
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1C(r1)
	  mr        r3, r24
	  addi      r4, r1, 0xC
	  stw       r0, 0xC(r1)
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x12C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x18(r1)
	  mr        r3, r24
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50C:
	  addi      r25, r25, 0x4
	  addi      r26, r26, 0x1

	.loc_0x514:
	  lhz       r0, 0x2E(r23)
	  cmpw      r26, r0
	  blt+      .loc_0x3C8
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  psq_l     f28,0x78(r1),0,0
	  lfd       f28, 0x70(r1)
	  lmw       r23, 0x4C(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032B0AC
 * Size:	0001D0
 */
void og::Screen::setCallBack_CounterSlot((P2DScreen::Mgr*, unsigned long long,
                                          unsigned long*, unsigned short, bool,
                                          bool, JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  lwz       r0, 0x68(r1)
	  stmw      r14, 0x18(r1)
	  mr        r16, r6
	  mr        r17, r5
	  mr        r15, r3
	  mr        r18, r7
	  mr        r19, r8
	  mr        r20, r9
	  mr        r21, r10
	  mr        r4, r16
	  mr        r3, r17
	  li        r5, 0x1
	  li        r6, 0x1
	  bl        -0x287CC
	  mr        r30, r4
	  mr        r14, r3
	  mr        r4, r16
	  mr        r3, r17
	  li        r5, 0x1
	  li        r6, 0x2
	  bl        -0x287E8
	  mr        r28, r4
	  mr        r29, r3
	  li        r25, 0x1
	  li        r24, 0x3
	  mr        r26, r28
	  li        r31, 0
	  mr        r27, r29

	.loc_0x7C:
	  mr        r4, r16
	  mr        r3, r17
	  rlwinm    r6,r24,0,16,31
	  li        r5, 0x1
	  bl        -0x28818
	  lwz       r12, 0x0(r15)
	  mr        r0, r3
	  mr        r22, r4
	  mr        r3, r15
	  lwz       r12, 0x3C(r12)
	  mr        r23, r0
	  mr        r6, r22
	  mr        r5, r23
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0xCC
	  subi      r0, r24, 0x1
	  rlwinm    r25,r0,0,16,31
	  b         .loc_0xE4

	.loc_0xCC:
	  addi      r24, r24, 0x1
	  stb       r31, 0xB0(r3)
	  cmpwi     r24, 0xA
	  mr        r26, r22
	  mr        r27, r23
	  ble+      .loc_0x7C

	.loc_0xE4:
	  li        r3, 0xCC
	  bl        -0x3072F0
	  mr.       r22, r3
	  beq-      .loc_0x160
	  lis       r4, 0x804D
	  lwz       r7, 0x68(r1)
	  mr        r5, r19
	  mr        r6, r25
	  addi      r4, r4, 0x7E18
	  bl        -0x1FC90
	  lis       r3, 0x804E
	  li        r0, 0
	  subi      r3, r3, 0x62E0
	  lfs       f4, -0x498(r2)
	  stw       r3, 0x0(r22)
	  lfs       f3, -0x494(r2)
	  stb       r0, 0xA8(r22)
	  lfs       f2, -0x490(r2)
	  stb       r0, 0xA9(r22)
	  lfs       f1, -0x48C(r2)
	  stb       r0, 0xAA(r22)
	  lfs       f0, -0x488(r2)
	  stb       r0, 0xAB(r22)
	  stb       r0, 0xAC(r22)
	  stw       r0, 0xB0(r22)
	  stfs      f4, 0xB4(r22)
	  stfs      f3, 0xB8(r22)
	  stfs      f2, 0xBC(r22)
	  stfs      f1, 0xC0(r22)
	  stfs      f0, 0xC4(r22)
	  stw       r0, 0xC8(r22)

	.loc_0x160:
	  stw       r18, 0x8(r1)
	  mr        r3, r22
	  mr        r4, r15
	  mr        r6, r30
	  stw       r21, 0xC(r1)
	  mr        r5, r14
	  mr        r8, r28
	  mr        r7, r29
	  lwz       r12, 0x0(r22)
	  mr        r10, r26
	  mr        r9, r27
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r22
	  mr        r4, r20
	  bl        -0x1FA74
	  mr        r3, r15
	  mr        r6, r16
	  mr        r5, r17
	  mr        r7, r22
	  bl        0x1098C4
	  mr        r3, r22
	  lmw       r14, 0x18(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032B27C
 * Size:	000090
 */
void og::Screen::CallBack_CounterSlot::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x74
	  lis       r4, 0x804E
	  subi      r0, r4, 0x62E0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x64
	  lis       r4, 0x804E
	  subi      r0, r4, 0x7E38
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x64
	  lis       r4, 0x804D
	  addi      r0, r4, 0x7F2C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x64
	  lis       r5, 0x804D
	  li        r4, 0
	  addi      r0, r5, 0x7B0C
	  stw       r0, 0x0(r30)
	  bl        0xE62AC

	.loc_0x64:
	  extsh.    r0, r31
	  ble-      .loc_0x74
	  mr        r3, r30
	  bl        -0x307238

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032B30C
 * Size:	000034
 */
void og::Screen::CallBack_CounterSlot::setValue(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
