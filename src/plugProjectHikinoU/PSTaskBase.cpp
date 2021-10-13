

/*
 * --INFO--
 * Address:	8033E1F8
 * Size:	000054
 */
void PSSystem::TaskBase::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804E
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x5AE0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  stw       r0, 0x0(r3)
	  addi      r3, r31, 0x4
	  bl        -0x317A68
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x14(r31)
	  stb       r0, 0x15(r31)
	  stw       r0, 0x18(r31)
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
 * Size:	000054
 */
void JSULink<PSSystem::TaskBase>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PSSystem::TaskBase::checkInit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void PSSystem::TaskBase::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
void PSSystem::TaskEntry::stackTask((JASTrack&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8033E24C
 * Size:	000024
 */
void PSSystem::TaskEntry::append((PSSystem::TaskBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r4, r4, 0x4
	  stw       r0, 0x14(r1)
	  bl        0x3A8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void PSSystem::TaskEntry::remove((PSSystem::TaskBase*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void PSSystem::TaskEntry::removeAll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8033E270
 * Size:	000034
 */
void PSSystem::TaskEntryMgr::isUnderTask_byDirector((PSSystem::DirectorBase*))
{
	/*
	.loc_0x0:
	  lwz       r5, 0x0(r3)
	  b         .loc_0x24

	.loc_0x8:
	  lwz       r3, 0x0(r5)
	  lwz       r0, 0x24(r3)
	  cmplw     r0, r4
	  bne-      .loc_0x20
	  li        r3, 0x1
	  blr

	.loc_0x20:
	  lwz       r5, 0xC(r5)

	.loc_0x24:
	  cmplwi    r5, 0
	  bne+      .loc_0x8
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033E2A4
 * Size:	000150
 */
void PSSystem::TaskEntryMgr::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r31, r3
	  lwz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0xE0
	  li        r4, 0xC5
	  subi      r5, r5, 0xD0
	  crclr     6, 0x6
	  bl        -0x313C9C

	.loc_0x3C:
	  addi      r3, r31, 0xC
	  bl        -0x24E77C
	  lwz       r28, 0x0(r31)
	  cmplwi    r28, 0
	  beq-      .loc_0x134
	  lwz       r30, 0x0(r28)
	  lwz       r29, 0x24(r31)
	  addi      r3, r30, 0xC
	  bl        -0x24E798
	  lwz       r27, 0x0(r30)
	  cmplwi    r27, 0
	  bne-      .loc_0x10C
	  addi      r3, r30, 0xC
	  bl        -0x24E6D0
	  li        r0, 0
	  stw       r0, 0x24(r30)
	  b         .loc_0x120
	  b         .loc_0x10C

	.loc_0x84:
	  lwz       r26, 0x0(r27)
	  li        r3, -0x10
	  lwz       r4, 0x18(r26)
	  cmplwi    r4, 0
	  beq-      .loc_0xA8
	  lwz       r0, 0x4(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0xA8
	  li        r3, -0x1

	.loc_0xA8:
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xCC
	  mr        r3, r26
	  mr        r4, r29
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xCC:
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0xF4
	  mr        r3, r30
	  mr        r4, r27
	  bl        -0x317760
	  li        r0, 0
	  stb       r0, 0x14(r26)
	  stb       r0, 0x15(r26)
	  stw       r0, 0x18(r26)

	.loc_0xF4:
	  lbz       r0, 0x15(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0x108
	  lwz       r27, 0xC(r27)
	  b         .loc_0x10C

	.loc_0x108:
	  li        r27, 0

	.loc_0x10C:
	  cmplwi    r27, 0
	  bne+      .loc_0x84
	  addi      r3, r30, 0xC
	  bl        -0x24E778
	  li        r0, 0x1

	.loc_0x120:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x134
	  mr        r3, r31
	  mr        r4, r28
	  bl        -0x3177B0

	.loc_0x134:
	  addi      r3, r31, 0xC
	  bl        -0x24E798
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033E3F4
 * Size:	0000A0
 */
void PSSystem::TaskEntryMgr::appendEntry((PSSystem::TaskEntry*,
                                          PSSystem::DirectorBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr.       r29, r4
	  lis       r4, 0x8049
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  subi      r31, r4, 0xE0
	  bne-      .loc_0x48
	  addi      r3, r31, 0
	  addi      r5, r31, 0x10
	  li        r4, 0xDC
	  crclr     6, 0x6
	  bl        -0x313DF8

	.loc_0x48:
	  li        r0, 0
	  cmplwi    r30, 0
	  stw       r0, 0x24(r29)
	  beq-      .loc_0x74
	  bne-      .loc_0x70
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x10
	  li        r4, 0x50
	  crclr     6, 0x6
	  bl        -0x313E20

	.loc_0x70:
	  stw       r30, 0x24(r29)

	.loc_0x74:
	  mr        r3, r28
	  addi      r4, r29, 0x28
	  bl        0x1EC
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
 * Address:	8033E494
 * Size:	000074
 */
void PSSystem::TaskEntryMgr::removeEntry((PSSystem::TaskEntry*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr.       r30, r4
	  beq-      .loc_0x5C
	  addi      r4, r30, 0x28
	  bl        0xF8
	  addi      r3, r30, 0xC
	  bl        -0x24E954
	  lwz       r4, 0x0(r30)
	  b         .loc_0x44

	.loc_0x34:
	  lwz       r31, 0xC(r4)
	  mr        r3, r30
	  bl        -0x3178AC
	  mr        r4, r31

	.loc_0x44:
	  cmplwi    r4, 0
	  bne+      .loc_0x34
	  addi      r3, r30, 0xC
	  bl        -0x24E8A0
	  li        r0, 0
	  stw       r0, 0x24(r30)

	.loc_0x5C:
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
 * Address:	8033E508
 * Size:	0000A4
 */
void PSSystem::TaskEntryMgr::removeAllEntry(void)
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
	  addi      r3, r29, 0xC
	  bl        -0x24E9C0
	  lwz       r3, 0x0(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  lwz       r31, 0x0(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x80
	  mr        r3, r29
	  addi      r4, r31, 0x28
	  bl        .loc_0xA4
	  addi      r3, r31, 0xC
	  bl        -0x24E9EC
	  lwz       r4, 0x0(r31)
	  b         .loc_0x68

	.loc_0x58:
	  lwz       r30, 0xC(r4)
	  mr        r3, r31
	  bl        -0x317944
	  mr        r4, r30

	.loc_0x68:
	  cmplwi    r4, 0
	  bne+      .loc_0x58
	  addi      r3, r31, 0xC
	  bl        -0x24E938
	  li        r0, 0
	  stw       r0, 0x24(r31)

	.loc_0x80:
	  addi      r3, r29, 0xC
	  bl        -0x24E948
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xA4:
	*/
}

/*
 * --INFO--
 * Address:	8033E5AC
 * Size:	000058
 */
void remove_Lock__Q28PSSystem32MutexList<PSSystem::TaskEntry>
FP30JSULink<PSSystem::TaskEntry>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0xC
	  bl        -0x24EA64
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x3179B4
	  mr        r31, r3
	  addi      r3, r30, 0xC
	  bl        -0x24E9A0
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
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
 * Size:	000058
 */
void remove_Lock__Q28PSSystem31MutexList<PSSystem::TaskBase>
FP29JSULink<PSSystem::TaskBase>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8033E604
 * Size:	000058
 */
void append_Lock__Q28PSSystem31MutexList<PSSystem::TaskBase>
FP29JSULink<PSSystem::TaskBase>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0xC
	  bl        -0x24EABC
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x317D4C
	  mr        r31, r3
	  addi      r3, r30, 0xC
	  bl        -0x24E9F8
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033E65C
 * Size:	000058
 */
void append_Lock__Q28PSSystem32MutexList<PSSystem::TaskEntry>
FP30JSULink<PSSystem::TaskEntry>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0xC
	  bl        -0x24EB14
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x317DA4
	  mr        r31, r3
	  addi      r3, r30, 0xC
	  bl        -0x24EA50
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
