

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
 * Address:	801A1914
 * Size:	000064
 */
void PikiAI::ActTransport::getInfo((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  subi      r6, r5, 0xCB8
	  lwz       r5, 0x0(r6)
	  lhz       r0, 0x18(r3)
	  lis       r3, 0x8048
	  lwz       r8, 0x4(r6)
	  lwz       r7, 0x8(r6)
	  rlwinm    r0,r0,2,0,29
	  stw       r5, 0x8(r1)
	  subi      r6, r3, 0xCAC
	  mr        r3, r4
	  addi      r5, r1, 0x8
	  stw       r8, 0xC(r1)
	  mr        r4, r6
	  stw       r7, 0x10(r1)
	  lwzx      r5, r5, r0
	  crclr     6, 0x6
	  bl        -0xDA52C
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801A1978
 * Size:	0000D0
 */
void PikiAI::ActTransport::__ct((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r5
	  beq-      .loc_0x38
	  addi      r0, r31, 0x3C
	  lis       r3, 0x804B
	  stw       r0, 0xC(r31)
	  subi      r0, r3, 0x5994
	  stw       r0, 0x3C(r31)

	.loc_0x38:
	  mr        r3, r31
	  mr        r4, r30
	  bl        -0xAFA0
	  lis       r3, 0x804B
	  addi      r0, r31, 0x3C
	  addi      r4, r3, 0x4F18
	  li        r3, 0x20
	  stw       r4, 0x0(r31)
	  addi      r5, r4, 0x40
	  lwz       r4, 0xC(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0xC(r31)
	  sub       r0, r0, r4
	  stw       r0, 0x4(r4)
	  bl        -0x17DB44
	  mr.       r0, r3
	  beq-      .loc_0x88
	  mr        r4, r30
	  bl        -0xA0AC
	  mr        r0, r3

	.loc_0x88:
	  stw       r0, 0x2C(r31)
	  li        r3, 0xBC
	  bl        -0x17DB64
	  mr.       r0, r3
	  beq-      .loc_0xA8
	  mr        r4, r30
	  bl        -0x9440
	  mr        r0, r3

	.loc_0xA8:
	  stw       r0, 0x30(r31)
	  subi      r0, r2, 0x5278
	  mr        r3, r31
	  stw       r0, 0x8(r31)
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
 * Address:	801A1A48
 * Size:	00017C
 */
void PikiAI::ActTransport::init((PikiAI::ActionArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x8051
	  lis       r6, 0x8048
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  addi      r3, r5, 0x250C
	  stw       r30, 0x28(r1)
	  subi      r30, r6, 0xCC8
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  mr        r28, r4
	  lwz       r4, 0x4(r31)
	  bl        0x2F8E8
	  cmplwi    r28, 0
	  li        r29, 0
	  beq-      .loc_0x78
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r30, 0x28
	  bl        -0xD73EC
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  beq-      .loc_0x78
	  li        r29, 0x1

	.loc_0x78:
	  rlwinm.   r0,r29,0,24,31
	  bne-      .loc_0x94
	  addi      r3, r30, 0x38
	  addi      r5, r30, 0x48
	  li        r4, 0xAF
	  crclr     6, 0x6
	  bl        -0x177498

	.loc_0x94:
	  lwz       r0, 0x4(r28)
	  li        r4, 0x1F
	  li        r5, 0x1F
	  li        r6, 0
	  stw       r0, 0x10(r31)
	  li        r7, 0
	  lwz       r0, 0x8(r28)
	  stw       r0, 0x14(r31)
	  lfs       f0, 0xC(r28)
	  stfs      f0, 0x1C(r31)
	  lfs       f0, 0x10(r28)
	  stfs      f0, 0x20(r31)
	  lfs       f0, 0x14(r28)
	  stfs      f0, 0x24(r31)
	  lha       r0, 0x18(r28)
	  sth       r0, 0x28(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  lwz       r7, 0x4(r31)
	  lis       r4, 0x804B
	  lfs       f0, -0x5270(r2)
	  lis       r3, 0x804B
	  li        r6, 0
	  addi      r5, r4, 0x530
	  stfs      f0, 0x1E4(r7)
	  addi      r3, r3, 0x4F0C
	  li        r0, 0x1
	  addi      r4, r1, 0x8
	  stfs      f0, 0x1E8(r7)
	  stfs      f0, 0x1EC(r7)
	  sth       r6, 0x18(r31)
	  lwz       r6, 0x10(r31)
	  stw       r5, 0x8(r1)
	  stw       r3, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r0, 0x10(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x34(r31)
	  stb       r3, 0x38(r31)
	  stb       r3, 0x39(r31)
	  stb       r0, 0x3A(r31)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801A1BC4
 * Size:	000044
 */
void PikiAI::ActTransport::emotion_success(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x13
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  addi      r6, r1, 0x8
	  sth       r0, 0x8(r1)
	  lwz       r4, 0x4(r3)
	  lwz       r3, 0x28C(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801A1C08
 * Size:	000004
 */
void PikiAI::ActTransport::emotion_fail(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801A1C0C
 * Size:	0003E8
 */
void PikiAI::ActTransport::exec(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  lwz       r3, 0x10(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x60
	  lwz       r3, 0x4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0
	  b         .loc_0x3C8

	.loc_0x60:
	  lwz       r3, 0x10(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  lwz       r0, 0xB8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  li        r31, 0x1
	  b         .loc_0x84

	.loc_0x80:
	  li        r31, 0

	.loc_0x84:
	  lhz       r0, 0x18(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xFC
	  bge-      .loc_0xA0
	  cmpwi     r0, 0
	  bge-      .loc_0xAC
	  b         .loc_0x3C0

	.loc_0xA0:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x3C0
	  b         .loc_0x120

	.loc_0xAC:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0xC0
	  stb       r31, 0x3A(r30)
	  li        r3, 0x2
	  b         .loc_0x3C8

	.loc_0xC0:
	  lwz       r3, 0x2C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0xE8
	  mr        r3, r30
	  bl        0x538
	  b         .loc_0x3C0

	.loc_0xE8:
	  cmpwi     r3, 0x2
	  bne-      .loc_0x3C0
	  stb       r31, 0x3A(r30)
	  li        r3, 0x2
	  b         .loc_0x3C8

	.loc_0xFC:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x114
	  stb       r31, 0x3A(r30)
	  mr        r3, r30
	  bl        0x5C8
	  b         .loc_0x3C8

	.loc_0x114:
	  stb       r31, 0x3A(r30)
	  li        r3, 0x1
	  b         .loc_0x3C8

	.loc_0x120:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x180
	  lwz       r3, 0x4(r30)
	  bl        -0x27C4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x174
	  lbz       r0, 0x38(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x160
	  lwz       r3, 0x30(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x38(r30)

	.loc_0x160:
	  lwz       r3, 0x4(r30)
	  bl        -0x64CB0
	  stb       r31, 0x3A(r30)
	  li        r3, 0
	  b         .loc_0x3C8

	.loc_0x174:
	  stb       r31, 0x3A(r30)
	  li        r3, 0x1
	  b         .loc_0x3C8

	.loc_0x180:
	  lbz       r0, 0x3A(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1B4
	  lbz       r0, 0x39(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1B4
	  lwz       r3, 0x30(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x39(r30)

	.loc_0x1B4:
	  lwz       r28, 0x10(r30)
	  mr        r3, r28
	  bl        -0x37458
	  mr        r29, r3
	  mr        r3, r28
	  bl        -0x3A844
	  cmpw      r29, r3
	  bge-      .loc_0x214
	  lwz       r3, 0x10(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r28)
	  lis       r4, 0x8051
	  mr        r3, r28
	  lwz       r12, 0x68(r12)
	  addi      r4, r4, 0x41E4
	  mtctr     r12
	  bctrl
	  stb       r31, 0x3A(r30)
	  li        r3, 0x2
	  b         .loc_0x3C8

	.loc_0x214:
	  mr        r3, r30
	  bl        0x364
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x34C
	  lbz       r0, 0x39(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x2C0
	  lwz       r3, 0x10(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x10(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  lha       r6, 0x28(r30)
	  lwz       r5, 0x10(r30)
	  addi      r4, r3, 0x530
	  lis       r3, 0x804B
	  li        r0, 0
	  stw       r4, 0x10(r1)
	  addi      r3, r3, 0x4F00
	  addi      r4, r1, 0x10
	  stw       r3, 0x10(r1)
	  stw       r5, 0x14(r1)
	  lfs       f0, 0x1C(r30)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x20(r30)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x24(r30)
	  stfs      f0, 0x20(r1)
	  sth       r6, 0x24(r1)
	  stw       r0, 0x28(r1)
	  lwz       r3, 0x30(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0x39(r30)

	.loc_0x2C0:
	  lwz       r3, 0x30(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  cmpwi     r3, 0
	  stb       r0, 0x38(r30)
	  bne-      .loc_0x3C0
	  lwz       r3, 0x30(r30)
	  li        r4, 0x1
	  lwz       r0, 0x34(r3)
	  stw       r0, 0x14(r30)
	  lwz       r3, 0x10(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x14(r30)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5D00
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x2250
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x10(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  stb       r31, 0x3A(r30)
	  li        r3, 0
	  b         .loc_0x3C8

	.loc_0x34C:
	  lwz       r3, 0x4(r30)
	  bl        -0x29E8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x398
	  lbz       r0, 0x38(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x384
	  lwz       r3, 0x30(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x38(r30)

	.loc_0x384:
	  lwz       r3, 0x4(r30)
	  bl        -0x64ED4
	  stb       r31, 0x3A(r30)
	  li        r3, 0
	  b         .loc_0x3C8

	.loc_0x398:
	  lbz       r0, 0x39(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C0
	  lwz       r3, 0x30(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x39(r30)

	.loc_0x3C0:
	  stb       r31, 0x3A(r30)
	  li        r3, 0x1

	.loc_0x3C8:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801A1FF4
 * Size:	000078
 */
void PikiAI::ActTransport::cleanup(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lbz       r0, 0x39(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lwz       r3, 0x30(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lis       r3, 0x8051
	  lwz       r4, 0x4(r31)
	  addi      r3, r3, 0x250C
	  bl        0x2F3E0
	  lwz       r3, 0x4(r31)
	  bl        -0x2C18
	  lwz       r4, 0x4(r31)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
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
 * Address:	801A206C
 * Size:	00011C
 */
void PikiAI::ActTransport::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x1B8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  lha       r5, 0x20(r3)

	.loc_0x30:
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x58
	  bge-      .loc_0x4C
	  cmpwi     r0, 0x1
	  bge-      .loc_0x70
	  b         .loc_0x104

	.loc_0x4C:
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0xF0
	  b         .loc_0x104

	.loc_0x58:
	  extsh     r0, r5
	  cmpwi     r0, 0x28
	  bne-      .loc_0x104
	  li        r0, 0x1
	  stb       r0, 0x34(r30)
	  b         .loc_0x104

	.loc_0x70:
	  lwz       r31, 0x10(r30)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA4
	  lwz       r3, 0x4(r30)
	  mr        r4, r31
	  li        r5, 0x282E
	  li        r6, 0x1
	  bl        -0x59748

	.loc_0xA4:
	  lhz       r0, 0x18(r30)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x104
	  lwz       r3, 0x10(r30)
	  bl        -0x377B0
	  mr        r31, r3
	  lwz       r3, 0x10(r30)
	  bl        -0x3AB9C
	  cmpw      r31, r3
	  bge-      .loc_0x104
	  lha       r3, 0x36(r30)
	  subi      r0, r3, 0x1
	  sth       r0, 0x36(r30)
	  lha       r0, 0x36(r30)
	  cmpwi     r0, 0
	  bge-      .loc_0x104
	  lwz       r3, 0x4(r30)
	  bl        -0x65094
	  b         .loc_0x104

	.loc_0xF0:
	  lhz       r0, 0x18(r30)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x104
	  mr        r3, r30
	  bl        0xB8

	.loc_0x104:
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
 * Address:	........
 * Size:	000068
 */
void PikiAI::ActTransport::getNumStickers(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A2188
 * Size:	00009C
 */
void PikiAI::ActTransport::isStickLeader(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0xF4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lwz       r30, 0xF0(r3)
	  li        r31, 0
	  b         .loc_0x60

	.loc_0x38:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  mr        r31, r30
	  b         .loc_0x68

	.loc_0x5C:
	  lwz       r30, 0xFC(r30)

	.loc_0x60:
	  cmplwi    r30, 0
	  bne+      .loc_0x38

	.loc_0x68:
	  lwz       r0, 0x4(r29)
	  cmplw     r31, r0
	  bne-      .loc_0x7C
	  li        r3, 0x1
	  b         .loc_0x80

	.loc_0x7C:
	  li        r3, 0

	.loc_0x80:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801A2224
 * Size:	0000BC
 */
void PikiAI::ActTransport::initLift(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0x1
	  stw       r31, 0x1C(r1)
	  mr.       r31, r3
	  sth       r0, 0x18(r3)
	  mr        r6, r31
	  beq-      .loc_0x28
	  lwz       r6, 0xC(r31)

	.loc_0x28:
	  lwz       r3, 0x4(r31)
	  li        r4, 0x28
	  li        r5, 0x28
	  li        r7, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x34(r31)
	  bl        -0xD8CD4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  li        r5, 0x282C
	  lfd       f3, -0x5260(r2)
	  li        r6, 0x1
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x526C(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x5264(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x5268(r2)
	  fdivs     f2, f3, f2
	  fmadds    f0, f1, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  sth       r0, 0x36(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x10(r31)
	  bl        -0x59904
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801A22E0
 * Size:	000414
 */
void PikiAI::ActTransport::execLift(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  li        r4, 0x28
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  stw       r29, 0x54(r1)
	  lwz       r3, 0x4(r3)
	  bl        -0x653D8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x38
	  li        r3, 0x2
	  b         .loc_0x3F8

	.loc_0x38:
	  lwz       r4, 0x10(r30)
	  addi      r3, r1, 0x34
	  li        r31, 0
	  bl        -0x26C8
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r4, r3, 0x437C
	  addi      r3, r1, 0x34
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x88
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x234

	.loc_0x88:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xF4

	.loc_0xA0:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x234
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xF4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xA0
	  b         .loc_0x234

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x178
	  mr        r3, r29
	  bl        -0x5A5E0
	  cmpwi     r3, 0x4
	  bne-      .loc_0x178
	  mr        r3, r29
	  bl        -0x5A624
	  lbz       r0, 0x34(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x178
	  lwz       r3, -0x6D0C(r13)
	  lbz       r4, 0x2B8(r29)
	  bl        -0x42C04
	  add       r31, r31, r3

	.loc_0x178:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x234

	.loc_0x1A4:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x218

	.loc_0x1C4:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x234
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x218:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1C4

	.loc_0x234:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x114
	  lbz       r0, 0x34(r30)
	  lwz       r3, 0x10(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x3E8
	  bl        -0x3AFB4
	  cmpw      r31, r3
	  blt-      .loc_0x3E8
	  cmplwi    r30, 0
	  mr        r6, r30
	  beq-      .loc_0x280
	  lwz       r6, 0xC(r30)

	.loc_0x280:
	  lwz       r3, 0x4(r30)
	  li        r4, 0x29
	  li        r5, 0x29
	  li        r7, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r30)
	  bl        -0x65630
	  lwz       r3, 0x4(r30)
	  lfs       f1, -0x5258(r2)
	  addi      r3, r3, 0x1AC
	  bl        0x28682C
	  lwz       r3, 0x4(r30)
	  lfs       f1, -0x5258(r2)
	  addi      r3, r3, 0x1C8
	  bl        0x28681C
	  li        r0, 0x2
	  sth       r0, 0x18(r30)
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0xF4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x330
	  lwz       r31, 0xF0(r3)
	  li        r29, 0
	  b         .loc_0x314

	.loc_0x2EC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x310
	  mr        r29, r31
	  b         .loc_0x31C

	.loc_0x310:
	  lwz       r31, 0xFC(r31)

	.loc_0x314:
	  cmplwi    r31, 0
	  bne+      .loc_0x2EC

	.loc_0x31C:
	  lwz       r0, 0x4(r30)
	  cmplw     r29, r0
	  bne-      .loc_0x330
	  li        r0, 0x1
	  b         .loc_0x334

	.loc_0x330:
	  li        r0, 0

	.loc_0x334:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x3E8
	  lwz       r3, 0x10(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x36C
	  lwz       r3, 0x4(r30)
	  li        r5, 0x282D
	  lwz       r4, 0x10(r30)
	  li        r6, 0
	  bl        -0x59CF4

	.loc_0x36C:
	  lwz       r3, 0x10(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x148(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  lha       r6, 0x28(r30)
	  lwz       r5, 0x10(r30)
	  addi      r4, r3, 0x530
	  lis       r3, 0x804B
	  li        r0, 0
	  stw       r4, 0x18(r1)
	  addi      r3, r3, 0x4F00
	  addi      r4, r1, 0x18
	  stw       r3, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  lfs       f0, 0x1C(r30)
	  stfs      f0, 0x20(r1)
	  lfs       f0, 0x20(r30)
	  stfs      f0, 0x24(r1)
	  lfs       f0, 0x24(r30)
	  stfs      f0, 0x28(r1)
	  sth       r6, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  lwz       r3, 0x30(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stb       r0, 0x39(r30)

	.loc_0x3E8:
	  addi      r3, r1, 0x34
	  li        r4, -0x1
	  bl        -0x296C
	  li        r3, 0x1

	.loc_0x3F8:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801A26F4
 * Size:	00000C
 */
void PikiAI::PathMoveArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0xC5C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801A2700
 * Size:	00000C
 */
void PikiAI::GotoSlotArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0xC50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801A270C
 * Size:	000014
 */
void @60 @4 @PikiAI::ActTransport::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x3C
	  b         -0x6B0
	*/
}
