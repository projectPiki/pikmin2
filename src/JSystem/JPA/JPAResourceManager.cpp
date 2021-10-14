

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JPAResourceManager::JPAResourceManager(unsigned short, unsigned short,
                                            JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800984D0
 * Size:	000058
 */
void JPAResourceManager::JPAResourceManager(const void*, JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r0, 0x4(r3)
	  addi      r3, r1, 0x8
	  stw       r0, 0x8(r31)
	  sth       r0, 0xC(r31)
	  sth       r0, 0xE(r31)
	  sth       r0, 0x10(r31)
	  sth       r0, 0x12(r31)
	  stw       r5, 0x0(r31)
	  mr        r5, r31
	  bl        -0x434
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JPAResourceManager::load(const char*, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JPAResourceManager::load(const void*, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JPAResourceLoader::~JPAResourceLoader()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80098528
 * Size:	000040
 */
void JPAResourceManager::getResource(unsigned short) const
{
	/*
	.loc_0x0:
	  lhz       r6, 0xE(r3)
	  rlwinm    r4,r4,0,16,31
	  lwz       r5, 0x4(r3)
	  li        r7, 0
	  b         .loc_0x2C

	.loc_0x14:
	  rlwinm    r0,r7,2,14,29
	  lwzx      r3, r5, r0
	  lhz       r0, 0x3C(r3)
	  cmplw     r4, r0
	  beqlr-
	  addi      r7, r7, 0x1

	.loc_0x2C:
	  rlwinm    r0,r7,0,16,31
	  cmplw     r0, r6
	  blt+      .loc_0x14
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JPAResourceManager::checkUserIndexDuplication(unsigned short) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80098568
 * Size:	00009C
 */
void JPAResourceManager::swapTexture(const ResTIMG*, const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  li        r30, 0
	  li        r29, 0
	  li        r31, 0
	  b         .loc_0x78

	.loc_0x2C:
	  lwz       r4, 0x8(r26)
	  mr        r3, r28
	  lwzx      r4, r4, r31
	  lwz       r4, 0x44(r4)
	  addi      r4, r4, 0xC
	  bl        0x32118
	  cmpwi     r3, 0
	  bne-      .loc_0x70
	  lwz       r3, 0x8(r26)
	  rlwinm    r0,r29,2,0,29
	  mr        r4, r27
	  li        r5, 0
	  lwzx      r3, r3, r0
	  addi      r3, r3, 0x4
	  lwz       r30, 0x20(r3)
	  bl        -0x6554C
	  b         .loc_0x84

	.loc_0x70:
	  addi      r31, r31, 0x4
	  addi      r29, r29, 0x1

	.loc_0x78:
	  lhz       r0, 0x12(r26)
	  cmpw      r29, r0
	  blt+      .loc_0x2C

	.loc_0x84:
	  mr        r3, r30
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098604
 * Size:	000020
 */
void JPAResourceManager::registRes(JPAResource*)
{
	/*
	.loc_0x0:
	  lhz       r0, 0xE(r3)
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r4, r5, r0
	  lhz       r4, 0xE(r3)
	  addi      r0, r4, 0x1
	  sth       r0, 0xE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098624
 * Size:	000020
 */
void JPAResourceManager::registTex(JPATexture*)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x12(r3)
	  lwz       r5, 0x8(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r4, r5, r0
	  lhz       r4, 0x12(r3)
	  addi      r0, r4, 0x1
	  sth       r0, 0x12(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void JPAResourceManager::registTexDupCheck(const unsigned char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80098644
 * Size:	00005C
 */
void JPAResourceManager::getResUserWork(unsigned short) const
{
	/*
	.loc_0x0:
	  lhz       r7, 0xE(r3)
	  rlwinm    r4,r4,0,16,31
	  lwz       r5, 0x4(r3)
	  li        r3, 0
	  li        r6, 0
	  b         .loc_0x34

	.loc_0x18:
	  rlwinm    r0,r6,2,14,29
	  lwzx      r8, r5, r0
	  lhz       r0, 0x3C(r8)
	  cmplw     r4, r0
	  bne-      .loc_0x30
	  b         .loc_0x44

	.loc_0x30:
	  addi      r6, r6, 0x1

	.loc_0x34:
	  rlwinm    r0,r6,0,16,31
	  cmplw     r0, r7
	  blt+      .loc_0x18
	  li        r8, 0

	.loc_0x44:
	  cmplwi    r8, 0
	  beqlr-
	  lwz       r3, 0x2C(r8)
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0xC(r3)
	  blr
	*/
}
