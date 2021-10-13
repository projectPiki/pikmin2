

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
 * Address:	80212288
 * Size:	0000FC
 */
void PikiAI::ActBridge::__ct((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x38
	  addi      r0, r30, 0x34
	  lis       r3, 0x804B
	  stw       r0, 0xC(r30)
	  subi      r0, r3, 0x5994
	  stw       r0, 0x34(r30)

	.loc_0x38:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x7B8B0
	  lis       r3, 0x804C
	  addi      r4, r30, 0x34
	  addi      r3, r3, 0x438
	  li        r0, 0
	  stw       r3, 0x0(r30)
	  addi      r6, r3, 0x40
	  li        r3, 0x2C
	  lwz       r5, 0xC(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0xC(r30)
	  sub       r4, r4, r5
	  stw       r4, 0x4(r5)
	  stb       r0, 0x30(r30)
	  bl        -0x1EE45C
	  mr.       r0, r3
	  beq-      .loc_0x94
	  mr        r5, r31
	  li        r4, 0x1
	  bl        -0x7665C
	  mr        r0, r3

	.loc_0x94:
	  stw       r0, 0x18(r30)
	  li        r3, 0x1C
	  bl        -0x1EE480
	  mr.       r0, r3
	  beq-      .loc_0xB4
	  mr        r4, r31
	  bl        -0x7B058
	  mr        r0, r3

	.loc_0xB4:
	  stw       r0, 0x1C(r30)
	  li        r3, 0x10
	  bl        -0x1EE4A0
	  mr.       r0, r3
	  beq-      .loc_0xD4
	  mr        r4, r31
	  bl        -0x75740
	  mr        r0, r3

	.loc_0xD4:
	  stw       r0, 0x20(r30)
	  subi      r0, r2, 0x4408
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
 * Address:	80212384
 * Size:	0000C8
 */
void PikiAI::ActBridge::init((PikiAI::ActionArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr.       r29, r4
	  lis       r4, 0x8048
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  addi      r31, r4, 0x20A8
	  beq-      .loc_0x64
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0xC
	  bl        -0x147D14
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  beq-      .loc_0x64
	  li        r30, 0x1

	.loc_0x64:
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x80
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x2C
	  li        r4, 0x3E
	  crclr     6, 0x6
	  bl        -0x1E7DC0

	.loc_0x80:
	  lis       r3, 0x8051
	  lwz       r4, 0x4(r28)
	  addi      r3, r3, 0x250C
	  bl        -0x410A8
	  lwz       r4, 0x4(r29)
	  li        r0, 0
	  mr        r3, r28
	  stw       r4, 0x10(r28)
	  stb       r0, 0x30(r28)
	  bl        .loc_0xC8
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xC8:
	*/
}

/*
 * --INFO--
 * Address:	8021244C
 * Size:	000068
 */
void PikiAI::ActBridge::initFollow(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lis       r3, 0x804B
	  lwz       r5, 0x10(r31)
	  addi      r0, r3, 0x530
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x7908
	  stw       r0, 0x8(r1)
	  stw       r5, 0xC(r1)
	  lwz       r3, 0x20(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  sth       r0, 0x14(r31)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void PikiAI::ActBridge::initGoto(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void PikiAI::ActBridge::initStickAttack(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void PikiAI::ActBridge::calcAttackPos(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802124B4
 * Size:	00031C
 */
void PikiAI::ActBridge::exec(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r3, 0x10(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x40
	  li        r0, 0
	  li        r3, 0
	  stb       r0, 0x30(r31)
	  b         .loc_0x308

	.loc_0x40:
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  li        r3, 0x2
	  b         .loc_0x308

	.loc_0x64:
	  lhz       r0, 0x14(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x17C
	  bge-      .loc_0x80
	  cmpwi     r0, 0
	  bge-      .loc_0x23C
	  b         .loc_0x2FC

	.loc_0x80:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x2FC
	  lwz       r3, 0x20(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm.   r0,r0,1,31,31
	  bne-      .loc_0xB4
	  li        r3, 0
	  b         .loc_0x308

	.loc_0xB4:
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  beq-      .loc_0xD8
	  cmpwi     r3, 0x2
	  bne-      .loc_0x170

	.loc_0xD8:
	  lwz       r3, 0x4(r31)
	  bl        -0xC90A4
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  lis       r3, 0x804B
	  stw       r0, 0x30(r1)
	  addi      r4, r3, 0x4EA4
	  li        r0, 0x4
	  li        r3, -0x1
	  stw       r4, 0x30(r1)
	  li        r4, 0
	  stfs      f1, 0x34(r1)
	  stw       r5, 0x38(r1)
	  stw       r3, 0x3C(r1)
	  stb       r0, 0x40(r1)
	  lbz       r0, 0x30(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x13C
	  lwz       r3, 0x4(r31)
	  lfs       f0, -0x4400(r2)
	  lfs       f1, 0xD0(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x13C
	  li        r4, 0x1

	.loc_0x13C:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x14C
	  li        r0, 0x19
	  stw       r0, 0x3C(r1)

	.loc_0x14C:
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x2
	  sth       r0, 0x14(r31)
	  b         .loc_0x2FC

	.loc_0x170:
	  li        r0, 0
	  stb       r0, 0x30(r31)
	  b         .loc_0x308

	.loc_0x17C:
	  lwz       r3, 0x20(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0x230
	  lwz       r3, 0x4(r31)
	  bl        -0xC9164
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  lis       r3, 0x804B
	  stw       r0, 0x1C(r1)
	  addi      r4, r3, 0x4EA4
	  li        r0, 0x4
	  li        r3, -0x1
	  stw       r4, 0x1C(r1)
	  li        r4, 0
	  stfs      f1, 0x20(r1)
	  stw       r5, 0x24(r1)
	  stw       r3, 0x28(r1)
	  stb       r0, 0x2C(r1)
	  lbz       r0, 0x30(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x1FC
	  lwz       r3, 0x4(r31)
	  lfs       f0, -0x4400(r2)
	  lfs       f1, 0xD0(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1FC
	  li        r4, 0x1

	.loc_0x1FC:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x20C
	  li        r0, 0x19
	  stw       r0, 0x28(r1)

	.loc_0x20C:
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x1C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x2
	  sth       r0, 0x14(r31)
	  b         .loc_0x2FC

	.loc_0x230:
	  li        r0, 0
	  stb       r0, 0x30(r31)
	  b         .loc_0x308

	.loc_0x23C:
	  lwz       r3, 0x1C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0x2F0
	  lwz       r3, 0x4(r31)
	  bl        -0xC9224
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r4, r3, 0x4EA4
	  li        r0, 0x4
	  li        r3, -0x1
	  stw       r4, 0x8(r1)
	  li        r4, 0
	  stfs      f1, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r3, 0x14(r1)
	  stb       r0, 0x18(r1)
	  lbz       r0, 0x30(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x2BC
	  lwz       r3, 0x4(r31)
	  lfs       f0, -0x4400(r2)
	  lfs       f1, 0xD0(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x2BC
	  li        r4, 0x1

	.loc_0x2BC:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x2CC
	  li        r0, 0x19
	  stw       r0, 0x14(r1)

	.loc_0x2CC:
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x2
	  sth       r0, 0x14(r31)
	  b         .loc_0x2FC

	.loc_0x2F0:
	  li        r0, 0
	  stb       r0, 0x30(r31)
	  b         .loc_0x308

	.loc_0x2FC:
	  li        r0, 0
	  li        r3, 0x1
	  stb       r0, 0x30(r31)

	.loc_0x308:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802127D0
 * Size:	00005C
 */
void PikiAI::ActBridge::cleanup(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8051
	  lwz       r4, 0x4(r31)
	  addi      r3, r3, 0x250C
	  bl        -0x413DC
	  lhz       r0, 0x14(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x34
	  b         .loc_0x48

	.loc_0x34:
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8021282C
 * Size:	000110
 */
void PikiAI::ActBridge::platCallback((Game::Piki*, Game::PlatEvent&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r3, 0x10(r5)
	  lwz       r0, 0x10(r31)
	  lwz       r4, 0x0(r5)
	  cmplw     r3, r0
	  bne-      .loc_0x5C
	  lwz       r3, 0x100(r4)
	  subis     r0, r3, 0x6272
	  cmplwi    r0, 0x626B
	  bne-      .loc_0x48
	  lbz       r0, 0x30(r31)
	  ori       r0, r0, 0x1
	  stb       r0, 0x30(r31)
	  b         .loc_0x5C

	.loc_0x48:
	  cmplwi    r0, 0x5F5F
	  bne-      .loc_0x5C
	  lbz       r0, 0x30(r31)
	  ori       r0, r0, 0x2
	  stb       r0, 0x30(r31)

	.loc_0x5C:
	  lhz       r0, 0x14(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xFC
	  lwz       r3, 0x4(r31)
	  bl        -0xC93AC
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r4, r3, 0x4EA4
	  li        r0, 0x4
	  li        r3, -0x1
	  stw       r4, 0x8(r1)
	  li        r4, 0
	  stfs      f1, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r3, 0x14(r1)
	  stb       r0, 0x18(r1)
	  lbz       r0, 0x30(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xCC
	  lwz       r3, 0x4(r31)
	  lfs       f0, -0x4400(r2)
	  lfs       f1, 0xD0(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xCC
	  li        r4, 0x1

	.loc_0xCC:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0xDC
	  li        r0, 0x19
	  stw       r0, 0x14(r1)

	.loc_0xDC:
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x2
	  sth       r0, 0x14(r31)

	.loc_0xFC:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8021293C
 * Size:	000004
 */
void PikiAI::ActBridge::collisionCallback((Game::Piki*, Game::CollEvent&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80212940
 * Size:	000004
 */
void PikiAI::ActBridge::bounceCallback((Game::Piki*, Sys::Triangle*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80212944
 * Size:	000004
 */
void PikiAI::ActBridge::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80212948
 * Size:	000014
 */
void @52 @4 @PikiAI::ActBridge::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x34
	  b         -0x14
	*/
}
