

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
 * Address:	803F8694
 * Size:	00007C
 */
void kh::Screen::DispCaveResult::__ct((Game::Result::TNode*, unsigned long,
                                       unsigned long, unsigned long,
                                       unsigned long, bool, JKRHeap*, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r12, 0
	  lis       r11, 0x804F
	  stw       r0, 0x24(r1)
	  subi      r0, r11, 0x59B4
	  stmw      r26, 0x8(r1)
	  lis       r31, 0x804B
	  addi      r31, r31, 0x1148
	  mr        r27, r6
	  lbz       r6, 0x2B(r1)
	  mr        r26, r3
	  mr        r28, r7
	  mr        r29, r8
	  mr        r30, r9
	  stw       r31, 0x0(r3)
	  mr        r31, r10
	  stw       r12, 0x4(r3)
	  stw       r0, 0x0(r3)
	  bl        .loc_0x7C
	  stw       r29, 0x28(r26)
	  mr        r3, r26
	  stb       r30, 0x30(r26)
	  stw       r27, 0x1C(r26)
	  stw       r28, 0x20(r26)
	  stw       r31, 0x8(r26)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x7C:
	*/
}

/*
 * --INFO--
 * Address:	803F8710
 * Size:	0000AC
 */
void kh::Screen::DispCaveResult::init((Game::Result::TNode*, unsigned long,
                                       bool))
{
	/*
	.loc_0x0:
	  stw       r4, 0xC(r3)
	  li        r0, 0
	  stw       r0, 0x18(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x10(r3)
	  lwz       r4, 0xC(r3)
	  lwz       r7, 0x24(r4)
	  b         .loc_0x90

	.loc_0x24:
	  lwz       r0, 0x3C(r7)
	  cmpwi     r0, 0
	  bgt-      .loc_0x3C
	  lwz       r0, 0x34(r7)
	  cmpwi     r0, 0
	  beq-      .loc_0x48

	.loc_0x3C:
	  lwz       r4, 0x14(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x14(r3)

	.loc_0x48:
	  lwz       r4, 0x10(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x10(r3)
	  lwz       r4, 0x18(r3)
	  lwz       r0, 0x34(r7)
	  add       r0, r4, r0
	  stw       r0, 0x18(r3)
	  lwz       r0, 0x3C(r7)
	  cmpwi     r0, 0
	  bgt-      .loc_0x7C
	  lwz       r0, 0x34(r7)
	  cmpwi     r0, 0
	  bne-      .loc_0x8C

	.loc_0x7C:
	  lwz       r4, 0x24(r3)
	  lwz       r0, 0x38(r7)
	  add       r0, r4, r0
	  stw       r0, 0x24(r3)

	.loc_0x8C:
	  lwz       r7, 0x18(r7)

	.loc_0x90:
	  cmplwi    r7, 0
	  bne+      .loc_0x24
	  stw       r5, 0x2C(r3)
	  li        r0, 0
	  stb       r6, 0x31(r3)
	  stw       r0, 0x34(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F87BC
 * Size:	000134
 */
void kh::Screen::ObjCaveResult::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x5B318
	  lis       r4, 0x804F
	  lis       r3, 0x8051
	  subi      r4, r4, 0x5A2C
	  li        r7, 0
	  stw       r4, 0x0(r31)
	  addi      r0, r4, 0x10
	  lfs       f0, 0x1C48(r2)
	  li        r6, -0x6
	  stw       r0, 0x18(r31)
	  addi      r5, r3, 0x40D4
	  li        r4, 0x3
	  li        r0, 0xFF
	  stw       r7, 0x38(r31)
	  mr        r3, r31
	  stw       r7, 0x3C(r31)
	  stw       r7, 0x48(r31)
	  stw       r7, 0x44(r31)
	  stw       r7, 0x40(r31)
	  stw       r7, 0x50(r31)
	  stw       r7, 0x4C(r31)
	  stw       r7, 0x58(r31)
	  stw       r7, 0x54(r31)
	  stw       r7, 0x5C(r31)
	  stw       r7, 0x60(r31)
	  stfs      f0, 0x78(r31)
	  stfs      f0, 0x74(r31)
	  stfs      f0, 0x70(r31)
	  stfs      f0, 0x68(r31)
	  stfs      f0, 0x6C(r31)
	  stfs      f0, 0x64(r31)
	  stw       r7, 0x7C(r31)
	  stw       r7, 0x80(r31)
	  stw       r7, 0x94(r31)
	  stw       r7, 0x90(r31)
	  stw       r7, 0x8C(r31)
	  stw       r7, 0x88(r31)
	  stw       r7, 0xB0(r31)
	  stw       r7, 0xAC(r31)
	  stw       r7, 0xA8(r31)
	  stw       r7, 0xA4(r31)
	  stw       r7, 0xA0(r31)
	  stw       r7, 0x9C(r31)
	  stw       r7, 0x98(r31)
	  stw       r7, 0xCC(r31)
	  stw       r7, 0xC8(r31)
	  stw       r7, 0xC4(r31)
	  stw       r7, 0xC0(r31)
	  stw       r7, 0xBC(r31)
	  stw       r7, 0xB8(r31)
	  stw       r7, 0xB4(r31)
	  stfs      f0, 0xD0(r31)
	  stfs      f0, 0xD4(r31)
	  stw       r6, 0xD8(r31)
	  stw       r7, 0xDC(r31)
	  lwz       r5, 0x1C(r5)
	  stw       r5, 0xE0(r31)
	  stw       r7, 0xE4(r31)
	  stw       r7, 0xEC(r31)
	  stw       r7, 0xE8(r31)
	  stw       r4, 0xF0(r31)
	  stw       r7, 0xF4(r31)
	  stw       r7, 0xF8(r31)
	  stb       r7, 0x104(r31)
	  stb       r0, 0x105(r31)
	  stb       r7, 0x107(r31)
	  stb       r7, 0x106(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F88F0
 * Size:	000B08
 */
void kh::Screen::ObjCaveResult::doCreate((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stmw      r25, 0x24(r1)
	  lis       r5, 0x804A
	  mr        r31, r3
	  mr        r29, r4
	  subi      r26, r5, 0x7CA0
	  bl        0x5B690
	  lis       r5, 0x5253
	  li        r4, 0x4B48
	  addi      r6, r5, 0x4C54
	  li        r5, 0x435F
	  bl        -0xE9610
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5C
	  addi      r3, r26, 0
	  addi      r5, r26, 0x14
	  li        r4, 0xBF
	  crclr     6, 0x6
	  bl        -0x3CE308

	.loc_0x5C:
	  mr        r3, r31
	  bl        0x5B658
	  mr        r30, r3
	  li        r3, 0x148
	  bl        -0x3D4AB8
	  mr.       r0, r3
	  beq-      .loc_0x80
	  bl        0x3C444
	  mr        r0, r3

	.loc_0x80:
	  stw       r0, 0x40(r31)
	  mr        r6, r29
	  addi      r4, r26, 0x24
	  lis       r5, 0x104
	  lwz       r3, 0x40(r31)
	  bl        -0x3B9360
	  li        r3, 0x148
	  bl        -0x3D4AE8
	  mr.       r0, r3
	  beq-      .loc_0xB0
	  bl        0x3C414
	  mr        r0, r3

	.loc_0xB0:
	  stw       r0, 0x44(r31)
	  mr        r6, r29
	  addi      r4, r26, 0x38
	  lis       r5, 0x104
	  lwz       r3, 0x44(r31)
	  bl        -0x3B9390
	  mr        r4, r29
	  addi      r3, r26, 0x58
	  bl        -0x3D59A8
	  bl        -0x3B10A8
	  stw       r3, 0x4C(r31)
	  mr        r4, r29
	  addi      r3, r26, 0x6C
	  bl        -0x3D59BC
	  bl        -0x3B10BC
	  stw       r3, 0x54(r31)
	  mr        r4, r29
	  addi      r3, r26, 0x80
	  bl        -0x3D59D0
	  bl        -0x3B10D0
	  stw       r3, 0x5C(r31)
	  mr        r4, r29
	  addi      r3, r26, 0x94
	  bl        -0x3D59E4
	  bl        -0x3B10E4
	  stw       r3, 0x60(r31)
	  lwz       r3, 0x40(r31)
	  lwz       r4, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x40(r31)
	  lwz       r4, 0x54(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x40(r31)
	  lwz       r4, 0x5C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x40(r31)
	  lwz       r4, 0x60(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  lwz       r28, -0x77D4(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x18C
	  bl        -0x3D54D4

	.loc_0x18C:
	  li        r3, 0x148
	  bl        -0x3D4BDC
	  mr.       r0, r3
	  beq-      .loc_0x1A4
	  bl        0x3C320
	  mr        r0, r3

	.loc_0x1A4:
	  stw       r0, 0x48(r31)
	  mr        r6, r29
	  addi      r4, r26, 0xA8
	  lis       r5, 0x4
	  lwz       r3, 0x48(r31)
	  bl        -0x3B9484
	  mr        r4, r29
	  addi      r3, r26, 0xC0
	  bl        -0x3D5A9C
	  bl        -0x3B119C
	  stw       r3, 0x50(r31)
	  mr        r4, r29
	  addi      r3, r26, 0xD8
	  bl        -0x3D5AB0
	  bl        -0x3B11B0
	  stw       r3, 0x58(r31)
	  lwz       r3, 0x48(r31)
	  lwz       r4, 0x50(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x48(r31)
	  lwz       r4, 0x58(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x48(r31)
	  bl        -0x3B7FDC
	  lwz       r3, 0x40(r31)
	  bl        -0xEED10
	  lwz       r0, 0xC(r30)
	  stw       r0, 0x3C(r31)
	  lwz       r3, 0x3C(r31)
	  lwz       r26, 0x24(r3)
	  b         .loc_0x25C

	.loc_0x238:
	  li        r3, 0xC
	  bl        -0x3D4C88
	  mr.       r0, r3
	  beq-      .loc_0x254
	  lwz       r4, 0x34(r26)
	  bl        0x2684
	  mr        r0, r3

	.loc_0x254:
	  stw       r0, 0x48(r26)
	  lwz       r26, 0x18(r26)

	.loc_0x25C:
	  cmplwi    r26, 0
	  bne+      .loc_0x238
	  lwz       r0, 0x10(r30)
	  cmplwi    r0, 0x6
	  ble-      .loc_0x288
	  lbz       r0, 0x104(r31)
	  ori       r0, r0, 0x1
	  stb       r0, 0x104(r31)
	  lwz       r3, 0x10(r30)
	  subi      r0, r3, 0x6
	  stw       r0, 0xDC(r31)

	.loc_0x288:
	  lwz       r3, 0x40(r31)
	  lis       r5, 0x7470
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x3C087C
	  lfs       f31, 0x4(r3)
	  lis       r5, 0x7470
	  lwz       r3, 0x40(r31)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x3031
	  lwz       r12, 0x0(r3)
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x3C08A8
	  lfs       f0, 0x4(r3)
	  lis       r0, 0x4330
	  lis       r4, 0x6F6E
	  lis       r3, 0x4E
	  fsubs     f0, f0, f31
	  stw       r0, 0x10(r1)
	  lfd       f1, 0x1C50(r2)
	  addi      r6, r4, 0x3030
	  addi      r5, r3, 0x6963
	  stfs      f0, 0xD4(r31)
	  lwz       r0, 0xD8(r31)
	  lfs       f2, 0xD4(r31)
	  subfic    r0, r0, 0x1
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  fmuls     f0, f2, f0
	  stfs      f0, 0xD0(r31)
	  lwz       r3, 0x40(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  bl        0x12AC4
	  lwz       r3, 0x40(r31)
	  lis       r5, 0x6F6E
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x3031
	  addi      r5, r4, 0x6963
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  bl        0x12A9C
	  li        r0, 0
	  stw       r0, 0xB4(r31)
	  stw       r0, 0xB8(r31)
	  lwz       r3, 0x1C(r30)
	  lwz       r0, 0x18(r30)
	  lwz       r4, 0x14(r30)
	  add       r0, r3, r0
	  sub       r0, r0, r4
	  stw       r0, 0xC4(r31)
	  lwz       r0, 0x20(r30)
	  stw       r0, 0xC8(r31)
	  lwz       r3, 0x24(r30)
	  lwz       r0, 0x28(r30)
	  sub       r0, r0, r3
	  stw       r0, 0xCC(r31)
	  lbz       r0, 0x30(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x41C
	  lwz       r3, 0x40(r31)
	  lis       r5, 0x6D65
	  lis       r4, 0x4E66
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6E75
	  addi      r5, r4, 0x695F
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r5, 0x6D65
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E63
	  addi      r6, r5, 0x6E75
	  lwz       r3, 0x40(r31)
	  addi      r5, r4, 0x6F5F
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lis       r5, 0x6D70
	  lis       r4, 0x50
	  stb       r0, 0xB0(r3)
	  addi      r26, r5, 0x3031
	  addi      r27, r4, 0x636F
	  b         .loc_0x480

	.loc_0x41C:
	  lwz       r3, 0x40(r31)
	  lis       r5, 0x6D65
	  lis       r4, 0x4E66
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6E75
	  addi      r5, r4, 0x695F
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lis       r5, 0x6D65
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E63
	  addi      r6, r5, 0x6E75
	  lwz       r3, 0x40(r31)
	  addi      r5, r4, 0x6F5F
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r4, 0x696E
	  stb       r0, 0xB0(r3)
	  addi      r26, r4, 0x3031
	  li        r27, 0x5066

	.loc_0x480:
	  lbz       r0, 0x31(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x49C
	  lwz       r3, 0x20(r30)
	  lwz       r0, 0x1C(r30)
	  cmplw     r3, r0
	  beq-      .loc_0x4F8

	.loc_0x49C:
	  lwz       r3, 0x40(r31)
	  lis       r5, 0x6E6F
	  lis       r4, 0x5061
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x726D
	  addi      r5, r4, 0x6E61
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lis       r5, 0x636F
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x5061
	  addi      r6, r5, 0x6D70
	  lwz       r3, 0x40(r31)
	  addi      r5, r4, 0x6E61
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  b         .loc_0x550

	.loc_0x4F8:
	  lwz       r3, 0x40(r31)
	  lis       r5, 0x6E6F
	  lis       r4, 0x5061
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x726D
	  addi      r5, r4, 0x6E61
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r5, 0x636F
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x5061
	  addi      r6, r5, 0x6D70
	  lwz       r3, 0x40(r31)
	  addi      r5, r4, 0x6E61
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)

	.loc_0x550:
	  lwz       r3, 0x40(r31)
	  lis       r5, 0x636F
	  lis       r4, 0x5061
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6D70
	  addi      r5, r4, 0x6E61
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0x4
	  bl        -0x3C01AC
	  lis       r6, 0x5F30
	  lis       r5, 0x5049
	  lwz       r4, 0x40(r31)
	  mr        r3, r29
	  addi      r6, r6, 0x3034
	  addi      r5, r5, 0x4354
	  bl        -0xCBD50
	  mr        r0, r3
	  li        r3, 0x8
	  mr        r25, r0
	  bl        -0x3D4FF0
	  mr.       r0, r3
	  beq-      .loc_0x5BC
	  mr        r4, r25
	  bl        -0xCBB38
	  mr        r0, r3

	.loc_0x5BC:
	  stw       r0, 0x80(r31)
	  lwz       r3, 0x80(r31)
	  bl        -0xCB97C
	  lis       r5, 0x6D65
	  lis       r4, 0x4E
	  lwz       r3, 0x40(r31)
	  addi      r6, r5, 0x5F75
	  addi      r5, r4, 0x7961
	  li        r7, 0x10
	  bl        0x12C14
	  stw       r3, 0x8C(r31)
	  lwz       r3, 0x8C(r31)
	  bl        0x12F14
	  lis       r5, 0x6D65
	  lis       r4, 0x4E
	  lwz       r3, 0x40(r31)
	  addi      r6, r5, 0x5F6C
	  addi      r5, r4, 0x7961
	  li        r7, 0x10
	  bl        0x12BEC
	  stw       r3, 0x90(r31)
	  lwz       r3, 0x90(r31)
	  bl        0x12EEC
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r3, 0x40(r31)
	  addi      r6, r5, 0x3034
	  addi      r5, r4, 0x4354
	  li        r7, 0x10
	  bl        0x12BC4
	  stw       r3, 0x88(r31)
	  lis       r3, 0x4E5F
	  addi      r6, r3, 0x3364
	  li        r5, 0
	  lwz       r3, 0x40(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x88(r31)
	  bl        0x12DC8
	  lwz       r3, 0x88(r31)
	  bl        0x12E98
	  lis       r5, 0x696E
	  lis       r4, 0x4E
	  lwz       r3, 0x40(r31)
	  addi      r6, r5, 0x5F6D
	  addi      r5, r4, 0x6D61
	  li        r7, 0x10
	  bl        0x12B70
	  stw       r3, 0x94(r31)
	  lwz       r3, 0x94(r31)
	  bl        0x12E70
	  stw       r29, 0x8(r1)
	  lis       r5, 0x6164
	  lis       r4, 0x5074
	  addi      r7, r31, 0xB4
	  lwz       r3, 0x40(r31)
	  addi      r6, r5, 0x7031
	  addi      r5, r4, 0x6F6D
	  li        r8, 0x6
	  li        r9, 0x1
	  li        r10, 0
	  bl        -0xEC9A4
	  stw       r3, 0x98(r31)
	  lis       r3, 0x696B
	  addi      r6, r3, 0x6931
	  addi      r7, r31, 0xB8
	  stw       r29, 0x8(r1)
	  li        r5, 0x5070
	  li        r8, 0x3
	  li        r9, 0x1
	  lwz       r3, 0x40(r31)
	  li        r10, 0
	  bl        -0xEC9D0
	  stw       r3, 0x9C(r31)
	  lis       r4, 0x3030
	  lis       r3, 0x506D
	  addi      r7, r31, 0xBC
	  stw       r29, 0x8(r1)
	  addi      r6, r4, 0x5F31
	  addi      r5, r3, 0x6164
	  li        r8, 0x4
	  lwz       r3, 0x40(r31)
	  li        r9, 0
	  li        r10, 0
	  bl        -0xECA00
	  stw       r3, 0xA0(r31)
	  lis       r4, 0x3031
	  lis       r3, 0x506D
	  addi      r7, r31, 0xC0
	  stw       r29, 0x8(r1)
	  addi      r6, r4, 0x5F31
	  addi      r5, r3, 0x6164
	  li        r8, 0x4
	  lwz       r3, 0x40(r31)
	  li        r9, 0
	  li        r10, 0
	  bl        -0xECA30
	  stw       r3, 0xA4(r31)
	  lis       r3, 0x7461
	  addi      r6, r3, 0x5F31
	  addi      r7, r31, 0xC4
	  stw       r29, 0x8(r1)
	  li        r5, 0x506F
	  li        r8, 0x2
	  li        r9, 0x1
	  lwz       r3, 0x40(r31)
	  li        r10, 0x1
	  bl        -0xECA5C
	  stw       r3, 0xA8(r31)
	  lis       r4, 0x5F74
	  lis       r3, 0x506F
	  addi      r7, r31, 0xC8
	  stw       r29, 0x8(r1)
	  addi      r6, r4, 0x6F31
	  addi      r5, r3, 0x7461
	  li        r8, 0x2
	  lwz       r3, 0x40(r31)
	  li        r9, 0
	  li        r10, 0x1
	  bl        -0xECA8C
	  stw       r3, 0xAC(r31)
	  mr        r6, r26
	  mr        r5, r27
	  addi      r7, r31, 0xCC
	  stw       r29, 0x8(r1)
	  li        r8, 0x9
	  li        r9, 0
	  li        r10, 0
	  lwz       r3, 0x40(r31)
	  bl        -0xECAB4
	  stw       r3, 0xB0(r31)
	  li        r4, 0x1
	  lwz       r3, 0xAC(r31)
	  bl        -0xED7F0
	  lbz       r0, 0x30(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C4
	  lbz       r0, 0x31(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x808
	  lwz       r3, 0x20(r30)
	  lwz       r0, 0x1C(r30)
	  cmplw     r3, r0
	  beq-      .loc_0x8C4

	.loc_0x808:
	  lwz       r3, 0xAC(r31)
	  bl        -0xED93C
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0xA8(r31)
	  bl        -0xED94C
	  lwz       r12, 0x0(r3)
	  lis       r4, 0x8051
	  addi      r4, r4, 0x40D4
	  lwz       r12, 0x14(r12)
	  lfs       f1, 0x10(r4)
	  lfs       f2, 0x14(r4)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x40(r31)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x3038
	  addi      r5, r4, 0x4354
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r5, 0x7473
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x50
	  addi      r6, r5, 0x3134
	  lwz       r3, 0x40(r31)
	  addi      r5, r4, 0x7469
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r5, 0x7473
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x50
	  addi      r6, r5, 0x3135
	  lwz       r3, 0x40(r31)
	  addi      r5, r4, 0x7469
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0xB0(r3)

	.loc_0x8C4:
	  li        r3, 0x1C
	  bl        -0x3D5314
	  mr.       r0, r3
	  beq-      .loc_0x8DC
	  bl        -0xD03C0
	  mr        r0, r3

	.loc_0x8DC:
	  stw       r0, 0x84(r31)
	  lis       r5, 0x7470
	  lis       r4, 0x4E
	  lwz       r3, 0x40(r31)
	  addi      r6, r5, 0x3032
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r5, 0x7470
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x3033
	  lwz       r3, 0x40(r31)
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r5, 0x7470
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x3034
	  lwz       r3, 0x40(r31)
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r5, 0x7470
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x3035
	  lwz       r3, 0x40(r31)
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r5, 0x6D65
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x5069
	  addi      r6, r5, 0x3030
	  lwz       r3, 0x40(r31)
	  addi      r5, r4, 0x6E61
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x315F
	  lis       r4, 0x30
	  addi      r0, r5, 0x3030
	  lis       r5, 0x6D65
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3130
	  lis       r4, 0x5069
	  addi      r6, r5, 0x3031
	  stw       r0, 0x18(r3)
	  addi      r5, r4, 0x6E61
	  lwz       r3, 0x40(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x315F
	  lis       r4, 0x30
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3130
	  stw       r0, 0x18(r3)
	  bl        -0x1CA88
	  stw       r3, 0x38(r31)
	  lwz       r26, 0x38(r31)
	  addi      r3, r26, 0x18
	  bl        -0x1B954
	  lwz       r27, -0x77D4(r13)
	  addi      r3, r26, 0x100
	  mr        r4, r27
	  bl        -0x37068
	  lwz       r3, -0x6514(r13)
	  mr        r4, r27
	  lwz       r3, 0x5C(r3)
	  bl        0x498A4
	  mr        r3, r31
	  bl        0x5AD10
	  lwz       r4, 0x38(r31)
	  li        r0, 0x1
	  stw       r3, 0x3D0(r4)
	  stw       r3, 0x24(r4)
	  stw       r3, 0x104(r4)
	  li        r3, 0x14
	  lwz       r4, 0x38(r31)
	  stb       r0, 0x478(r4)
	  bl        -0x3D54B0
	  cmplwi    r3, 0
	  beq-      .loc_0xAD4
	  lis       r5, 0x804C
	  lis       r4, 0x804C
	  addi      r0, r5, 0x14F0
	  lis       r6, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x14D8
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  li        r9, 0
	  addi      r7, r5, 0x7420
	  addi      r4, r4, 0x528C
	  stb       r9, 0x4(r3)
	  subi      r8, r6, 0x1D84
	  addi      r6, r7, 0x18
	  li        r5, 0xC
	  stb       r9, 0x5(r3)
	  addi      r0, r4, 0x18
	  stw       r8, 0x8(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x8(r3)
	  sth       r5, 0xC(r3)
	  stw       r9, 0x10(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x8(r3)

	.loc_0xAD4:
	  stw       r3, 0x7C(r31)
	  lwz       r0, 0x8(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xAEC
	  mr        r3, r28
	  bl        -0x3D5E34

	.loc_0xAEC:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F93F8
 * Size:	00034C
 */
void kh::Screen::ObjCaveResult::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  bl        0x5AB98
	  lis       r5, 0x5253
	  li        r4, 0x4B48
	  addi      r6, r5, 0x4C54
	  li        r5, 0x435F
	  bl        -0xEA108
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x54
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7CA0
	  li        r4, 0x178
	  subi      r5, r5, 0x7C8C
	  crclr     6, 0x6
	  bl        -0x3CEE08

	.loc_0x54:
	  mr        r3, r30
	  bl        0x5AB58
	  mr        r31, r3
	  mr        r3, r30
	  bl        0x168C
	  lbz       r0, 0x104(r30)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0xD0
	  lwz       r3, 0x38(r30)
	  bl        -0x1C6DC
	  lwz       r3, 0x38(r30)
	  bl        -0x1C798
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2F8
	  lwz       r3, 0x38(r30)
	  lwz       r0, 0x474(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xC0
	  bge-      .loc_0xAC
	  cmpwi     r0, 0
	  bge-      .loc_0xB4
	  b         .loc_0x2F8

	.loc_0xAC:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x2F8

	.loc_0xB4:
	  li        r0, 0x1
	  stw       r0, 0x34(r31)
	  b         .loc_0x2F8

	.loc_0xC0:
	  lbz       r0, 0x104(r30)
	  rlwinm    r0,r0,0,30,28
	  stb       r0, 0x104(r30)
	  b         .loc_0x2F8

	.loc_0xD0:
	  lwz       r0, 0xF0(r30)
	  cmplwi    r0, 0x8
	  bgt-      .loc_0x15C
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x5AA0
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  mr        r3, r30
	  bl        0xA9C
	  b         .loc_0x15C
	  mr        r3, r30
	  bl        0xC6C
	  b         .loc_0x15C
	  mr        r3, r30
	  bl        0xD54
	  b         .loc_0x15C
	  mr        r3, r30
	  bl        0xE3C
	  b         .loc_0x15C
	  mr        r3, r30
	  bl        0x1120
	  b         .loc_0x15C
	  mr        r3, r30
	  bl        0x12D8
	  b         .loc_0x15C
	  mr        r3, r30
	  bl        0x11E4
	  b         .loc_0x15C
	  mr        r3, r30
	  bl        0x13D0
	  b         .loc_0x15C
	  mr        r3, r30
	  bl        0x110C

	.loc_0x15C:
	  mr        r3, r30
	  bl        0x5AAE8
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x1BC
	  lbz       r0, 0x104(r30)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x188
	  lbz       r0, 0x104(r30)
	  ori       r0, r0, 0x2
	  stb       r0, 0x104(r30)

	.loc_0x188:
	  lwz       r0, 0xF0(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x1BC
	  lbz       r0, 0x104(r30)
	  ori       r0, r0, 0x4
	  stb       r0, 0x104(r30)
	  lwz       r3, 0x7C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x38(r30)
	  bl        -0x1C9B4

	.loc_0x1BC:
	  lbz       r0, 0x104(r30)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x2F8
	  lwz       r3, 0xDC(r30)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  li        r0, 0
	  lfd       f2, 0x1C50(r2)
	  stw       r3, 0xD8(r30)
	  lfs       f1, 0x1C58(r2)
	  lwz       r3, 0xD8(r30)
	  lfs       f0, 0xD4(r30)
	  xoris     r3, r3, 0x8000
	  stw       r3, 0xC(r1)
	  fneg      f3, f0
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f3, f0
	  stfs      f0, 0xD0(r30)
	  stw       r0, 0xE4(r30)
	  lwz       r0, 0x24(r31)
	  stw       r0, 0xB4(r30)
	  lwz       r0, 0x2C(r31)
	  stw       r0, 0xB8(r30)
	  lwz       r0, 0x28(r31)
	  stw       r0, 0xCC(r30)
	  lwz       r0, 0x1C(r31)
	  stw       r0, 0xC4(r30)
	  lwz       r3, 0x98(r30)
	  bl        -0xEDE30
	  lwz       r3, 0x9C(r30)
	  lfs       f1, 0x1C58(r2)
	  bl        -0xEDE3C
	  lwz       r3, 0xB0(r30)
	  lfs       f1, 0x1C58(r2)
	  bl        -0xEDE48
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1814
	  li        r5, 0
	  bl        -0xC1020
	  mr        r3, r30
	  bl        0x1A6C
	  lbz       r0, 0x31(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x28C
	  li        r0, 0x7
	  lis       r3, 0x8051
	  stw       r0, 0xF0(r30)
	  addi      r3, r3, 0x40D4
	  lbz       r0, 0x3B(r3)
	  stw       r0, 0xF4(r30)
	  b         .loc_0x29C

	.loc_0x28C:
	  lwz       r3, 0x1C(r31)
	  li        r0, 0
	  stw       r3, 0xC4(r30)
	  stw       r0, 0xF0(r30)

	.loc_0x29C:
	  lwz       r3, 0x3C(r30)
	  lwz       r4, 0x24(r3)
	  b         .loc_0x2D8

	.loc_0x2A8:
	  lwz       r3, 0x48(r4)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,31,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x2D4
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x2D4
	  lwz       r0, 0x8(r3)
	  ori       r0, r0, 0x2
	  stw       r0, 0x8(r3)

	.loc_0x2D4:
	  lwz       r4, 0x18(r4)

	.loc_0x2D8:
	  cmplwi    r4, 0
	  bne+      .loc_0x2A8
	  lbz       r0, 0x104(r30)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x104(r30)
	  lbz       r0, 0x104(r30)
	  ori       r0, r0, 0x8
	  stb       r0, 0x104(r30)

	.loc_0x2F8:
	  lbz       r0, 0x104(r30)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x330
	  lwz       r0, 0xF0(r30)
	  cmpwi     r0, 0x7
	  beq-      .loc_0x330
	  lbz       r4, 0x105(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x330
	  lis       r3, 0x8051
	  addi      r3, r3, 0x40D4
	  lbz       r0, 0x3A(r3)
	  sub       r0, r4, r0
	  stb       r0, 0x105(r30)

	.loc_0x330:
	  lwz       r0, 0x24(r1)
	  li        r3, 0
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F9744
 * Size:	000760
 */
void kh::Screen::ObjCaveResult::doDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stmw      r20, 0x80(r1)
	  mr        r20, r3
	  lis       r5, 0x414C
	  lwz       r3, 0x40(r3)
	  mr        r21, r4
	  addi      r6, r5, 0x4C32
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r29, r3
	  lwz       r3, 0x40(r20)
	  lwz       r7, 0x2B60(r2)
	  lis       r5, 0x7470
	  lwz       r12, 0x0(r3)
	  lis       r4, 0x4E
	  lwz       r0, 0x2B64(r2)
	  addi      r6, r5, 0x3030
	  lwz       r12, 0x3C(r12)
	  addi      r5, r4, 0x7365
	  stw       r7, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  lis       r5, 0x7470
	  lwz       r3, 0x40(r20)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x3031
	  lwz       r12, 0x0(r3)
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  lis       r4, 0x4441
	  lwz       r3, 0x40(r20)
	  addi      r6, r4, 0x4C4C
	  li        r5, 0x4E33
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x804A
	  lfdu      f3, -0x7BB0(r5)
	  lis       r4, 0x804A
	  lfdu      f1, -0x7BA0(r4)
	  lfd       f2, 0x8(r5)
	  mr        r30, r3
	  lfd       f0, 0x8(r4)
	  addi      r3, r21, 0xBC
	  stfd      f3, 0x58(r1)
	  stfd      f2, 0x60(r1)
	  stfd      f1, 0x48(r1)
	  stfd      f0, 0x50(r1)
	  lwz       r12, 0xBC(r21)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0xB0(r29)
	  mr        r4, r21
	  lwz       r6, 0x2C(r1)
	  addi      r22, r1, 0x2C
	  stb       r0, 0xB0(r30)
	  addi      r5, r21, 0xBC
	  lwz       r3, 0x30(r1)
	  stb       r0, 0xB0(r6)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x40(r20)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  addi      r3, r1, 0x28
	  stw       r0, 0x28(r1)
	  addi      r4, r1, 0x24
	  addi      r5, r1, 0x20
	  addi      r6, r1, 0x1C
	  stw       r0, 0x24(r1)
	  stw       r0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  bl        -0x310064
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0xE8(r20)
	  lwz       r5, 0x20(r1)
	  lwz       r6, 0xEC(r20)
	  bl        -0x3100F0
	  li        r0, 0
	  lfs       f1, 0x1C5C(r2)
	  stb       r0, 0xB0(r29)
	  li        r23, 0
	  stb       r0, 0xB0(r30)
	  lfs       f0, 0xD4(r20)
	  fmuls     f30, f1, f0

	.loc_0x1A4:
	  lwz       r3, 0x0(r22)
	  lfs       f0, 0xD0(r20)
	  lwz       r12, 0x0(r3)
	  fsubs     f2, f0, f30
	  lfs       f1, 0x1C48(r2)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r23, r23, 0x1
	  addi      r22, r22, 0x4
	  cmpwi     r23, 0x2
	  blt+      .loc_0x1A4
	  mr        r24, r20
	  addi      r22, r1, 0x58
	  addi      r23, r1, 0x48
	  li        r25, 0

	.loc_0x1E4:
	  lwz       r3, 0x40(r20)
	  lwz       r5, 0x0(r22)
	  lwz       r12, 0x0(r3)
	  lwz       r6, 0x4(r22)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x40(r20)
	  lwz       r5, 0x0(r23)
	  lwz       r12, 0x0(r3)
	  lwz       r6, 0x4(r23)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0xA0(r24)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  addi      r25, r25, 0x1
	  addi      r23, r23, 0x8
	  cmpwi     r25, 0x2
	  addi      r24, r24, 0x4
	  addi      r22, r22, 0x8
	  blt+      .loc_0x1E4
	  lwz       r3, 0x3C(r20)
	  li        r24, 0
	  lfd       f31, 0x1C60(r2)
	  lis       r31, 0x4330
	  lwz       r23, 0x24(r3)
	  b         .loc_0x488

	.loc_0x270:
	  stw       r24, 0x6C(r1)
	  rlwinm    r26,r24,0,31,31
	  lfs       f3, 0xD4(r20)
	  stw       r31, 0x68(r1)
	  lfs       f1, 0xD0(r20)
	  fneg      f0, f3
	  lfd       f2, 0x68(r1)
	  fsubs     f2, f2, f31
	  fmadds    f1, f2, f3, f1
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0x2BC
	  lwz       r3, 0xEC(r20)
	  lis       r0, 0x4330
	  stw       r0, 0x68(r1)
	  stw       r3, 0x6C(r1)
	  lfd       f0, 0x68(r1)
	  fsubs     f0, f0, f31
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x2E4

	.loc_0x2BC:
	  rlwinm    r0,r26,2,0,29
	  addi      r3, r1, 0x2C
	  lwzx      r3, r3, r0
	  fmr       f2, f30
	  lfs       f1, 0x1C48(r2)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x480

	.loc_0x2E4:
	  lwz       r3, 0x48(r23)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,30,30
	  cmpwi     r0, 0x2
	  bne-      .loc_0x328
	  lwz       r3, 0x3C(r23)
	  cmpwi     r3, 0
	  bge-      .loc_0x30C
	  li        r22, 0
	  b         .loc_0x314

	.loc_0x30C:
	  lwz       r0, 0x30(r23)
	  mullw     r22, r0, r3

	.loc_0x314:
	  mr        r3, r20
	  mr        r4, r26
	  li        r5, 0x30
	  bl        0x15E8
	  b         .loc_0x35C

	.loc_0x328:
	  lwz       r4, 0x3C(r23)
	  lwz       r3, 0x30(r23)
	  lwz       r0, 0x34(r23)
	  cmpwi     r4, 0
	  add       r0, r3, r0
	  bge-      .loc_0x348
	  lwz       r22, 0x38(r23)
	  b         .loc_0x34C

	.loc_0x348:
	  mullw     r22, r0, r4

	.loc_0x34C:
	  mr        r3, r20
	  mr        r4, r26
	  li        r5, 0xFF
	  bl        0x15B0

	.loc_0x35C:
	  cntlzw    r0, r26
	  addi      r3, r1, 0x2C
	  rlwinm    r0,r0,29,22,29
	  rlwinm    r25,r26,2,0,29
	  lwzx      r4, r3, r0
	  li        r5, 0
	  lwzx      r3, r3, r25
	  li        r0, 0x1
	  stb       r5, 0xB0(r4)
	  fmr       f2, f30
	  lfs       f1, 0x1C48(r2)
	  stb       r0, 0xB0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x2C(r23)
	  rlwinm    r26,r26,3,0,28
	  addi      r0, r1, 0x58
	  lwz       r3, 0x40(r20)
	  add       r6, r0, r26
	  lwz       r7, 0x20(r4)
	  lwz       r5, 0x0(r6)
	  lwz       r6, 0x4(r6)
	  bl        0x11940
	  lwz       r28, 0x40(r23)
	  li        r3, 0
	  lwz       r27, 0x44(r23)
	  xor       r0, r28, r3
	  xor       r3, r27, r3
	  or.       r0, r3, r0
	  bne-      .loc_0x40C
	  lwz       r3, 0x40(r20)
	  addi      r0, r1, 0x48
	  add       r6, r0, r26
	  lwz       r12, 0x0(r3)
	  lwz       r5, 0x0(r6)
	  lwz       r12, 0x3C(r12)
	  lwz       r6, 0x4(r6)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  b         .loc_0x448

	.loc_0x40C:
	  lwz       r3, 0x40(r20)
	  addi      r0, r1, 0x48
	  add       r6, r0, r26
	  lwz       r12, 0x0(r3)
	  lwz       r5, 0x0(r6)
	  lwz       r12, 0x3C(r12)
	  lwz       r6, 0x4(r6)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  li        r4, 0
	  addc      r0, r27, r0
	  stw       r0, 0x1C(r3)
	  adde      r0, r28, r4
	  stw       r0, 0x18(r3)

	.loc_0x448:
	  add       r3, r20, r25
	  stw       r22, 0xBC(r3)
	  lwz       r3, 0xA0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x40(r20)
	  mr        r4, r21
	  addi      r5, r21, 0xBC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x480:
	  lwz       r23, 0x18(r23)
	  addi      r24, r24, 0x1

	.loc_0x488:
	  cmplwi    r23, 0
	  bne+      .loc_0x270
	  addi      r26, r1, 0x2C
	  addi      r23, r1, 0x58
	  addi      r22, r1, 0x48
	  b         .loc_0x57C

	.loc_0x4A0:
	  rlwinm    r27,r24,0,31,31
	  rlwinm    r25,r24,2,29,29
	  cntlzw    r0, r27
	  li        r5, 0
	  rlwinm    r0,r0,29,22,29
	  lwzx      r3, r26, r25
	  lwzx      r4, r26, r0
	  li        r0, 0x1
	  fmr       f2, f30
	  lfs       f1, 0x1C48(r2)
	  stb       r5, 0xB0(r4)
	  stb       r0, 0xB0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r20
	  mr        r4, r27
	  li        r5, 0xFF
	  bl        0x141C
	  lwz       r3, 0x40(r20)
	  rlwinm    r27,r27,3,0,28
	  add       r6, r23, r27
	  lwz       r12, 0x0(r3)
	  lwz       r5, 0x0(r6)
	  lwz       r12, 0x3C(r12)
	  lwz       r6, 0x4(r6)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  add       r6, r22, r27
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x40(r20)
	  lwz       r5, 0x0(r6)
	  lwz       r12, 0x0(r3)
	  lwz       r6, 0x4(r6)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  addi      r0, r25, 0xA0
	  stb       r4, 0xB0(r3)
	  lwzx      r3, r20, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x40(r20)
	  mr        r4, r21
	  addi      r5, r21, 0xBC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  addi      r24, r24, 0x1

	.loc_0x57C:
	  cmplwi    r24, 0x6
	  blt+      .loc_0x4A0
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r5, 0x20(r1)
	  lwz       r6, 0x1C(r1)
	  bl        -0x310500
	  li        r7, 0
	  li        r0, 0x1
	  stb       r7, 0xB0(r29)
	  mr        r4, r21
	  lwz       r6, 0x2C(r1)
	  addi      r5, r21, 0xBC
	  stb       r0, 0xB0(r30)
	  lwz       r3, 0x30(r1)
	  stb       r7, 0xB0(r6)
	  stb       r7, 0xB0(r3)
	  lwz       r3, 0x40(r20)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r20)
	  lis       r23, 0x6F6E
	  lis       r22, 0x6950
	  lwz       r24, 0x24(r3)
	  b         .loc_0x60C

	.loc_0x5E8:
	  lwz       r7, 0x2C(r24)
	  mr        r8, r21
	  lwz       r3, 0x48(r24)
	  addi      r6, r23, 0x3030
	  lwz       r4, 0x44(r20)
	  addi      r5, r22, 0x6963
	  lwz       r7, 0x20(r7)
	  bl        0x19EC
	  lwz       r24, 0x18(r24)

	.loc_0x60C:
	  cmplwi    r24, 0
	  bne+      .loc_0x5E8
	  lbz       r0, 0x105(r20)
	  cmplwi    r0, 0
	  beq-      .loc_0x6D8
	  addi      r3, r21, 0xBC
	  lwz       r12, 0xBC(r21)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x105(r20)
	  li        r8, 0
	  stb       r8, 0x18(r1)
	  addi      r3, r21, 0xBC
	  addi      r4, r1, 0x8
	  addi      r5, r1, 0xC
	  stb       r8, 0x19(r1)
	  addi      r6, r1, 0x10
	  addi      r7, r1, 0x14
	  stb       r8, 0x1A(r1)
	  stb       r0, 0x1B(r1)
	  lwz       r0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x3C372C
	  bl        0x29468
	  lhz       r22, 0x6(r3)
	  bl        0x29460
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f3, 0x1C48(r2)
	  addi      r3, r21, 0xBC
	  stw       r4, 0x6C(r1)
	  addi      r4, r1, 0x34
	  lfd       f2, 0x1C60(r2)
	  stw       r0, 0x68(r1)
	  lfd       f0, 0x68(r1)
	  stw       r22, 0x74(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x70(r1)
	  lfd       f0, 0x70(r1)
	  fadds     f1, f3, f1
	  stfs      f3, 0x34(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x38(r1)
	  fadds     f0, f3, f0
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  bl        -0x3C3644

	.loc_0x6D8:
	  lbz       r0, 0x104(r20)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x714
	  addi      r3, r21, 0xBC
	  lwz       r12, 0xBC(r21)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x48(r20)
	  mr        r4, r21
	  addi      r5, r21, 0xBC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x714:
	  lbz       r0, 0x104(r20)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x73C
	  addi      r3, r21, 0x190
	  lwz       r12, 0x190(r21)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x38(r20)
	  bl        -0x1D050

	.loc_0x73C:
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  lmw       r20, 0x80(r1)
	  lwz       r0, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F9EA4
 * Size:	000068
 */
void kh::Screen::ObjCaveResult::doUpdateFadein(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0xC30
	  lis       r3, 0x8051
	  lbz       r0, 0x105(r31)
	  addi      r4, r3, 0x40D4
	  lbz       r3, 0x38(r4)
	  sub       r0, r0, r3
	  stb       r0, 0x105(r31)
	  lbz       r3, 0x105(r31)
	  lbz       r0, 0x38(r4)
	  cmplw     r3, r0
	  bge-      .loc_0x50
	  li        r0, 0
	  li        r3, 0x1
	  stb       r0, 0x105(r31)
	  b         .loc_0x54

	.loc_0x50:
	  li        r3, 0

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F9F0C
 * Size:	000014
 */
void kh::Screen::ObjCaveResult::doUpdateFadeinFinish(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x1C68(r2)
	  lfs       f0, 0x1C6C(r2)
	  stfs      f1, 0xFC(r3)
	  stfs      f0, 0x100(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F9F20
 * Size:	00006C
 */
void kh::Screen::ObjCaveResult::doUpdateFadeout(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0xBB4
	  lis       r3, 0x8051
	  lbz       r4, 0x105(r31)
	  addi      r3, r3, 0x40D4
	  lbz       r0, 0x38(r3)
	  add       r0, r4, r0
	  stb       r0, 0x105(r31)
	  lbz       r0, 0x38(r3)
	  lbz       r3, 0x105(r31)
	  subfic    r0, r0, 0xFF
	  cmpw      r3, r0
	  ble-      .loc_0x54
	  li        r0, 0xFF
	  li        r3, 0x1
	  stb       r0, 0x105(r31)
	  b         .loc_0x58

	.loc_0x54:
	  li        r3, 0

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F9F8C
 * Size:	0001DC
 */
void kh::Screen::ObjCaveResult::statusNormal(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x104(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x94
	  lwz       r3, 0xD8(r31)
	  cmpwi     r3, 0
	  bne-      .loc_0x48
	  lwz       r3, 0x8C(r31)
	  bl        0x11E34
	  lwz       r3, 0x90(r31)
	  bl        0x11E0C
	  lwz       r3, 0x80(r31)
	  bl        -0xCCB7C
	  b         .loc_0x88

	.loc_0x48:
	  lwz       r0, 0xDC(r31)
	  cmpw      r3, r0
	  bne-      .loc_0x70
	  lwz       r3, 0x8C(r31)
	  bl        0x11DEC
	  lwz       r3, 0x90(r31)
	  bl        0x11E04
	  lwz       r3, 0x80(r31)
	  bl        -0xCCC78
	  b         .loc_0x88

	.loc_0x70:
	  lwz       r3, 0x8C(r31)
	  bl        0x11DD0
	  lwz       r3, 0x90(r31)
	  bl        0x11DC8
	  lwz       r3, 0x80(r31)
	  bl        -0xCCAD8

	.loc_0x88:
	  lwz       r3, 0x88(r31)
	  bl        0x11DB8
	  b         .loc_0xAC

	.loc_0x94:
	  lwz       r3, 0x8C(r31)
	  bl        0x11DCC
	  lwz       r3, 0x90(r31)
	  bl        0x11DC4
	  lwz       r3, 0x88(r31)
	  bl        0x11DBC

	.loc_0xAC:
	  lwz       r3, 0x94(r31)
	  bl        0x11D94
	  lbz       r0, 0x104(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x1C8
	  mr        r3, r31
	  bl        0x59FF0
	  lis       r4, 0x800
	  lwz       r3, 0x18(r3)
	  addi      r0, r4, 0x8
	  and.      r0, r3, r0
	  beq-      .loc_0x134
	  lwz       r3, 0xD8(r31)
	  cmpwi     r3, 0
	  beq-      .loc_0x134
	  subi      r0, r3, 0x1
	  stw       r0, 0xD8(r31)
	  lbz       r3, 0x106(r31)
	  cmplwi    r3, 0x1
	  blt-      .loc_0x110
	  lis       r3, 0x8051
	  addi      r3, r3, 0x40D4
	  lwz       r0, 0x20(r3)
	  stw       r0, 0xE0(r31)
	  b         .loc_0x118

	.loc_0x110:
	  addi      r0, r3, 0x1
	  stb       r0, 0x106(r31)

	.loc_0x118:
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x107(r31)
	  mr        r3, r31
	  stw       r0, 0xF0(r31)
	  bl        .loc_0x1DC
	  b         .loc_0x1C8

	.loc_0x134:
	  mr        r3, r31
	  bl        0x59F7C
	  lis       r4, 0x400
	  lwz       r3, 0x18(r3)
	  addi      r0, r4, 0x4
	  and.      r0, r3, r0
	  beq-      .loc_0x1AC
	  lwz       r3, 0xD8(r31)
	  lwz       r0, 0xDC(r31)
	  cmpw      r3, r0
	  beq-      .loc_0x1AC
	  addi      r0, r3, 0x1
	  stw       r0, 0xD8(r31)
	  lbz       r3, 0x107(r31)
	  cmplwi    r3, 0x1
	  blt-      .loc_0x188
	  lis       r3, 0x8051
	  addi      r3, r3, 0x40D4
	  lwz       r0, 0x20(r3)
	  stw       r0, 0xE0(r31)
	  b         .loc_0x190

	.loc_0x188:
	  addi      r0, r3, 0x1
	  stb       r0, 0x107(r31)

	.loc_0x190:
	  li        r3, 0
	  li        r0, 0x2
	  stb       r3, 0x106(r31)
	  mr        r3, r31
	  stw       r0, 0xF0(r31)
	  bl        0x12C
	  b         .loc_0x1C8

	.loc_0x1AC:
	  li        r0, 0
	  lis       r3, 0x8051
	  stb       r0, 0x107(r31)
	  addi      r3, r3, 0x40D4
	  stb       r0, 0x106(r31)
	  lwz       r0, 0x1C(r3)
	  stw       r0, 0xE0(r31)

	.loc_0x1C8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x1DC:
	*/
}

/*
 * --INFO--
 * Address:	803FA168
 * Size:	0000F4
 */
void kh::Screen::ObjCaveResult::statusScrollUp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r6, 0x4330
	  lfd       f4, 0x1C50(r2)
	  stw       r0, 0x34(r1)
	  lwz       r4, 0xD8(r3)
	  stw       r6, 0x18(r1)
	  addi      r0, r4, 0x1
	  xoris     r5, r4, 0x8000
	  xoris     r0, r0, 0x8000
	  lwz       r8, 0xE0(r3)
	  stw       r0, 0x1C(r1)
	  lwz       r7, 0xE4(r3)
	  lfd       f0, 0x18(r1)
	  sub       r0, r8, r7
	  stw       r5, 0x14(r1)
	  xoris     r4, r0, 0x8000
	  fsubs     f0, f0, f4
	  stw       r6, 0x10(r1)
	  xoris     r7, r7, 0x8000
	  lfs       f3, 0xD4(r3)
	  xoris     r0, r8, 0x8000
	  lfd       f2, 0x10(r1)
	  stw       r4, 0x24(r1)
	  fmuls     f1, f3, f0
	  fsubs     f2, f2, f4
	  stw       r6, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  fmuls     f2, f3, f2
	  stw       r7, 0xC(r1)
	  fsubs     f0, f0, f4
	  stw       r6, 0x8(r1)
	  lfd       f3, 0x8(r1)
	  fmuls     f1, f1, f0
	  stw       r0, 0x2C(r1)
	  fsubs     f3, f3, f4
	  stw       r6, 0x28(r1)
	  lfd       f0, 0x28(r1)
	  fmadds    f1, f3, f2, f1
	  fsubs     f0, f0, f4
	  fdivs     f0, f1, f0
	  fneg      f0, f0
	  stfs      f0, 0xD0(r3)
	  lwz       r4, 0xE4(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0xE4(r3)
	  lwz       r0, 0xE0(r3)
	  cmpw      r4, r0
	  bne-      .loc_0xD4
	  li        r4, 0x1
	  li        r0, 0
	  stw       r4, 0xE4(r3)
	  stw       r0, 0xF0(r3)

	.loc_0xD4:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x101A
	  li        r5, 0
	  bl        -0xC1C18
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FA25C
 * Size:	0000F4
 */
void kh::Screen::ObjCaveResult::statusScrollDown(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r6, 0x4330
	  lfd       f4, 0x1C50(r2)
	  stw       r0, 0x34(r1)
	  lwz       r4, 0xD8(r3)
	  stw       r6, 0x18(r1)
	  subi      r0, r4, 0x1
	  xoris     r5, r4, 0x8000
	  xoris     r0, r0, 0x8000
	  lwz       r8, 0xE0(r3)
	  stw       r0, 0x1C(r1)
	  lwz       r7, 0xE4(r3)
	  lfd       f0, 0x18(r1)
	  sub       r0, r8, r7
	  stw       r5, 0x14(r1)
	  xoris     r4, r0, 0x8000
	  fsubs     f0, f0, f4
	  stw       r6, 0x10(r1)
	  xoris     r7, r7, 0x8000
	  lfs       f3, 0xD4(r3)
	  xoris     r0, r8, 0x8000
	  lfd       f2, 0x10(r1)
	  stw       r4, 0x24(r1)
	  fmuls     f1, f3, f0
	  fsubs     f2, f2, f4
	  stw       r6, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  fmuls     f2, f3, f2
	  stw       r7, 0xC(r1)
	  fsubs     f0, f0, f4
	  stw       r6, 0x8(r1)
	  lfd       f3, 0x8(r1)
	  fmuls     f1, f1, f0
	  stw       r0, 0x2C(r1)
	  fsubs     f3, f3, f4
	  stw       r6, 0x28(r1)
	  lfd       f0, 0x28(r1)
	  fmadds    f1, f3, f2, f1
	  fsubs     f0, f0, f4
	  fdivs     f0, f1, f0
	  fneg      f0, f0
	  stfs      f0, 0xD0(r3)
	  lwz       r4, 0xE4(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0xE4(r3)
	  lwz       r0, 0xE0(r3)
	  cmpw      r4, r0
	  bne-      .loc_0xD4
	  li        r4, 0x1
	  li        r0, 0
	  stw       r4, 0xE4(r3)
	  stw       r0, 0xF0(r3)

	.loc_0xD4:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x101A
	  li        r5, 0
	  bl        -0xC1D0C
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FA350
 * Size:	0002F0
 */
void kh::Screen::ObjCaveResult::statusForceScroll(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r6, 0x4330
	  lfd       f4, 0x1C50(r2)
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  lwz       r4, 0xD8(r3)
	  stw       r6, 0x20(r1)
	  subi      r0, r4, 0x1
	  xoris     r5, r4, 0x8000
	  xoris     r0, r0, 0x8000
	  lwz       r8, 0xE0(r3)
	  stw       r0, 0x24(r1)
	  lwz       r7, 0xE4(r3)
	  lfd       f0, 0x20(r1)
	  sub       r0, r8, r7
	  stw       r5, 0x1C(r1)
	  xoris     r4, r0, 0x8000
	  fsubs     f0, f0, f4
	  stw       r6, 0x18(r1)
	  xoris     r7, r7, 0x8000
	  lfs       f3, 0xD4(r3)
	  xoris     r0, r8, 0x8000
	  lfd       f2, 0x18(r1)
	  stw       r4, 0x2C(r1)
	  fmuls     f1, f3, f0
	  fsubs     f2, f2, f4
	  stw       r6, 0x28(r1)
	  lfd       f0, 0x28(r1)
	  fmuls     f2, f3, f2
	  stw       r7, 0x14(r1)
	  fsubs     f0, f0, f4
	  stw       r6, 0x10(r1)
	  lfd       f3, 0x10(r1)
	  fmuls     f1, f1, f0
	  stw       r0, 0x34(r1)
	  fsubs     f3, f3, f4
	  stw       r6, 0x30(r1)
	  lfd       f0, 0x30(r1)
	  fmadds    f1, f3, f2, f1
	  fsubs     f0, f0, f4
	  fdivs     f0, f1, f0
	  fneg      f0, f0
	  stfs      f0, 0xD0(r3)
	  lwz       r4, 0xE4(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0xE4(r3)
	  lwz       r0, 0xE0(r3)
	  cmpw      r4, r0
	  bne-      .loc_0x24C
	  lwz       r4, 0xD8(r31)
	  lwz       r0, 0xDC(r31)
	  cmpw      r4, r0
	  bne-      .loc_0x160
	  li        r0, 0x1
	  li        r5, 0
	  stw       r0, 0xE4(r31)
	  li        r3, 0x5
	  li        r0, 0
	  lwz       r4, 0x3C(r31)
	  lwz       r6, 0x24(r4)
	  b         .loc_0x134

	.loc_0x104:
	  lwz       r4, 0x48(r6)
	  lwz       r4, 0x8(r4)
	  rlwinm    r4,r4,0,30,30
	  cmpwi     r4, 0x2
	  beq-      .loc_0x130
	  lwz       r4, 0x34(r6)
	  cmpwi     r4, 0
	  beq-      .loc_0x130
	  stw       r3, 0xF0(r31)
	  li        r5, 0x1
	  stw       r0, 0xF4(r31)

	.loc_0x130:
	  lwz       r6, 0x18(r6)

	.loc_0x134:
	  cmplwi    r6, 0
	  bne+      .loc_0x104
	  rlwinm.   r0,r5,0,24,31
	  bne-      .loc_0x24C
	  li        r0, 0x8
	  lis       r3, 0x8051
	  stw       r0, 0xF0(r31)
	  addi      r3, r3, 0x40D4
	  lbz       r0, 0x3B(r3)
	  stw       r0, 0xF4(r31)
	  b         .loc_0x24C

	.loc_0x160:
	  bl        0x59AF8
	  lis       r5, 0x5253
	  li        r4, 0x4B48
	  addi      r6, r5, 0x4C54
	  li        r5, 0x435F
	  bl        -0xEB1A8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x19C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7CA0
	  li        r4, 0x33D
	  subi      r5, r5, 0x7C8C
	  crclr     6, 0x6
	  bl        -0x3CFEA8

	.loc_0x19C:
	  mr        r3, r31
	  bl        0x59AB8
	  lwz       r3, 0x3C(r31)
	  li        r4, 0
	  lwz       r5, 0x24(r3)
	  b         .loc_0x1BC

	.loc_0x1B4:
	  lwz       r5, 0x18(r5)
	  addi      r4, r4, 0x1

	.loc_0x1BC:
	  cmplwi    r5, 0
	  beq-      .loc_0x1D4
	  lwz       r3, 0xD8(r31)
	  addi      r0, r3, 0x6
	  cmpw      r4, r0
	  bne+      .loc_0x1B4

	.loc_0x1D4:
	  cmplwi    r5, 0
	  beq-      .loc_0x238
	  lwz       r0, 0x34(r5)
	  cmpwi     r0, 0
	  bne-      .loc_0x238
	  lwz       r0, 0x3C(r5)
	  cmpwi     r0, 0
	  ble-      .loc_0x200
	  lwz       r3, 0xC4(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0xC4(r31)

	.loc_0x200:
	  lwz       r0, 0x3C(r5)
	  cmpwi     r0, 0
	  bgt-      .loc_0x218
	  lwz       r0, 0x34(r5)
	  cmpwi     r0, 0
	  bne-      .loc_0x228

	.loc_0x218:
	  lwz       r3, 0xB4(r31)
	  lwz       r0, 0x38(r5)
	  add       r0, r3, r0
	  stw       r0, 0xB4(r31)

	.loc_0x228:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x181E
	  li        r5, 0
	  bl        -0xC1F54

	.loc_0x238:
	  li        r0, 0x1
	  stw       r0, 0xE4(r31)
	  lwz       r3, 0xD8(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0xD8(r31)

	.loc_0x24C:
	  lfs       f0, 0xFC(r31)
	  li        r30, 0
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x100(r31)
	  stfs      f0, 0xC(r1)
	  lwz       r3, 0x3C(r31)
	  lwz       r29, 0x24(r3)
	  b         .loc_0x2BC

	.loc_0x26C:
	  lwz       r4, 0xD8(r31)
	  lwz       r3, 0x48(r29)
	  addi      r0, r4, 0x2
	  cmpw      r30, r0
	  bne-      .loc_0x2B4
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,31,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x2B4
	  rlwinm    r4,r30,1,31,31
	  rlwinm    r0,r30,0,31,31
	  xor       r0, r0, r4
	  sub       r5, r0, r4
	  addi      r4, r1, 0x8
	  neg       r0, r5
	  or        r0, r0, r5
	  rlwinm    r5,r0,1,31,31
	  bl        0xC40

	.loc_0x2B4:
	  lwz       r29, 0x18(r29)
	  addi      r30, r30, 0x1

	.loc_0x2BC:
	  cmplwi    r29, 0
	  bne+      .loc_0x26C
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x101A
	  li        r5, 0
	  bl        -0xC1FF0
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FA640
 * Size:	00001C
 */
void kh::Screen::ObjCaveResult::statusDrumRoll(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, 0x8
	  addi      r4, r4, 0x40D4
	  lbz       r4, 0x3B(r4)
	  stw       r4, 0xF4(r3)
	  stw       r0, 0xF0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FA65C
 * Size:	0000C0
 */
void kh::Screen::ObjCaveResult::statusAllMoney(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0xF4(r3)
	  cmpwi     r4, 0
	  bne-      .loc_0xA4
	  bl        0x5992C
	  lis       r5, 0x5253
	  li        r4, 0x4B48
	  addi      r6, r5, 0x4C54
	  li        r5, 0x435F
	  bl        -0xEB374
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7CA0
	  li        r4, 0x38E
	  subi      r5, r5, 0x7C8C
	  crclr     6, 0x6
	  bl        -0x3D0074

	.loc_0x5C:
	  mr        r3, r31
	  bl        0x598EC
	  lwz       r0, 0x28(r3)
	  lfs       f1, 0x1C58(r2)
	  stw       r0, 0xCC(r31)
	  lwz       r3, 0xB0(r31)
	  bl        -0xEEED8
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1814
	  li        r5, 0
	  bl        -0xC20B0
	  lis       r3, 0x8051
	  li        r0, 0x6
	  addi      r3, r3, 0x40D4
	  lbz       r3, 0x3B(r3)
	  stw       r3, 0xF4(r31)
	  stw       r0, 0xF0(r31)
	  b         .loc_0xAC

	.loc_0xA4:
	  subi      r0, r4, 0x1
	  stw       r0, 0xF4(r31)

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
 * Address:	803FA71C
 * Size:	0000E8
 */
void kh::Screen::ObjCaveResult::statusDecP(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  lwz       r4, 0xF4(r3)
	  cmpwi     r4, 0
	  bne-      .loc_0xC8
	  bl        0x59868
	  lis       r5, 0x5253
	  li        r4, 0x4B48
	  addi      r6, r5, 0x4C54
	  li        r5, 0x435F
	  bl        -0xEB438
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x60
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7CA0
	  li        r4, 0x3A6
	  subi      r5, r5, 0x7C8C
	  crclr     6, 0x6
	  bl        -0x3D0138

	.loc_0x60:
	  mr        r3, r31
	  bl        0x59828
	  mr        r30, r3
	  lfs       f1, 0x1C58(r2)
	  lwz       r0, 0x2C(r3)
	  stw       r0, 0xB8(r31)
	  lwz       r3, 0x9C(r31)
	  bl        -0xEEFA0
	  mr        r3, r31
	  bl        0x924
	  lbz       r0, 0x31(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xB0
	  li        r0, 0x7
	  lis       r3, 0x8051
	  stw       r0, 0xF0(r31)
	  addi      r3, r3, 0x40D4
	  lbz       r0, 0x3B(r3)
	  stw       r0, 0xF4(r31)
	  b         .loc_0xB8

	.loc_0xB0:
	  li        r0, 0
	  stw       r0, 0xF0(r31)

	.loc_0xB8:
	  lbz       r0, 0x104(r31)
	  ori       r0, r0, 0x8
	  stb       r0, 0x104(r31)
	  b         .loc_0xD0

	.loc_0xC8:
	  subi      r0, r4, 0x1
	  stw       r0, 0xF4(r31)

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FA804
 * Size:	000110
 */
void kh::Screen::ObjCaveResult::statusLost(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0xF4(r3)
	  cmpwi     r3, 0
	  bne-      .loc_0xF4
	  lfs       f0, 0xFC(r31)
	  li        r6, 0
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x100(r31)
	  stfs      f0, 0xC(r1)
	  lwz       r3, 0x3C(r31)
	  lwz       r4, 0x24(r3)
	  b         .loc_0xD0

	.loc_0x40:
	  lwz       r0, 0x34(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0xC8
	  lwz       r3, 0x48(r4)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,30,30
	  cmpwi     r0, 0x2
	  beq-      .loc_0xC8
	  lwz       r5, 0xDC(r31)
	  subi      r4, r6, 0x3
	  lis       r0, 0x4330
	  lfd       f2, 0x1C50(r2)
	  sub       r4, r4, r5
	  stw       r0, 0x10(r1)
	  xoris     r0, r4, 0x8000
	  lfs       f3, 0xD4(r31)
	  stw       r0, 0x14(r1)
	  rlwinm    r4,r6,1,31,31
	  rlwinm    r0,r6,0,31,31
	  lfs       f0, 0xC(r1)
	  lfd       f1, 0x10(r1)
	  xor       r0, r0, r4
	  sub       r4, r0, r4
	  fsubs     f1, f1, f2
	  neg       r0, r4
	  or        r0, r0, r4
	  addi      r4, r1, 0x8
	  rlwinm    r5,r0,1,31,31
	  fmadds    f0, f3, f1, f0
	  stfs      f0, 0xC(r1)
	  bl        0x984
	  lwz       r0, 0xE0(r31)
	  stw       r0, 0xF4(r31)
	  b         .loc_0xFC

	.loc_0xC8:
	  lwz       r4, 0x18(r4)
	  addi      r6, r6, 0x1

	.loc_0xD0:
	  cmplwi    r4, 0
	  bne+      .loc_0x40
	  li        r0, 0x8
	  lis       r3, 0x8051
	  stw       r0, 0xF0(r31)
	  addi      r3, r3, 0x40D4
	  lbz       r0, 0x3B(r3)
	  stw       r0, 0xF4(r31)
	  b         .loc_0xFC

	.loc_0xF4:
	  subi      r0, r3, 0x1
	  stw       r0, 0xF4(r31)

	.loc_0xFC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FA914
 * Size:	0001D4
 */
void kh::Screen::ObjCaveResult::statusEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0xF4(r3)
	  cmpwi     r3, 0
	  bne-      .loc_0x190
	  lbz       r0, 0x104(r31)
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x168
	  lwz       r3, 0x40(r31)
	  lis       r5, 0x6E6F
	  lis       r4, 0x5061
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x726D
	  addi      r5, r4, 0x6E61
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r5, 0x636F
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x5061
	  addi      r6, r5, 0x6D70
	  lwz       r3, 0x40(r31)
	  addi      r5, r4, 0x6E61
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x84(r31)
	  bl        -0xD1B54
	  lwz       r3, 0xAC(r31)
	  bl        -0xEF1E4
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0xA8(r31)
	  bl        -0xEF1F4
	  lis       r4, 0x8051
	  lwz       r12, 0x0(r3)
	  addi      r4, r4, 0x40D4
	  lfs       f1, 0x10(r4)
	  lfs       f0, 0x14(r4)
	  lwz       r12, 0x14(r12)
	  fneg      f1, f1
	  fneg      f2, f0
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x40(r31)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x3038
	  addi      r5, r4, 0x4354
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lis       r5, 0x7473
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x50
	  addi      r6, r5, 0x3134
	  lwz       r3, 0x40(r31)
	  addi      r5, r4, 0x7469
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lis       r5, 0x7473
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x50
	  addi      r6, r5, 0x3135
	  lwz       r3, 0x40(r31)
	  addi      r5, r4, 0x7469
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0x1
	  li        r0, 0
	  stb       r4, 0xB0(r3)
	  li        r4, 0x1840
	  li        r5, 0
	  stw       r0, 0xF0(r31)
	  lwz       r3, -0x67A8(r13)
	  bl        -0xC2448

	.loc_0x168:
	  lis       r3, 0x8051
	  lbz       r4, 0x105(r31)
	  addi      r3, r3, 0x40D4
	  lbz       r0, 0x39(r3)
	  cmplw     r4, r0
	  bge-      .loc_0x1C0
	  lbz       r0, 0x3A(r3)
	  add       r0, r4, r0
	  stb       r0, 0x105(r31)
	  b         .loc_0x1C0

	.loc_0x190:
	  subi      r0, r3, 0x1
	  stw       r0, 0xF4(r31)
	  lwz       r0, 0xF4(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x1C0
	  lbz       r0, 0x104(r31)
	  li        r4, 0x1833
	  li        r5, 0
	  ori       r0, r0, 0x10
	  stb       r0, 0x104(r31)
	  lwz       r3, -0x67A8(r13)
	  bl        -0xC24A0

	.loc_0x1C0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FAAE8
 * Size:	000564
 */
void kh::Screen::ObjCaveResult::updateAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  mr        r31, r3
	  lis       r4, 0x6D61
	  lwz       r3, 0x40(r3)
	  addi      r6, r4, 0x736B
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r1, 0x34
	  li        r5, 0
	  bl        -0x3C1B9C
	  lwz       r3, 0x40(r31)
	  lis       r4, 0x6D61
	  lwz       r7, 0x34(r1)
	  addi      r6, r4, 0x736B
	  lwz       r12, 0x0(r3)
	  li        r5, 0x4E
	  lwz       r4, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  lwz       r12, 0x3C(r12)
	  stw       r7, 0x64(r1)
	  stw       r4, 0x68(r1)
	  stw       r0, 0x6C(r1)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r1, 0x28
	  li        r5, 0x3
	  bl        -0x3C1BE4
	  lfs       f0, 0x1C70(r2)
	  lfs       f31, 0x68(r1)
	  lwz       r4, 0x28(r1)
	  lwz       r3, 0x2C(r1)
	  fadds     f1, f0, f31
	  lwz       r0, 0x30(r1)
	  stw       r4, 0x58(r1)
	  stw       r3, 0x5C(r1)
	  stw       r0, 0x60(r1)
	  bl        -0x339058
	  lfs       f0, 0x5C(r1)
	  stw       r3, 0xE8(r31)
	  fsubs     f1, f0, f31
	  bl        -0x339068
	  stw       r3, 0xEC(r31)
	  lfs       f0, 0x64(r31)
	  lwz       r3, 0x4C(r31)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x6C(r31)
	  lwz       r3, 0x54(r31)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x74(r31)
	  lwz       r3, 0x5C(r31)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x78(r31)
	  lwz       r3, 0x60(r31)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x40(r31)
	  bl        -0x3BA0C4
	  lbz       r0, 0x104(r31)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x248
	  lfs       f1, 0x64(r31)
	  lis       r0, 0x4330
	  lfs       f0, 0x1C58(r2)
	  stw       r0, 0x88(r1)
	  fadds     f0, f1, f0
	  lfd       f1, 0x1C50(r2)
	  stfs      f0, 0x64(r31)
	  lwz       r3, 0x4C(r31)
	  lfs       f2, 0x64(r31)
	  lha       r0, 0x6(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x8C(r1)
	  lfd       f0, 0x88(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x164
	  lfs       f0, 0x1C48(r2)
	  stfs      f0, 0x64(r31)

	.loc_0x164:
	  lfs       f1, 0x6C(r31)
	  lis       r0, 0x4330
	  lfs       f0, 0x1C58(r2)
	  stw       r0, 0x88(r1)
	  fadds     f0, f1, f0
	  lfd       f1, 0x1C50(r2)
	  stfs      f0, 0x6C(r31)
	  lwz       r3, 0x54(r31)
	  lfs       f2, 0x6C(r31)
	  lha       r0, 0x6(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x8C(r1)
	  lfd       f0, 0x88(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1B0
	  lfs       f0, 0x1C48(r2)
	  stfs      f0, 0x6C(r31)

	.loc_0x1B0:
	  lfs       f1, 0x74(r31)
	  lis       r0, 0x4330
	  lfs       f0, 0x1C58(r2)
	  stw       r0, 0x88(r1)
	  fadds     f0, f1, f0
	  lfd       f1, 0x1C50(r2)
	  stfs      f0, 0x74(r31)
	  lwz       r3, 0x5C(r31)
	  lfs       f2, 0x74(r31)
	  lha       r0, 0x6(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x8C(r1)
	  lfd       f0, 0x88(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1FC
	  lfs       f0, 0x1C48(r2)
	  stfs      f0, 0x74(r31)

	.loc_0x1FC:
	  lfs       f1, 0x78(r31)
	  lis       r0, 0x4330
	  lfs       f0, 0x1C58(r2)
	  stw       r0, 0x88(r1)
	  fadds     f0, f1, f0
	  lfd       f1, 0x1C50(r2)
	  stfs      f0, 0x78(r31)
	  lwz       r3, 0x60(r31)
	  lfs       f2, 0x78(r31)
	  lha       r0, 0x6(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x8C(r1)
	  lfd       f0, 0x88(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x248
	  lfs       f0, 0x1C48(r2)
	  stfs      f0, 0x78(r31)

	.loc_0x248:
	  lwz       r3, 0x40(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x84(r31)
	  bl        -0xD1DC4
	  lwz       r3, 0x40(r31)
	  lis       r5, 0x636F
	  lis       r4, 0x5061
	  fmr       f31, f1
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6D70
	  addi      r5, r4, 0x6E61
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stfs      f31, 0xCC(r3)
	  stfs      f31, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x104(r31)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x524
	  lfs       f0, 0x68(r31)
	  lwz       r3, 0x50(r31)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x70(r31)
	  lwz       r3, 0x58(r31)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x48(r31)
	  bl        -0x3BA288
	  lfs       f1, 0x68(r31)
	  lfs       f0, 0x1C74(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x488
	  lbz       r0, 0x104(r31)
	  rlwinm.   r0,r0,0,26,26
	  bne-      .loc_0x488
	  bl        0x2844C
	  lhz       r30, 0x6(r3)
	  bl        0x28444
	  lhz       r4, 0x4(r3)
	  lis       r5, 0x4330
	  lis       r3, 0x804C
	  stw       r5, 0x88(r1)
	  addi      r0, r3, 0x1514
	  lfd       f2, 0x1C60(r2)
	  stw       r4, 0x8C(r1)
	  addi      r4, r1, 0x4C
	  lfs       f3, 0x1C70(r2)
	  lfd       f0, 0x88(r1)
	  stw       r30, 0x94(r1)
	  fsubs     f1, f0, f2
	  stw       r5, 0x90(r1)
	  lfd       f0, 0x90(r1)
	  fmuls     f1, f3, f1
	  stw       r0, 0x54(r1)
	  fsubs     f0, f0, f2
	  stfs      f1, 0x18(r1)
	  fmuls     f0, f3, f0
	  lwz       r0, 0x18(r1)
	  stw       r0, 0x20(r1)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x20(r1)
	  lwz       r0, 0x1C(r1)
	  stfs      f0, 0x4C(r1)
	  stw       r0, 0x24(r1)
	  lfs       f0, 0x24(r1)
	  stfs      f0, 0x50(r1)
	  lwz       r3, 0x7C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x48(r31)
	  lis       r4, 0x4E41
	  addi      r6, r4, 0x4C4C
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  bl        0x10B70
	  lwz       r3, 0x48(r31)
	  lis       r4, 0x8051
	  addi      r5, r4, 0x40D4
	  lis       r4, 0x4E41
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x4C4C
	  lfs       f0, 0x8(r5)
	  li        r5, 0
	  lwz       r12, 0x3C(r12)
	  fadds     f31, f0, f1
	  mtctr     r12
	  bctrl
	  bl        0x10A50
	  lis       r3, 0x8051
	  li        r8, 0
	  addi      r3, r3, 0x40D4
	  stfs      f31, 0xC(r1)
	  lfs       f0, 0x4(r3)
	  lis       r3, 0x804C
	  addi      r0, r3, 0x14F0
	  lwz       r3, 0xC(r1)
	  fadds     f0, f0, f1
	  lis       r5, 0x804C
	  stw       r3, 0x14(r1)
	  lis       r4, 0x804E
	  lis       r6, 0x804C
	  lis       r3, 0x804E
	  stfs      f0, 0x8(r1)
	  addi      r10, r6, 0x1514
	  lfs       f0, 0x14(r1)
	  li        r6, 0xA
	  lwz       r11, 0x8(r1)
	  addi      r9, r5, 0x14D8
	  stw       r0, 0x70(r1)
	  li        r5, 0xB
	  addi      r7, r4, 0x7470
	  addi      r0, r3, 0x51F8
	  stw       r11, 0x10(r1)
	  addi      r3, r1, 0x70
	  addi      r4, r1, 0x40
	  stw       r9, 0x70(r1)
	  lfs       f1, 0x10(r1)
	  stw       r7, 0x70(r1)
	  stw       r10, 0x48(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  stb       r8, 0x74(r1)
	  stb       r8, 0x75(r1)
	  sth       r6, 0x78(r1)
	  sth       r5, 0x7A(r1)
	  stw       r8, 0x7C(r1)
	  stw       r8, 0x80(r1)
	  stw       r0, 0x70(r1)
	  bl        -0x41698
	  lbz       r0, 0x104(r31)
	  ori       r0, r0, 0x20
	  stb       r0, 0x104(r31)

	.loc_0x488:
	  lis       r3, 0x8051
	  lfs       f1, 0x68(r31)
	  lfsu      f0, 0x40D4(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x90(r1)
	  fadds     f0, f1, f0
	  lfd       f3, 0x1C50(r2)
	  lfs       f2, 0x1C58(r2)
	  stfs      f0, 0x68(r31)
	  lfs       f1, 0x70(r31)
	  lfs       f0, 0x0(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x70(r31)
	  lwz       r3, 0x50(r31)
	  lfs       f1, 0x68(r31)
	  lha       r3, 0x6(r3)
	  xoris     r3, r3, 0x8000
	  stw       r3, 0x94(r1)
	  lfd       f0, 0x90(r1)
	  fsubs     f0, f0, f3
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  beq-      .loc_0x518
	  lwz       r3, 0x58(r31)
	  stw       r0, 0x90(r1)
	  lha       r0, 0x6(r3)
	  lfs       f1, 0x70(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x94(r1)
	  lfd       f0, 0x90(r1)
	  fsubs     f0, f0, f3
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x524

	.loc_0x518:
	  lbz       r0, 0x104(r31)
	  rlwinm    r0,r0,0,28,26
	  stb       r0, 0x104(r31)

	.loc_0x524:
	  lwz       r3, 0x3C(r31)
	  lwz       r30, 0x24(r3)
	  b         .loc_0x53C

	.loc_0x530:
	  lwz       r3, 0x48(r30)
	  bl        0x610
	  lwz       r30, 0x18(r30)

	.loc_0x53C:
	  cmplwi    r30, 0
	  bne+      .loc_0x530
	  psq_l     f31,0xA8(r1),0,0
	  lwz       r0, 0xB4(r1)
	  lfd       f31, 0xA0(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FB04C
 * Size:	000078
 */
void kh::Screen::ObjCaveResult::setAlpha((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x804A
	  rlwinm    r4,r4,3,0,28
	  stw       r0, 0x24(r1)
	  addi      r0, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  lfdu      f1, -0x7B90(r6)
	  lfd       f0, 0x8(r6)
	  add       r6, r0, r4
	  stfd      f1, 0x8(r1)
	  stfd      f0, 0x10(r1)
	  lwz       r3, 0x40(r3)
	  lwz       r5, 0x0(r6)
	  lwz       r12, 0x0(r3)
	  lwz       r6, 0x4(r6)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FB0C4
 * Size:	0000C4
 */
void kh::Screen::ObjCaveResult::pikminSE(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xB8(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1806
	  li        r5, 0
	  bl        -0xC2AB8
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x285F
	  li        r5, 0
	  bl        -0xC2AC8
	  b         .loc_0xB4

	.loc_0x3C:
	  cmplwi    r0, 0xA
	  bgt-      .loc_0x68
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x182A
	  li        r5, 0
	  bl        -0xC2AE4
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x2822
	  li        r5, 0
	  bl        -0xC2AF4
	  b         .loc_0xB4

	.loc_0x68:
	  cmplwi    r0, 0x32
	  bgt-      .loc_0x94
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x182B
	  li        r5, 0
	  bl        -0xC2B10
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x2860
	  li        r5, 0
	  bl        -0xC2B20
	  b         .loc_0xB4

	.loc_0x94:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x182B
	  li        r5, 0
	  bl        -0xC2B34
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x2810
	  li        r5, 0
	  bl        -0xC2B44

	.loc_0xB4:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FB188
 * Size:	000038
 */
void kh::Screen::LostItem::__ct(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x1C48(r2)
	  li        r5, 0xFF
	  li        r4, -0x28
	  li        r0, 0
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x0(r3)
	  stfs      f0, 0xC(r3)
	  stfs      f0, 0x8(r3)
	  stb       r5, 0x1C(r3)
	  stw       r4, 0x14(r3)
	  sth       r0, 0x1A(r3)
	  sth       r0, 0x18(r3)
	  stb       r0, 0x1D(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void kh::Screen::LostItem::update(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803FB1C0
 * Size:	000080
 */
void kh::Screen::LostItemMgr::__ct((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stw       r4, 0x4(r3)
	  beq-      .loc_0x54
	  mr        r31, r4
	  rlwinm    r3,r4,5,0,26
	  addi      r3, r3, 0x10
	  bl        -0x3D7244
	  lis       r4, 0x8040
	  mr        r7, r31
	  subi      r4, r4, 0x4E78
	  li        r5, 0
	  li        r6, 0x20
	  bl        -0x339818
	  stw       r3, 0x0(r30)
	  b         .loc_0x5C

	.loc_0x54:
	  li        r0, 0
	  stw       r0, 0x0(r30)

	.loc_0x5C:
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x8(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FB240
 * Size:	0003EC
 */
void init__Q32kh6Screen11LostItemMgrFRCQ29JGeometry8TVec2<float> b(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1C0(r1)
	  mflr      r0
	  stw       r0, 0x1C4(r1)
	  stfd      f31, 0x1B0(r1)
	  psq_st    f31,0x1B8(r1),0,0
	  stfd      f30, 0x1A0(r1)
	  psq_st    f30,0x1A8(r1),0,0
	  stfd      f29, 0x190(r1)
	  psq_st    f29,0x198(r1),0,0
	  stfd      f28, 0x180(r1)
	  psq_st    f28,0x188(r1),0,0
	  stfd      f27, 0x170(r1)
	  psq_st    f27,0x178(r1),0,0
	  stfd      f26, 0x160(r1)
	  psq_st    f26,0x168(r1),0,0
	  stfd      f25, 0x150(r1)
	  psq_st    f25,0x158(r1),0,0
	  stfd      f24, 0x140(r1)
	  psq_st    f24,0x148(r1),0,0
	  stfd      f23, 0x130(r1)
	  psq_st    f23,0x138(r1),0,0
	  stfd      f22, 0x120(r1)
	  psq_st    f22,0x128(r1),0,0
	  stfd      f21, 0x110(r1)
	  psq_st    f21,0x118(r1),0,0
	  stfd      f20, 0x100(r1)
	  psq_st    f20,0x108(r1),0,0
	  stfd      f19, 0xF0(r1)
	  psq_st    f19,0xF8(r1),0,0
	  stfd      f18, 0xE0(r1)
	  psq_st    f18,0xE8(r1),0,0
	  stfd      f17, 0xD0(r1)
	  psq_st    f17,0xD8(r1),0,0
	  stfd      f16, 0xC0(r1)
	  psq_st    f16,0xC8(r1),0,0
	  stfd      f15, 0xB0(r1)
	  psq_st    f15,0xB8(r1),0,0
	  stfd      f14, 0xA0(r1)
	  psq_st    f14,0xA8(r1),0,0
	  stmw      r24, 0x80(r1)
	  mr        r29, r3
	  mr        r30, r4
	  lwz       r0, 0x4(r3)
	  mr        r31, r5
	  cmpwi     r0, 0
	  beq-      .loc_0x348
	  rlwinm.   r0,r31,0,24,31
	  lfs       f15, 0x0(r30)
	  lfs       f14, 0x4(r30)
	  beq-      .loc_0xD0
	  lfs       f0, 0x1C7C(r2)
	  fadds     f15, f15, f0

	.loc_0xD0:
	  lfd       f20, 0x1C50(r2)
	  li        r25, 0
	  lfs       f21, 0x1C80(r2)
	  li        r27, 0
	  lfs       f22, 0x1C84(r2)
	  lis       r26, 0x4330
	  lfs       f23, 0x1C88(r2)
	  lfs       f24, 0x1C8C(r2)
	  lfs       f25, 0x1C74(r2)
	  lfs       f26, 0x1C90(r2)
	  lfs       f27, 0x1C5C(r2)
	  lfs       f28, 0x1C94(r2)
	  lfs       f29, 0x1C98(r2)
	  lfs       f30, 0x1CA0(r2)
	  lfs       f31, 0x1C9C(r2)
	  b         .loc_0x1F4

	.loc_0x110:
	  bl        -0x331DB0
	  xoris     r0, r3, 0x8000
	  stw       r26, 0x48(r1)
	  stw       r0, 0x4C(r1)
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f20
	  fdivs     f19, f0, f21
	  bl        -0x331DCC
	  xoris     r0, r3, 0x8000
	  stw       r26, 0x50(r1)
	  stw       r0, 0x54(r1)
	  lfd       f0, 0x50(r1)
	  fsubs     f0, f0, f20
	  fdivs     f18, f0, f21
	  bl        -0x331DE8
	  xoris     r0, r3, 0x8000
	  stw       r26, 0x58(r1)
	  stw       r0, 0x5C(r1)
	  lfd       f0, 0x58(r1)
	  fsubs     f0, f0, f20
	  fdivs     f17, f0, f21
	  bl        -0x331E04
	  xoris     r0, r3, 0x8000
	  stw       r26, 0x60(r1)
	  stw       r0, 0x64(r1)
	  lfd       f0, 0x60(r1)
	  fsubs     f0, f0, f20
	  fdivs     f16, f0, f21
	  bl        -0x331E20
	  xoris     r3, r3, 0x8000
	  fmsubs    f1, f28, f18, f29
	  stw       r3, 0x6C(r1)
	  fmadds    f0, f30, f19, f31
	  lwz       r0, 0x0(r29)
	  fmsubs    f3, f24, f16, f25
	  stw       r26, 0x68(r1)
	  add       r4, r0, r27
	  fctiwz    f1, f1
	  lfd       f4, 0x68(r1)
	  fctiwz    f0, f0
	  stfs      f15, 0x0(r4)
	  fmadds    f2, f26, f17, f27
	  fsubs     f4, f4, f20
	  stfd      f1, 0x70(r1)
	  addi      r27, r27, 0x20
	  addi      r25, r25, 0x1
	  fdivs     f1, f4, f21
	  stfd      f0, 0x78(r1)
	  lwz       r3, 0x74(r1)
	  stfs      f14, 0x4(r4)
	  lwz       r0, 0x7C(r1)
	  fmsubs    f0, f22, f1, f23
	  stfs      f0, 0x8(r4)
	  stfs      f3, 0xC(r4)
	  stfs      f2, 0x10(r4)
	  sth       r3, 0x1A(r4)
	  stb       r0, 0x1D(r4)

	.loc_0x1F4:
	  lwz       r0, 0x4(r29)
	  cmpw      r25, r0
	  blt+      .loc_0x110
	  lis       r4, 0x804A
	  lis       r3, 0x8051
	  subi      r8, r4, 0x7B80
	  rlwinm.   r0,r31,0,24,31
	  lwz       r7, 0x0(r8)
	  addi      r3, r3, 0x40D4
	  lwz       r6, 0x4(r8)
	  lwz       r5, 0x8(r8)
	  lwz       r4, 0xC(r8)
	  lwz       r0, 0x10(r8)
	  stw       r7, 0x34(r1)
	  lfs       f4, 0x24(r3)
	  stw       r6, 0x38(r1)
	  lfs       f3, 0x28(r3)
	  stw       r5, 0x3C(r1)
	  lfs       f2, 0x2C(r3)
	  stw       r4, 0x40(r1)
	  lfs       f1, 0x30(r3)
	  stw       r0, 0x44(r1)
	  lfs       f0, 0x34(r3)
	  stfs      f4, 0x34(r1)
	  stfs      f3, 0x38(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  beq-      .loc_0x274
	  lfs       f0, 0x1C7C(r2)
	  fadds     f0, f4, f0
	  stfs      f0, 0x34(r1)

	.loc_0x274:
	  lfs       f1, 0x4(r30)
	  lis       r7, 0x804C
	  lfs       f0, 0x1CA0(r2)
	  lis       r6, 0x804C
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  lis       r3, 0x804C
	  fsubs     f14, f1, f0
	  lfs       f15, 0x0(r30)
	  addi      r25, r1, 0x34
	  addi      r26, r7, 0x14F0
	  addi      r27, r6, 0x14D8
	  addi      r28, r5, 0x7488
	  addi      r31, r4, 0x3DC4
	  addi      r30, r3, 0x1514
	  li        r24, 0

	.loc_0x2B4:
	  lfs       f0, 0x0(r25)
	  li        r7, 0
	  stfs      f14, 0x14(r1)
	  li        r6, 0x7
	  fadds     f0, f15, f0
	  addi      r3, r1, 0x24
	  stw       r26, 0x24(r1)
	  addi      r4, r1, 0x18
	  lwz       r0, 0x14(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r5, 0x10(r1)
	  stw       r27, 0x24(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lfs       f1, 0x8(r1)
	  stw       r28, 0x24(r1)
	  lfs       f0, 0xC(r1)
	  stb       r7, 0x28(r1)
	  stb       r7, 0x29(r1)
	  sth       r6, 0x2C(r1)
	  stw       r7, 0x30(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x41D28
	  addi      r24, r24, 0x1
	  addi      r25, r25, 0x4
	  cmpwi     r24, 0x5
	  blt+      .loc_0x2B4
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x182A
	  li        r5, 0
	  bl        -0xC2F48
	  lwz       r0, 0x8(r29)
	  ori       r0, r0, 0x3
	  stw       r0, 0x8(r29)

	.loc_0x348:
	  psq_l     f31,0x1B8(r1),0,0
	  lfd       f31, 0x1B0(r1)
	  psq_l     f30,0x1A8(r1),0,0
	  lfd       f30, 0x1A0(r1)
	  psq_l     f29,0x198(r1),0,0
	  lfd       f29, 0x190(r1)
	  psq_l     f28,0x188(r1),0,0
	  lfd       f28, 0x180(r1)
	  psq_l     f27,0x178(r1),0,0
	  lfd       f27, 0x170(r1)
	  psq_l     f26,0x168(r1),0,0
	  lfd       f26, 0x160(r1)
	  psq_l     f25,0x158(r1),0,0
	  lfd       f25, 0x150(r1)
	  psq_l     f24,0x148(r1),0,0
	  lfd       f24, 0x140(r1)
	  psq_l     f23,0x138(r1),0,0
	  lfd       f23, 0x130(r1)
	  psq_l     f22,0x128(r1),0,0
	  lfd       f22, 0x120(r1)
	  psq_l     f21,0x118(r1),0,0
	  lfd       f21, 0x110(r1)
	  psq_l     f20,0x108(r1),0,0
	  lfd       f20, 0x100(r1)
	  psq_l     f19,0xF8(r1),0,0
	  lfd       f19, 0xF0(r1)
	  psq_l     f18,0xE8(r1),0,0
	  lfd       f18, 0xE0(r1)
	  psq_l     f17,0xD8(r1),0,0
	  lfd       f17, 0xD0(r1)
	  psq_l     f16,0xC8(r1),0,0
	  lfd       f16, 0xC0(r1)
	  psq_l     f15,0xB8(r1),0,0
	  lfd       f15, 0xB0(r1)
	  psq_l     f14,0xA8(r1),0,0
	  lfd       f14, 0xA0(r1)
	  lmw       r24, 0x80(r1)
	  lwz       r0, 0x1C4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FB62C
 * Size:	000108
 */
void kh::Screen::LostItemMgr::update(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,31,31
	  beqlr-
	  li        r8, 0x1
	  li        r9, 0
	  li        r7, 0
	  b         .loc_0xE4

	.loc_0x1C:
	  lwz       r0, 0x0(r3)
	  add       r6, r0, r7
	  lbz       r5, 0x1C(r6)
	  cmplwi    r5, 0
	  bne-      .loc_0x38
	  li        r5, 0x1
	  b         .loc_0xD8

	.loc_0x38:
	  lbz       r4, 0x1D(r6)
	  cmplwi    r4, 0
	  bne-      .loc_0x70
	  lwz       r0, 0x14(r6)
	  add       r0, r5, r0
	  stb       r0, 0x1C(r6)
	  lwz       r0, 0x14(r6)
	  lbz       r4, 0x1C(r6)
	  neg       r0, r0
	  cmpw      r4, r0
	  bge-      .loc_0x78
	  li        r0, 0
	  stb       r0, 0x1C(r6)
	  b         .loc_0x78

	.loc_0x70:
	  subi      r0, r4, 0x1
	  stb       r0, 0x1D(r6)

	.loc_0x78:
	  lfs       f2, 0xC(r6)
	  li        r5, 0
	  lfs       f0, 0x10(r6)
	  lfs       f1, 0x1C78(r2)
	  fadds     f0, f2, f0
	  stfs      f0, 0xC(r6)
	  lfs       f0, 0x8(r6)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r6)
	  lfs       f0, 0xC(r6)
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r6)
	  lfs       f1, 0x0(r6)
	  lfs       f0, 0x8(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x0(r6)
	  lfs       f1, 0x4(r6)
	  lfs       f0, 0xC(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r6)
	  lhz       r4, 0x18(r6)
	  lhz       r0, 0x1A(r6)
	  add       r0, r4, r0
	  sth       r0, 0x18(r6)

	.loc_0xD8:
	  and       r8, r8, r5
	  addi      r7, r7, 0x20
	  addi      r9, r9, 0x1

	.loc_0xE4:
	  lwz       r0, 0x4(r3)
	  cmpw      r9, r0
	  blt+      .loc_0x1C
	  rlwinm.   r0,r8,0,24,31
	  beqlr-
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FB734
 * Size:	000170
 */
void kh::Screen::LostItemMgr::draw((P2DScreen::Mgr_tuning*, unsigned long long,
                                    ResTIMG const*, Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stmw      r25, 0x14(r1)
	  lwz       r0, 0x8(r3)
	  mr        r29, r3
	  mr        r30, r4
	  mr        r25, r5
	  rlwinm.   r0,r0,0,31,31
	  mr        r26, r6
	  mr        r31, r8
	  beq-      .loc_0x144
	  mr        r3, r30
	  bl        0xFCC0
	  mr        r3, r30
	  mr        r6, r26
	  lwz       r12, 0x0(r30)
	  mr        r5, r25
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f29, 0x1CA4(r2)
	  mr        r26, r3
	  lfd       f30, 0x1C60(r2)
	  li        r25, 0
	  lfs       f31, 0x1CA8(r2)
	  li        r27, 0
	  lis       r28, 0x4330
	  b         .loc_0x138

	.loc_0x8C:
	  lwz       r0, 0x0(r29)
	  mr        r3, r26
	  add       r4, r0, r27
	  lfs       f1, 0x4(r4)
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0xD4(r26)
	  stfs      f1, 0xD8(r26)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r26
	  lwz       r4, 0x0(r29)
	  lwz       r12, 0x0(r26)
	  addi      r0, r27, 0x1C
	  lbzx      r4, r4, r0
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x0(r29)
	  addi      r0, r27, 0x18
	  stw       r28, 0x8(r1)
	  mr        r3, r26
	  lhzx      r0, r4, r0
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f30
	  fmuls     f0, f29, f0
	  fdivs     f0, f0, f31
	  stfs      f0, 0xC0(r26)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  addi      r5, r31, 0xBC
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  addi      r27, r27, 0x20
	  addi      r25, r25, 0x1

	.loc_0x138:
	  lwz       r0, 0x4(r29)
	  cmpw      r25, r0
	  blt+      .loc_0x8C

	.loc_0x144:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FB8A4
 * Size:	0000A4
 */
void kh::Screen::SceneCaveResult::doUserCallBackFunc((Resource::MgrCommand*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x44(r1)
	  subi      r4, r4, 0x7B6C
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x4
	  bl        -0xE397C
	  addi      r3, r1, 0x8
	  addi      r4, r30, 0x4
	  bl        0x50D04
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x50E34
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  lwz       r31, 0x34(r3)
	  li        r3, 0x108
	  bl        -0x3D7A50
	  mr.       r4, r3
	  beq-      .loc_0x64
	  bl        -0x3144
	  mr        r4, r3

	.loc_0x64:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x56464
	  b         .loc_0x8C

	.loc_0x74:
	  lis       r3, 0x804A
	  li        r4, 0x513
	  subi      r3, r3, 0x7CA0
	  addi      r5, r2, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x3D12EC

	.loc_0x8C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FB948
 * Size:	000008
 */
void kh::Screen::SceneCaveResult::getResName( const
{
	/*
	.loc_0x0:
	  addi      r3, r2, 0x1CB4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FB950
 * Size:	000008
 */
void kh::Screen::SceneCaveResult::getSceneType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x4E20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FB958
 * Size:	000008
 */
void kh::Screen::SceneCaveResult::getOwnerID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x4B48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FB960
 * Size:	000010
 */
void kh::Screen::SceneCaveResult::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5253
	  li        r3, 0x435F
	  addi      r4, r4, 0x4C54
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FB970
 * Size:	000004
 */
void kh::Screen::SceneCaveResult::doCreateObj( (JKRArchive *))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FB974
 * Size:	0000AC
 */
void kh::Screen::ObjCaveResult::__dt(void)
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
	  beq-      .loc_0x90
	  lis       r4, 0x804F
	  subi      r4, r4, 0x5A2C
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x80
	  lis       r4, 0x804F
	  subi      r4, r4, 0x28A8
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x80
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7DC0
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  bl        0x15BF8
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x3DE9B0
	  mr        r3, r30
	  li        r4, 0
	  bl        0x15B98

	.loc_0x80:
	  extsh.    r0, r31
	  ble-      .loc_0x90
	  mr        r3, r30
	  bl        -0x3D794C

	.loc_0x90:
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
 * Address:	803FBA20
 * Size:	000008
 */
void kh::Screen::DispCaveResult::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x38
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBA28
 * Size:	000008
 */
void kh::Screen::DispCaveResult::getOwnerID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x4B48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBA30
 * Size:	000010
 */
void kh::Screen::DispCaveResult::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5253
	  li        r3, 0x435F
	  addi      r4, r4, 0x4C54
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBA40
 * Size:	00008C
 */
void __sinit_khCaveResult_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8051
	  lfs       f9, 0x1CB8(r2)
	  addi      r8, r3, 0x40D4
	  lfs       f8, 0x1CBC(r2)
	  lfs       f7, 0x1CC0(r2)
	  li        r7, 0x8
	  lfs       f6, 0x1C48(r2)
	  li        r6, 0x3
	  lfs       f5, 0x1CA0(r2)
	  li        r5, 0xA
	  lfs       f4, 0x1CC4(r2)
	  li        r4, 0xA0
	  lfs       f3, 0x1CC8(r2)
	  li        r3, 0x20
	  lfs       f2, 0x1CCC(r2)
	  li        r0, 0x14
	  lfs       f1, 0x1CD0(r2)
	  lfs       f0, 0x1CD4(r2)
	  stfs      f9, 0x0(r8)
	  stfs      f8, 0x4(r8)
	  stfs      f7, 0x8(r8)
	  stfs      f6, 0x10(r8)
	  stfs      f5, 0x14(r8)
	  stw       r7, 0x1C(r8)
	  stw       r6, 0x20(r8)
	  stb       r5, 0x38(r8)
	  stb       r4, 0x39(r8)
	  stb       r3, 0x3A(r8)
	  stb       r0, 0x3B(r8)
	  stfs      f4, 0x24(r8)
	  stfs      f3, 0x28(r8)
	  stfs      f2, 0x2C(r8)
	  stfs      f1, 0x30(r8)
	  stfs      f0, 0x34(r8)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBACC
 * Size:	000008
 */
void @24@kh::Screen::ObjCaveResult::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x15C
	*/
}
