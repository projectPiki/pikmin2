

/*
 * --INFO--
 * Address:	800219C4
 * Size:	0000F8
 */
void JKRFileCache::mount(const char*, JKRHeap*, const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr.       r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  beq-      .loc_0x2C
	  lbz       r0, 0x0(r27)
	  cmpwi     r0, 0x2F
	  beq-      .loc_0x34

	.loc_0x2C:
	  li        r3, 0
	  b         .loc_0xE4

	.loc_0x34:
	  bl        0xA8F18
	  cmplwi    r3, 0x1
	  beq-      .loc_0x58
	  add       r3, r27, r3
	  lbz       r0, -0x1(r3)
	  cmpwi     r0, 0x2F
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0xE4

	.loc_0x58:
	  lis       r3, 0x8050
	  lwz       r31, 0x6E24(r3)
	  b         .loc_0xB0

	.loc_0x64:
	  lwz       r4, 0x0(r31)
	  lwz       r3, 0x2C(r4)
	  subis     r0, r3, 0x4341
	  cmplwi    r0, 0x5348
	  bne-      .loc_0xAC
	  lwz       r3, 0x48(r4)
	  mr        r30, r4
	  cmplwi    r3, 0
	  beq-      .loc_0xAC
	  mr        r4, r27
	  bl        0xA8C70
	  cmpwi     r3, 0
	  bne-      .loc_0xAC
	  lwz       r4, 0x34(r30)
	  mr        r3, r30
	  addi      r0, r4, 0x1
	  stw       r0, 0x34(r30)
	  b         .loc_0xE4

	.loc_0xAC:
	  lwz       r31, 0xC(r31)

	.loc_0xB0:
	  cmplwi    r31, 0
	  bne+      .loc_0x64
	  mr        r4, r28
	  li        r3, 0x54
	  li        r5, 0
	  bl        0x24B8
	  mr.       r0, r3
	  beq-      .loc_0xE0
	  mr        r4, r27
	  mr        r5, r29
	  bl        .loc_0xF8
	  mr        r0, r3

	.loc_0xE0:
	  mr        r3, r0

	.loc_0xE4:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xF8:
	*/
}

/*
 * --INFO--
 * Address:	80021ABC
 * Size:	0001C0
 */
