

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void J3DUMtxAnmCacheTableBase::J3DUMtxAnmCacheTableBase()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void J3DUMtxAnmCacheTableBase::J3DUMtxAnmCacheTableBase(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800177EC
 * Size:	00005C
 */
void J3DUMtxAnmCacheTableBase::~J3DUMtxAnmCacheTableBase()
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
	  beq-      .loc_0x40
	  lwz       r3, 0xC(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  bl        0xC8C0

	.loc_0x30:
	  extsh.    r0, r31
	  ble-      .loc_0x40
	  mr        r3, r30
	  bl        0xC88C

	.loc_0x40:
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
 * Address:	........
 * Size:	000074
 */
void J3DUMtxAnmCacheTableBase::init(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void J3DUSqtAnmCacheTableBase::J3DUSqtAnmCacheTableBase()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void J3DUSqtAnmCacheTableBase::J3DUSqtAnmCacheTableBase(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void J3DUSqtAnmCacheTableBase::~J3DUSqtAnmCacheTableBase()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void J3DUSqtAnmCacheTableBase::init(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void J3DUSqtBlendAnmCacheTable::setFrame(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void J3DUSqtBlendAnmCacheTable::setFrame(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00017C
 */
void J3DUSqt::setMtx(const float (*)[4])
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void J3DUSqt::getMtx(float (*)[4]) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80017848
 * Size:	000084
 */
void J3DUMtxAnmCacheTable::J3DUMtxAnmCacheTable(J3DModel*, J3DAnmTransform*)
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
	  li        r3, 0
	  lwz       r4, 0x4(r4)
	  lha       r5, 0x6(r5)
	  lhz       r6, 0x2C(r4)
	  li        r4, 0x20
	  mullw     r0, r5, r6
	  stw       r3, 0x0(r29)
	  stw       r6, 0x4(r29)
	  stw       r5, 0x8(r29)
	  mulli     r3, r0, 0x30
	  bl        0xC764
	  stw       r3, 0xC(r29)
	  mr        r3, r30
	  mr        r4, r31
	  mr        r5, r29
	  bl        .loc_0x84
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x84:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void J3DUSqtAnmCacheTable::J3DUSqtAnmCacheTable(J3DModel*, J3DAnmTransform*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void J3DUSqtBlendAnmCacheTable::J3DUSqtBlendAnmCacheTable()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000240
 */
void J3DUSqtBlendAnmCacheTable::J3DUSqtBlendAnmCacheTable(J3DModel*,
                                                          J3DAnmTransform*,
                                                          J3DAnmTransform*,
                                                          J3DAnmTransform*,
                                                          J3DAnmTransform*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void J3DUSqtBlendAnmCacheTable::~J3DUSqtBlendAnmCacheTable()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00030C
 */
void J3DUSqtBlendAnmCacheTable::get(int, float (&)[3][4]) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00028C
 */
void @unnamed @J3DUMtxCache_cpp
    @ ::init<J3DUSqtAnmCacheTable>(J3DModel*, J3DAnmTransform*,
                                   J3DUSqtAnmCacheTable*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800178CC
 * Size:	000144
 */
void @unnamed @J3DUMtxCache_cpp
    @ ::init<J3DUMtxAnmCacheTable>(J3DModel*, J3DAnmTransform*,
                                   J3DUMtxAnmCacheTable*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stmw      r19, 0x1C(r1)
	  mr        r19, r3
	  mr        r20, r4
	  lwz       r29, 0x4(r3)
	  mr        r21, r5
	  lwz       r3, 0x28(r29)
	  lwz       r0, 0x18(r29)
	  lwz       r5, 0x0(r3)
	  rlwinm    r3,r0,0,28,31
	  lwz       r28, 0x54(r5)
	  bl        0x53E20
	  lwz       r5, 0x28(r29)
	  lis       r4, 0x8051
	  mr        r26, r3
	  lfd       f31, -0x7E98(r2)
	  lwz       r5, 0x0(r5)
	  subi      r30, r4, 0xDD0
	  li        r23, 0
	  lis       r31, 0x4330
	  stw       r26, 0x54(r5)
	  lha       r25, 0x6(r20)
	  lhz       r24, 0x2C(r29)
	  b         .loc_0xF4

	.loc_0x70:
	  xoris     r0, r23, 0x8000
	  stw       r31, 0x8(r1)
	  mr        r3, r19
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f31
	  stfs      f0, 0x8(r20)
	  lwz       r12, 0x0(r19)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r22, 0
	  li        r27, 0
	  b         .loc_0xD8

	.loc_0xA8:
	  lwz       r0, 0x4(r21)
	  lwz       r3, 0x84(r19)
	  mullw     r0, r23, r0
	  lwz       r4, 0xC(r21)
	  lwz       r3, 0xC(r3)
	  add       r3, r3, r27
	  add       r0, r22, r0
	  mulli     r0, r0, 0x30
	  add       r4, r4, r0
	  bl        0xD2934
	  addi      r27, r27, 0x30
	  addi      r22, r22, 0x1

	.loc_0xD8:
	  cmpw      r22, r24
	  blt+      .loc_0xA8
	  lwz       r3, 0x48(r30)
	  bl        0x4E0E0
	  lwz       r3, 0x4C(r30)
	  bl        0x4E0D8
	  addi      r23, r23, 0x1

	.loc_0xF4:
	  cmpw      r23, r25
	  blt+      .loc_0x70
	  cmplwi    r26, 0
	  beq-      .loc_0x11C
	  mr        r3, r26
	  li        r4, 0x1
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x11C:
	  lwz       r3, 0x28(r29)
	  lwz       r3, 0x0(r3)
	  stw       r28, 0x54(r3)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  lmw       r19, 0x1C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}
