

/*
 * --INFO--
 * Address:	800B0340
 * Size:	000254
 */
void JAInter::HeapMgr::init((unsigned char, unsigned long, unsigned char,
                             unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  rlwinm    r28,r5,0,24,31
	  mr        r31, r4
	  mr        r25, r5
	  mulli     r7, r28, 0x14
	  mr        r30, r3
	  mr        r24, r6
	  li        r5, 0x20
	  addi      r3, r7, 0x10
	  lwz       r4, -0x7494(r13)
	  bl        -0x8C32C
	  lis       r4, 0x800B
	  mr        r7, r28
	  addi      r4, r4, 0x92C
	  li        r5, 0
	  li        r6, 0x14
	  bl        0x11664
	  li        r27, 0
	  stw       r3, -0x7408(r13)
	  mr        r26, r24
	  rlwinm    r25,r25,0,24,31
	  mr        r28, r27
	  li        r24, 0
	  li        r29, -0x1
	  b         .loc_0xC0

	.loc_0x70:
	  lwz       r3, -0x7408(r13)
	  addi      r6, r27, 0xC
	  addi      r4, r27, 0x8
	  addi      r0, r27, 0x10
	  stbx      r28, r3, r27
	  mr        r3, r26
	  li        r5, 0x20
	  lwz       r7, -0x7408(r13)
	  stwx      r28, r7, r6
	  lwz       r6, -0x7408(r13)
	  stwx      r29, r6, r4
	  lwz       r4, -0x7408(r13)
	  stwx      r29, r4, r0
	  lwz       r4, -0x7494(r13)
	  bl        -0x8C3A0
	  lwz       r4, -0x7408(r13)
	  addi      r0, r27, 0x4
	  addi      r27, r27, 0x14
	  addi      r24, r24, 0x1
	  stwx      r3, r4, r0

	.loc_0xC0:
	  cmplw     r24, r25
	  blt+      .loc_0x70
	  rlwinm    r28,r30,0,24,31
	  lwz       r4, -0x7494(r13)
	  mulli     r3, r28, 0x14
	  li        r5, 0x20
	  addi      r3, r3, 0x10
	  bl        -0x8C3D4
	  lis       r4, 0x800B
	  mr        r7, r28
	  addi      r4, r4, 0x92C
	  li        r5, 0
	  li        r6, 0x14
	  bl        0x115BC
	  stw       r3, -0x7404(r13)
	  mr        r3, r31
	  lwz       r4, -0x7494(r13)
	  li        r5, 0x20
	  bl        -0x8C400
	  mr        r10, r28
	  lwz       r4, -0x7404(r13)
	  cmplwi    r10, 0
	  li        r9, 0
	  stw       r3, 0x4(r4)
	  mr        r8, r9
	  mr        r7, r9
	  li        r5, -0x1
	  ble-      .loc_0x240
	  rlwinm.   r0,r10,30,2,31
	  mtctr     r0
	  beq-      .loc_0x208

	.loc_0x13C:
	  lwz       r3, -0x7404(r13)
	  addi      r6, r9, 0xC
	  addi      r4, r9, 0x8
	  addi      r0, r9, 0x10
	  stbx      r8, r3, r9
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  addi      r6, r9, 0x20
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  addi      r4, r9, 0x1C
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  addi      r0, r9, 0x24
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stbx      r8, r3, r9
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  addi      r6, r9, 0x20
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  addi      r4, r9, 0x1C
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  addi      r0, r9, 0x24
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stbx      r8, r3, r9
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  addi      r6, r9, 0x20
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  addi      r4, r9, 0x1C
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  addi      r0, r9, 0x24
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stbx      r8, r3, r9
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  bdnz+     .loc_0x13C
	  andi.     r10, r10, 0x3
	  beq-      .loc_0x240

	.loc_0x208:
	  mtctr     r10

	.loc_0x20C:
	  lwz       r3, -0x7404(r13)
	  addi      r6, r9, 0xC
	  addi      r4, r9, 0x8
	  addi      r0, r9, 0x10
	  stbx      r8, r3, r9
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  bdnz+     .loc_0x20C

	.loc_0x240:
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B0594
 * Size:	000008
 */
void JAInter::HeapMgr::getAutoHeapPointer(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7408(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::HeapMgr::getStayHeapPointer(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::HeapMgr::getAutoHeapCount(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::HeapMgr::getStayHeapCount(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B059C
 * Size:	000100
 */
void JAInter::HeapMgr::checkOnMemory((unsigned long, unsigned char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x78

	.loc_0x28:
	  rlwinm    r0,r31,0,24,31
	  lwz       r3, -0x7408(r13)
	  mulli     r4, r0, 0x14
	  add       r3, r3, r4
	  lwz       r0, 0x8(r3)
	  cmplw     r29, r0
	  bne-      .loc_0x74
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x58
	  li        r3, -0x1
	  b         .loc_0xE4

	.loc_0x58:
	  cmplwi    r30, 0
	  beq-      .loc_0x64
	  stb       r31, 0x0(r30)

	.loc_0x64:
	  lwz       r3, -0x7408(r13)
	  addi      r0, r4, 0x4
	  lwzx      r3, r3, r0
	  b         .loc_0xE4

	.loc_0x74:
	  addi      r31, r31, 0x1

	.loc_0x78:
	  bl        -0x2B58
	  rlwinm    r0,r31,0,24,31
	  cmplw     r0, r3
	  blt+      .loc_0x28
	  lwz       r3, -0x7404(r13)
	  li        r6, 0
	  lwz       r4, -0x73FC(r13)
	  b         .loc_0xD4

	.loc_0x98:
	  rlwinm    r0,r6,0,24,31
	  mulli     r5, r0, 0x14
	  addi      r0, r5, 0x8
	  lwzx      r0, r3, r0
	  cmplw     r29, r0
	  bne-      .loc_0xD0
	  cmplwi    r30, 0
	  beq-      .loc_0xC0
	  li        r0, 0xFF
	  stb       r0, 0x0(r30)

	.loc_0xC0:
	  lwz       r3, -0x7404(r13)
	  addi      r0, r5, 0x4
	  lwzx      r3, r3, r0
	  b         .loc_0xE4

	.loc_0xD0:
	  addi      r6, r6, 0x1

	.loc_0xD4:
	  rlwinm    r0,r6,0,24,31
	  cmplw     r0, r4
	  blt+      .loc_0x98
	  li        r3, 0

	.loc_0xE4:
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
 * Address:	800B069C
 * Size:	000024
 */
void JAInter::HeapMgr::releaseAutoHeapPointer((unsigned char))
{
	/*
	.loc_0x0:
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0xFF
	  beqlr-
	  mulli     r3, r0, 0x14
	  lwz       r4, -0x7408(r13)
	  li        r5, -0x1
	  addi      r0, r3, 0x10
	  stwx      r5, r4, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAInter::HeapMgr::changeAutoHeapPointerToPosition((unsigned char*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B06C0
 * Size:	0000E8
 */
void JAInter::HeapMgr::checkUsefulAutoHeapPosition(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  li        r29, -0x1
	  stw       r28, 0x10(r1)
	  li        r28, 0
	  b         .loc_0x50

	.loc_0x30:
	  lwz       r3, -0x7408(r13)
	  addi      r0, r31, 0x8
	  lwzx      r3, r3, r0
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x5C
	  addi      r31, r31, 0x14
	  addi      r30, r30, 0x1

	.loc_0x50:
	  bl        -0x2C54
	  cmplw     r30, r3
	  blt+      .loc_0x30

	.loc_0x5C:
	  bl        -0x2C60
	  cmplw     r30, r3
	  bne-      .loc_0xC4
	  li        r30, 0
	  li        r31, 0
	  b         .loc_0xA8

	.loc_0x74:
	  lwz       r0, -0x7408(r13)
	  add       r3, r0, r31
	  lwz       r4, 0xC(r3)
	  cmplw     r29, r4
	  ble-      .loc_0xA0
	  lwz       r3, 0x10(r3)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0xA0
	  mr        r28, r30
	  mr        r29, r4

	.loc_0xA0:
	  addi      r31, r31, 0x14
	  addi      r30, r30, 0x1

	.loc_0xA8:
	  bl        -0x2CAC
	  cmplw     r30, r3
	  blt+      .loc_0x74
	  addis     r0, r29, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xC4
	  mr        r30, r28

	.loc_0xC4:
	  lwz       r0, 0x24(r1)
	  rlwinm    r3,r30,0,24,31
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
 * Address:	800B07A8
 * Size:	000048
 */
void JAInter::HeapMgr::getFreeAutoHeapPointer((unsigned char, unsigned long))
{
	/*
	.loc_0x0:
	  rlwinm    r0,r3,0,24,31
	  lwz       r3, -0x7408(r13)
	  mulli     r5, r0, 0x14
	  addi      r0, r5, 0x8
	  stwx      r4, r3, r0
	  addi      r0, r5, 0xC
	  lwz       r3, -0x7408(r13)
	  lwz       r4, -0x7400(r13)
	  add       r5, r3, r5
	  lwz       r3, 0x4(r5)
	  stw       r4, 0x10(r5)
	  lwz       r5, -0x7400(r13)
	  lwz       r4, -0x7408(r13)
	  stwx      r5, r4, r0
	  lwz       r4, -0x7400(r13)
	  addi      r0, r4, 0x1
	  stw       r0, -0x7400(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B07F0
 * Size:	00000C
 */
void JAInter::HeapMgr::checkUsefulStayHeapPosition(void)
{
	/*
	.loc_0x0:
	  lwz       r0, -0x73FC(r13)
	  rlwinm    r3,r0,0,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B07FC
 * Size:	000108
 */
void JAInter::HeapMgr::getFreeStayHeapPointer((unsigned long, unsigned long))
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
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        -0x2D5C
	  lwz       r0, -0x73FC(r13)
	  cmplw     r0, r3
	  blt-      .loc_0x3C
	  li        r3, 0
	  b         .loc_0xE8

	.loc_0x3C:
	  mulli     r3, r0, 0x14
	  lwz       r4, -0x7404(r13)
	  lwz       r31, 0x4(r4)
	  addi      r0, r3, 0x4
	  lwzx      r30, r4, r0
	  bl        -0x2D38
	  add       r3, r31, r3
	  add       r0, r28, r30
	  cmplw     r0, r3
	  bge-      .loc_0xE0
	  bl        -0x2D9C
	  lwz       r0, -0x73FC(r13)
	  cmplw     r0, r3
	  bge-      .loc_0xE0
	  mulli     r3, r0, 0x14
	  lwz       r4, -0x7404(r13)
	  rlwinm.   r0,r28,0,27,31
	  rlwinm    r5,r28,0,0,26
	  add       r3, r4, r3
	  lwz       r30, 0x4(r3)
	  stw       r29, 0x8(r3)
	  lwz       r0, -0x73FC(r13)
	  lwz       r4, -0x7404(r13)
	  mulli     r3, r0, 0x14
	  addi      r0, r3, 0x4
	  lwzx      r0, r4, r0
	  add       r31, r5, r0
	  beq-      .loc_0xB0
	  addi      r31, r31, 0x20

	.loc_0xB0:
	  lwz       r3, -0x73FC(r13)
	  addi      r0, r3, 0x1
	  stw       r0, -0x73FC(r13)
	  bl        -0x2DF4
	  lwz       r0, -0x73FC(r13)
	  cmplw     r0, r3
	  bge-      .loc_0xE4
	  mulli     r3, r0, 0x14
	  lwz       r4, -0x7404(r13)
	  addi      r0, r3, 0x4
	  stwx      r31, r4, r0
	  b         .loc_0xE4

	.loc_0xE0:
	  li        r30, 0

	.loc_0xE4:
	  mr        r3, r30

	.loc_0xE8:
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
 * Size:	00003C
 */
void JAInter::HeapMgr::clearAutoHeap((JAInter::HeapBlock*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JAInter::HeapMgr::clearAutoHeap((unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void JAInter::HeapMgr::clearStayHeap((unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void JAInter::HeapMgr::getAutoHeapPointer((unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B0904
 * Size:	000014
 */
void JAInter::HeapMgr::setAutoHeapLoadedFlag((unsigned char, unsigned char))
{
	/*
	.loc_0x0:
	  rlwinm    r0,r3,0,24,31
	  lwz       r3, -0x7408(r13)
	  mulli     r0, r0, 0x14
	  stbx      r4, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B0918
 * Size:	000014
 */
void JAInter::HeapMgr::setStayHeapLoadedFlag((unsigned char, unsigned char))
{
	/*
	.loc_0x0:
	  rlwinm    r0,r3,0,24,31
	  lwz       r3, -0x7404(r13)
	  mulli     r0, r0, 0x14
	  stbx      r4, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B092C
 * Size:	000018
 */
void JAInter::HeapBlock::__ct(void)
{
	/*
	.loc_0x0:
	  li        r4, 0
	  li        r0, -0x1
	  stw       r4, 0xC(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0x10(r3)
	  blr
	*/
}
