

/*
 * --INFO--
 * Address:	8033D738
 * Size:	000064
 */
void PSSystem::BankMgr::createInstance(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x6790(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x110
	  li        r4, 0xE
	  subi      r5, r5, 0x100
	  crclr     6, 0x6
	  bl        -0x313128

	.loc_0x34:
	  li        r3, 0x28
	  bl        -0x3198CC
	  mr.       r0, r3
	  beq-      .loc_0x4C
	  bl        .loc_0x64
	  mr        r0, r3

	.loc_0x4C:
	  stw       r0, -0x6790(r13)
	  mr        r3, r0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x64:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void PSSystem::BankMgr::deleteInstance(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8033D79C
 * Size:	000058
 */
void PSSystem::BankMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x3207E4
	  lis       r3, 0x804E
	  li        r0, 0
	  subi      r4, r3, 0x528C
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  stb       r0, 0x1A(r31)
	  stw       r0, 0x1C(r31)
	  stb       r0, 0x20(r31)
	  stw       r0, 0x24(r31)
	  stb       r0, 0x18(r31)
	  stb       r0, 0x19(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void PSSystem::BankMgr::transInitDataFile((unsigned char*, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
void PSSystem::BankMgr::setBankData((unsigned long*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
void PSSystem::BankMgr::setWsData((unsigned long*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8033D7F4
 * Size:	000094
 */
void PSSystem::BankMgr::preInit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x110
	  li        r4, 0x77
	  subi      r5, r5, 0x100
	  crclr     6, 0x6
	  bl        -0x3131EC

	.loc_0x3C:
	  li        r0, 0x1
	  lis       r3, 0x8034
	  stb       r0, 0x18(r31)
	  subi      r3, r3, 0x209C
	  bl        -0x28FC94
	  lis       r3, 0x8034
	  subi      r3, r3, 0x2264
	  bl        -0x28FCA8
	  lis       r3, 0x8034
	  subi      r3, r3, 0x2288
	  bl        -0x291A14
	  lis       r3, 0x8034
	  subi      r3, r3, 0x228C
	  bl        -0x291A18
	  lis       r3, 0x8034
	  subi      r3, r3, 0x2290
	  bl        -0x291A1C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033D888
 * Size:	000178
 */
void PSSystem::BankMgr::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8049
	  stw       r30, 0x8(r1)
	  subi      r30, r3, 0x110
	  lbz       r0, 0x19(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  addi      r3, r30, 0
	  addi      r5, r30, 0x10
	  li        r4, 0x84
	  crclr     6, 0x6
	  bl        -0x313284

	.loc_0x40:
	  li        r4, 0x1
	  li        r3, 0
	  stb       r4, 0x19(r31)
	  lbz       r0, 0x20(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  lbz       r0, 0x1A(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  mr        r3, r4

	.loc_0x68:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x84
	  addi      r3, r30, 0
	  addi      r5, r30, 0x10
	  li        r4, 0x86
	  crclr     6, 0x6
	  bl        -0x3132C8

	.loc_0x84:
	  addi      r3, r30, 0x1C
	  bl        -0x2A1EDC
	  lbz       r3, 0x20(r31)
	  bl        -0x2A18D4
	  li        r3, 0
	  bl        -0x2A1F18
	  lwz       r0, 0x24(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xE0
	  li        r30, 0
	  b         .loc_0xD0

	.loc_0xB0:
	  rlwinm    r3,r30,0,24,31
	  lwz       r4, 0x24(r31)
	  mulli     r0, r3, 0xC
	  lwzx      r4, r4, r0
	  cmplwi    r4, 0
	  beq-      .loc_0xCC
	  bl        -0x2A1884

	.loc_0xCC:
	  addi      r30, r30, 0x1

	.loc_0xD0:
	  lbz       r0, 0x20(r31)
	  rlwinm    r3,r30,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0xB0

	.loc_0xE0:
	  li        r3, 0x100
	  bl        -0x2A4A38
	  lwz       r0, 0x1C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x160
	  li        r30, 0
	  b         .loc_0x11C

	.loc_0xFC:
	  rlwinm    r3,r30,0,24,31
	  lwz       r4, 0x1C(r31)
	  mulli     r0, r3, 0xC
	  lwzx      r4, r4, r0
	  cmplwi    r4, 0
	  beq-      .loc_0x118
	  bl        -0x2A4930

	.loc_0x118:
	  addi      r30, r30, 0x1

	.loc_0x11C:
	  lbz       r0, 0x1A(r31)
	  rlwinm    r3,r30,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0xFC
	  li        r30, 0
	  b         .loc_0x144

	.loc_0x134:
	  lwz       r4, 0x8(r3)
	  rlwinm    r3,r30,0,24,31
	  bl        -0x2A48C8
	  addi      r30, r30, 0x1

	.loc_0x144:
	  rlwinm    r0,r30,0,24,31
	  lwz       r3, 0x1C(r31)
	  mulli     r0, r0, 0xC
	  add       r3, r3, r0
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne+      .loc_0x134

	.loc_0x160:
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
 * Address:	8033DA00
 * Size:	000078
 */
void PSSystem::WaveScene::load((unsigned short, unsigned short,
                                PSSystem::WaveScene::AreaArg,
                                PSSystem::TaskChecker*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r6
	  cmpwi     r30, 0x2
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r31, r7
	  blt-      .loc_0x48
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x110
	  li        r4, 0xC5
	  subi      r5, r5, 0x100
	  crclr     6, 0x6
	  bl        -0x313404

	.loc_0x48:
	  mulli     r3, r30, 0x14
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r31
	  addi      r3, r3, 0x18
	  add       r3, r27, r3
	  bl        0x40
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033DA78
 * Size:	000028
 */
void PSSystem::WaveScene::WaveArea::__ct(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804E
	  li        r0, 0
	  subi      r4, r4, 0x5298
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)
	  sth       r0, 0x8(r3)
	  sth       r0, 0xA(r3)
	  stb       r0, 0xC(r3)
	  stw       r0, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033DAA0
 * Size:	000114
 */
void PSSystem::WaveScene::WaveArea::loadWave((unsigned short, unsigned short,
                                              PSSystem::TaskChecker*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  bl        .loc_0x114
	  cmplwi    r30, 0
	  beq-      .loc_0x48
	  mr        r3, r30
	  bl        -0x24DF68
	  lbz       r4, 0x18(r30)
	  mr        r3, r30
	  addi      r0, r4, 0x1
	  stb       r0, 0x18(r30)
	  bl        -0x24DEA0

	.loc_0x48:
	  li        r0, 0x1
	  stw       r0, 0x10(r27)
	  lbz       r0, 0xC(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  rlwinm    r3,r28,0,16,31
	  rlwinm    r4,r29,0,16,31
	  li        r5, 0
	  bl        -0x2A192C
	  mr        r31, r3
	  b         .loc_0x88

	.loc_0x74:
	  rlwinm    r3,r28,0,16,31
	  rlwinm    r4,r29,0,16,31
	  li        r5, 0
	  bl        -0x2A19D4
	  mr        r31, r3

	.loc_0x88:
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0xD0
	  lwz       r4, -0x77D8(r13)
	  li        r3, 0x8
	  li        r5, -0x4
	  bl        -0x319C00
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  sth       r28, 0x0(r3)
	  sth       r29, 0x2(r3)
	  stw       r27, 0x4(r3)

	.loc_0xB8:
	  lis       r4, 0x8034
	  stw       r30, 0x4(r27)
	  subi      r5, r4, 0x239C
	  li        r4, 0
	  bl        -0x297158
	  b         .loc_0xFC

	.loc_0xD0:
	  li        r0, 0
	  cmplwi    r30, 0
	  stw       r0, 0x10(r27)
	  beq-      .loc_0xFC
	  mr        r3, r30
	  bl        -0x24E01C
	  lbz       r4, 0x18(r30)
	  mr        r3, r30
	  subi      r0, r4, 0x1
	  stb       r0, 0x18(r30)
	  bl        -0x24DF54

	.loc_0xFC:
	  rlwinm    r3,r31,0,24,31
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x114:
	*/
}

/*
 * --INFO--
 * Address:	8033DBB4
 * Size:	0000B0
 */
void PSSystem::WaveScene::WaveArea::deleteWave(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x9C
	  bge-      .loc_0x30
	  cmpwi     r0, 0
	  bge-      .loc_0x9C
	  b         .loc_0x78

	.loc_0x30:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x78
	  b         .loc_0x44
	  b         .loc_0x9C
	  b         .loc_0x9C

	.loc_0x44:
	  lhz       r3, 0x8(r31)
	  lhz       r4, 0xA(r31)
	  bl        -0x2A1994
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x94
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x110
	  li        r4, 0xFF
	  subi      r5, r5, 0x100
	  crclr     6, 0x6
	  bl        -0x3135E4
	  b         .loc_0x94

	.loc_0x78:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x110
	  li        r4, 0x103
	  subi      r5, r5, 0x100
	  crclr     6, 0x6
	  bl        -0x313604

	.loc_0x94:
	  li        r0, 0
	  stw       r0, 0x10(r31)

	.loc_0x9C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033DC64
 * Size:	00007C
 */
void PSSystem::WaveScene::WaveArea::waveLoadCallback((unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x2
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, 0x4(r3)
	  lhz       r3, 0x0(r3)
	  sth       r3, 0x8(r4)
	  lhz       r3, 0x2(r30)
	  sth       r3, 0xA(r4)
	  stw       r0, 0x10(r4)
	  lwz       r31, 0x4(r4)
	  cmplwi    r31, 0
	  beq-      .loc_0x5C
	  mr        r3, r31
	  bl        -0x24E140
	  lbz       r4, 0x18(r31)
	  mr        r3, r31
	  subi      r0, r4, 0x1
	  stb       r0, 0x18(r31)
	  bl        -0x24E078

	.loc_0x5C:
	  mr        r3, r30
	  bl        -0x319C10
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
 * Address:	8033DCE0
 * Size:	000090
 */
void PSSystem::BankMgr::__dt(void)
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
	  lis       r3, 0x804E
	  subi      r0, r3, 0x528C
	  stw       r0, 0x0(r30)
	  lwz       r3, -0x6790(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  beq-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  li        r0, 0
	  stw       r0, -0x6790(r13)

	.loc_0x58:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x320D0C
	  extsh.    r0, r31
	  ble-      .loc_0x74
	  mr        r3, r30
	  bl        -0x319C9C

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
 * Address:	8033DD70
 * Size:	000004
 */
void PSSystem::BankMgr::secondLoadS(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033DD74
 * Size:	000004
 */
void PSSystem::BankMgr::firstLoadS(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033DD78
 * Size:	000024
 */
void PSSystem::BankMgr::initS(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6790(r13)
	  bl        -0x500
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033DD9C
 * Size:	0001C8
 */
void PSSystem::BankMgr::setWsDataS((unsigned long*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r3
	  lwz       r29, -0x7438(r13)
	  lwz       r30, -0x6790(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x40
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x110
	  li        r4, 0x59
	  subi      r5, r5, 0x100
	  crclr     6, 0x6
	  bl        -0x313798

	.loc_0x40:
	  lwz       r0, 0x24(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x110
	  li        r4, 0x5A
	  subi      r5, r5, 0x100
	  crclr     6, 0x6
	  bl        -0x3137C0

	.loc_0x68:
	  lwz       r31, 0x0(r27)
	  li        r6, 0
	  rlwinm    r0,r31,2,0,29
	  add       r28, r29, r0
	  b         .loc_0x80

	.loc_0x7C:
	  addi      r6, r6, 0x3

	.loc_0x80:
	  add       r0, r31, r6
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r29, r0
	  cmplwi    r0, 0
	  bne+      .loc_0x7C
	  lis       r3, 0xAAAB
	  lwz       r4, -0x7548(r13)
	  subi      r0, r3, 0x5555
	  li        r5, 0x20
	  mulhwu    r0, r0, r6
	  rlwinm    r0,r0,31,1,31
	  mulli     r3, r0, 0xC
	  addi      r26, r3, 0x4
	  mr        r3, r26
	  bl        -0x319E0C
	  cmplwi    r3, 0
	  beq-      .loc_0x16C
	  cmplwi    r26, 0
	  li        r6, 0
	  ble-      .loc_0x16C
	  cmplwi    r26, 0x8
	  subi      r4, r26, 0x8
	  ble-      .loc_0x140
	  addi      r0, r4, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmplwi    r4, 0
	  ble-      .loc_0x140

	.loc_0xF0:
	  add       r4, r28, r6
	  add       r5, r3, r6
	  lbz       r0, 0x0(r4)
	  addi      r6, r6, 0x8
	  stb       r0, 0x0(r5)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r5)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r5)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x3(r5)
	  lbz       r0, 0x4(r4)
	  stb       r0, 0x4(r5)
	  lbz       r0, 0x5(r4)
	  stb       r0, 0x5(r5)
	  lbz       r0, 0x6(r4)
	  stb       r0, 0x6(r5)
	  lbz       r0, 0x7(r4)
	  stb       r0, 0x7(r5)
	  bdnz+     .loc_0xF0

	.loc_0x140:
	  sub       r0, r26, r6
	  add       r5, r28, r6
	  add       r4, r3, r6
	  mtctr     r0
	  cmplw     r6, r26
	  bge-      .loc_0x16C

	.loc_0x158:
	  lbz       r0, 0x0(r5)
	  addi      r5, r5, 0x1
	  stb       r0, 0x0(r4)
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x158

	.loc_0x16C:
	  stw       r3, 0x24(r30)
	  li        r5, 0
	  b         .loc_0x19C

	.loc_0x178:
	  rlwinm    r0,r5,0,24,31
	  lwz       r4, 0x24(r30)
	  mulli     r3, r0, 0xC
	  addi      r5, r5, 0x1
	  addi      r28, r28, 0xC
	  addi      r31, r31, 0x3
	  lwzx      r0, r4, r3
	  add       r0, r29, r0
	  stwx      r0, r4, r3

	.loc_0x19C:
	  lwz       r0, 0x0(r28)
	  cmplwi    r0, 0
	  bne+      .loc_0x178
	  stb       r5, 0x20(r30)
	  addi      r0, r31, 0x1
	  stw       r0, 0x0(r27)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033DF64
 * Size:	0001C8
 */
void PSSystem::BankMgr::setBankDataS((unsigned long*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r3
	  lwz       r29, -0x7438(r13)
	  lwz       r30, -0x6790(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x40
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x110
	  li        r4, 0x38
	  subi      r5, r5, 0x100
	  crclr     6, 0x6
	  bl        -0x313960

	.loc_0x40:
	  lwz       r0, 0x1C(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x110
	  li        r4, 0x39
	  subi      r5, r5, 0x100
	  crclr     6, 0x6
	  bl        -0x313988

	.loc_0x68:
	  lwz       r31, 0x0(r27)
	  li        r6, 0
	  rlwinm    r0,r31,2,0,29
	  add       r28, r29, r0
	  b         .loc_0x80

	.loc_0x7C:
	  addi      r6, r6, 0x3

	.loc_0x80:
	  add       r0, r31, r6
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r29, r0
	  cmplwi    r0, 0
	  bne+      .loc_0x7C
	  lis       r3, 0xAAAB
	  lwz       r4, -0x7548(r13)
	  subi      r0, r3, 0x5555
	  li        r5, 0x20
	  mulhwu    r0, r0, r6
	  rlwinm    r0,r0,31,1,31
	  mulli     r3, r0, 0xC
	  addi      r26, r3, 0x4
	  mr        r3, r26
	  bl        -0x319FD4
	  cmplwi    r3, 0
	  beq-      .loc_0x16C
	  cmplwi    r26, 0
	  li        r6, 0
	  ble-      .loc_0x16C
	  cmplwi    r26, 0x8
	  subi      r4, r26, 0x8
	  ble-      .loc_0x140
	  addi      r0, r4, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmplwi    r4, 0
	  ble-      .loc_0x140

	.loc_0xF0:
	  add       r4, r28, r6
	  add       r5, r3, r6
	  lbz       r0, 0x0(r4)
	  addi      r6, r6, 0x8
	  stb       r0, 0x0(r5)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r5)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r5)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x3(r5)
	  lbz       r0, 0x4(r4)
	  stb       r0, 0x4(r5)
	  lbz       r0, 0x5(r4)
	  stb       r0, 0x5(r5)
	  lbz       r0, 0x6(r4)
	  stb       r0, 0x6(r5)
	  lbz       r0, 0x7(r4)
	  stb       r0, 0x7(r5)
	  bdnz+     .loc_0xF0

	.loc_0x140:
	  sub       r0, r26, r6
	  add       r5, r28, r6
	  add       r4, r3, r6
	  mtctr     r0
	  cmplw     r6, r26
	  bge-      .loc_0x16C

	.loc_0x158:
	  lbz       r0, 0x0(r5)
	  addi      r5, r5, 0x1
	  stb       r0, 0x0(r4)
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x158

	.loc_0x16C:
	  stw       r3, 0x1C(r30)
	  li        r5, 0
	  b         .loc_0x19C

	.loc_0x178:
	  rlwinm    r0,r5,0,24,31
	  lwz       r4, 0x1C(r30)
	  mulli     r3, r0, 0xC
	  addi      r5, r5, 0x1
	  addi      r28, r28, 0xC
	  addi      r31, r31, 0x3
	  lwzx      r0, r4, r3
	  add       r0, r29, r0
	  stwx      r0, r4, r3

	.loc_0x19C:
	  lwz       r0, 0x0(r28)
	  cmplwi    r0, 0
	  bne+      .loc_0x178
	  stb       r5, 0x1A(r30)
	  addi      r0, r31, 0x1
	  stw       r0, 0x0(r27)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033E12C
 * Size:	0000CC
 */
void PSSystem::WaveScene::WaveArea::__dt(void)
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
	  beq-      .loc_0xB0
	  lis       r3, 0x804E
	  subi      r0, r3, 0x5298
	  stw       r0, 0x0(r30)
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x48
	  bge-      .loc_0x7C
	  cmpwi     r0, 0
	  bge-      .loc_0xA0
	  b         .loc_0x7C

	.loc_0x48:
	  lhz       r3, 0x8(r30)
	  lhz       r4, 0xA(r30)
	  bl        -0x2A1F10
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x98
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x110
	  li        r4, 0xFF
	  subi      r5, r5, 0x100
	  crclr     6, 0x6
	  bl        -0x313B60
	  b         .loc_0x98

	.loc_0x7C:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x110
	  li        r4, 0x103
	  subi      r5, r5, 0x100
	  crclr     6, 0x6
	  bl        -0x313B80

	.loc_0x98:
	  li        r0, 0
	  stw       r0, 0x10(r30)

	.loc_0xA0:
	  extsh.    r0, r31
	  ble-      .loc_0xB0
	  mr        r3, r30
	  bl        -0x31A124

	.loc_0xB0:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