void JKRFileCache::JKRFileCache(const char*, const char*)
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
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  bl        0x13B4
	  lis       r4, 0x804A
	  addi      r3, r31, 0x3C
	  subi      r0, r4, 0x1B0
	  stw       r0, 0x0(r31)
	  bl        0x4DD8
	  mr        r3, r31
	  bl        0x1DF4
	  stw       r3, 0x38(r31)
	  li        r0, 0x1
	  lis       r4, 0x4341
	  mr        r3, r28
	  stw       r0, 0x34(r31)
	  addi      r0, r4, 0x5348
	  stw       r0, 0x2C(r31)
	  bl        0xA8DF0
	  mr        r30, r3
	  lwz       r5, 0x38(r31)
	  addi      r3, r30, 0x1
	  li        r4, 0x1
	  bl        0x1AAC
	  stw       r3, 0x48(r31)
	  addi      r4, r30, 0x2
	  li        r5, 0x1
	  lwz       r3, -0x77D8(r13)
	  bl        0x1AF8
	  stw       r3, 0x4C(r31)
	  mr        r4, r28
	  lwz       r3, 0x48(r31)
	  bl        0xA8D00
	  lwz       r3, 0x4C(r31)
	  mr        r4, r28
	  bl        0xA8CF4
	  lbz       r0, 0x1(r28)
	  extsb.    r0, r0
	  beq-      .loc_0x138
	  lwz       r4, 0x48(r31)
	  mr        r3, r31
	  bl        0xDFC
	  lwz       r4, 0x4C(r31)
	  mr        r3, r31
	  bl        0xDF0
	  lwz       r3, 0x4C(r31)
	  subi      r4, r2, 0x7E40
	  bl        0xA8C54
	  cmplwi    r29, 0
	  mr        r30, r29
	  bne-      .loc_0xF8
	  lwz       r3, 0x48(r31)
	  li        r4, 0x2F
	  bl        0xA8A5C
	  addi      r30, r3, 0x1

	.loc_0xF8:
	  mr        r3, r30
	  bl        0xA8D58
	  addi      r4, r3, 0x1
	  lwz       r3, -0x77D8(r13)
	  li        r5, 0
	  bl        0x1A78
	  stw       r3, 0x50(r31)
	  mr        r4, r30
	  lwz       r3, 0x50(r31)
	  bl        0xA8C80
	  lwz       r4, 0x50(r31)
	  mr        r3, r31
	  bl        0xD94
	  lwz       r0, 0x50(r31)
	  stw       r0, 0x28(r31)
	  b         .loc_0x184

	.loc_0x138:
	  cmplwi    r29, 0
	  mr        r30, r29
	  bne-      .loc_0x148
	  subi      r30, r2, 0x7E3C

	.loc_0x148:
	  mr        r3, r30
	  bl        0xA8D08
	  addi      r4, r3, 0x1
	  lwz       r3, -0x77D8(r13)
	  li        r5, 0
	  bl        0x1A28
	  stw       r3, 0x50(r31)
	  mr        r4, r30
	  lwz       r3, 0x50(r31)
	  bl        0xA8C30
	  lwz       r4, 0x50(r31)
	  mr        r3, r31
	  bl        0xD44
	  lwz       r0, 0x50(r31)
	  stw       r0, 0x28(r31)

	.loc_0x184:
	  lis       r3, 0x8050
	  addi      r4, r31, 0x18
	  addi      r3, r3, 0x6E24
	  bl        0x4D50
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x30(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
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
void JSUList<JKRFileCache::CCacheBlock>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80021C7C
 * Size:	0000D4
 */
void JKRFileCache::~JKRFileCache()
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
	  beq-      .loc_0xB8
	  lis       r4, 0x804A
	  subi      r0, r4, 0x1B0
	  stw       r0, 0x0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x48(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lwz       r4, 0x38(r30)
	  bl        0x19A4

	.loc_0x50:
	  lwz       r4, 0x4C(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x64
	  lwz       r3, -0x77D8(r13)
	  bl        0x19D8

	.loc_0x64:
	  lwz       r4, 0x50(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x78
	  lwz       r3, -0x77D8(r13)
	  bl        0x19C4

	.loc_0x78:
	  lis       r3, 0x8050
	  addi      r4, r30, 0x18
	  addi      r3, r3, 0x6E24
	  bl        0x4F24
	  addic.    r0, r30, 0x3C
	  beq-      .loc_0x9C
	  addi      r3, r30, 0x3C
	  li        r4, 0
	  bl        0x4B54

	.loc_0x9C:
	  mr        r3, r30
	  li        r4, 0
	  bl        0x11D0
	  extsh.    r0, r31
	  ble-      .loc_0xB8
	  mr        r3, r30
	  bl        0x2384

	.loc_0xB8:
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
 * Address:	80021D50
 * Size:	000098
 */
void JKRFileCache::becomeCurrent(const char*)
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
	  bl        0xAFC
	  mr        r31, r3
	  bl        0xBABBC
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm.   r0,r0,1,31,31
	  mr        r30, r0
	  beq-      .loc_0x6C
	  stw       r29, -0x77E0(r13)
	  lwz       r3, -0x77D8(r13)
	  lwz       r4, 0x4C(r29)
	  bl        0x191C
	  stw       r31, 0x4C(r29)
	  lwz       r3, 0x4C(r29)
	  lbz       r0, 0x1(r3)
	  extsb.    r0, r0
	  beq-      .loc_0x78
	  subi      r4, r2, 0x7E40
	  bl        0xA8A34
	  b         .loc_0x78

	.loc_0x6C:
	  lwz       r3, -0x77D8(r13)
	  mr        r4, r31
	  bl        0x18F0

	.loc_0x78:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
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
 * Address:	80021DE8
 * Size:	000118
 */
void JKRFileCache::getResource(const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stw       r31, 0x10C(r1)
	  li        r31, 0
	  stw       r30, 0x108(r1)
	  stw       r29, 0x104(r1)
	  stw       r28, 0x100(r1)
	  mr        r28, r3
	  bl        0xA5C
	  mr        r0, r3
	  addi      r3, r1, 0x8
	  mr        r30, r0
	  mr        r4, r30
	  bl        -0x4CF4
	  lbz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0xDC
	  lwz       r4, 0x94(r1)
	  mr        r3, r28
	  bl        0x61C
	  cmplwi    r3, 0
	  bne-      .loc_0xCC
	  lwz       r3, 0x98(r1)
	  li        r4, 0x20
	  lwz       r5, 0x38(r28)
	  addi      r0, r3, 0x1F
	  rlwinm    r29,r0,0,0,26
	  mr        r3, r29
	  bl        0x1784
	  mr.       r31, r3
	  beq-      .loc_0xDC
	  mr        r4, r31
	  mr        r5, r29
	  addi      r3, r1, 0x8
	  li        r6, 0
	  bl        0xFA4
	  lwz       r4, -0x77D8(r13)
	  li        r3, 0x20
	  li        r5, 0
	  bl        0x20B8
	  mr.       r4, r3
	  beq-      .loc_0xC0
	  lwz       r4, 0x94(r1)
	  mr        r6, r31
	  lwz       r5, 0x98(r1)
	  bl        0xB20
	  mr        r4, r3

	.loc_0xC0:
	  addi      r3, r28, 0x3C
	  bl        0x4A38
	  b         .loc_0xDC

	.loc_0xCC:
	  lwz       r4, 0x10(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x10(r3)
	  lwz       r31, 0x1C(r3)

	.loc_0xDC:
	  lwz       r3, -0x77D8(r13)
	  mr        r4, r30
	  bl        0x17E8
	  addi      r3, r1, 0x8
	  li        r4, -0x1
	  bl        -0x4C4C
	  lwz       r0, 0x114(r1)
	  mr        r3, r31
	  lwz       r31, 0x10C(r1)
	  lwz       r30, 0x108(r1)
	  lwz       r29, 0x104(r1)
	  lwz       r28, 0x100(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JKRFileCache::getRelResource(const char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80021F00
 * Size:	000090
 */
void JKRFileCache::getResource(unsigned long, const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stw       r31, 0x11C(r1)
	  stw       r30, 0x118(r1)
	  mr        r30, r5
	  stw       r29, 0x114(r1)
	  mr        r29, r3
	  lwz       r3, 0x48(r3)
	  bl        0xA89EC
	  addi      r31, r1, 0x8
	  lwz       r4, 0x48(r29)
	  add       r31, r31, r3
	  addi      r3, r1, 0x8
	  bl        0xA8920
	  mr        r3, r29
	  mr        r5, r30
	  addi      r4, r1, 0x8
	  bl        0x538
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x74

	.loc_0x70:
	  li        r3, 0

	.loc_0x74:
	  lwz       r0, 0x124(r1)
	  lwz       r31, 0x11C(r1)
	  lwz       r30, 0x118(r1)
	  lwz       r29, 0x114(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80021F90
 * Size:	0000D4
 */
void JKRFileCache::readResource(void*, unsigned long, const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stmw      r27, 0x10C(r1)
	  mr        r28, r4
	  mr        r27, r3
	  mr        r29, r5
	  mr        r4, r6
	  bl        0x8B8
	  mr        r0, r3
	  addi      r3, r1, 0x8
	  mr        r31, r0
	  mr        r4, r31
	  bl        -0x4E98
	  li        r30, 0

	.loc_0x3C:
	  lbz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lwz       r3, 0x98(r1)
	  rlwinm    r29,r29,0,0,26
	  addi      r0, r3, 0x1F
	  rlwinm    r30,r0,0,0,26
	  cmplw     r30, r29
	  ble-      .loc_0x64
	  mr        r30, r29

	.loc_0x64:
	  lwz       r4, 0x94(r1)
	  mr        r3, r27
	  bl        0x458
	  cmplwi    r3, 0
	  bne-      .loc_0x90
	  mr        r4, r28
	  mr        r5, r30
	  addi      r3, r1, 0x8
	  li        r6, 0
	  bl        0xE04
	  b         .loc_0x3C

	.loc_0x90:
	  lwz       r4, 0x1C(r3)
	  mr        r3, r28
	  mr        r5, r30
	  bl        -0x1CE90
	  b         .loc_0x3C

	.loc_0xA4:
	  lwz       r3, -0x77D8(r13)
	  mr        r4, r31
	  bl        0x1678
	  addi      r3, r1, 0x8
	  li        r4, -0x1
	  bl        -0x4DBC
	  mr        r3, r30
	  lmw       r27, 0x10C(r1)
	  lwz       r0, 0x124(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JKRFileCache::readRelResource(void*, unsigned long, const char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80022064
 * Size:	000090
 */
void JKRFileCache::readResource(void*, unsigned long, unsigned long,
                                const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stmw      r27, 0x10C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r7
	  lwz       r3, 0x48(r3)
	  bl        0xA8888
	  addi      r31, r1, 0x8
	  lwz       r4, 0x48(r27)
	  add       r31, r31, r3
	  addi      r3, r1, 0x8
	  bl        0xA87BC
	  mr        r3, r27
	  mr        r5, r30
	  addi      r4, r1, 0x8
	  bl        0x3D4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  mr        r3, r27
	  mr        r4, r28
	  lwz       r12, 0x0(r27)
	  mr        r5, r29
	  mr        r6, r31
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x7C

	.loc_0x78:
	  li        r3, 0

	.loc_0x7C:
	  lmw       r27, 0x10C(r1)
	  lwz       r0, 0x124(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800220F4
 * Size:	000090
 */
void JKRFileCache::removeResourceAll()
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
	  lwz       r30, 0x3C(r3)
	  b         .loc_0x6C

	.loc_0x24:
	  lwz       r3, 0x0(r30)
	  lwz       r4, 0x38(r29)
	  lwz       r3, 0x1C(r3)
	  bl        0x1548
	  lwz       r4, 0x0(r30)
	  addi      r3, r29, 0x3C
	  bl        0x4AF4
	  mr        r3, r30
	  lwz       r30, 0xC(r30)
	  lwz       r31, 0x0(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x6C
	  beq-      .loc_0x64
	  mr        r3, r31
	  li        r4, 0
	  bl        0x467C

	.loc_0x64:
	  mr        r3, r31
	  bl        0x1F58

	.loc_0x6C:
	  cmplwi    r30, 0
	  bne+      .loc_0x24
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
 * Address:	80022184
 * Size:	00009C
 */
void JKRFileCache::removeResource(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        0x284
	  mr.       r31, r3
	  bne-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x80

	.loc_0x34:
	  lwz       r3, 0x10(r31)
	  subic.    r0, r3, 0x1
	  stw       r0, 0x10(r31)
	  bne-      .loc_0x7C
	  lwz       r4, 0x38(r29)
	  mr        r3, r30
	  bl        0x149C
	  mr        r4, r31
	  addi      r3, r29, 0x3C
	  bl        0x4A48
	  cmplwi    r31, 0
	  beq-      .loc_0x7C
	  beq-      .loc_0x74
	  mr        r3, r31
	  li        r4, 0
	  bl        0x45DC

	.loc_0x74:
	  mr        r3, r31
	  bl        0x1EB8

	.loc_0x7C:
	  li        r3, 0x1

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
 * Address:	80022220
 * Size:	000074
 */
void JKRFileCache::detachResource(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x1F0
	  mr.       r31, r3
	  bne-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x5C

	.loc_0x2C:
	  mr        r4, r31
	  addi      r3, r30, 0x3C
	  bl        0x49D0
	  cmplwi    r31, 0
	  beq-      .loc_0x58
	  beq-      .loc_0x50
	  mr        r3, r31
	  li        r4, 0
	  bl        0x4564

	.loc_0x50:
	  mr        r3, r31
	  bl        0x1E40

	.loc_0x58:
	  li        r3, 0x1

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
 * Address:	80022294
 * Size:	000034
 */
void JKRFileCache::getResSize(const void*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x188
	  cmplwi    r3, 0
	  bne-      .loc_0x20
	  li        r3, -0x1
	  b         .loc_0x24

	.loc_0x20:
	  lwz       r3, 0x18(r3)

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800222C8
 * Size:	00007C
 */
void JKRFileCache::countFile(const char*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  li        r31, 0
	  stw       r30, 0x28(r1)
	  bl        0x588
	  addi      r4, r1, 0x14
	  mr        r30, r3
	  bl        0xBA8D0
	  cmpwi     r3, 0
	  beq-      .loc_0x54
	  b         .loc_0x38

	.loc_0x34:
	  addi      r31, r31, 0x1

	.loc_0x38:
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x8
	  bl        0xBA974
	  cmpwi     r3, 0
	  bne+      .loc_0x34
	  addi      r3, r1, 0x14
	  bl        0xBAA08

	.loc_0x54:
	  lwz       r3, -0x77D8(r13)
	  mr        r4, r30
	  bl        0x1390
	  lwz       r0, 0x34(r1)
	  mr        r3, r31
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80022344
 * Size:	00009C
 */
void JKRFileCache::getFirstFile(const char*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  bl        0x510
	  lwz       r4, -0x77D8(r13)
	  mr        r30, r3
	  li        r3, 0x24
	  li        r5, 0
	  bl        0x1BD4
	  mr.       r31, r3
	  beq-      .loc_0x40
	  mr        r4, r30
	  bl        0x898
	  mr        r31, r3

	.loc_0x40:
	  lwz       r3, -0x77D8(r13)
	  mr        r4, r30
	  bl        0x1328
	  lbz       r0, 0x10(r31)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x80
	  cmplwi    r31, 0
	  beq-      .loc_0x78
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0xC(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x78:
	  li        r3, 0
	  b         .loc_0x84

	.loc_0x80:
	  mr        r3, r31

	.loc_0x84:
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
 * Address:	800223E0
 * Size:	000048
 */
void JKRFileFinder::~JKRFileFinder()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  subi      r0, r5, 0x1C0
	  stw       r0, 0xC(r31)
	  ble-      .loc_0x30
	  bl        0x1CA8

	.loc_0x30:
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
 * Address:	80022428
 * Size:	00002C
 */
void JKRFileCache::findCacheBlock(const void*) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x3C(r3)
	  b         .loc_0x1C

	.loc_0x8:
	  lwz       r3, 0x0(r5)
	  lwz       r0, 0x1C(r3)
	  cmplw     r0, r4
	  beqlr-
	  lwz       r5, 0xC(r5)

	.loc_0x1C:
	  cmplwi    r5, 0
	  bne+      .loc_0x8
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80022454
 * Size:	00002C
 */
void JKRFileCache::findCacheBlock(unsigned long) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x3C(r3)
	  b         .loc_0x1C

	.loc_0x8:
	  lwz       r3, 0x0(r5)
	  lwz       r0, 0x14(r3)
	  cmplw     r4, r0
	  beqlr-
	  lwz       r5, 0xC(r5)

	.loc_0x1C:
	  cmplwi    r5, 0
	  bne+      .loc_0x8
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80022480
 * Size:	0003E8
 */
void JKRFileCache::findFile(char*, const char*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stmw      r16, 0x80(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r31, r5
	  li        r17, 0
	  mr        r3, r30
	  bl        0xA846C
	  mr        r16, r3
	  mr        r3, r30
	  addi      r4, r1, 0x74
	  bl        0xBA708
	  cmpwi     r3, 0
	  beq-      .loc_0x3D0
	  add       r22, r30, r16
	  addi      r24, r1, 0x18
	  addi      r16, r22, 0x1
	  addi      r23, r1, 0x1C
	  b         .loc_0x3B4

	.loc_0x54:
	  lwz       r0, 0x6C(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x37C
	  li        r0, 0x2F
	  mr        r3, r16
	  stb       r0, 0x0(r22)
	  lwz       r4, 0x70(r1)
	  bl        0xA8368
	  mr        r3, r30
	  li        r17, 0
	  bl        0xA8414
	  mr        r18, r3
	  mr        r3, r30
	  addi      r4, r1, 0x50
	  bl        0xBA6B0
	  cmpwi     r3, 0
	  beq-      .loc_0x368
	  add       r21, r30, r18
	  addi      r25, r21, 0x1
	  b         .loc_0x34C

	.loc_0xA4:
	  lwz       r0, 0x60(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x314
	  li        r0, 0x2F
	  mr        r3, r25
	  stb       r0, 0x0(r21)
	  lwz       r4, 0x64(r1)
	  bl        0xA8318
	  mr        r3, r30
	  li        r17, 0
	  bl        0xA83C4
	  mr        r18, r3
	  mr        r3, r30
	  addi      r4, r1, 0x38
	  bl        0xBA660
	  cmpwi     r3, 0
	  beq-      .loc_0x300
	  add       r20, r30, r18
	  addi      r26, r20, 0x1
	  b         .loc_0x2E4

	.loc_0xF4:
	  lwz       r0, 0x48(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x2AC
	  li        r0, 0x2F
	  mr        r3, r26
	  stb       r0, 0x0(r20)
	  lwz       r4, 0x4C(r1)
	  bl        0xA82C8
	  mr        r3, r30
	  li        r17, 0
	  bl        0xA8374
	  mr        r18, r3
	  mr        r3, r30
	  addi      r4, r1, 0x20
	  bl        0xBA610
	  cmpwi     r3, 0
	  beq-      .loc_0x298
	  add       r19, r30, r18
	  addi      r27, r19, 0x1
	  b         .loc_0x27C

	.loc_0x144:
	  lwz       r0, 0x30(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x244
	  li        r0, 0x2F
	  mr        r3, r27
	  stb       r0, 0x0(r19)
	  lwz       r4, 0x34(r1)
	  bl        0xA8278
	  mr        r3, r30
	  li        r17, 0
	  bl        0xA8324
	  mr        r18, r3
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  bl        0xBA5C0
	  cmpwi     r3, 0
	  beq-      .loc_0x230
	  add       r18, r30, r18
	  addi      r28, r18, 0x1
	  b         .loc_0x214

	.loc_0x194:
	  lwz       r0, 0x0(r24)
	  cmpwi     r0, 0
	  beq-      .loc_0x1DC
	  li        r0, 0x2F
	  mr        r3, r28
	  stb       r0, 0x0(r18)
	  lwz       r4, 0x0(r23)
	  bl        0xA8228
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  rlwinm.   r0,r3,0,24,31
	  mr        r17, r3
	  bne-      .loc_0x228
	  li        r0, 0
	  stb       r0, 0x0(r18)
	  b         .loc_0x214

	.loc_0x1DC:
	  lwz       r4, 0x0(r23)
	  mr        r3, r31
	  bl        0xA805C
	  cntlzw    r3, r3
	  rlwinm.   r0,r3,27,24,31
	  rlwinm    r17,r3,27,5,31
	  beq-      .loc_0x214
	  mr        r3, r30
	  subi      r4, r2, 0x7E40
	  bl        0xA8168
	  mr        r3, r30
	  mr        r4, r31
	  bl        0xA815C
	  b         .loc_0x228

	.loc_0x214:
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x14
	  bl        0xBA5E0
	  cmpwi     r3, 0
	  bne+      .loc_0x194

	.loc_0x228:
	  addi      r3, r1, 0x8
	  bl        0xBA674

	.loc_0x230:
	  rlwinm.   r0,r17,0,24,31
	  bne-      .loc_0x290
	  li        r0, 0
	  stb       r0, 0x0(r19)
	  b         .loc_0x27C

	.loc_0x244:
	  lwz       r4, 0x34(r1)
	  mr        r3, r31
	  bl        0xA7FF4
	  cntlzw    r3, r3
	  rlwinm.   r0,r3,27,24,31
	  rlwinm    r17,r3,27,5,31
	  beq-      .loc_0x27C
	  mr        r3, r30
	  subi      r4, r2, 0x7E40
	  bl        0xA8100
	  mr        r3, r30
	  mr        r4, r31
	  bl        0xA80F4
	  b         .loc_0x290

	.loc_0x27C:
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x2C
	  bl        0xBA578
	  cmpwi     r3, 0
	  bne+      .loc_0x144

	.loc_0x290:
	  addi      r3, r1, 0x20
	  bl        0xBA60C

	.loc_0x298:
	  rlwinm.   r0,r17,0,24,31
	  bne-      .loc_0x2F8
	  li        r0, 0
	  stb       r0, 0x0(r20)
	  b         .loc_0x2E4

	.loc_0x2AC:
	  lwz       r4, 0x4C(r1)
	  mr        r3, r31
	  bl        0xA7F8C
	  cntlzw    r3, r3
	  rlwinm.   r0,r3,27,24,31
	  rlwinm    r17,r3,27,5,31
	  beq-      .loc_0x2E4
	  mr        r3, r30
	  subi      r4, r2, 0x7E40
	  bl        0xA8098
	  mr        r3, r30
	  mr        r4, r31
	  bl        0xA808C
	  b         .loc_0x2F8

	.loc_0x2E4:
	  addi      r3, r1, 0x38
	  addi      r4, r1, 0x44
	  bl        0xBA510
	  cmpwi     r3, 0
	  bne+      .loc_0xF4

	.loc_0x2F8:
	  addi      r3, r1, 0x38
	  bl        0xBA5A4

	.loc_0x300:
	  rlwinm.   r0,r17,0,24,31
	  bne-      .loc_0x360
	  li        r0, 0
	  stb       r0, 0x0(r21)
	  b         .loc_0x34C

	.loc_0x314:
	  lwz       r4, 0x64(r1)
	  mr        r3, r31
	  bl        0xA7F24
	  cntlzw    r3, r3
	  rlwinm.   r0,r3,27,24,31
	  rlwinm    r17,r3,27,5,31
	  beq-      .loc_0x34C
	  mr        r3, r30
	  subi      r4, r2, 0x7E40
	  bl        0xA8030
	  mr        r3, r30
	  mr        r4, r31
	  bl        0xA8024
	  b         .loc_0x360

	.loc_0x34C:
	  addi      r3, r1, 0x50
	  addi      r4, r1, 0x5C
	  bl        0xBA4A8
	  cmpwi     r3, 0
	  bne+      .loc_0xA4

	.loc_0x360:
	  addi      r3, r1, 0x50
	  bl        0xBA53C

	.loc_0x368:
	  rlwinm.   r0,r17,0,24,31
	  bne-      .loc_0x3C8
	  li        r0, 0
	  stb       r0, 0x0(r22)
	  b         .loc_0x3B4

	.loc_0x37C:
	  lwz       r4, 0x70(r1)
	  mr        r3, r31
	  bl        0xA7EBC
	  cntlzw    r3, r3
	  rlwinm.   r0,r3,27,24,31
	  rlwinm    r17,r3,27,5,31
	  beq-      .loc_0x3B4
	  mr        r3, r30
	  subi      r4, r2, 0x7E40
	  bl        0xA7FC8
	  mr        r3, r30
	  mr        r4, r31
	  bl        0xA7FBC
	  b         .loc_0x3C8

	.loc_0x3B4:
	  addi      r3, r1, 0x74
	  addi      r4, r1, 0x68
	  bl        0xBA440
	  cmpwi     r3, 0
	  bne+      .loc_0x54

	.loc_0x3C8:
	  addi      r3, r1, 0x74
	  bl        0xBA4D4

	.loc_0x3D0:
	  mr        r3, r17
	  lmw       r16, 0x80(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80022868
 * Size:	000110
 */
void JKRFileCache::getDvdPathName(const char*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lbz       r0, 0x0(r4)
	  stw       r31, 0x1C(r1)
	  cmpwi     r0, 0x2F
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0xA0
	  mr        r3, r30
	  bl        0xA8078
	  mr        r31, r3
	  lwz       r3, 0x48(r29)
	  bl        0xA806C
	  addi      r4, r31, 0x2
	  li        r5, 0x1
	  add       r4, r3, r4
	  lwz       r3, -0x77D8(r13)
	  bl        0xD88
	  mr        r0, r3
	  lwz       r4, 0x48(r29)
	  mr        r31, r0
	  bl        0xA7F90
	  lbz       r0, 0x1(r30)
	  extsb.    r0, r0
	  beq-      .loc_0xE4
	  lwz       r3, 0x48(r29)
	  lbz       r0, 0x1(r3)
	  extsb.    r0, r0
	  bne-      .loc_0x90
	  mr        r3, r31
	  addi      r4, r30, 0x1
	  bl        0xA7EF8
	  b         .loc_0xE4

	.loc_0x90:
	  mr        r3, r31
	  mr        r4, r30
	  bl        0xA7EE8
	  b         .loc_0xE4

	.loc_0xA0:
	  mr        r3, r30
	  bl        0xA8004
	  mr        r31, r3
	  lwz       r3, 0x4C(r29)
	  bl        0xA7FF8
	  addi      r4, r31, 0x2
	  li        r5, 0x1
	  add       r4, r3, r4
	  lwz       r3, -0x77D8(r13)
	  bl        0xD14
	  mr        r0, r3
	  lwz       r4, 0x4C(r29)
	  mr        r31, r0
	  bl        0xA7F1C
	  mr        r3, r31
	  mr        r4, r30
	  bl        0xA7EA0

	.loc_0xE4:
	  mr        r3, r29
	  mr        r4, r31
	  bl        .loc_0x110
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x110:
	*/
}

/*
 * --INFO--
 * Address:	80022978
 * Size:	000048
 */
void JKRFileCache::convStrLower(char*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  b         .loc_0x28

	.loc_0x18:
	  extsb     r3, r3
	  bl        0xA38D0
	  stb       r3, 0x0(r31)
	  addi      r31, r31, 0x1

	.loc_0x28:
	  lbz       r3, 0x0(r31)
	  extsb.    r0, r3
	  bne+      .loc_0x18
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800229C0
 * Size:	00006C
 */
void JKRFileCache::CCacheBlock::__ct((unsigned long, unsigned long,
                                      void const*))
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
	  mr        r4, r28
	  bl        0x3DC8
	  li        r0, 0x1
	  mr        r3, r28
	  stw       r0, 0x10(r28)
	  stw       r29, 0x14(r28)
	  stw       r30, 0x18(r28)
	  stw       r31, 0x1C(r28)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
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
void JSULink<JKRFileCache::CCacheBlock>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80022A2C
 * Size:	00002C
 */
void JKRFileCache::getFsResource(const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
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
 * Address:	80022A58
 * Size:	00002C
 */
void JKRFileCache::getNameResource(unsigned long, const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	80022A84
 * Size:	00002C
 */
void JKRFileCache::readFsResource(void*, unsigned long, const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	80022AB0
 * Size:	00002C
 */
void JKRFileCache::readNameResource(void*, unsigned long, unsigned long,
                                    const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
