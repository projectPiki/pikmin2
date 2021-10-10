

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
 * Size:	00009C
 */
void kh::Screen::OneResultData::__ct((int, int, int, int, int, char const*,
                                      JKRArchive*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002D8
 */
void kh::Screen::TotalResultData::__ct((int const*, int const*,
                                        Game::Highscore**))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void kh::Screen::TotalResultData::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void kh::Screen::TotalResultData::draw((Graphics&, unsigned long,
                                        unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8040C1E8
 * Size:	000034
 */
void kh::Screen::DispFinalResult::__ct((kh::Screen::TotalResultData*,
                                        kh::Screen::DispFinalResult::ResultType,
                                        JKRHeap*))
{
	/*
	.loc_0x0:
	  lis       r8, 0x804B
	  lis       r7, 0x804F
	  addi      r0, r8, 0x1148
	  li        r8, 0
	  stw       r0, 0x0(r3)
	  subi      r0, r7, 0x4D38
	  stw       r8, 0x4(r3)
	  stw       r0, 0x0(r3)
	  stw       r4, 0x8(r3)
	  stw       r5, 0xC(r3)
	  stw       r8, 0x10(r3)
	  stw       r6, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040C21C
 * Size:	0001A0
 */
void kh::Screen::ObjFinalResult::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x478B8
	  lis       r4, 0x804F
	  lis       r3, 0x8051
	  subi      r4, r4, 0x4DB0
	  li        r0, -0x1
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x10
	  li        r7, 0
	  lfs       f0, 0x1E40(r2)
	  stw       r4, 0x18(r31)
	  li        r5, 0x1
	  addi      r6, r3, 0x4188
	  li        r4, 0x3
	  stw       r0, 0x124(r31)
	  li        r0, 0xFF
	  mr        r3, r31
	  stw       r7, 0x3C(r31)
	  stw       r7, 0x54(r31)
	  stw       r7, 0x50(r31)
	  stw       r7, 0x4C(r31)
	  stw       r7, 0x48(r31)
	  stw       r7, 0x44(r31)
	  stw       r7, 0x40(r31)
	  stw       r7, 0x60(r31)
	  stw       r7, 0x5C(r31)
	  stw       r7, 0x58(r31)
	  stw       r7, 0x64(r31)
	  stw       r7, 0x68(r31)
	  stfs      f0, 0x88(r31)
	  stfs      f0, 0x84(r31)
	  stfs      f0, 0x80(r31)
	  stfs      f0, 0x7C(r31)
	  stfs      f0, 0x78(r31)
	  stfs      f0, 0x74(r31)
	  stfs      f0, 0x70(r31)
	  stfs      f0, 0x6C(r31)
	  stw       r7, 0x8C(r31)
	  stw       r7, 0x9C(r31)
	  stw       r7, 0x98(r31)
	  stw       r7, 0x94(r31)
	  stw       r7, 0x90(r31)
	  stw       r7, 0xD0(r31)
	  stw       r7, 0xC0(r31)
	  stw       r7, 0xB0(r31)
	  stw       r7, 0xA0(r31)
	  stw       r7, 0x110(r31)
	  stw       r7, 0x100(r31)
	  stw       r7, 0xF0(r31)
	  stw       r7, 0xE0(r31)
	  stw       r7, 0xD4(r31)
	  stw       r7, 0xC4(r31)
	  stw       r7, 0xB4(r31)
	  stw       r7, 0xA4(r31)
	  stw       r7, 0x114(r31)
	  stw       r7, 0x104(r31)
	  stw       r7, 0xF4(r31)
	  stw       r7, 0xE4(r31)
	  stw       r7, 0xD8(r31)
	  stw       r7, 0xC8(r31)
	  stw       r7, 0xB8(r31)
	  stw       r7, 0xA8(r31)
	  stw       r7, 0x118(r31)
	  stw       r7, 0x108(r31)
	  stw       r7, 0xF8(r31)
	  stw       r7, 0xE8(r31)
	  stw       r7, 0xDC(r31)
	  stw       r7, 0xCC(r31)
	  stw       r7, 0xBC(r31)
	  stw       r7, 0xAC(r31)
	  stw       r7, 0x11C(r31)
	  stw       r7, 0x10C(r31)
	  stw       r7, 0xFC(r31)
	  stw       r7, 0xEC(r31)
	  stfs      f0, 0x120(r31)
	  stb       r7, 0x124(r31)
	  stb       r7, 0x125(r31)
	  stb       r7, 0x126(r31)
	  stb       r7, 0x127(r31)
	  stfs      f0, 0x128(r31)
	  stfs      f0, 0x12C(r31)
	  stw       r5, 0x130(r31)
	  lwz       r5, 0x4(r6)
	  stw       r5, 0x134(r31)
	  stw       r7, 0x138(r31)
	  lwz       r5, 0x8(r6)
	  stw       r5, 0x13C(r31)
	  stw       r4, 0x148(r31)
	  stb       r0, 0x14D(r31)
	  stb       r0, 0x14C(r31)
	  stb       r7, 0x14E(r31)
	  lbz       r0, 0x14E(r31)
	  ori       r0, r0, 0x8
	  stb       r0, 0x14E(r31)
	  stb       r7, 0x14F(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040C3BC
 * Size:	000B8C
 */
void kh::Screen::ObjFinalResult::doCreate((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stmw      r23, 0x6C(r1)
	  lis       r5, 0x804A
	  mr        r31, r3
	  mr        r26, r4
	  subi      r29, r5, 0x7328
	  bl        0x47BC4
	  lis       r5, 0x5253
	  li        r4, 0x4B48
	  addi      r6, r5, 0x4C54
	  li        r5, 0x465F
	  bl        -0xFD0DC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5C
	  addi      r3, r29, 0
	  addi      r5, r29, 0x300
	  li        r4, 0xD6
	  crclr     6, 0x6
	  bl        -0x3E1DD4

	.loc_0x5C:
	  mr        r3, r31
	  bl        0x47B8C
	  mr        r30, r3
	  li        r3, 0x148
	  bl        -0x3E8584
	  mr.       r0, r3
	  beq-      .loc_0x80
	  bl        0x28978
	  mr        r0, r3

	.loc_0x80:
	  stw       r0, 0x3C(r31)
	  mr        r6, r26
	  addi      r4, r29, 0x310
	  lis       r5, 0x104
	  lwz       r3, 0x3C(r31)
	  bl        -0x3CCE2C
	  mr        r4, r26
	  addi      r3, r29, 0x324
	  bl        -0x3E9444
	  mr        r24, r3
	  bl        -0x3C4B48
	  stw       r3, 0x40(r31)
	  mr        r3, r24
	  bl        -0x3C4B54
	  stw       r3, 0x44(r31)
	  mr        r3, r24
	  bl        -0x3C4B60
	  stw       r3, 0x48(r31)
	  mr        r3, r24
	  bl        -0x3C4B6C
	  stw       r3, 0x4C(r31)
	  mr        r3, r24
	  bl        -0x3C4B78
	  stw       r3, 0x50(r31)
	  mr        r3, r24
	  bl        -0x3C4B84
	  stw       r3, 0x54(r31)
	  mr        r4, r26
	  addi      r3, r29, 0x338
	  bl        -0x3E9498
	  mr        r24, r3
	  bl        -0x3C4B9C
	  stw       r3, 0x58(r31)
	  mr        r3, r24
	  bl        -0x3C4BA8
	  stw       r3, 0x5C(r31)
	  mr        r3, r24
	  bl        -0x3C4BB4
	  stw       r3, 0x60(r31)
	  mr        r4, r26
	  addi      r3, r29, 0x34C
	  bl        -0x3E94C8
	  bl        -0x3C4BC8
	  stw       r3, 0x64(r31)
	  mr        r4, r26
	  addi      r3, r29, 0x360
	  bl        -0x3E94DC
	  bl        -0x3C4BDC
	  stw       r3, 0x68(r31)
	  lwz       r3, 0x58(r31)
	  lwz       r4, 0x3C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x5C(r31)
	  lwz       r4, 0x3C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x60(r31)
	  lwz       r4, 0x3C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r31)
	  lis       r4, 0x7374
	  addi      r6, r4, 0x6172
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  lwz       r3, 0x3C(r31)
	  lis       r4, 0x6162
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  mr        r24, r0
	  addi      r6, r4, 0x746E
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r24
	  lwz       r12, 0x0(r24)
	  mr        r24, r0
	  lwz       r4, 0x40(r31)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r31)
	  lis       r4, 0x6974
	  addi      r6, r4, 0x6C65
	  li        r5, 0x4E74
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x44(r31)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r31)
	  lis       r4, 0x6D61
	  addi      r6, r4, 0x696E
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x48(r31)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r31)
	  lis       r4, 0x4943
	  addi      r6, r4, 0x4F4E
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x4C(r31)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r31)
	  lis       r4, 0x6574
	  addi      r6, r4, 0x6572
	  li        r5, 0x4E6D
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x50(r31)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r24
	  lwz       r4, 0x54(r31)
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r31)
	  lis       r4, 0x7374
	  addi      r6, r4, 0x6172
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x58(r31)
	  bl        -0x11DC
	  lwz       r3, 0x3C(r31)
	  lis       r5, 0x6C65
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6374
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x5C(r31)
	  bl        -0x1208
	  lwz       r4, 0x60(r31)
	  mr        r3, r24
	  bl        -0x1214
	  lwz       r3, 0x3C(r31)
	  lwz       r4, 0x64(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r31)
	  lwz       r4, 0x68(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r31)
	  lis       r4, 0x4943
	  addi      r6, r4, 0x4F4E
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x1058
	  lis       r3, 0x8051
	  li        r23, 0
	  addi      r24, r3, 0x4188
	  lis       r25, 0x656C
	  lis       r28, 0x6F6E
	  lis       r27, 0x4E

	.loc_0x3A8:
	  mr        r5, r23
	  addi      r4, r25, 0x3030
	  li        r3, 0x4E73
	  bl        -0x137C
	  mr        r5, r3
	  lwz       r3, 0x3C(r31)
	  mr        r6, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lbz       r4, 0x21(r24)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r23
	  addi      r4, r28, 0x3030
	  addi      r3, r27, 0x6963
	  bl        -0x13BC
	  mr        r5, r3
	  lwz       r3, 0x3C(r31)
	  mr        r6, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lbz       r4, 0x21(r24)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r23, r23, 0x1
	  cmpwi     r23, 0x7
	  ble+      .loc_0x3A8
	  lwz       r3, 0x14(r30)
	  lwz       r28, -0x77D4(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x448
	  bl        -0x3E925C

	.loc_0x448:
	  lwz       r3, 0x3C(r31)
	  bl        -0x102A08
	  lis       r6, 0x6133
	  lwz       r4, 0x3C(r31)
	  mr        r3, r26
	  li        r5, 0x6F74
	  addi      r6, r6, 0x646C
	  bl        -0xDF6EC
	  mr        r0, r3
	  li        r3, 0x8
	  mr        r23, r0
	  bl        -0x3E898C
	  mr.       r0, r3
	  beq-      .loc_0x48C
	  mr        r4, r23
	  bl        -0xDF4D4
	  mr        r0, r3

	.loc_0x48C:
	  stw       r0, 0x8C(r31)
	  lwz       r3, 0x8C(r31)
	  bl        -0xDF318
	  lis       r5, 0x6D65
	  lis       r4, 0x4E
	  lwz       r3, 0x3C(r31)
	  addi      r6, r5, 0x5F75
	  addi      r5, r4, 0x7961
	  li        r7, 0x10
	  bl        -0xD88
	  stw       r3, 0x94(r31)
	  lwz       r3, 0x94(r31)
	  bl        -0xA88
	  lis       r5, 0x6D65
	  lis       r4, 0x4E
	  lwz       r3, 0x3C(r31)
	  addi      r6, r5, 0x5F6C
	  addi      r5, r4, 0x7961
	  li        r7, 0x10
	  bl        -0xDB0
	  stw       r3, 0x98(r31)
	  lwz       r3, 0x98(r31)
	  bl        -0xAB0
	  lis       r4, 0x6133
	  lwz       r3, 0x3C(r31)
	  addi      r6, r4, 0x646C
	  li        r5, 0x6F74
	  li        r7, 0x10
	  bl        -0xDD4
	  stw       r3, 0x90(r31)
	  lis       r3, 0x4E5F
	  addi      r6, r3, 0x3364
	  li        r5, 0
	  lwz       r3, 0x3C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x90(r31)
	  bl        -0xBD0
	  lwz       r3, 0x90(r31)
	  bl        -0xB00
	  lis       r4, 0x6162
	  lwz       r3, 0x3C(r31)
	  addi      r6, r4, 0x746E
	  li        r5, 0x4E
	  li        r7, 0x10
	  bl        -0xE24
	  stw       r3, 0x9C(r31)
	  lwz       r3, 0x9C(r31)
	  bl        -0xB24
	  lfd       f7, 0x280(r29)
	  mr        r24, r31
	  lfd       f6, 0x288(r29)
	  addi      r25, r1, 0x20
	  lfd       f5, 0x290(r29)
	  li        r23, 0
	  lfd       f4, 0x298(r29)
	  lfd       f3, 0x2A0(r29)
	  lfd       f2, 0x2A8(r29)
	  lfd       f1, 0x2B0(r29)
	  lfd       f0, 0x2B8(r29)
	  stfd      f7, 0x20(r1)
	  stfd      f6, 0x28(r1)
	  stfd      f5, 0x30(r1)
	  stfd      f4, 0x38(r1)
	  stfd      f3, 0x40(r1)
	  stfd      f2, 0x48(r1)
	  stfd      f1, 0x50(r1)
	  stfd      f0, 0x58(r1)

	.loc_0x5A8:
	  stw       r26, 0x8(r1)
	  addi      r7, r24, 0xE0
	  lwz       r5, 0x0(r25)
	  li        r8, 0x9
	  lwz       r3, 0x3C(r31)
	  li        r9, 0
	  lwz       r6, 0x4(r25)
	  li        r10, 0
	  bl        -0x10037C
	  stw       r3, 0xA0(r24)
	  addi      r7, r24, 0xF0
	  lwz       r5, 0x20(r25)
	  li        r8, 0x9
	  stw       r26, 0x8(r1)
	  li        r9, 0
	  lwz       r6, 0x24(r25)
	  li        r10, 0
	  lwz       r3, 0x3C(r31)
	  bl        -0x1003A4
	  addi      r23, r23, 0x1
	  stw       r3, 0xB0(r24)
	  cmpwi     r23, 0x4
	  addi      r24, r24, 0x4
	  addi      r25, r25, 0x8
	  blt+      .loc_0x5A8
	  addi      r0, r31, 0x100
	  lis       r3, 0x6B6F
	  stw       r0, 0x8(r1)
	  li        r0, 0x3
	  addi      r8, r3, 0x6E34
	  li        r4, 0x2
	  stw       r0, 0xC(r1)
	  li        r0, 0
	  mr        r10, r8
	  addi      r6, r3, 0x6E33
	  stw       r4, 0x10(r1)
	  li        r5, 0x50
	  li        r7, 0x50
	  li        r9, 0x50
	  stw       r0, 0x14(r1)
	  stw       r26, 0x18(r1)
	  lwz       r3, 0x3C(r31)
	  bl        -0x1004DC
	  stw       r3, 0xC0(r31)
	  lis       r3, 0x7374
	  addi      r0, r31, 0x104
	  li        r5, 0x3
	  stw       r0, 0x8(r1)
	  addi      r8, r3, 0x7434
	  li        r4, 0x2
	  li        r0, 0
	  stw       r5, 0xC(r1)
	  mr        r10, r8
	  addi      r6, r3, 0x7433
	  li        r5, 0x5031
	  stw       r4, 0x10(r1)
	  li        r7, 0x5031
	  li        r9, 0x5031
	  stw       r0, 0x14(r1)
	  stw       r26, 0x18(r1)
	  lwz       r3, 0x3C(r31)
	  bl        -0x100528
	  stw       r3, 0xC4(r31)
	  lis       r3, 0x6E64
	  addi      r0, r31, 0x108
	  li        r5, 0x3
	  stw       r0, 0x8(r1)
	  addi      r8, r3, 0x7434
	  li        r4, 0x2
	  li        r0, 0
	  stw       r5, 0xC(r1)
	  mr        r10, r8
	  addi      r6, r3, 0x7433
	  li        r5, 0x5032
	  stw       r4, 0x10(r1)
	  li        r7, 0x5032
	  li        r9, 0x5032
	  stw       r0, 0x14(r1)
	  stw       r26, 0x18(r1)
	  lwz       r3, 0x3C(r31)
	  bl        -0x100574
	  stw       r3, 0xC8(r31)
	  lis       r3, 0x7264
	  addi      r0, r31, 0x10C
	  li        r5, 0x3
	  stw       r0, 0x8(r1)
	  addi      r8, r3, 0x7434
	  li        r4, 0x2
	  li        r0, 0
	  stw       r5, 0xC(r1)
	  mr        r10, r8
	  addi      r6, r3, 0x7433
	  li        r5, 0x5033
	  stw       r4, 0x10(r1)
	  li        r7, 0x5033
	  li        r9, 0x5033
	  stw       r0, 0x14(r1)
	  stw       r26, 0x18(r1)
	  lwz       r3, 0x3C(r31)
	  bl        -0x1005C0
	  stw       r3, 0xCC(r31)
	  lis       r3, 0x6B6F
	  addi      r0, r31, 0x110
	  li        r4, 0x2
	  stw       r0, 0x8(r1)
	  addi      r8, r3, 0x6E32
	  li        r0, 0
	  addi      r6, r3, 0x6E31
	  stw       r4, 0xC(r1)
	  mr        r10, r8
	  li        r5, 0x50
	  li        r7, 0x50
	  stw       r4, 0x10(r1)
	  li        r9, 0x50
	  stw       r0, 0x14(r1)
	  stw       r26, 0x18(r1)
	  lwz       r3, 0x3C(r31)
	  bl        -0x100608
	  stw       r3, 0xD0(r31)
	  lis       r3, 0x7374
	  addi      r0, r31, 0x114
	  li        r4, 0x2
	  stw       r0, 0x8(r1)
	  addi      r8, r3, 0x7432
	  li        r0, 0
	  addi      r6, r3, 0x7431
	  stw       r4, 0xC(r1)
	  mr        r10, r8
	  li        r5, 0x5031
	  li        r7, 0x5031
	  stw       r4, 0x10(r1)
	  li        r9, 0x5031
	  stw       r0, 0x14(r1)
	  stw       r26, 0x18(r1)
	  lwz       r3, 0x3C(r31)
	  bl        -0x100650
	  stw       r3, 0xD4(r31)
	  lis       r3, 0x6E64
	  addi      r0, r31, 0x118
	  li        r4, 0x2
	  stw       r0, 0x8(r1)
	  addi      r8, r3, 0x7432
	  li        r0, 0
	  addi      r6, r3, 0x7431
	  stw       r4, 0xC(r1)
	  mr        r10, r8
	  li        r5, 0x5032
	  li        r7, 0x5032
	  stw       r4, 0x10(r1)
	  li        r9, 0x5032
	  stw       r0, 0x14(r1)
	  stw       r26, 0x18(r1)
	  lwz       r3, 0x3C(r31)
	  bl        -0x100698
	  stw       r3, 0xD8(r31)
	  lis       r3, 0x7264
	  addi      r0, r31, 0x11C
	  li        r4, 0x2
	  stw       r0, 0x8(r1)
	  addi      r8, r3, 0x7432
	  li        r0, 0
	  addi      r6, r3, 0x7431
	  stw       r4, 0xC(r1)
	  mr        r10, r8
	  li        r5, 0x5033
	  li        r7, 0x5033
	  stw       r4, 0x10(r1)
	  li        r9, 0x5033
	  stw       r0, 0x14(r1)
	  stw       r26, 0x18(r1)
	  lwz       r3, 0x3C(r31)
	  bl        -0x1006E0
	  stw       r3, 0xDC(r31)
	  li        r4, 0xFF
	  lwz       r3, 0xD0(r31)
	  bl        -0x101430
	  lwz       r3, 0xD4(r31)
	  li        r4, 0xFF
	  bl        -0x10143C
	  lwz       r3, 0xD8(r31)
	  li        r4, 0xFF
	  bl        -0x101448
	  lwz       r3, 0xDC(r31)
	  li        r4, 0xFF
	  bl        -0x101454
	  lwz       r3, 0x8(r30)
	  mr        r27, r31
	  li        r26, 0
	  lwz       r3, 0x0(r3)
	  lwz       r29, 0x3C(r3)

	.loc_0x8A0:
	  lwz       r4, 0x4(r29)
	  cmpwi     r4, 0
	  bge-      .loc_0x8D4
	  li        r0, 0
	  li        r4, 0x1
	  stw       r0, 0x100(r27)
	  stw       r0, 0x110(r27)
	  lwz       r3, 0xC0(r27)
	  bl        -0x101494
	  lwz       r3, 0xD0(r27)
	  li        r4, 0x1
	  bl        -0x1014A0
	  b         .loc_0x918

	.loc_0x8D4:
	  lis       r3, 0x8889
	  subi      r5, r3, 0x7777
	  mulhw     r0, r5, r4
	  add       r0, r0, r4
	  srawi     r0, r0, 0x5
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  stw       r0, 0x100(r27)
	  lwz       r4, 0x4(r29)
	  mulhw     r0, r5, r4
	  add       r0, r0, r4
	  srawi     r0, r0, 0x5
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  mulli     r0, r0, 0x3C
	  sub       r0, r4, r0
	  stw       r0, 0x110(r27)

	.loc_0x918:
	  addi      r26, r26, 0x1
	  addi      r27, r27, 0x4
	  cmpwi     r26, 0x4
	  addi      r29, r29, 0x4
	  blt+      .loc_0x8A0
	  bl        -0x30478
	  stw       r3, 0x38(r31)
	  lwz       r24, 0x38(r31)
	  addi      r3, r24, 0x18
	  bl        -0x2F344
	  lwz       r25, -0x77D4(r13)
	  addi      r3, r24, 0x100
	  mr        r4, r25
	  bl        -0x4AA58
	  lwz       r3, -0x6514(r13)
	  mr        r4, r25
	  lwz       r3, 0x5C(r3)
	  bl        0x35EB4
	  mr        r3, r31
	  bl        0x47320
	  lwz       r7, 0x38(r31)
	  lis       r4, 0x6574
	  li        r0, 0x1
	  li        r5, 0x4E73
	  stw       r3, 0x3D0(r7)
	  addi      r6, r4, 0x7030
	  stw       r3, 0x24(r7)
	  stw       r3, 0x104(r7)
	  lwz       r3, 0x38(r31)
	  stb       r0, 0x478(r3)
	  lwz       r3, 0x3C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x3D4A40
	  lfs       f31, 0x4(r3)
	  lis       r4, 0x6574
	  lwz       r3, 0x3C(r31)
	  addi      r6, r4, 0x7031
	  li        r5, 0x4E73
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x3D4A68
	  lfs       f0, 0x4(r3)
	  lis       r3, 0x6963
	  lfs       f1, 0x1E44(r2)
	  addi      r6, r3, 0x7430
	  fsubs     f0, f0, f31
	  li        r5, 0x5070
	  fmuls     f0, f1, f0
	  stfs      f0, 0x12C(r31)
	  lwz       r3, 0x3C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r4, 0x6963
	  stb       r0, 0xB0(r3)
	  addi      r6, r4, 0x7431
	  li        r5, 0x5070
	  lwz       r3, 0x3C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r5, 0x7470
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x5F63
	  lwz       r3, 0x3C(r31)
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lis       r5, 0x7470
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x5F64
	  lwz       r3, 0x3C(r31)
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  lwz       r0, 0xC(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0xAF4
	  lwz       r3, 0x3C(r31)
	  lis       r5, 0x6C5F
	  lis       r4, 0x4E74
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6669
	  addi      r5, r4, 0x6974
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lis       r5, 0x6C5F
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E74
	  addi      r6, r5, 0x636F
	  lwz       r3, 0x3C(r31)
	  addi      r5, r4, 0x6974
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  b         .loc_0xB4C

	.loc_0xAF4:
	  lwz       r3, 0x3C(r31)
	  lis       r5, 0x6C5F
	  lis       r4, 0x4E74
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6669
	  addi      r5, r4, 0x6974
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r5, 0x6C5F
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E74
	  addi      r6, r5, 0x636F
	  lwz       r3, 0x3C(r31)
	  addi      r5, r4, 0x6974
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)

	.loc_0xB4C:
	  lwz       r0, 0x14(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xB60
	  mr        r3, r28
	  bl        -0x3E9974

	.loc_0xB60:
	  lwz       r3, -0x6B70(r13)
	  li        r4, -0x2
	  addi      r3, r3, 0x84
	  bl        0x4264
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  lmw       r23, 0x6C(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040CF48
 * Size:	0001BC
 */
void kh::Screen::ObjFinalResult::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x680
	  lbz       r0, 0x14E(r31)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0xEC
	  lis       r3, 0x8051
	  lbz       r4, 0x14F(r31)
	  addi      r3, r3, 0x4188
	  lbz       r0, 0x1F(r3)
	  cmplw     r4, r0
	  bge-      .loc_0x48
	  lbz       r0, 0x20(r3)
	  add       r0, r4, r0
	  stb       r0, 0x14F(r31)

	.loc_0x48:
	  lwz       r3, 0x38(r31)
	  bl        -0x30200
	  lwz       r3, 0x38(r31)
	  bl        -0x302BC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1A4
	  lwz       r3, 0x38(r31)
	  lwz       r0, 0x474(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xDC
	  bge-      .loc_0x80
	  cmpwi     r0, 0
	  bge-      .loc_0x88
	  b         .loc_0x1A4

	.loc_0x80:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x1A4

	.loc_0x88:
	  mr        r3, r31
	  bl        0x46FD4
	  lis       r5, 0x5253
	  li        r4, 0x4B48
	  addi      r6, r5, 0x4C54
	  li        r5, 0x465F
	  bl        -0xFDCCC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7328
	  li        r4, 0x17E
	  subi      r5, r5, 0x7028
	  crclr     6, 0x6
	  bl        -0x3E29CC

	.loc_0xC8:
	  mr        r3, r31
	  bl        0x46F94
	  li        r0, 0x1
	  stw       r0, 0x10(r3)
	  b         .loc_0x1A4

	.loc_0xDC:
	  lbz       r0, 0x14E(r31)
	  rlwinm    r0,r0,0,30,28
	  stb       r0, 0x14E(r31)
	  b         .loc_0x1A4

	.loc_0xEC:
	  lwz       r0, 0x148(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x130
	  bge-      .loc_0x10C
	  cmpwi     r0, 0
	  beq-      .loc_0x118
	  bge-      .loc_0x124
	  b         .loc_0x144

	.loc_0x10C:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x144
	  b         .loc_0x13C

	.loc_0x118:
	  mr        r3, r31
	  bl        0xB6C
	  b         .loc_0x144

	.loc_0x124:
	  mr        r3, r31
	  bl        0xF04
	  b         .loc_0x144

	.loc_0x130:
	  mr        r3, r31
	  bl        0xF84
	  b         .loc_0x144

	.loc_0x13C:
	  mr        r3, r31
	  bl        0x1008

	.loc_0x144:
	  lwz       r0, 0x148(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x184
	  lwz       r0, 0x130(r31)
	  cmpwi     r0, 0x7
	  bne-      .loc_0x184
	  mr        r3, r31
	  bl        0x46F98
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x184
	  lbz       r0, 0x14E(r31)
	  ori       r0, r0, 0x4
	  stb       r0, 0x14E(r31)
	  lwz       r3, 0x38(r31)
	  bl        -0x304CC

	.loc_0x184:
	  lbz       r4, 0x14F(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x1A4
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4188
	  lbz       r0, 0x20(r3)
	  sub       r0, r4, r0
	  stb       r0, 0x14F(r31)

	.loc_0x1A4:
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040D104
 * Size:	00007C
 */
void kh::Screen::ObjFinalResult::doUpdateFadein(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x4C4
	  lwz       r3, 0x13C(r31)
	  cmpwi     r3, 0x1
	  ble-      .loc_0x2C
	  subi      r0, r3, 0x1
	  stw       r0, 0x13C(r31)

	.loc_0x2C:
	  lis       r3, 0x8051
	  lbz       r0, 0x14F(r31)
	  addi      r4, r3, 0x4188
	  lbz       r3, 0x1E(r4)
	  sub       r0, r0, r3
	  stb       r0, 0x14F(r31)
	  lbz       r3, 0x14F(r31)
	  lbz       r0, 0x1E(r4)
	  cmplw     r3, r0
	  bge-      .loc_0x64
	  li        r0, 0
	  li        r3, 0x1
	  stb       r0, 0x14F(r31)
	  b         .loc_0x68

	.loc_0x64:
	  li        r3, 0

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040D180
 * Size:	00006C
 */
void kh::Screen::ObjFinalResult::doUpdateFadeout(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x448
	  lis       r3, 0x8051
	  lbz       r4, 0x14F(r31)
	  addi      r3, r3, 0x4188
	  lbz       r0, 0x1E(r3)
	  add       r0, r4, r0
	  stb       r0, 0x14F(r31)
	  lbz       r0, 0x1E(r3)
	  lbz       r3, 0x14F(r31)
	  subfic    r0, r0, 0xFF
	  cmpw      r3, r0
	  ble-      .loc_0x54
	  li        r0, 0xFF
	  li        r3, 0x1
	  stb       r0, 0x14F(r31)
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
 * Address:	8040D1EC
 * Size:	0003F0
 */
void kh::Screen::ObjFinalResult::doDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stmw      r26, 0x58(r1)
	  mr        r27, r3
	  lis       r5, 0x4E70
	  lwz       r3, 0x3C(r3)
	  mr        r28, r4
	  addi      r6, r5, 0x7265
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  lwz       r3, 0x3C(r27)
	  lis       r4, 0x4E61
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x6674
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  lwz       r3, 0x3C(r27)
	  lis       r4, 0x6D61
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x696E
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  addi      r3, r28, 0xBC
	  lwz       r12, 0xBC(r28)
	  mr        r29, r0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0xB0(r30)
	  mr        r4, r28
	  addi      r5, r28, 0xBC
	  stb       r0, 0xB0(r31)
	  stb       r0, 0xB0(r29)
	  lwz       r3, 0x3C(r27)
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
	  bl        -0x323A94
	  li        r4, 0
	  li        r0, 0x1
	  stb       r4, 0xB0(r30)
	  mr        r3, r27
	  stb       r4, 0xB0(r31)
	  stb       r0, 0xB0(r29)
	  bl        0x46CA8
	  lis       r5, 0x5253
	  li        r4, 0x4B48
	  addi      r6, r5, 0x4C54
	  li        r5, 0x465F
	  bl        -0xFDFF8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x150
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7328
	  li        r4, 0x1DF
	  subi      r5, r5, 0x7028
	  crclr     6, 0x6
	  bl        -0x3E2CF8

	.loc_0x150:
	  mr        r3, r27
	  bl        0x46C68
	  li        r0, 0x2
	  lwz       r4, 0x8(r3)
	  li        r3, 0
	  mtctr     r0

	.loc_0x168:
	  lwz       r5, 0x0(r4)
	  li        r0, 0
	  addi      r11, r3, 0x4
	  addi      r10, r3, 0x8
	  lwzx      r5, r5, r3
	  addi      r9, r3, 0xC
	  addi      r8, r3, 0x10
	  addi      r7, r3, 0x14
	  stb       r0, 0x18(r5)
	  addi      r6, r3, 0x18
	  addi      r5, r3, 0x1C
	  addi      r3, r3, 0x20
	  lwz       r12, 0x0(r4)
	  lwzx      r11, r12, r11
	  stb       r0, 0x18(r11)
	  lwz       r11, 0x0(r4)
	  lwzx      r10, r11, r10
	  stb       r0, 0x18(r10)
	  lwz       r10, 0x0(r4)
	  lwzx      r9, r10, r9
	  stb       r0, 0x18(r9)
	  lwz       r9, 0x0(r4)
	  lwzx      r8, r9, r8
	  stb       r0, 0x18(r8)
	  lwz       r8, 0x0(r4)
	  lwzx      r7, r8, r7
	  stb       r0, 0x18(r7)
	  lwz       r7, 0x0(r4)
	  lwzx      r6, r7, r6
	  stb       r0, 0x18(r6)
	  lwz       r6, 0x0(r4)
	  lwzx      r5, r6, r5
	  stb       r0, 0x18(r5)
	  bdnz+     .loc_0x168
	  lwz       r0, 0x148(r27)
	  cmpwi     r0, 0
	  bne-      .loc_0x210
	  lwz       r5, 0x130(r27)
	  mr        r3, r27
	  mr        r4, r28
	  bl        0xE54
	  b         .loc_0x290

	.loc_0x210:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x22C
	  lfs       f0, 0x12C(r27)
	  lwz       r3, 0x130(r27)
	  fneg      f31, f0
	  addi      r26, r3, 0x1
	  b         .loc_0x238

	.loc_0x22C:
	  lwz       r3, 0x130(r27)
	  lfs       f31, 0x12C(r27)
	  subi      r26, r3, 0x1

	.loc_0x238:
	  mr        r3, r29
	  lfs       f1, 0x1E40(r2)
	  lwz       r12, 0x0(r29)
	  lfs       f2, 0x128(r27)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r26
	  bl        0xDFC
	  mr        r3, r29
	  fmr       f2, f31
	  lwz       r12, 0x0(r29)
	  lfs       f1, 0x1E40(r2)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x130(r27)
	  mr        r3, r27
	  mr        r4, r28
	  bl        0xDD0

	.loc_0x290:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r5, 0x20(r1)
	  lwz       r6, 0x1C(r1)
	  bl        -0x323CB4
	  addi      r3, r28, 0xBC
	  lwz       r12, 0xBC(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0xB0(r30)
	  mr        r4, r28
	  addi      r5, r28, 0xBC
	  stb       r0, 0xB0(r31)
	  stb       r3, 0xB0(r29)
	  lwz       r3, 0x3C(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x14F(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x3AC
	  addi      r3, r28, 0xBC
	  lwz       r12, 0xBC(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x14F(r27)
	  li        r8, 0
	  stb       r8, 0x18(r1)
	  addi      r3, r28, 0xBC
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
	  bl        -0x3D6EA8
	  bl        0x15CEC
	  lhz       r29, 0x6(r3)
	  bl        0x15CE4
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f3, 0x1E40(r2)
	  addi      r3, r28, 0xBC
	  stw       r4, 0x44(r1)
	  addi      r4, r1, 0x2C
	  lfd       f2, 0x1E48(r2)
	  stw       r0, 0x40(r1)
	  lfd       f0, 0x40(r1)
	  stw       r29, 0x4C(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x48(r1)
	  lfd       f0, 0x48(r1)
	  fadds     f1, f3, f1
	  stfs      f3, 0x2C(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x30(r1)
	  fadds     f0, f3, f0
	  stfs      f1, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  bl        -0x3D6DC0

	.loc_0x3AC:
	  lbz       r0, 0x14E(r27)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x3D4
	  addi      r3, r28, 0x190
	  lwz       r12, 0x190(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x38(r27)
	  bl        -0x30790

	.loc_0x3D4:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  lmw       r26, 0x58(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040D5DC
 * Size:	0005F4
 */
void kh::Screen::ObjFinalResult::updateCommon(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  mr        r31, r3
	  lis       r4, 0x6D61
	  lwz       r3, 0x3C(r3)
	  addi      r6, r4, 0x736B
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r1, 0x24
	  li        r5, 0
	  bl        -0x3D468C
	  lwz       r3, 0x3C(r31)
	  lis       r4, 0x6D61
	  lwz       r7, 0x24(r1)
	  addi      r6, r4, 0x736B
	  lwz       r12, 0x0(r3)
	  li        r5, 0x4E
	  lwz       r4, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  lwz       r12, 0x3C(r12)
	  stw       r7, 0x3C(r1)
	  stw       r4, 0x40(r1)
	  stw       r0, 0x44(r1)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r1, 0x18
	  li        r5, 0x3
	  bl        -0x3D46D4
	  lfs       f0, 0x1E50(r2)
	  lfs       f31, 0x40(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r3, 0x1C(r1)
	  fadds     f1, f0, f31
	  lwz       r0, 0x20(r1)
	  stw       r4, 0x30(r1)
	  stw       r3, 0x34(r1)
	  stw       r0, 0x38(r1)
	  bl        -0x34BB48
	  lfs       f0, 0x34(r1)
	  stw       r3, 0x140(r31)
	  fsubs     f1, f0, f31
	  bl        -0x34BB58
	  stw       r3, 0x144(r31)
	  lis       r0, 0x4330
	  lfs       f0, 0x1E54(r2)
	  lfs       f2, 0x74(r31)
	  lwz       r3, 0x50(r31)
	  stw       r0, 0x48(r1)
	  lfd       f1, 0x1E78(r2)
	  stfs      f2, 0x8(r3)
	  lfs       f2, 0x74(r31)
	  fadds     f0, f2, f0
	  stfs      f0, 0x74(r31)
	  lwz       r3, 0x50(r31)
	  lfs       f2, 0x74(r31)
	  lha       r0, 0x6(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x4C(r1)
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x128
	  lfs       f0, 0x1E40(r2)
	  stfs      f0, 0x74(r31)

	.loc_0x128:
	  lfs       f0, 0x78(r31)
	  lwz       r3, 0x40(r31)
	  lfs       f1, 0x1E54(r2)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x1E58(r2)
	  lfs       f2, 0x78(r31)
	  lwz       r3, 0x58(r31)
	  stfs      f2, 0x8(r3)
	  lfs       f2, 0x78(r31)
	  fadds     f1, f2, f1
	  stfs      f1, 0x78(r31)
	  lfs       f1, 0x78(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x16C
	  lfs       f0, 0x1E40(r2)
	  stfs      f0, 0x78(r31)

	.loc_0x16C:
	  lfs       f0, 0x7C(r31)
	  lwz       r3, 0x4C(r31)
	  lfs       f1, 0x1E54(r2)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x1E5C(r2)
	  lfs       f2, 0x7C(r31)
	  lwz       r3, 0x5C(r31)
	  stfs      f2, 0x8(r3)
	  lfs       f2, 0x7C(r31)
	  fadds     f1, f2, f1
	  stfs      f1, 0x7C(r31)
	  lfs       f1, 0x7C(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1B0
	  lfs       f0, 0x1E40(r2)
	  stfs      f0, 0x7C(r31)

	.loc_0x1B0:
	  lfs       f1, 0x80(r31)
	  lis       r0, 0x4330
	  lwz       r3, 0x54(r31)
	  lfs       f0, 0x1E54(r2)
	  stfs      f1, 0x8(r3)
	  lfd       f1, 0x1E78(r2)
	  lfs       f2, 0x80(r31)
	  lwz       r3, 0x60(r31)
	  stw       r0, 0x48(r1)
	  stfs      f2, 0x8(r3)
	  lfs       f2, 0x84(r31)
	  lwz       r3, 0x64(r31)
	  stfs      f2, 0x8(r3)
	  lfs       f2, 0x88(r31)
	  lwz       r3, 0x68(r31)
	  stfs      f2, 0x8(r3)
	  lfs       f2, 0x80(r31)
	  fadds     f0, f2, f0
	  stfs      f0, 0x80(r31)
	  lwz       r3, 0x60(r31)
	  lfs       f2, 0x80(r31)
	  lha       r0, 0x6(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x4C(r1)
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x22C
	  lfs       f0, 0x1E40(r2)
	  stfs      f0, 0x80(r31)

	.loc_0x22C:
	  lfs       f1, 0x84(r31)
	  lis       r0, 0x4330
	  lfs       f0, 0x1E54(r2)
	  stw       r0, 0x48(r1)
	  fadds     f0, f1, f0
	  lfd       f1, 0x1E78(r2)
	  stfs      f0, 0x84(r31)
	  lwz       r3, 0x64(r31)
	  lfs       f2, 0x84(r31)
	  lha       r0, 0x6(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x4C(r1)
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x278
	  lfs       f0, 0x1E40(r2)
	  stfs      f0, 0x84(r31)

	.loc_0x278:
	  lfs       f1, 0x88(r31)
	  lis       r0, 0x4330
	  lfs       f0, 0x1E54(r2)
	  stw       r0, 0x48(r1)
	  fadds     f0, f1, f0
	  lfd       f1, 0x1E78(r2)
	  stfs      f0, 0x88(r31)
	  lwz       r3, 0x68(r31)
	  lfs       f2, 0x88(r31)
	  lha       r0, 0x6(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x4C(r1)
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2C4
	  lfs       f0, 0x1E40(r2)
	  stfs      f0, 0x88(r31)

	.loc_0x2C4:
	  lfs       f0, 0x6C(r31)
	  lwz       r3, 0x44(r31)
	  stfs      f0, 0x8(r3)
	  lbz       r3, 0x14C(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x380
	  lis       r3, 0x8051
	  lfs       f2, 0x6C(r31)
	  lfs       f1, 0x4188(r3)
	  lfs       f0, 0x1E60(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x6C(r31)
	  lfs       f1, 0x6C(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x388
	  lfs       f0, 0x1E40(r2)
	  stfs      f0, 0x6C(r31)
	  bl        -0x344348
	  lis       r5, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x4C(r1)
	  lis       r3, 0x8051
	  addi      r4, r3, 0x4188
	  lfd       f2, 0x1E78(r2)
	  stw       r5, 0x48(r1)
	  lbz       r3, 0x1D(r4)
	  lfd       f1, 0x48(r1)
	  lfs       f0, 0x1E64(r2)
	  fsubs     f1, f1, f2
	  lbz       r0, 0x1C(r4)
	  stw       r3, 0x54(r1)
	  lfd       f2, 0x1E48(r2)
	  fdivs     f3, f1, f0
	  stw       r5, 0x50(r1)
	  lfd       f1, 0x50(r1)
	  stw       r0, 0x5C(r1)
	  stw       r5, 0x58(r1)
	  lfd       f0, 0x58(r1)
	  fsubs     f1, f1, f2
	  fsubs     f0, f0, f2
	  fmadds    f0, f1, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  stb       r0, 0x14C(r31)
	  b         .loc_0x388

	.loc_0x380:
	  subi      r0, r3, 0x1
	  stb       r0, 0x14C(r31)

	.loc_0x388:
	  lfs       f0, 0x70(r31)
	  lwz       r3, 0x48(r31)
	  stfs      f0, 0x8(r3)
	  lbz       r3, 0x14D(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x444
	  lis       r3, 0x8051
	  lfs       f2, 0x70(r31)
	  lfs       f1, 0x4188(r3)
	  lfs       f0, 0x1E68(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x70(r31)
	  lfs       f1, 0x70(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x44C
	  lfs       f0, 0x1E40(r2)
	  stfs      f0, 0x70(r31)
	  bl        -0x34440C
	  lis       r5, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x64(r1)
	  lis       r3, 0x8051
	  addi      r4, r3, 0x4188
	  lfd       f2, 0x1E78(r2)
	  stw       r5, 0x60(r1)
	  lbz       r3, 0x1D(r4)
	  lfd       f1, 0x60(r1)
	  lfs       f0, 0x1E64(r2)
	  fsubs     f1, f1, f2
	  lbz       r0, 0x1C(r4)
	  stw       r3, 0x5C(r1)
	  lfd       f2, 0x1E48(r2)
	  fdivs     f3, f1, f0
	  stw       r5, 0x58(r1)
	  lfd       f1, 0x58(r1)
	  stw       r0, 0x54(r1)
	  stw       r5, 0x50(r1)
	  lfd       f0, 0x50(r1)
	  fsubs     f1, f1, f2
	  fsubs     f0, f0, f2
	  fmadds    f0, f1, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  stb       r0, 0x14D(r31)
	  b         .loc_0x44C

	.loc_0x444:
	  subi      r0, r3, 0x1
	  stb       r0, 0x14D(r31)

	.loc_0x44C:
	  lwz       r3, 0x3C(r31)
	  bl        -0x3CCF00
	  lfs       f1, 0x120(r31)
	  lfs       f2, 0x1E54(r2)
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0x4A4
	  lis       r3, 0x8051
	  mr        r4, r31
	  addi      r6, r3, 0x4188
	  addi      r5, r6, 0x10
	  addi      r3, r1, 0x14
	  addi      r6, r6, 0x14
	  bl        0x10B0
	  lbz       r0, 0x14(r1)
	  stb       r0, 0x124(r31)
	  lbz       r0, 0x15(r1)
	  stb       r0, 0x125(r31)
	  lbz       r0, 0x16(r1)
	  stb       r0, 0x126(r31)
	  lbz       r0, 0x17(r1)
	  stb       r0, 0x127(r31)
	  b         .loc_0x590

	.loc_0x4A4:
	  lfs       f0, 0x1E44(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x4F4
	  lis       r3, 0x8051
	  fsubs     f1, f1, f2
	  addi      r6, r3, 0x4188
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  addi      r5, r6, 0x14
	  addi      r6, r6, 0x18
	  bl        0x1060
	  lbz       r0, 0x10(r1)
	  stb       r0, 0x124(r31)
	  lbz       r0, 0x11(r1)
	  stb       r0, 0x125(r31)
	  lbz       r0, 0x12(r1)
	  stb       r0, 0x126(r31)
	  lbz       r0, 0x13(r1)
	  stb       r0, 0x127(r31)
	  b         .loc_0x590

	.loc_0x4F4:
	  lfs       f2, 0x1E6C(r2)
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0x544
	  lis       r3, 0x8051
	  fsubs     f1, f1, f0
	  addi      r6, r3, 0x4188
	  mr        r4, r31
	  addi      r3, r1, 0xC
	  addi      r5, r6, 0x18
	  addi      r6, r6, 0x14
	  bl        0x1010
	  lbz       r0, 0xC(r1)
	  stb       r0, 0x124(r31)
	  lbz       r0, 0xD(r1)
	  stb       r0, 0x125(r31)
	  lbz       r0, 0xE(r1)
	  stb       r0, 0x126(r31)
	  lbz       r0, 0xF(r1)
	  stb       r0, 0x127(r31)
	  b         .loc_0x590

	.loc_0x544:
	  lfs       f0, 0x1E70(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x590
	  lis       r3, 0x8051
	  fsubs     f1, f1, f2
	  addi      r6, r3, 0x4188
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  addi      r5, r6, 0x14
	  addi      r6, r6, 0x10
	  bl        0xFC0
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x124(r31)
	  lbz       r0, 0x9(r1)
	  stb       r0, 0x125(r31)
	  lbz       r0, 0xA(r1)
	  stb       r0, 0x126(r31)
	  lbz       r0, 0xB(r1)
	  stb       r0, 0x127(r31)

	.loc_0x590:
	  lis       r3, 0x8051
	  lfs       f2, 0x120(r31)
	  addi      r3, r3, 0x4188
	  lfs       f0, 0x1E70(r2)
	  lfs       f1, 0xC(r3)
	  fadds     f1, f2, f1
	  stfs      f1, 0x120(r31)
	  lfs       f1, 0x120(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x5C4
	  fsubs     f0, f1, f0
	  stfs      f0, 0x120(r31)

	.loc_0x5C4:
	  lwz       r3, 0x3C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x78(r1),0,0
	  lwz       r0, 0x84(r1)
	  lfd       f31, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040DBD0
 * Size:	0003A4
 */
void kh::Screen::ObjFinalResult::statusNormal(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  lwz       r0, 0x130(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x48
	  lwz       r3, 0x94(r31)
	  bl        -0x1E08
	  lwz       r3, 0x98(r31)
	  bl        -0x1E30
	  lwz       r3, 0x8C(r31)
	  bl        -0xE07B8
	  lwz       r3, 0x9C(r31)
	  bl        -0x1E20
	  b         .loc_0x94

	.loc_0x48:
	  cmpwi     r0, 0x7
	  bne-      .loc_0x74
	  lwz       r3, 0x94(r31)
	  bl        -0x1E54
	  lwz       r3, 0x98(r31)
	  bl        -0x1E3C
	  lwz       r3, 0x8C(r31)
	  bl        -0xE08B8
	  lwz       r3, 0x9C(r31)
	  bl        -0x1E6C
	  b         .loc_0x94

	.loc_0x74:
	  lwz       r3, 0x94(r31)
	  bl        -0x1E78
	  lwz       r3, 0x98(r31)
	  bl        -0x1E80
	  lwz       r3, 0x8C(r31)
	  bl        -0xE0720
	  lwz       r3, 0x9C(r31)
	  bl        -0x1E70

	.loc_0x94:
	  lwz       r3, 0x90(r31)
	  bl        -0x1E98
	  mr        r3, r31
	  bl        0x463D0
	  lis       r4, 0x800
	  lwz       r3, 0x18(r3)
	  addi      r0, r4, 0x8
	  and.      r0, r3, r0
	  beq-      .loc_0x214
	  lwz       r3, 0x130(r31)
	  cmpwi     r3, 0
	  beq-      .loc_0x214
	  subi      r0, r3, 0x1
	  lis       r3, 0x656C
	  stw       r0, 0x130(r31)
	  addi      r4, r3, 0x3030
	  li        r3, 0x4E73
	  lwz       r5, 0x130(r31)
	  addi      r5, r5, 0x1
	  bl        -0x28BC
	  mr        r5, r3
	  lwz       r3, 0x3C(r31)
	  mr        r6, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lis       r4, 0x8051
	  addi      r30, r4, 0x4188
	  lwz       r12, 0x24(r12)
	  lbz       r4, 0x21(r30)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x656C
	  lwz       r5, 0x130(r31)
	  addi      r4, r3, 0x3030
	  li        r3, 0x4E73
	  bl        -0x2908
	  mr        r5, r3
	  lwz       r3, 0x3C(r31)
	  mr        r6, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0xFF
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x130(r31)
	  lis       r4, 0x6F6E
	  lis       r6, 0x4E
	  addi      r4, r4, 0x3030
	  addi      r5, r3, 0x1
	  addi      r3, r6, 0x6963
	  bl        -0x2954
	  mr        r5, r3
	  lwz       r3, 0x3C(r31)
	  mr        r6, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lbz       r4, 0x21(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x6F6E
	  lis       r3, 0x4E
	  lwz       r5, 0x130(r31)
	  addi      r4, r4, 0x3030
	  addi      r3, r3, 0x6963
	  bl        -0x299C
	  mr        r5, r3
	  lwz       r3, 0x3C(r31)
	  mr        r6, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0xFF
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r0, 0x148(r31)
	  bl        .loc_0x3A4
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1811
	  li        r5, 0
	  bl        -0xD57B0

	.loc_0x214:
	  mr        r3, r31
	  bl        0x46258
	  lis       r4, 0x400
	  lwz       r3, 0x18(r3)
	  addi      r0, r4, 0x4
	  and.      r0, r3, r0
	  beq-      .loc_0x38C
	  lwz       r3, 0x130(r31)
	  cmpwi     r3, 0x7
	  beq-      .loc_0x38C
	  addi      r0, r3, 0x1
	  lis       r3, 0x656C
	  stw       r0, 0x130(r31)
	  addi      r4, r3, 0x3030
	  li        r3, 0x4E73
	  lwz       r5, 0x130(r31)
	  subi      r5, r5, 0x1
	  bl        -0x2A34
	  mr        r5, r3
	  lwz       r3, 0x3C(r31)
	  mr        r6, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lis       r4, 0x8051
	  addi      r30, r4, 0x4188
	  lwz       r12, 0x24(r12)
	  lbz       r4, 0x21(r30)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x656C
	  lwz       r5, 0x130(r31)
	  addi      r4, r3, 0x3030
	  li        r3, 0x4E73
	  bl        -0x2A80
	  mr        r5, r3
	  lwz       r3, 0x3C(r31)
	  mr        r6, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0xFF
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x130(r31)
	  lis       r4, 0x6F6E
	  lis       r6, 0x4E
	  addi      r4, r4, 0x3030
	  subi      r5, r3, 0x1
	  addi      r3, r6, 0x6963
	  bl        -0x2ACC
	  mr        r5, r3
	  lwz       r3, 0x3C(r31)
	  mr        r6, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lbz       r4, 0x21(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x6F6E
	  lis       r3, 0x4E
	  lwz       r5, 0x130(r31)
	  addi      r4, r4, 0x3030
	  addi      r3, r3, 0x6963
	  bl        -0x2B14
	  mr        r5, r3
	  lwz       r3, 0x3C(r31)
	  mr        r6, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0xFF
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x2
	  mr        r3, r31
	  stw       r0, 0x148(r31)
	  bl        0xB8
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1811
	  li        r5, 0
	  bl        -0xD5928

	.loc_0x38C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x3A4:
	*/
}

/*
 * --INFO--
 * Address:	8040DF74
 * Size:	00008C
 */
void kh::Screen::ObjFinalResult::statusScrollUp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r4, 0x4330
	  lfd       f2, 0x1E78(r2)
	  lwz       r6, 0x134(r3)
	  lwz       r5, 0x138(r3)
	  xoris     r0, r6, 0x8000
	  stw       r4, 0x8(r1)
	  sub       r5, r6, r5
	  lfs       f3, 0x12C(r3)
	  xoris     r5, r5, 0x8000
	  stw       r0, 0x14(r1)
	  stw       r5, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r4, 0x10(r1)
	  fsubs     f1, f0, f2
	  lfd       f0, 0x10(r1)
	  fmuls     f1, f3, f1
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  fsubs     f0, f3, f0
	  stfs      f0, 0x128(r3)
	  lwz       r4, 0x138(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x138(r3)
	  lwz       r0, 0x134(r3)
	  cmpw      r4, r0
	  bne-      .loc_0x84
	  li        r4, 0x1
	  li        r0, 0
	  stw       r4, 0x138(r3)
	  lfs       f0, 0x1E40(r2)
	  stw       r0, 0x148(r3)
	  stfs      f0, 0x128(r3)

	.loc_0x84:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040E000
 * Size:	000090
 */
void kh::Screen::ObjFinalResult::statusScrollDown(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r4, 0x4330
	  lfd       f2, 0x1E78(r2)
	  lwz       r6, 0x134(r3)
	  lwz       r5, 0x138(r3)
	  xoris     r0, r6, 0x8000
	  lfs       f4, 0x12C(r3)
	  sub       r5, r5, r6
	  stw       r4, 0x8(r1)
	  xoris     r5, r5, 0x8000
	  fneg      f3, f4
	  stw       r5, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r4, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fmuls     f1, f4, f1
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  fsubs     f0, f3, f0
	  stfs      f0, 0x128(r3)
	  lwz       r4, 0x138(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x138(r3)
	  lwz       r0, 0x134(r3)
	  cmpw      r4, r0
	  bne-      .loc_0x88
	  li        r4, 0x1
	  li        r0, 0
	  stw       r4, 0x138(r3)
	  lfs       f0, 0x1E40(r2)
	  stw       r0, 0x148(r3)
	  stfs      f0, 0x128(r3)

	.loc_0x88:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040E090
 * Size:	0001B8
 */
void kh::Screen::ObjFinalResult::statusForceScroll(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x13C(r3)
	  cmpwi     r3, 0
	  bne-      .loc_0x19C
	  lbz       r0, 0x14E(r31)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x48
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1811
	  li        r5, 0
	  bl        -0xD5A98
	  lbz       r0, 0x14E(r31)
	  rlwinm    r0,r0,0,29,27
	  stb       r0, 0x14E(r31)

	.loc_0x48:
	  lwz       r5, 0x134(r31)
	  lis       r3, 0x4330
	  lwz       r4, 0x138(r31)
	  xoris     r0, r5, 0x8000
	  lfs       f4, 0x12C(r31)
	  sub       r4, r4, r5
	  stw       r3, 0x8(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f2, 0x1E78(r2)
	  stw       r4, 0xC(r1)
	  fneg      f3, f4
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r3, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fmuls     f1, f4, f1
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  fsubs     f0, f3, f0
	  stfs      f0, 0x128(r31)
	  lwz       r3, 0x138(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x138(r31)
	  lwz       r0, 0x134(r31)
	  cmpw      r3, r0
	  bne-      .loc_0x1A4
	  lwz       r5, 0x130(r31)
	  cmpwi     r5, 0x7
	  bne-      .loc_0x164
	  lis       r3, 0x656C
	  addi      r4, r3, 0x3030
	  li        r3, 0x4E73
	  bl        -0x2D68
	  mr        r5, r3
	  lwz       r3, 0x3C(r31)
	  mr        r6, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0xFF
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x6F6E
	  lis       r3, 0x4E
	  lwz       r5, 0x130(r31)
	  addi      r4, r4, 0x3030
	  addi      r3, r3, 0x6963
	  bl        -0x2DB0
	  mr        r5, r3
	  lwz       r3, 0x3C(r31)
	  mr        r6, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0xFF
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r3, r3, 0x4188
	  lwz       r3, 0x4(r3)
	  stw       r3, 0x134(r31)
	  stw       r0, 0x148(r31)
	  b         .loc_0x16C

	.loc_0x164:
	  addi      r0, r5, 0x1
	  stw       r0, 0x130(r31)

	.loc_0x16C:
	  li        r0, 0x1
	  lis       r3, 0x8051
	  stw       r0, 0x138(r31)
	  addi      r3, r3, 0x4188
	  lfs       f0, 0x1E40(r2)
	  stfs      f0, 0x128(r31)
	  lwz       r0, 0x8(r3)
	  stw       r0, 0x13C(r31)
	  lbz       r0, 0x14E(r31)
	  ori       r0, r0, 0x8
	  stb       r0, 0x14E(r31)
	  b         .loc_0x1A4

	.loc_0x19C:
	  subi      r0, r3, 0x1
	  stw       r0, 0x13C(r31)

	.loc_0x1A4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040E248
 * Size:	0008C0
 */
void kh::Screen::ObjFinalResult::drawReplace((Graphics&, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x160(r1)
	  mflr      r0
	  lis       r6, 0x804A
	  stw       r0, 0x164(r1)
	  stmw      r18, 0x128(r1)
	  mr        r28, r3
	  mr        r29, r4
	  mr        r18, r5
	  subi      r25, r6, 0x7328
	  bl        0x45D3C
	  lis       r5, 0x5253
	  li        r4, 0x4B48
	  addi      r6, r5, 0x4C54
	  li        r5, 0x465F
	  bl        -0xFEF64
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  addi      r3, r25, 0
	  addi      r5, r25, 0x300
	  li        r4, 0x2D6
	  crclr     6, 0x6
	  bl        -0x3E3C5C

	.loc_0x58:
	  mr        r3, r28
	  bl        0x45D04
	  rlwinm    r22,r18,1,0,30
	  li        r0, 0x10
	  addi      r21, r22, 0x1
	  addi      r5, r1, 0xA4
	  addi      r4, r25, 0x374
	  lwz       r30, 0x8(r3)
	  mtctr     r0

	.loc_0x7C:
	  lwz       r3, 0x4(r4)
	  lwzu      r0, 0x8(r4)
	  stw       r3, 0x4(r5)
	  stwu      r0, 0x8(r5)
	  bdnz+     .loc_0x7C
	  cmpwi     r18, 0x7
	  beq-      .loc_0xF4
	  lwz       r3, 0x3C(r28)
	  lis       r5, 0x7470
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x5F63
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lis       r5, 0x7470
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x5F64
	  lwz       r3, 0x3C(r28)
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  b         .loc_0x14C

	.loc_0xF4:
	  lwz       r3, 0x3C(r28)
	  lis       r5, 0x7470
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x5F63
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r5, 0x7470
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x5F64
	  lwz       r3, 0x3C(r28)
	  addi      r5, r4, 0x7365
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)

	.loc_0x14C:
	  rlwinm    r0,r22,3,0,28
	  addi      r24, r1, 0xA8
	  mr        r27, r28
	  rlwinm    r31,r22,2,0,29
	  add       r24, r24, r0
	  li        r22, 0
	  li        r26, 0
	  lis       r20, 0x6974
	  lis       r19, 0x746C
	  lis       r18, 0x54

	.loc_0x174:
	  lwz       r3, 0x0(r30)
	  addi      r0, r26, 0x4
	  lwzx      r3, r31, r3
	  lwzx      r0, r3, r0
	  cmpwi     r0, 0
	  bge-      .loc_0x1A4
	  li        r0, 0
	  li        r4, 0x1
	  stw       r0, 0xE0(r27)
	  lwz       r3, 0xA0(r27)
	  bl        -0x102BFC
	  b         .loc_0x1B4

	.loc_0x1A4:
	  stw       r0, 0xE0(r27)
	  li        r4, 0
	  lwz       r3, 0xA0(r27)
	  bl        -0x102C10

	.loc_0x1B4:
	  lwz       r3, 0x3C(r28)
	  addi      r6, r20, 0x6C30
	  li        r5, 0x5474
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r24)
	  addi      r6, r19, 0x3073
	  lwz       r4, 0x4(r24)
	  addi      r5, r18, 0x7469
	  stw       r4, 0x1C(r3)
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r24)
	  addi      r22, r22, 0x1
	  lwz       r4, 0x4(r24)
	  cmpwi     r22, 0x4
	  addi      r26, r26, 0x4
	  addi      r27, r27, 0x4
	  stw       r4, 0x1C(r3)
	  stw       r0, 0x18(r3)
	  blt+      .loc_0x174
	  rlwinm    r0,r21,3,0,28
	  addi      r22, r1, 0xA8
	  mr        r23, r28
	  rlwinm    r21,r21,2,0,29
	  add       r22, r22, r0
	  li        r20, 0
	  li        r24, 0
	  lis       r26, 0x746C
	  lis       r27, 0x54
	  lis       r18, 0x6C65
	  lis       r19, 0x5474

	.loc_0x24C:
	  lwz       r3, 0x0(r30)
	  addi      r0, r24, 0x4
	  lwzx      r3, r21, r3
	  lwzx      r0, r3, r0
	  cmpwi     r0, 0
	  bge-      .loc_0x27C
	  li        r0, 0
	  li        r4, 0x1
	  stw       r0, 0xF0(r23)
	  lwz       r3, 0xB0(r23)
	  bl        -0x102CD4
	  b         .loc_0x28C

	.loc_0x27C:
	  stw       r0, 0xF0(r23)
	  li        r4, 0
	  lwz       r3, 0xB0(r23)
	  bl        -0x102CE8

	.loc_0x28C:
	  lwz       r3, 0x3C(r28)
	  addi      r6, r26, 0x6531
	  addi      r5, r27, 0x7469
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r22)
	  addi      r6, r18, 0x3173
	  lwz       r4, 0x4(r22)
	  addi      r5, r19, 0x6974
	  stw       r4, 0x1C(r3)
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r22)
	  addi      r20, r20, 0x1
	  lwz       r4, 0x4(r22)
	  cmpwi     r20, 0x4
	  addi      r24, r24, 0x4
	  addi      r23, r23, 0x4
	  stw       r4, 0x1C(r3)
	  stw       r0, 0x18(r3)
	  blt+      .loc_0x24C
	  lwz       r0, 0x124(r28)
	  lis       r4, 0x796F
	  lis       r3, 0x5074
	  stw       r0, 0x44(r1)
	  addi      r6, r4, 0x7031
	  addi      r5, r3, 0x6F6B
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x44
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x124(r28)
	  lis       r4, 0x6164
	  lis       r3, 0x5074
	  stw       r0, 0x40(r1)
	  addi      r6, r4, 0x7031
	  addi      r5, r3, 0x6F6D
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x40
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x124(r28)
	  lis       r3, 0x6B6F
	  addi      r6, r3, 0x6E31
	  li        r5, 0x50
	  stw       r0, 0x3C(r1)
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x3C
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x124(r28)
	  lis       r3, 0x6B6F
	  addi      r6, r3, 0x6E33
	  li        r5, 0x50
	  stw       r0, 0x38(r1)
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x38
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  lfd       f11, 0x3F8(r25)
	  addi      r22, r1, 0x90
	  lfd       f10, 0x400(r25)
	  addi      r23, r1, 0x78
	  lfd       f9, 0x408(r25)
	  addi      r24, r1, 0x60
	  lfd       f8, 0x410(r25)
	  addi      r26, r1, 0x48
	  lfd       f7, 0x418(r25)
	  li        r20, 0
	  lfd       f6, 0x420(r25)
	  lfd       f5, 0x428(r25)
	  lfd       f4, 0x430(r25)
	  lfd       f3, 0x438(r25)
	  lfd       f2, 0x440(r25)
	  lfd       f1, 0x448(r25)
	  lfd       f0, 0x450(r25)
	  stfd      f11, 0x90(r1)
	  stfd      f10, 0x98(r1)
	  stfd      f9, 0xA0(r1)
	  stfd      f8, 0x78(r1)
	  stfd      f7, 0x80(r1)
	  stfd      f6, 0x88(r1)
	  stfd      f5, 0x60(r1)
	  stfd      f4, 0x68(r1)
	  stfd      f3, 0x70(r1)
	  stfd      f2, 0x48(r1)
	  stfd      f1, 0x50(r1)
	  stfd      f0, 0x58(r1)

	.loc_0x464:
	  lwz       r0, 0x0(r30)
	  lwzx      r3, r31, r0
	  lwz       r0, 0x14(r3)
	  cmpw      r20, r0
	  bne-      .loc_0x4B4
	  lwz       r0, 0x124(r28)
	  lwz       r5, 0x0(r22)
	  stw       r0, 0x34(r1)
	  lwz       r6, 0x4(r22)
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x34
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x504

	.loc_0x4B4:
	  li        r3, 0
	  li        r0, 0xFF
	  stb       r3, 0x2C(r1)
	  lwz       r5, 0x0(r22)
	  stb       r0, 0x2D(r1)
	  lwz       r6, 0x4(r22)
	  stb       r0, 0x2E(r1)
	  stb       r3, 0x2F(r1)
	  lwz       r0, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x30
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl

	.loc_0x504:
	  lwz       r0, 0x0(r30)
	  lwzx      r3, r21, r0
	  lwz       r0, 0x14(r3)
	  cmpw      r20, r0
	  bne-      .loc_0x5C4
	  lwz       r0, 0x124(r28)
	  lwz       r5, 0x0(r23)
	  stw       r0, 0x28(r1)
	  lwz       r6, 0x4(r23)
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x28
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x124(r28)
	  lwz       r5, 0x0(r24)
	  stw       r0, 0x24(r1)
	  lwz       r6, 0x4(r24)
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x24
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x124(r28)
	  lwz       r5, 0x0(r26)
	  stw       r0, 0x20(r1)
	  lwz       r6, 0x4(r26)
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x20
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x6B4

	.loc_0x5C4:
	  li        r3, 0
	  li        r0, 0xFF
	  stb       r3, 0x18(r1)
	  lwz       r5, 0x0(r23)
	  stb       r0, 0x19(r1)
	  lwz       r6, 0x4(r23)
	  stb       r0, 0x1A(r1)
	  stb       r3, 0x1B(r1)
	  lwz       r0, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x1C
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0
	  li        r0, 0xFF
	  stb       r3, 0x10(r1)
	  lwz       r5, 0x0(r24)
	  stb       r0, 0x11(r1)
	  lwz       r6, 0x4(r24)
	  stb       r0, 0x12(r1)
	  stb       r3, 0x13(r1)
	  lwz       r0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x14
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0
	  li        r0, 0xFF
	  stb       r3, 0x8(r1)
	  lwz       r5, 0x0(r26)
	  stb       r0, 0x9(r1)
	  lwz       r6, 0x4(r26)
	  stb       r0, 0xA(r1)
	  stb       r3, 0xB(r1)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lwz       r3, 0x3C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0xC
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6B4:
	  addi      r20, r20, 0x1
	  addi      r23, r23, 0x8
	  cmpwi     r20, 0x3
	  addi      r24, r24, 0x8
	  addi      r26, r26, 0x8
	  addi      r22, r22, 0x8
	  blt+      .loc_0x464
	  li        r19, 0
	  mr        r18, r28

	.loc_0x6D8:
	  lwz       r3, 0xA0(r18)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xB0(r18)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1
	  addi      r18, r18, 0x4
	  cmpwi     r19, 0x4
	  blt+      .loc_0x6D8
	  addi      r3, r29, 0xBC
	  lwz       r12, 0xBC(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  bl        0x148B8
	  lhz       r5, 0x4(r3)
	  li        r3, 0
	  lwz       r4, 0x140(r28)
	  lwz       r6, 0x144(r28)
	  bl        -0x3251A8
	  lwz       r3, 0x3C(r28)
	  mr        r4, r29
	  addi      r5, r29, 0xBC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x0(r30)
	  lis       r3, 0x6D61
	  li        r0, 0x1
	  li        r5, 0x5069
	  lwzx      r4, r4, r31
	  addi      r6, r3, 0x6765
	  stb       r0, 0x18(r4)
	  lwz       r3, 0x0(r30)
	  lwzx      r3, r3, r31
	  lwz       r3, 0x0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r20, r3
	  lwz       r3, 0x3C(r28)
	  lis       r4, 0x6963
	  li        r5, 0x5070
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x7430
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r3, 0x80
	  addi      r4, r20, 0x50
	  bl        -0x324738
	  lwz       r4, 0x0(r30)
	  lis       r3, 0x6D61
	  li        r0, 0x1
	  li        r5, 0x5069
	  lwzx      r4, r4, r21
	  addi      r6, r3, 0x6765
	  stb       r0, 0x18(r4)
	  lwz       r3, 0x0(r30)
	  lwzx      r3, r3, r21
	  lwz       r3, 0x0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r20, r3
	  lwz       r3, 0x3C(r28)
	  lis       r4, 0x6963
	  li        r5, 0x5070
	  lwz       r12, 0x0(r3)
	  addi      r6, r4, 0x7431
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r3, 0x80
	  addi      r4, r20, 0x50
	  bl        -0x3247A0
	  li        r18, 0
	  lwz       r20, 0x144(r28)
	  lwz       r19, 0x140(r28)
	  mr        r21, r18

	.loc_0x838:
	  lwz       r3, 0x0(r30)
	  lwzx      r3, r3, r21
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x89C
	  addi      r3, r29, 0xBC
	  lwz       r12, 0xBC(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  bl        0x1477C
	  lhz       r5, 0x4(r3)
	  mr        r4, r19
	  mr        r6, r20
	  li        r3, 0
	  bl        -0x3252E4
	  lwz       r3, 0x0(r30)
	  mr        r4, r29
	  addi      r5, r29, 0xBC
	  lwzx      r3, r3, r21
	  lwz       r3, 0x0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x89C:
	  addi      r18, r18, 0x1
	  addi      r21, r21, 0x4
	  cmpwi     r18, 0x10
	  blt+      .loc_0x838
	  lmw       r18, 0x128(r1)
	  lwz       r0, 0x164(r1)
	  mtlr      r0
	  addi      r1, r1, 0x160
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040EB08
 * Size:	000128
 */
void kh::Screen::ObjFinalResult::getClr((JUtility::TColor const&,
                                         JUtility::TColor const&, float))
{
	/*
	.loc_0x0:
	  lbz       r12, 0x0(r5)
	  lis       r8, 0x4330
	  lbz       r0, 0x0(r6)
	  stwu      r1, -0x70(r1)
	  sub       r0, r0, r12
	  lbz       r11, 0x1(r5)
	  xoris     r0, r0, 0x8000
	  stw       r8, 0x50(r1)
	  lbz       r4, 0x1(r6)
	  stw       r0, 0x54(r1)
	  lfd       f5, 0x1E78(r2)
	  sub       r4, r4, r11
	  lfd       f0, 0x50(r1)
	  xoris     r4, r4, 0x8000
	  stw       r12, 0x5C(r1)
	  lfd       f4, 0x1E48(r2)
	  fsubs     f2, f0, f5
	  stw       r8, 0x58(r1)
	  lbz       r10, 0x2(r5)
	  lfd       f0, 0x58(r1)
	  lbz       r7, 0x2(r6)
	  fsubs     f0, f0, f4
	  stw       r4, 0x3C(r1)
	  lbz       r9, 0x3(r5)
	  sub       r5, r7, r10
	  stw       r8, 0x38(r1)
	  xoris     r5, r5, 0x8000
	  fmadds    f0, f1, f2, f0
	  lfd       f3, 0x38(r1)
	  stw       r11, 0x44(r1)
	  fsubs     f3, f3, f5
	  lbz       r6, 0x3(r6)
	  stw       r8, 0x40(r1)
	  fctiwz    f0, f0
	  sub       r0, r6, r9
	  lfd       f2, 0x40(r1)
	  stw       r5, 0x24(r1)
	  xoris     r6, r0, 0x8000
	  stfd      f0, 0x60(r1)
	  fsubs     f0, f2, f4
	  stw       r8, 0x20(r1)
	  fmadds    f0, f1, f3, f0
	  lwz       r0, 0x64(r1)
	  lfd       f2, 0x20(r1)
	  stw       r10, 0x2C(r1)
	  fctiwz    f0, f0
	  stw       r8, 0x28(r1)
	  fsubs     f3, f2, f5
	  stfd      f0, 0x48(r1)
	  lfd       f2, 0x28(r1)
	  stw       r6, 0xC(r1)
	  fsubs     f0, f2, f4
	  lwz       r4, 0x4C(r1)
	  stw       r8, 0x8(r1)
	  fmadds    f0, f1, f3, f0
	  lfd       f2, 0x8(r1)
	  stw       r9, 0x14(r1)
	  fsubs     f3, f2, f5
	  stw       r8, 0x10(r1)
	  fctiwz    f0, f0
	  stb       r0, 0x0(r3)
	  lfd       f2, 0x10(r1)
	  stfd      f0, 0x30(r1)
	  fsubs     f0, f2, f4
	  stb       r4, 0x1(r3)
	  lwz       r0, 0x34(r1)
	  fmadds    f0, f1, f3, f0
	  stb       r0, 0x2(r3)
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  stb       r0, 0x3(r3)
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040EC30
 * Size:	0000D8
 */
void kh::Screen::SceneFinalResult::doUserCallBackFunc((Resource::MgrCommand*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r5, 0x5253
	  lis       r4, 0x804A
	  stw       r0, 0x44(r1)
	  addi      r6, r5, 0x4C54
	  li        r5, 0x465F
	  stw       r31, 0x3C(r1)
	  subi      r31, r4, 0x7328
	  li        r4, 0x4B48
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lwz       r3, 0x21C(r3)
	  bl        -0xFF948
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x54
	  addi      r3, r31, 0
	  addi      r5, r31, 0x300
	  li        r4, 0x358
	  crclr     6, 0x6
	  bl        -0x3E4640

	.loc_0x54:
	  addi      r3, r30, 0x4
	  addi      r4, r31, 0x458
	  bl        -0xF6D40
	  addi      r3, r1, 0x8
	  addi      r4, r30, 0x4
	  bl        0x3D940
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x3DA70
	  cmplwi    r3, 0
	  beq-      .loc_0xAC
	  lwz       r31, 0x34(r3)
	  li        r3, 0x150
	  bl        -0x3EAE14
	  mr.       r4, r3
	  beq-      .loc_0x9C
	  bl        -0x2AA8
	  mr        r4, r3

	.loc_0x9C:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x430A0
	  b         .loc_0xC0

	.loc_0xAC:
	  addi      r3, r31, 0
	  li        r4, 0x360
	  addi      r5, r2, 0x1E38
	  crclr     6, 0x6
	  bl        -0x3E46AC

	.loc_0xC0:
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
 * Address:	8040ED08
 * Size:	0002E4
 */
void kh::Screen::SceneFinalResult::createDispMember((int const*, int const*,
                                                     Game::Highscore**))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  lis       r6, 0x804A
	  stw       r0, 0x134(r1)
	  stmw      r14, 0xE8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  subi      r31, r6, 0x7328
	  li        r3, 0x4
	  bl        -0x3EAE8C
	  mr.       r30, r3
	  beq-      .loc_0x2CC
	  lwz       r15, 0x224(r31)
	  addi      r3, r1, 0x88
	  lwz       r0, 0x21C(r31)
	  addi      r4, r31, 0x254
	  stw       r15, 0xE4(r1)
	  li        r29, 0
	  lwz       r15, 0x228(r31)
	  stw       r0, 0x50(r1)
	  lwz       r0, 0xE4(r1)
	  stw       r15, 0xB8(r1)
	  lwz       r15, 0x22C(r31)
	  stw       r0, 0x58(r1)
	  lwz       r0, 0xB8(r1)
	  stw       r15, 0xBC(r1)
	  lwz       r15, 0x230(r31)
	  stw       r0, 0x5C(r1)
	  lwz       r0, 0xBC(r1)
	  stw       r15, 0xC0(r1)
	  lwz       r15, 0x234(r31)
	  stw       r0, 0x60(r1)
	  lwz       r0, 0xC0(r1)
	  stw       r15, 0xC4(r1)
	  lwz       r15, 0x238(r31)
	  stw       r0, 0x64(r1)
	  lwz       r0, 0xC4(r1)
	  stw       r15, 0xC8(r1)
	  lwz       r15, 0x23C(r31)
	  stw       r0, 0x68(r1)
	  lwz       r0, 0xC8(r1)
	  stw       r15, 0xCC(r1)
	  lwz       r15, 0x240(r31)
	  stw       r0, 0x6C(r1)
	  lwz       r0, 0xCC(r1)
	  stw       r15, 0xD0(r1)
	  lwz       r15, 0x244(r31)
	  stw       r0, 0x70(r1)
	  lwz       r0, 0xD0(r1)
	  stw       r15, 0xD4(r1)
	  lwz       r15, 0x248(r31)
	  stw       r0, 0x74(r1)
	  lwz       r0, 0xD4(r1)
	  stw       r15, 0xD8(r1)
	  lwz       r15, 0x24C(r31)
	  stw       r0, 0x78(r1)
	  lwz       r0, 0xD8(r1)
	  stw       r15, 0xDC(r1)
	  lwz       r15, 0x250(r31)
	  stw       r0, 0x7C(r1)
	  lwz       r0, 0xDC(r1)
	  lwz       r16, 0x1D4(r31)
	  lwz       r17, 0x1D8(r31)
	  lwz       r18, 0x1DC(r31)
	  lwz       r19, 0x1E0(r31)
	  lwz       r20, 0x1E4(r31)
	  lwz       r21, 0x1E8(r31)
	  lwz       r22, 0x1EC(r31)
	  lwz       r23, 0x1F0(r31)
	  lwz       r24, 0x1F4(r31)
	  lwz       r25, 0x1F8(r31)
	  lwz       r12, 0x1FC(r31)
	  lwz       r11, 0x200(r31)
	  lwz       r10, 0x204(r31)
	  lwz       r9, 0x208(r31)
	  lwz       r8, 0x20C(r31)
	  lwz       r7, 0x210(r31)
	  lwz       r6, 0x214(r31)
	  lwz       r5, 0x218(r31)
	  lwz       r14, 0x220(r31)
	  stw       r0, 0x80(r1)
	  mr        r0, r15
	  stw       r15, 0xE0(r1)
	  stw       r16, 0x8(r1)
	  stw       r17, 0xC(r1)
	  stw       r18, 0x10(r1)
	  stw       r19, 0x14(r1)
	  stw       r20, 0x18(r1)
	  stw       r21, 0x1C(r1)
	  stw       r22, 0x20(r1)
	  stw       r23, 0x24(r1)
	  stw       r24, 0x28(r1)
	  stw       r25, 0x2C(r1)
	  stw       r12, 0x30(r1)
	  stw       r11, 0x34(r1)
	  stw       r10, 0x38(r1)
	  stw       r9, 0x3C(r1)
	  stw       r8, 0x40(r1)
	  stw       r7, 0x44(r1)
	  stw       r6, 0x48(r1)
	  stw       r5, 0x4C(r1)
	  stw       r14, 0x54(r1)
	  stw       r0, 0x84(r1)
	  bl        0x3D730
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x88
	  bl        0x3D860
	  cmplwi    r3, 0
	  beq-      .loc_0x1C0
	  lwz       r29, 0x34(r3)
	  b         .loc_0x1D4

	.loc_0x1C0:
	  addi      r3, r31, 0
	  li        r4, 0x6B
	  addi      r5, r2, 0x1E38
	  crclr     6, 0x6
	  bl        -0x3E4898

	.loc_0x1D4:
	  li        r3, 0x40
	  bl        -0x3EAF34
	  li        r16, 0
	  stw       r3, 0x0(r30)
	  mr        r20, r16
	  addi      r18, r1, 0x8
	  addi      r19, r1, 0x48

	.loc_0x1F0:
	  li        r3, 0x1C
	  bl        -0x3EB058
	  mr.       r15, r3
	  beq-      .loc_0x2AC
	  lwz       r0, 0x0(r19)
	  li        r4, 0x2
	  lwz       r17, 0x0(r18)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r28, r0
	  bl        -0x1DB1D0
	  lwz       r0, 0x0(r19)
	  mr        r14, r3
	  li        r4, 0x1
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r28, r0
	  bl        -0x1DB1E8
	  lwz       r0, 0x0(r19)
	  mr        r21, r3
	  li        r4, 0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r28, r0
	  bl        -0x1DB200
	  lwz       r4, 0x0(r19)
	  li        r0, 0
	  rlwinm    r5,r4,2,0,29
	  lwzx      r4, r27, r5
	  lwzx      r5, r26, r5
	  stw       r4, 0x14(r15)
	  stb       r0, 0x18(r15)
	  stw       r5, 0x4(r15)
	  stw       r3, 0x8(r15)
	  li        r3, 0x138
	  stw       r21, 0xC(r15)
	  stw       r14, 0x10(r15)
	  bl        -0x3EB0DC
	  cmplwi    r3, 0
	  beq-      .loc_0x288
	  bl        0x25B34

	.loc_0x288:
	  stw       r3, 0x0(r15)
	  mr        r4, r17
	  mr        r6, r29
	  lis       r5, 0x104
	  lwz       r3, 0x0(r15)
	  bl        -0x3CF980
	  lwz       r3, 0x0(r15)
	  li        r4, 0x4
	  bl        -0x3D62F4

	.loc_0x2AC:
	  lwz       r3, 0x0(r30)
	  addi      r16, r16, 0x1
	  cmpwi     r16, 0x10
	  addi      r19, r19, 0x4
	  stwx      r15, r3, r20
	  addi      r20, r20, 0x4
	  addi      r18, r18, 0x4
	  blt+      .loc_0x1F0

	.loc_0x2CC:
	  mr        r3, r30
	  lmw       r14, 0xE8(r1)
	  lwz       r0, 0x134(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040EFEC
 * Size:	000008
 */
void kh::Screen::SceneFinalResult::getResName( const
{
	/*
	.loc_0x0:
	  addi      r3, r2, 0x1E80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040EFF4
 * Size:	000008
 */
void kh::Screen::SceneFinalResult::getSceneType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x4E26
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040EFFC
 * Size:	000008
 */
void kh::Screen::SceneFinalResult::getOwnerID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x4B48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040F004
 * Size:	000010
 */
void kh::Screen::SceneFinalResult::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5253
	  li        r3, 0x465F
	  addi      r4, r4, 0x4C54
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040F014
 * Size:	000004
 */
void kh::Screen::SceneFinalResult::doCreateObj( (JKRArchive *))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040F018
 * Size:	0000AC
 */
void kh::Screen::ObjFinalResult::__dt(void)
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
	  subi      r4, r4, 0x4DB0
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
	  bl        0x2554
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x3F2054
	  mr        r3, r30
	  li        r4, 0
	  bl        0x24F4

	.loc_0x80:
	  extsh.    r0, r31
	  ble-      .loc_0x90
	  mr        r3, r30
	  bl        -0x3EAFF0

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
 * Address:	8040F0C4
 * Size:	000008
 */
void kh::Screen::DispFinalResult::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x18
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040F0CC
 * Size:	000008
 */
void kh::Screen::DispFinalResult::getOwnerID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x4B48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040F0D4
 * Size:	000010
 */
void kh::Screen::DispFinalResult::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5253
	  li        r3, 0x465F
	  addi      r4, r4, 0x4C54
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040F0E4
 * Size:	0000F4
 */
void __sinit_khFinalResult_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  lis       r3, 0x8004
	  stw       r0, 0x24(r1)
	  addi      r4, r4, 0x4188
	  li        r5, 0
	  li        r6, 0x4
	  stw       r31, 0x1C(r1)
	  li        r7, 0x3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  addi      r29, r4, 0x10
	  subi      r4, r3, 0x646C
	  mr        r3, r29
	  bl        -0x34D8E4
	  lis       r3, 0x8051
	  lfs       f1, 0x1E54(r2)
	  addi      r30, r3, 0x4188
	  li        r4, 0
	  li        r5, 0xFF
	  li        r6, 0x50
	  lfs       f0, 0x1E84(r2)
	  li        r31, 0x10
	  li        r12, 0x5A
	  li        r11, 0x1E
	  li        r10, 0x64
	  li        r9, 0xA
	  li        r8, 0xA0
	  li        r7, 0x20
	  li        r3, 0x40
	  li        r0, 0x30
	  stfs      f1, 0x0(r30)
	  stw       r31, 0x4(r30)
	  stw       r12, 0x8(r30)
	  stb       r11, 0x1C(r30)
	  stb       r10, 0x1D(r30)
	  stb       r9, 0x1E(r30)
	  stb       r8, 0x1F(r30)
	  stb       r7, 0x20(r30)
	  stb       r6, 0x21(r30)
	  stfs      f0, 0xC(r30)
	  stb       r5, 0x0(r29)
	  stb       r4, 0x11(r30)
	  stb       r3, 0x12(r30)
	  stb       r4, 0x13(r30)
	  stb       r5, 0x14(r30)
	  stb       r5, 0x15(r30)
	  stb       r4, 0x16(r30)
	  stb       r4, 0x17(r30)
	  stb       r5, 0x18(r30)
	  stb       r0, 0x19(r30)
	  stb       r6, 0x1A(r30)
	  stb       r4, 0x1B(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040F1D8
 * Size:	000008
 */
void @24@kh::Screen::ObjFinalResult::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x1C4
	*/
}
