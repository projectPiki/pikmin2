

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void DCFlashInvalidate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC6D8
 * Size:	000014
 */
void DCEnable(void)
{
	/*
	.loc_0x0:
	  sync
	  mfspr     r3, 0x3F0
	  ori       r3, r3, 0x4000
	  mtspr     1008, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void DCDisable(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void DCFreeze(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void DCUnfreeze(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DCTouchLoad(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DCBlockZero(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DCBlockStore(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DCBlockFlush(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DCBlockInvalidate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC6EC
 * Size:	00002C
 */
void DCInvalidateRange(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  blelr-
	  rlwinm    r5,r3,0,27,31
	  add       r4, r4, r5
	  addi      r4, r4, 0x1F
	  rlwinm    r4,r4,27,5,31
	  mtctr     r4

	.loc_0x1C:
	  dcbi      r0, r3
	  addi      r3, r3, 0x20
	  bdnz+     .loc_0x1C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC718
 * Size:	000030
 */
void DCFlushRange(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  blelr-
	  rlwinm    r5,r3,0,27,31
	  add       r4, r4, r5
	  addi      r4, r4, 0x1F
	  rlwinm    r4,r4,27,5,31
	  mtctr     r4

	.loc_0x1C:
	  dcbf      r0, r3
	  addi      r3, r3, 0x20
	  bdnz+     .loc_0x1C
	  sc
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC748
 * Size:	000030
 */
void DCStoreRange(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  blelr-
	  rlwinm    r5,r3,0,27,31
	  add       r4, r4, r5
	  addi      r4, r4, 0x1F
	  rlwinm    r4,r4,27,5,31
	  mtctr     r4

	.loc_0x1C:
	  dcbst     r0, r3
	  addi      r3, r3, 0x20
	  bdnz+     .loc_0x1C
	  sc
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC778
 * Size:	00002C
 */
void DCFlushRangeNoSync(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  blelr-
	  rlwinm    r5,r3,0,27,31
	  add       r4, r4, r5
	  addi      r4, r4, 0x1F
	  rlwinm    r4,r4,27,5,31
	  mtctr     r4

	.loc_0x1C:
	  dcbf      r0, r3
	  addi      r3, r3, 0x20
	  bdnz+     .loc_0x1C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC7A4
 * Size:	00002C
 */
void DCStoreRangeNoSync(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  blelr-
	  rlwinm    r5,r3,0,27,31
	  add       r4, r4, r5
	  addi      r4, r4, 0x1F
	  rlwinm    r4,r4,27,5,31
	  mtctr     r4

	.loc_0x1C:
	  dcbst     r0, r3
	  addi      r3, r3, 0x20
	  bdnz+     .loc_0x1C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC7D0
 * Size:	00002C
 */
void DCZeroRange(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  blelr-
	  rlwinm    r5,r3,0,27,31
	  add       r4, r4, r5
	  addi      r4, r4, 0x1F
	  rlwinm    r4,r4,27,5,31
	  mtctr     r4

	.loc_0x1C:
	  dcbz      r0, r3
	  addi      r3, r3, 0x20
	  bdnz+     .loc_0x1C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void DCTouchRange(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC7FC
 * Size:	000034
 */
void ICInvalidateRange(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  blelr-
	  rlwinm    r5,r3,0,27,31
	  add       r4, r4, r5
	  addi      r4, r4, 0x1F
	  rlwinm    r4,r4,27,5,31
	  mtctr     r4

	.loc_0x1C:
	  icbi      r0, r3
	  addi      r3, r3, 0x20
	  bdnz+     .loc_0x1C
	  sync
	  isync
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC830
 * Size:	000010
 */
void ICFlashInvalidate(void)
{
	/*
	.loc_0x0:
	  mfspr     r3, 0x3F0
	  ori       r3, r3, 0x800
	  mtspr     1008, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC840
 * Size:	000014
 */
void ICEnable(void)
{
	/*
	.loc_0x0:
	  isync
	  mfspr     r3, 0x3F0
	  ori       r3, r3, 0x8000
	  mtspr     1008, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void ICDisable(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void ICFreeze(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void ICUnfreeze(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void ICBlockInvalidate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void ICSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC854
 * Size:	0000CC
 */
void __LCEnable(void)
{
	/*
	.loc_0x0:
	  mfmsr     r5
	  ori       r5, r5, 0x1000
	  mtmsr     r5
	  lis       r3, 0x8000
	  li        r4, 0x400
	  mtctr     r4

	.loc_0x18:
	  dcbt      r0, r3
	  dcbst     r0, r3
	  addi      r3, r3, 0x20
	  bdnz+     .loc_0x18
	  mfspr     r4, 0x398
	  oris      r4, r4, 0x100F
	  mtspr     920, r4
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  lis       r3, 0xE000
	  ori       r3, r3, 0x2
	  mtdbatl   3, r3
	  ori       r3, r3, 0x1FE
	  mtdbatu   3, r3
	  isync
	  lis       r3, 0xE000
	  li        r6, 0x200
	  mtctr     r6
	  li        r6, 0

	.loc_0x8C:
	  .long     0x10061fec
	  addi      r3, r3, 0x20
	  bdnz+     .loc_0x8C
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC920
 * Size:	000038
 */
void LCEnable(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  bl        0x2308
	  mr        r31, r3
	  bl        -0xE4
	  mr        r3, r31
	  bl        0x2320
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC958
 * Size:	000028
 */
void LCDisable(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xE000
	  li        r4, 0x200
	  mtctr     r4

	.loc_0xC:
	  dcbi      r0, r3
	  addi      r3, r3, 0x20
	  bdnz+     .loc_0xC
	  mfspr     r4, 0x398
	  rlwinm    r4,r4,0,4,2
	  mtspr     920, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void LCAllocOneTag(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void LCAllocTags(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void LCLoadBlocks(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC980
 * Size:	000024
 */
void LCStoreBlocks(void)
{
	/*
	.loc_0x0:
	  rlwinm    r6,r5,30,27,31
	  rlwinm    r3,r3,0,4,31
	  or        r6, r6, r3
	  mtspr     922, r6
	  rlwinm    r6,r5,2,28,29
	  or        r6, r6, r4
	  ori       r6, r6, 0x2
	  mtspr     923, r6
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void LCAlloc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void LCAllocNoInvalidate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void LCLoadData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC9A4
 * Size:	0000AC
 */
void LCStoreData(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  stw       r29, 0x1C(r1)
	  stw       r28, 0x18(r1)
	  mr        r28, r3
	  mr        r29, r4
	  addi      r0, r5, 0x1F
	  rlwinm    r3,r0,27,5,31
	  addi      r0, r3, 0x7F
	  mr        r31, r3
	  rlwinm    r30,r0,25,7,31
	  b         .loc_0x3C

	.loc_0x3C:
	  b         .loc_0x40

	.loc_0x40:
	  b         .loc_0x80

	.loc_0x44:
	  cmplwi    r31, 0x80
	  bge-      .loc_0x64
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r31
	  bl        -0x7C
	  li        r31, 0
	  b         .loc_0x80

	.loc_0x64:
	  mr        r3, r28
	  mr        r4, r29
	  li        r5, 0
	  bl        -0x94
	  subi      r31, r31, 0x80
	  addi      r28, r28, 0x1000
	  addi      r29, r29, 0x1000

	.loc_0x80:
	  cmplwi    r31, 0
	  bne+      .loc_0x44
	  mr        r3, r30
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  lwz       r28, 0x18(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void LCQueueLength(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ECA50
 * Size:	000014
 */
void LCQueueWait(void)
{
	/*
	.loc_0x0:
	  mfspr     r4, 0x398
	  rlwinm    r4,r4,8,28,31
	  cmpw      r4, r3
	  bgt+      .loc_0x0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void LCFlushQueue(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void L2Init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void L2Enable(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void L2Disable(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ECA64
 * Size:	000098
 */
void L2GlobalInvalidate(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  sync
	  bl        -0x18500
	  rlwinm    r3,r3,0,1,31
	  bl        -0x18500
	  sync
	  bl        -0x18510
	  oris      r3, r3, 0x20
	  bl        -0x18510
	  b         .loc_0x34

	.loc_0x34:
	  b         .loc_0x38

	.loc_0x38:
	  bl        -0x18524
	  rlwinm    r0,r3,0,31,31
	  cmplwi    r0, 0
	  bne+      .loc_0x38
	  bl        -0x18534
	  rlwinm    r3,r3,0,11,9
	  bl        -0x18534
	  b         .loc_0x58

	.loc_0x58:
	  lis       r3, 0x804B
	  subi      r31, r3, 0x7478
	  b         .loc_0x64

	.loc_0x64:
	  b         .loc_0x74

	.loc_0x68:
	  mr        r3, r31
	  crclr     6, 0x6
	  bl        -0x11E74

	.loc_0x74:
	  bl        -0x18560
	  rlwinm    r0,r3,0,31,31
	  cmplwi    r0, 0
	  bne+      .loc_0x68
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void L2SetDataOnly(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void L2SetWriteThrough(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ECAFC
 * Size:	000160
 */
void DMAErrorHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x80(r1)
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  stw       r29, 0x74(r1)
	  bne-      cr1, .loc_0x3C
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x3C:
	  stw       r3, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  mr        r29, r4
	  lis       r3, 0x804B
	  subi      r31, r3, 0x7478
	  bl        -0x18540
	  mr        r30, r3
	  crclr     6, 0x6
	  addi      r3, r31, 0x2C
	  bl        0xB78
	  lwz       r5, 0x19C(r29)
	  mr        r4, r30
	  addi      r3, r31, 0x44
	  crclr     6, 0x6
	  bl        0xB64
	  rlwinm    r0,r30,0,8,11
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  lwz       r0, 0x19C(r29)
	  rlwinm    r0,r0,0,10,10
	  cmplwi    r0, 0
	  bne-      .loc_0xC4

	.loc_0xAC:
	  addi      r3, r31, 0x60
	  crclr     6, 0x6
	  bl        0xB3C
	  mr        r3, r29
	  bl        0x694
	  bl        -0x18624

	.loc_0xC4:
	  addi      r3, r31, 0x90
	  crclr     6, 0x6
	  bl        0xB24
	  addi      r3, r31, 0xCC
	  crclr     6, 0x6
	  bl        0xB18
	  rlwinm    r0,r30,0,8,8
	  cmplwi    r0, 0
	  beq-      .loc_0xF4
	  addi      r3, r31, 0x104
	  crclr     6, 0x6
	  bl        0xB00

	.loc_0xF4:
	  rlwinm    r0,r30,0,9,9
	  cmplwi    r0, 0
	  beq-      .loc_0x10C
	  addi      r3, r31, 0x144
	  crclr     6, 0x6
	  bl        0xAE8

	.loc_0x10C:
	  rlwinm    r0,r30,0,10,10
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  addi      r3, r31, 0x170
	  crclr     6, 0x6
	  bl        0xAD0

	.loc_0x124:
	  rlwinm    r0,r30,0,11,11
	  cmplwi    r0, 0
	  beq-      .loc_0x13C
	  addi      r3, r31, 0x190
	  crclr     6, 0x6
	  bl        0xAB8

	.loc_0x13C:
	  mr        r3, r30
	  bl        -0x18610
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  addi      r1, r1, 0x80
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ECC5C
 * Size:	0000F4
 */
void __OSCacheInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lis       r3, 0x804B
	  subi      r31, r3, 0x7478
	  bl        -0x18710
	  rlwinm    r0,r3,0,16,16
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  bl        -0x448
	  addi      r3, r31, 0x1AC
	  crclr     6, 0x6
	  bl        -0x12034

	.loc_0x3C:
	  bl        -0x18730
	  rlwinm    r0,r3,0,17,17
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  bl        -0x5D0
	  addi      r3, r31, 0x1C8
	  crclr     6, 0x6
	  bl        -0x12054

	.loc_0x5C:
	  bl        -0x18740
	  rlwinm    r0,r3,0,0,0
	  cmplwi    r0, 0
	  bne-      .loc_0xC0
	  bl        -0x18770
	  mr        r30, r3
	  sync
	  li        r3, 0x30
	  bl        -0x18778
	  sync
	  sync
	  bl        -0x1876C
	  rlwinm    r3,r3,0,1,31
	  bl        -0x1876C
	  sync
	  bl        -0x290
	  mr        r3, r30
	  bl        -0x1879C
	  bl        -0x18788
	  oris      r0, r3, 0x8000
	  rlwinm    r3,r0,0,11,9
	  bl        -0x1878C
	  addi      r3, r31, 0x1E4
	  crclr     6, 0x6
	  bl        -0x120B8

	.loc_0xC0:
	  lis       r3, 0x800F
	  subi      r4, r3, 0x3504
	  li        r3, 0x1
	  bl        0xB70
	  addi      r3, r31, 0x1FC
	  crclr     6, 0x6
	  bl        -0x120D4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}
