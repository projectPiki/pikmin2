

/*
 * --INFO--
 * Address:	80025638
 * Size:	0000B8
 */
void JKRThread::JKRThread(unsigned long, int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        -0x8698
	  lis       r3, 0x804A
	  mr        r4, r28
	  addi      r0, r3, 0x20
	  addi      r3, r28, 0x18
	  stw       r0, 0x0(r28)
	  bl        0x113C
	  li        r0, 0
	  mr        r3, r28
	  stw       r0, 0x68(r28)
	  stw       r0, 0x64(r28)
	  stw       r0, 0x6C(r28)
	  stb       r0, 0x60(r28)
	  stw       r0, 0x70(r28)
	  bl        -0x1DA8
	  mr.       r4, r3
	  bne-      .loc_0x74
	  lwz       r4, -0x77D8(r13)

	.loc_0x74:
	  mr        r3, r28
	  mr        r5, r29
	  mr        r6, r31
	  bl        0x2C8
	  lwz       r4, 0x28(r28)
	  mr        r3, r28
	  mr        r5, r30
	  bl        0x248
	  lwz       r0, 0x24(r1)
	  mr        r3, r28
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JKRThread>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800256F0
 * Size:	0000A0
 */
void JKRThread::JKRThread(JKRHeap*, unsigned long, int, int)
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
	  mr        r31, r7
	  bl        -0x8748
	  lis       r3, 0x804A
	  mr        r4, r27
	  addi      r0, r3, 0x20
	  addi      r3, r27, 0x18
	  stw       r0, 0x0(r27)
	  bl        0x108C
	  li        r0, 0
	  cmplwi    r28, 0
	  stw       r0, 0x68(r27)
	  stw       r0, 0x64(r27)
	  stw       r0, 0x6C(r27)
	  stb       r0, 0x60(r27)
	  stw       r0, 0x70(r27)
	  bne-      .loc_0x64
	  lwz       r28, -0x77D4(r13)

	.loc_0x64:
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r31
	  bl        0x21C
	  lwz       r4, 0x28(r27)
	  mr        r3, r27
	  mr        r5, r30
	  bl        0x19C
	  mr        r3, r27
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80025790
 * Size:	0000A8
 */
void JKRThread::JKRThread(OSThread*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x87E8
	  lis       r3, 0x804A
	  mr        r4, r29
	  addi      r0, r3, 0x20
	  addi      r3, r29, 0x18
	  stw       r0, 0x0(r29)
	  bl        0xFEC
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x68(r29)
	  mr        r5, r31
	  stw       r0, 0x64(r29)
	  stw       r0, 0x6C(r29)
	  stb       r0, 0x60(r29)
	  stw       r0, 0x70(r29)
	  stw       r0, 0x28(r29)
	  stw       r30, 0x2C(r29)
	  lwz       r4, 0x304(r30)
	  lwz       r0, 0x308(r30)
	  sub       r0, r0, r4
	  stw       r0, 0x5C(r29)
	  lwz       r0, 0x304(r30)
	  stw       r0, 0x58(r29)
	  lwz       r4, -0x77D8(r13)
	  bl        0xFC
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
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
 * Address:	80025838
 * Size:	0000D8
 */
void JKRThread::~JKRThread()
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
	  beq-      .loc_0xBC
	  lis       r4, 0x804A
	  lis       r3, 0x8050
	  addi      r0, r4, 0x20
	  stw       r0, 0x0(r30)
	  addi      r4, r30, 0x18
	  addi      r3, r3, 0x6E30
	  bl        0x13B4
	  lwz       r0, 0x28(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  lwz       r3, 0x2C(r30)
	  bl        0xCC14C
	  cmpwi     r3, 0
	  bne-      .loc_0x68
	  lwz       r3, 0x2C(r30)
	  bl        0xCCBC0
	  lwz       r3, 0x2C(r30)
	  bl        0xCC9FC

	.loc_0x68:
	  lwz       r3, 0x58(r30)
	  lwz       r4, 0x28(r30)
	  bl        -0x223C
	  lwz       r3, 0x2C(r30)
	  lwz       r4, 0x28(r30)
	  bl        -0x2248

	.loc_0x80:
	  lwz       r3, 0x50(r30)
	  li        r4, 0
	  bl        -0x2254
	  addic.    r0, r30, 0x18
	  beq-      .loc_0xA0
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        0xEFC

	.loc_0xA0:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x88AC
	  extsh.    r0, r31
	  ble-      .loc_0xBC
	  mr        r3, r30
	  bl        -0x183C

	.loc_0xBC:
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
 * Address:	80025910
 * Size:	000070
 */
void JKRThread::setCommon_mesgQueue(JKRHeap*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r5, 0x54(r3)
	  mr        r5, r4
	  li        r4, 0
	  lwz       r0, 0x54(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x2358
	  stw       r3, 0x50(r31)
	  addi      r3, r31, 0x30
	  lwz       r4, 0x50(r31)
	  lwz       r5, 0x54(r31)
	  bl        0xC9B70
	  lis       r3, 0x8050
	  addi      r4, r31, 0x18
	  addi      r3, r3, 0x6E30
	  bl        0xF88
	  li        r0, 0
	  stw       r0, 0x74(r31)
	  stw       r0, 0x78(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80025980
 * Size:	000090
 */
void JKRThread::setCommon_heapSpecified(JKRHeap*, unsigned long, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r5,0,0,26
	  stw       r31, 0xC(r1)
	  mr        r31, r6
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stw       r4, 0x28(r3)
	  li        r4, 0x20
	  stw       r0, 0x5C(r3)
	  lwz       r3, 0x5C(r3)
	  lwz       r5, 0x28(r30)
	  bl        -0x23D4
	  stw       r3, 0x58(r30)
	  li        r3, 0x318
	  li        r4, 0x20
	  lwz       r5, 0x28(r30)
	  bl        -0x23E8
	  stw       r3, 0x2C(r30)
	  lis       r3, 0x8002
	  addi      r4, r3, 0x5A10
	  mr        r5, r30
	  lwz       r7, 0x5C(r30)
	  mr        r8, r31
	  lwz       r0, 0x58(r30)
	  li        r9, 0x1
	  lwz       r3, 0x2C(r30)
	  add       r6, r0, r7
	  bl        0xCC5D8
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
 * Address:	80025A10
 * Size:	00002C
 */
void JKRThread::start(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
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
 * Address:	80025A3C
 * Size:	000008
 */
void JKRThread::run()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JKRThread::searchThread(OSThread*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JKRThread::searchThreadLoad(OSThread*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JKRThread::dump()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000160
 */
void JKRIdleThread::create(JKRHeap*, int, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JKRThreadSwitch::JKRThreadSwitch(JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JKRThreadSwitch::createManager(JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000180
 */
void JKRThreadSwitch::enter(OSThread*, JKRHeap*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JKRThreadSwitch::enter(JKRThread*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JKRThreadSwitch::setPreCallback(void (*)(OSThread*, OSThread*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JKRThreadSwitch::setPostCallback(void (*)(OSThread*, OSThread*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B4
 */
void JKRThreadSwitch::callback(OSThread*, OSThread*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JKRThreadSwitch::resetAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80025A44
 * Size:	000184
 */
void JKRThreadSwitch::loopProc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0x164
	  lwz       r3, 0xC(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0xC(r31)
	  lwz       r3, 0xC(r31)
	  lwz       r0, 0x10(r31)
	  cmpw      r3, r0
	  blt-      .loc_0x164
	  bl        0xC91AC
	  bl        0xCBF74
	  bl        0xCBF30
	  lis       r4, 0x8050
	  lwz       r5, 0x6E30(r4)
	  b         .loc_0x7C

	.loc_0x60:
	  lwz       r4, 0x0(r5)
	  lwz       r0, 0x2C(r4)
	  cmplw     r0, r3
	  bne-      .loc_0x78
	  addi      r30, r4, 0x60
	  b         .loc_0x88

	.loc_0x78:
	  lwz       r5, 0xC(r5)

	.loc_0x7C:
	  cmplwi    r5, 0
	  bne+      .loc_0x60
	  li        r30, 0

	.loc_0x88:
	  li        r0, 0
	  stw       r0, 0xC(r31)
	  lwz       r29, -0x77A0(r13)
	  lwz       r28, -0x779C(r13)
	  bl        0xCD0B4
	  subc      r0, r4, r28
	  cmplwi    r30, 0
	  stw       r0, 0x1C(r31)
	  subfe     r0, r29, r3
	  stw       r0, 0x18(r31)
	  beq-      .loc_0xCC
	  bl        0xCD0B0
	  lwz       r4, 0xC(r30)
	  lwz       r0, 0x4(r30)
	  sub       r3, r3, r4
	  add       r0, r0, r3
	  stw       r0, 0x4(r30)

	.loc_0xCC:
	  lwz       r5, 0x20(r31)
	  cmplwi    r5, 0
	  beq-      .loc_0xF4
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x10C

	.loc_0xF4:
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x10C:
	  lis       r3, 0x8050
	  li        r0, 0
	  lwz       r4, 0x6E30(r3)
	  b         .loc_0x130

	.loc_0x11C:
	  lwz       r3, 0x0(r4)
	  stw       r0, 0x68(r3)
	  stw       r0, 0x64(r3)
	  stw       r0, 0x6C(r3)
	  lwz       r4, 0xC(r4)

	.loc_0x130:
	  cmplwi    r4, 0
	  bne+      .loc_0x11C
	  li        r0, 0
	  stw       r0, -0x77A4(r13)
	  bl        0xCD00C
	  cmplwi    r30, 0
	  stw       r4, -0x779C(r13)
	  stw       r3, -0x77A0(r13)
	  beq-      .loc_0x15C
	  bl        0xCD010
	  stw       r3, 0xC(r30)

	.loc_0x15C:
	  bl        0xCBEA4
	  bl        0xC90A8

	.loc_0x164:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JKRThreadSwitch::draw(JKRThreadName_*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000190
 */
void JKRThreadSwitch::draw(JKRThreadName_*, JUTConsole*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001F0
 */
void JKRThreadSwitch::createConsole(JUTFont*, int, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void JKRTask::JKRTask(int, int, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JKRTask>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80025BC8
 * Size:	000110
 */
void JKRTask::~JKRTask()
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
	  beq-      .loc_0xF4
	  lis       r4, 0x804A
	  lis       r3, 0x8050
	  addi      r0, r4, 0x10
	  stw       r0, 0x0(r30)
	  addi      r4, r30, 0x7C
	  addi      r3, r3, 0x6E68
	  bl        0x1024
	  addic.    r0, r30, 0x7C
	  beq-      .loc_0x50
	  addi      r3, r30, 0x7C
	  li        r4, 0
	  bl        0xBBC

	.loc_0x50:
	  cmplwi    r30, 0
	  beq-      .loc_0xE4
	  lis       r4, 0x804A
	  lis       r3, 0x8050
	  addi      r0, r4, 0x20
	  stw       r0, 0x0(r30)
	  addi      r4, r30, 0x18
	  addi      r3, r3, 0x6E30
	  bl        0xFEC
	  lwz       r0, 0x28(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  lwz       r3, 0x2C(r30)
	  bl        0xCBD84
	  cmpwi     r3, 0
	  bne-      .loc_0xA0
	  lwz       r3, 0x2C(r30)
	  bl        0xCC7F8
	  lwz       r3, 0x2C(r30)
	  bl        0xCC634

	.loc_0xA0:
	  lwz       r3, 0x58(r30)
	  lwz       r4, 0x28(r30)
	  bl        -0x2604
	  lwz       r3, 0x2C(r30)
	  lwz       r4, 0x28(r30)
	  bl        -0x2610

	.loc_0xB8:
	  lwz       r3, 0x50(r30)
	  li        r4, 0
	  bl        -0x261C
	  addic.    r0, r30, 0x18
	  beq-      .loc_0xD8
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        0xB34

	.loc_0xD8:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x8C74

	.loc_0xE4:
	  extsh.    r0, r31
	  ble-      .loc_0xF4
	  mr        r3, r30
	  bl        -0x1C04

	.loc_0xF4:
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
 * Address:	80025CD8
 * Size:	0002A4
 */
void JKRTask::create(int, int, unsigned long, JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr.       r30, r6
	  mr        r29, r3
	  mr        r26, r4
	  mr        r27, r5
	  bne-      .loc_0x28
	  lwz       r30, -0x77D4(r13)

	.loc_0x28:
	  mr        r4, r30
	  li        r3, 0x98
	  li        r5, 0
	  bl        -0x1DCC
	  mr.       r31, r3
	  beq-      .loc_0x15C
	  mr        r28, r31
	  bl        -0x8D50
	  lis       r3, 0x804A
	  mr        r4, r31
	  addi      r0, r3, 0x20
	  addi      r3, r31, 0x18
	  stw       r0, 0x0(r31)
	  bl        0xA84
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x68(r31)
	  stw       r0, 0x64(r31)
	  stw       r0, 0x6C(r31)
	  stb       r0, 0x60(r31)
	  stw       r0, 0x70(r31)
	  bl        -0x2460
	  cmplwi    r3, 0
	  bne-      .loc_0x8C
	  lwz       r3, -0x77D8(r13)

	.loc_0x8C:
	  stw       r3, 0x28(r31)
	  rlwinm    r0,r27,0,0,26
	  li        r4, 0x20
	  stw       r0, 0x5C(r31)
	  lwz       r3, 0x5C(r31)
	  lwz       r5, 0x28(r31)
	  bl        -0x279C
	  stw       r3, 0x58(r31)
	  li        r3, 0x318
	  li        r4, 0x20
	  lwz       r5, 0x28(r31)
	  bl        -0x27B0
	  stw       r3, 0x2C(r31)
	  lis       r3, 0x8002
	  addi      r4, r3, 0x5A10
	  mr        r5, r31
	  lwz       r7, 0x5C(r31)
	  mr        r8, r26
	  lwz       r0, 0x58(r31)
	  li        r9, 0x1
	  lwz       r3, 0x2C(r31)
	  add       r6, r0, r7
	  bl        0xCC210
	  lwz       r5, 0x28(r31)
	  li        r4, 0
	  stw       r29, 0x54(r31)
	  lwz       r0, 0x54(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x27F4
	  stw       r3, 0x50(r31)
	  addi      r3, r31, 0x30
	  lwz       r4, 0x50(r31)
	  lwz       r5, 0x54(r31)
	  bl        0xC96D4
	  lis       r3, 0x8050
	  addi      r4, r31, 0x18
	  addi      r3, r3, 0x6E30
	  bl        0xAEC
	  li        r5, 0
	  lis       r3, 0x804A
	  stw       r5, 0x74(r31)
	  addi      r0, r3, 0x10
	  mr        r4, r28
	  addi      r3, r28, 0x7C
	  stw       r5, 0x78(r31)
	  stw       r0, 0x0(r28)
	  bl        0x99C
	  li        r0, 0
	  stw       r0, 0x94(r28)
	  lwz       r3, 0x2C(r28)
	  bl        0xCC6C8
	  mr        r31, r28

	.loc_0x15C:
	  cmplwi    r31, 0
	  bne-      .loc_0x16C
	  li        r3, 0
	  b         .loc_0x290

	.loc_0x16C:
	  mulli     r3, r29, 0xC
	  mr        r4, r30
	  li        r5, 0
	  bl        -0x1E08
	  stw       r3, 0x8C(r31)
	  stw       r29, 0x90(r31)
	  lwz       r0, 0x8C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1B8
	  cmplwi    r31, 0
	  beq-      .loc_0x1B0
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1B0:
	  li        r3, 0
	  b         .loc_0x290

	.loc_0x1B8:
	  cmpwi     r29, 0
	  li        r12, 0
	  ble-      .loc_0x27C
	  cmpwi     r29, 0x8
	  subi      r3, r29, 0x8
	  ble-      .loc_0x254
	  addi      r0, r3, 0x7
	  li        r11, 0
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0x254

	.loc_0x1E8:
	  lwz       r3, 0x8C(r31)
	  li        r10, 0
	  addi      r8, r11, 0xC
	  addi      r7, r11, 0x18
	  stwx      r10, r3, r11
	  addi      r6, r11, 0x24
	  addi      r5, r11, 0x30
	  addi      r4, r11, 0x3C
	  lwz       r9, 0x8C(r31)
	  addi      r3, r11, 0x48
	  addi      r0, r11, 0x54
	  addi      r11, r11, 0x60
	  stwx      r10, r9, r8
	  addi      r12, r12, 0x8
	  lwz       r8, 0x8C(r31)
	  stwx      r10, r8, r7
	  lwz       r7, 0x8C(r31)
	  stwx      r10, r7, r6
	  lwz       r6, 0x8C(r31)
	  stwx      r10, r6, r5
	  lwz       r5, 0x8C(r31)
	  stwx      r10, r5, r4
	  lwz       r4, 0x8C(r31)
	  stwx      r10, r4, r3
	  lwz       r3, 0x8C(r31)
	  stwx      r10, r3, r0
	  bdnz+     .loc_0x1E8

	.loc_0x254:
	  sub       r0, r29, r12
	  li        r4, 0
	  mulli     r5, r12, 0xC
	  mtctr     r0
	  cmpw      r12, r29
	  bge-      .loc_0x27C

	.loc_0x26C:
	  lwz       r3, 0x8C(r31)
	  stwx      r4, r3, r5
	  addi      r5, r5, 0xC
	  bdnz+     .loc_0x26C

	.loc_0x27C:
	  lis       r3, 0x8050
	  addi      r4, r31, 0x7C
	  addi      r3, r3, 0x6E68
	  bl        0x984
	  mr        r3, r31

	.loc_0x290:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void JKRTask::destroy(JKRTask*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80025F7C
 * Size:	00009C
 */
void JKRTask::run()
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
	  li        r31, 0

	.loc_0x50:
	  addi      r3, r29, 0x30
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        0xC960C
	  lwz       r30, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0x94
	  lwz       r3, 0x4(r30)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x94(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  lwz       r4, 0x8(r30)
	  li        r5, 0
	  bl        0xC9510

	.loc_0x94:
	  stw       r31, 0x0(r30)
	  b         .loc_0x50
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JKRTask::searchBlank()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80026018
 * Size:	0000B0
 */
void JKRTask::request(void (*)(void*), void*, void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r7, 0
	  stw       r0, 0x14(r1)
	  mr        r8, r7
	  stw       r31, 0xC(r1)
	  lwz       r0, 0x90(r3)
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x50

	.loc_0x28:
	  lwz       r9, 0x8C(r3)
	  lwzx      r0, r9, r8
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  mulli     r0, r7, 0xC
	  add       r31, r9, r0
	  b         .loc_0x54

	.loc_0x44:
	  addi      r8, r8, 0xC
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x28

	.loc_0x50:
	  li        r31, 0

	.loc_0x54:
	  cmplwi    r31, 0
	  bne-      .loc_0x64
	  li        r3, 0
	  b         .loc_0x9C

	.loc_0x64:
	  stw       r4, 0x0(r31)
	  mr        r4, r31
	  addi      r3, r3, 0x30
	  stw       r5, 0x4(r31)
	  li        r5, 0
	  stw       r6, 0x8(r31)
	  bl        0xC9488
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm.   r0,r0,1,31,31
	  mr        r3, r0
	  bne-      .loc_0x9C
	  li        r0, 0
	  stw       r0, 0x0(r31)

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
 * Address:	........
 * Size:	0000B0
 */
void JKRTask::requestJam(void (*)(void*), void*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void JKRTask::cancelAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void JKRTask::createTaskEndMessageQueue(int, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JKRTask::destroyTaskEndMessageQueue()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JKRTask::waitQueueMessageBlock(OSMessageQueue*, int*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JKRTask::waitQueueMessage(OSMessageQueue*, int*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JKRThreadSwitch::~JKRThreadSwitch()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void JKRIdleThread::destroy()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void JKRIdleThread::~JKRIdleThread()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void JKRIdleThread::run()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800260C8
 * Size:	000070
 */
void __sinit_JKRThread_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x6E30
	  bl        0x750
	  lis       r3, 0x8050
	  lis       r4, 0x8002
	  lis       r5, 0x804F
	  addi      r3, r3, 0x6E30
	  addi      r4, r4, 0x618C
	  subi      r5, r5, 0x50
	  bl        0x9B604
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6E68
	  bl        0x7C8
	  lis       r3, 0x8050
	  lis       r4, 0x8002
	  lis       r5, 0x804F
	  addi      r3, r3, 0x6E68
	  addi      r4, r4, 0x6138
	  subi      r5, r5, 0x44
	  bl        0x9B5DC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80026138
 * Size:	000054
 */
void JSUList<JKRTask>::~JSUList()
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
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        0x70C
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        -0x20B8

	.loc_0x38:
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
 * Address:	8002618C
 * Size:	000054
 */
void JSUList<JKRThread>::~JSUList()
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
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        0x6B8
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        -0x210C

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}