

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80424818
 * Size:	000080
 */
void DvdThreadCommand::DvdThreadCommand()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r4, r31
  addi      r3, r4, 0x5C
  bl        -0x3FE07C
  li        r5, 0
  li        r4, 0x1
  stw       r5, 0x0(r31)
  li        r0, 0x20
  addi      r3, r31, 0x1C
  stw       r4, 0x4(r31)
  stw       r5, 0x8(r31)
  stw       r5, 0xC(r31)
  stw       r0, 0x10(r31)
  stw       r4, 0x14(r31)
  stw       r5, 0x18(r31)
  bl        -0x334D34
  li        r0, 0
  addi      r3, r31, 0x38
  stw       r0, 0x34(r31)
  addi      r4, r31, 0x58
  li        r5, 0x1
  bl        -0x3353C0
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<DvdThreadCommand>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80424898
 * Size:	000020
 */
void DvdThreadCommand::loadUseCallBack(IDelegate *)
{
/*
.loc_0x0:
  stw       r4, 0x0(r3)
  li        r4, 0x2
  li        r0, 0
  stw       r4, 0x4(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0xC(r3)
  stw       r0, 0x18(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void DvdThreadCommand::loadArchive(char *, JKRHeap *, DvdThreadCommand::EHeapDirection)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void DvdThreadCommand::loadFile(char *, JKRHeap *, DvdThreadCommand::EHeapDirection)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void DvdThreadCommand::invokeCallBack()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void DvdThreadCommand::wait()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void DvdThreadCommand::loading()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void DvdThreadCommand::finish()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void DvdThreadCommand::getDataType()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void DvdThreadCommand::checkExp(const char *) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804248B8
 * Size:	00004C
 */
void DvdThread::DvdThread(unsigned long, int, int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x54C
  lis       r4, 0x804F
  addi      r3, r31, 0x7C
  subi      r0, r4, 0x4278
  stw       r0, 0x0(r31)
  bl        -0x3FE010
  lwz       r3, 0x2C(r31)
  bl        -0x3323F4
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<DvdThreadCommand>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80424904
 * Size:	000194
 */
void DvdThread::run()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  lis       r29, 0x4454

.loc_0x20:
  addi      r3, r30, 0x30
  addi      r4, r1, 0xC
  li        r5, 0x1
  bl        -0x33534C
  lwz       r31, 0xC(r1)
  addi      r3, r31, 0x1C
  bl        -0x334DD4
  li        r0, 0x1
  stw       r0, 0x18(r31)
  lwz       r0, 0x4(r31)
  cmpwi     r0, 0x1
  bne-      .loc_0xE4
  lwz       r3, 0x8(r31)
  bl        -0x35A048
  lwz       r0, 0x8(r31)
  subi      r5, r3, 0x1
  add       r4, r0, r5

.loc_0x64:
  lbz       r0, 0x0(r4)
  cmpwi     r0, 0x2E
  beq-      .loc_0x7C
  subi      r4, r4, 0x1
  subi      r5, r5, 0x1
  b         .loc_0x64

.loc_0x7C:
  subi      r0, r3, 0x1
  sub       r0, r0, r5
  cmplwi    r0, 0x4
  bge-      .loc_0xD0
  addi      r7, r1, 0x8
  li        r6, 0
  b         .loc_0xB4

.loc_0x98:
  lwz       r0, 0x8(r31)
  add       r4, r0, r6
  addi      r6, r6, 0x1
  addi      r0, r4, 0x1
  lbzx      r0, r5, r0
  stb       r0, 0x0(r7)
  addi      r7, r7, 0x1

.loc_0xB4:
  add       r0, r5, r6
  cmplw     r3, r0
  bgt+      .loc_0x98
  addi      r3, r1, 0x8
  li        r0, 0
  stbx      r0, r3, r6
  b         .loc_0xD8

.loc_0xD0:
  li        r0, 0
  stb       r0, 0x8(r1)

.loc_0xD8:
  addi      r4, r1, 0x8
  addi      r3, r2, 0x2150
  bl        -0x35A324

.loc_0xE4:
  lwz       r0, 0x4(r31)
  cmpwi     r0, 0x1
  beq-      .loc_0x148
  bge-      .loc_0x100
  cmpwi     r0, 0
  bge-      .loc_0x158
  b         .loc_0x164

.loc_0x100:
  cmpwi     r0, 0x3
  bge-      .loc_0x164
  lwz       r0, 0x0(r31)
  cmplwi    r0, 0
  bne-      .loc_0x130
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x63E8
  li        r4, 0x84
  subi      r5, r5, 0x63D8
  crclr     6, 0x6
  bl        -0x3FA3F0

.loc_0x130:
  lwz       r3, 0x0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x164

.loc_0x148:
  mr        r3, r30
  mr        r4, r31
  bl        .loc_0x194
  b         .loc_0x164

.loc_0x158:
  mr        r3, r30
  mr        r4, r31
  bl        0xD0

.loc_0x164:
  li        r0, 0x2
  addi      r3, r31, 0x38
  stw       r0, 0x18(r31)
  addi      r4, r29, 0x4C46
  li        r5, 0
  bl        -0x335560
  addi      r3, r30, 0x7C
  addi      r4, r31, 0x5C
  bl        -0x3FDE64
  addi      r3, r31, 0x1C
  bl        -0x334E4C
  b         .loc_0x20

.loc_0x194:
*/
}

/*
 * --INFO--
 * Address:	80424A98
 * Size:	00009C
 */
void DvdThread::loadArchive(DvdThreadCommand *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  lwz       r3, 0x34(r4)
  bl        -0x401514
  lwz       r0, 0x14(r29)
  mr        r4, r3
  lwz       r3, 0x8(r29)
  mr        r30, r4
  cmpwi     r0, 0x1
  lwz       r5, 0x34(r29)
  li        r4, 0x1
  li        r6, 0x2
  bne-      .loc_0x4C
  li        r6, 0x1

.loc_0x4C:
  bl        -0x4099B4
  mr.       r31, r3
  bne-      .loc_0x74
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x63E8
  li        r4, 0x113
  subi      r5, r5, 0x63D8
  crclr     6, 0x6
  bl        -0x3FA4C8

.loc_0x74:
  stw       r31, 0xC(r29)
  mr        r3, r30
  bl        -0x401570
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
 * Address:	80424B34
 * Size:	000108
 */
void DvdThread::loadFile(DvdThreadCommand *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r4
  li        r31, -0x20
  lwz       r0, 0x14(r4)
  cmpwi     r0, 0x1
  bne-      .loc_0x28
  li        r31, 0x20

.loc_0x28:
  lwz       r3, 0x34(r27)
  bl        -0x4015BC
  lwz       r30, 0x8(r27)
  mr        r28, r3
  lwz       r4, -0x77D8(r13)
  li        r3, 0xF8
  li        r5, 0
  bl        -0x400C38
  mr.       r29, r3
  beq-      .loc_0x5C
  mr        r4, r30
  bl        -0x407A5C
  mr        r29, r3

.loc_0x5C:
  cmplwi    r29, 0
  bne-      .loc_0x80
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x63E8
  li        r4, 0x15A
  subi      r5, r5, 0x63D8
  crclr     6, 0x6
  bl        -0x3FA570

.loc_0x80:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  mr        r30, r3
  bl        -0x400BD8
  mr        r0, r3
  mr        r3, r29
  lwz       r12, 0x0(r29)
  mr        r31, r0
  mr        r4, r31
  mr        r5, r30
  lwz       r12, 0x14(r12)
  li        r6, 0
  mtctr     r12
  bctrl     
  cmplwi    r29, 0
  beq-      .loc_0xE8
  mr        r3, r29
  li        r4, 0x1
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0xE8:
  stw       r31, 0xC(r27)
  mr        r3, r28
  bl        -0x401680
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80424C3C
 * Size:	000060
 */
void DvdThread::sendCommand(DvdThreadCommand *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  addi      r3, r30, 0x7C
  stw       r0, 0x18(r4)
  addi      r4, r31, 0x5C
  bl        -0x3FE384

.loc_0x30:
  mr        r4, r31
  addi      r3, r30, 0x30
  li        r5, 0
  bl        -0x33575C
  cmpwi     r3, 0
  beq+      .loc_0x30
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
 * Address:	80424C9C
 * Size:	0000B0
 */
void DvdThread::sync(DvdThreadCommand *, DvdThread::ESyncBlockFlag)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  cmpwi     r5, 0
  li        r3, 0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  bne-      .loc_0x84
  lis       r4, 0x804A
  lis       r3, 0x804A
  subi      r30, r4, 0x63E8
  subi      r31, r3, 0x63D8
  b         .loc_0x70

.loc_0x3C:
  addi      r3, r29, 0x38
  addi      r4, r1, 0x8
  li        r5, 0x1
  bl        -0x335700
  lwz       r3, 0x8(r1)
  subis     r0, r3, 0x4454
  cmplwi    r0, 0x4C46
  beq-      .loc_0x70
  mr        r3, r30
  mr        r5, r31
  li        r4, 0x18C
  crclr     6, 0x6
  bl        -0x3FA6C8

.loc_0x70:
  lwz       r0, 0x18(r29)
  cmpwi     r0, 0x2
  bne+      .loc_0x3C
  li        r3, 0x1
  b         .loc_0x94

.loc_0x84:
  lwz       r0, 0x18(r29)
  cmpwi     r0, 0x2
  bne-      .loc_0x94
  li        r3, 0x1

.loc_0x94:
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
 * Address:	80424D4C
 * Size:	0000CC
 */
void DvdThread::syncAll(DvdThread::ESyncBlockFlag)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r26, 0x18(r1)
  mr        r26, r4
  li        r27, 0
  lwz       r28, 0x7C(r3)
  b         .loc_0xAC

.loc_0x20:
  cmpwi     r26, 0
  lwz       r29, 0x0(r28)
  li        r3, 0
  bne-      .loc_0x8C
  lis       r4, 0x804A
  lis       r3, 0x804A
  subi      r30, r4, 0x63E8
  subi      r31, r3, 0x63D8
  b         .loc_0x78

.loc_0x44:
  addi      r3, r29, 0x38
  addi      r4, r1, 0x8
  li        r5, 0x1
  bl        -0x3357B8
  lwz       r3, 0x8(r1)
  subis     r0, r3, 0x4454
  cmplwi    r0, 0x4C46
  beq-      .loc_0x78
  mr        r3, r30
  mr        r5, r31
  li        r4, 0x18C
  crclr     6, 0x6
  bl        -0x3FA780

.loc_0x78:
  lwz       r0, 0x18(r29)
  cmpwi     r0, 0x2
  bne+      .loc_0x44
  li        r3, 0x1
  b         .loc_0x9C

.loc_0x8C:
  lwz       r0, 0x18(r29)
  cmpwi     r0, 0x2
  bne-      .loc_0x9C
  li        r3, 0x1

.loc_0x9C:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xA8
  addi      r27, r27, 0x1

.loc_0xA8:
  lwz       r28, 0xC(r28)

.loc_0xAC:
  cmplwi    r28, 0
  bne+      .loc_0x20
  mr        r3, r27
  lmw       r26, 0x18(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}
