

/*
 * --INFO--
 * Address:	800F4EFC
 * Size:	000020
 */
void SIBusy(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x804B
	  lwz       r0, -0x6104(r3)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x18
	  li        r3, 0x1
	  blr

	.loc_0x18:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F4F1C
 * Size:	00003C
 */
void SIIsChanBusy(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804F
	  rlwinm    r5,r3,5,0,26
	  addi      r0, r4, 0x7180
	  add       r4, r0, r5
	  lwz       r0, 0x0(r4)
	  li        r5, 0x1
	  cmpwi     r0, -0x1
	  bne-      .loc_0x34
	  lis       r4, 0x804B
	  lwz       r0, -0x6104(r4)
	  cmpw      r0, r3
	  beq-      .loc_0x34
	  li        r5, 0

	.loc_0x34:
	  mr        r3, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void SIClearTCInterrupt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F4F58
 * Size:	0002FC
 */
void CompleteTransfer(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0xCC00
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  addi      r30, r3, 0x6400
	  stw       r29, 0x14(r1)
	  addi      r29, r30, 0x34
	  stw       r28, 0x10(r1)
	  lwz       r0, 0x6434(r3)
	  lwz       r28, 0x6438(r3)
	  lis       r3, 0x804B
	  oris      r0, r0, 0x8000
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x34(r30)
	  subi      r31, r3, 0x6148
	  lwz       r0, 0x44(r31)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x2C0
	  bl        -0x23F8
	  lwz       r6, 0x44(r31)
	  lis       r5, 0x804F
	  addi      r0, r5, 0x72C0
	  rlwinm    r5,r6,3,0,28
	  add       r5, r0, r5
	  stw       r4, 0x4(r5)
	  addi      r6, r31, 0x4C
	  li        r4, 0
	  stw       r3, 0x0(r5)
	  lwz       r0, 0x4C(r31)
	  lwz       r5, 0x50(r31)
	  rlwinm    r7,r0,30,2,31
	  cmplwi    r7, 0
	  ble-      .loc_0x128
	  cmplwi    r7, 0x8
	  subi      r3, r7, 0x8
	  ble-      .loc_0x2C8
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  cmplwi    r3, 0
	  mtctr     r0
	  ble-      .loc_0x2C8

	.loc_0xAC:
	  lwz       r0, 0x80(r30)
	  addi      r4, r4, 0x8
	  stw       r0, 0x0(r5)
	  lwz       r0, 0x84(r30)
	  stw       r0, 0x4(r5)
	  lwz       r0, 0x88(r30)
	  stw       r0, 0x8(r5)
	  lwz       r0, 0x8C(r30)
	  stw       r0, 0xC(r5)
	  lwz       r0, 0x90(r30)
	  stw       r0, 0x10(r5)
	  lwz       r0, 0x94(r30)
	  stw       r0, 0x14(r5)
	  lwz       r0, 0x98(r30)
	  stw       r0, 0x18(r5)
	  lwz       r0, 0x9C(r30)
	  addi      r30, r30, 0x20
	  stw       r0, 0x1C(r5)
	  addi      r5, r5, 0x20
	  bdnz+     .loc_0xAC
	  b         .loc_0x2C8

	.loc_0x100:
	  sub       r0, r7, r4
	  cmplw     r4, r7
	  mtctr     r0
	  bge-      .loc_0x128

	.loc_0x110:
	  lwz       r0, 0x80(r3)
	  addi      r3, r3, 0x4
	  addi      r4, r4, 0x1
	  stw       r0, 0x0(r5)
	  addi      r5, r5, 0x4
	  bdnz+     .loc_0x110

	.loc_0x128:
	  lwz       r0, 0x0(r6)
	  rlwinm.   r3,r0,0,30,31
	  beq-      .loc_0x240
	  lis       r6, 0xCC00
	  addi      r6, r6, 0x6400
	  rlwinm    r0,r4,2,0,29
	  add       r4, r6, r0
	  lwz       r6, 0x80(r4)
	  li        r4, 0
	  ble-      .loc_0x240
	  cmplwi    r3, 0x8
	  subi      r7, r3, 0x8
	  ble-      .loc_0x214
	  addi      r0, r7, 0x7
	  rlwinm    r0,r0,29,3,31
	  cmplwi    r7, 0
	  mtctr     r0
	  ble-      .loc_0x214

	.loc_0x170:
	  subfic    r0, r4, 0x3
	  rlwinm    r7,r0,3,0,28
	  addi      r0, r4, 0x1
	  srw       r7, r6, r7
	  subfic    r0, r0, 0x3
	  stb       r7, 0x0(r5)
	  rlwinm    r0,r0,3,0,28
	  addi      r7, r4, 0x2
	  srw       r0, r6, r0
	  subfic    r7, r7, 0x3
	  stb       r0, 0x1(r5)
	  rlwinm    r7,r7,3,0,28
	  srw       r12, r6, r7
	  neg       r7, r4
	  stb       r12, 0x2(r5)
	  rlwinm    r8,r7,3,0,28
	  addi      r7, r4, 0x4
	  srw       r11, r6, r8
	  subfic    r7, r7, 0x3
	  stb       r11, 0x3(r5)
	  rlwinm    r8,r7,3,0,28
	  addi      r7, r4, 0x5
	  srw       r10, r6, r8
	  subfic    r7, r7, 0x3
	  stb       r10, 0x4(r5)
	  rlwinm    r8,r7,3,0,28
	  srw       r9, r6, r8
	  addi      r7, r4, 0x6
	  stb       r9, 0x5(r5)
	  subfic    r8, r7, 0x3
	  addi      r7, r4, 0x7
	  rlwinm    r8,r8,3,0,28
	  srw       r8, r6, r8
	  subfic    r7, r7, 0x3
	  stb       r8, 0x6(r5)
	  rlwinm    r7,r7,3,0,28
	  srw       r7, r6, r7
	  stb       r7, 0x7(r5)
	  addi      r5, r5, 0x8
	  addi      r4, r4, 0x8
	  bdnz+     .loc_0x170

	.loc_0x214:
	  sub       r0, r3, r4
	  cmplw     r4, r3
	  mtctr     r0
	  bge-      .loc_0x240

	.loc_0x224:
	  subfic    r0, r4, 0x3
	  rlwinm    r0,r0,3,0,28
	  srw       r0, r6, r0
	  stb       r0, 0x0(r5)
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x224

	.loc_0x240:
	  lwz       r0, 0x0(r29)
	  rlwinm.   r0,r0,0,2,2
	  beq-      .loc_0x294
	  lwz       r3, 0x44(r31)
	  subfic    r0, r3, 0x3
	  rlwinm    r0,r0,3,0,28
	  srw       r28, r28, r0
	  rlwinm    r28,r28,0,28,31
	  rlwinm.   r0,r28,0,28,28
	  beq-      .loc_0x284
	  rlwinm    r0,r3,2,0,29
	  add       r3, r31, r0
	  lwzu      r0, 0x58(r3)
	  rlwinm.   r0,r0,0,24,24
	  bne-      .loc_0x284
	  li        r0, 0x8
	  stw       r0, 0x0(r3)

	.loc_0x284:
	  cmplwi    r28, 0
	  bne-      .loc_0x2B8
	  li        r28, 0x4
	  b         .loc_0x2B8

	.loc_0x294:
	  bl        -0x263C
	  lwz       r6, 0x44(r31)
	  lis       r5, 0x804F
	  addi      r0, r5, 0x72A0
	  rlwinm    r5,r6,3,0,28
	  add       r5, r0, r5
	  stw       r4, 0x4(r5)
	  li        r28, 0
	  stw       r3, 0x0(r5)

	.loc_0x2B8:
	  li        r0, -0x1
	  stw       r0, 0x44(r31)

	.loc_0x2C0:
	  mr        r3, r28
	  b         .loc_0x2DC

	.loc_0x2C8:
	  lis       r3, 0xCC00
	  rlwinm    r0,r4,2,0,29
	  addi      r3, r3, 0x6400
	  add       r3, r3, r0
	  b         .loc_0x100

	.loc_0x2DC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void SITransferNext(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F5254
 * Size:	000344
 */
void SIInterruptHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r5, 0xCC00
	  stw       r0, 0x4(r1)
	  lis       r7, 0x804F
	  lis       r6, 0x804B
	  stwu      r1, -0x48(r1)
	  stmw      r21, 0x1C(r1)
	  addi      r30, r3, 0
	  addi      r31, r4, 0
	  addi      r28, r7, 0x7180
	  subi      r29, r6, 0x6148
	  lwz       r24, 0x6434(r5)
	  rlwinm    r5,r24,0,0,1
	  addis     r0, r5, 0x4000
	  cmplwi    r0, 0
	  bne-      .loc_0x1C0
	  lwz       r23, 0x44(r29)
	  bl        -0x340
	  lwz       r21, 0x54(r29)
	  li        r27, 0
	  addi      r22, r3, 0
	  stw       r27, 0x54(r29)
	  addi      r26, r23, 0

	.loc_0x5C:
	  addi      r26, r26, 0x1
	  srawi     r0, r26, 0x2
	  addze     r0, r0
	  rlwinm    r0,r0,2,0,29
	  subc      r0, r26, r0
	  mr        r26, r0
	  rlwinm    r0,r0,5,0,26
	  add       r25, r28, r0
	  lwz       r0, 0x0(r25)
	  cmpwi     r0, -0x1
	  beq-      .loc_0xF0
	  bl        -0x272C
	  lwz       r0, 0x18(r25)
	  xoris     r5, r3, 0x8000
	  lwz       r6, 0x1C(r25)
	  xoris     r3, r0, 0x8000
	  subc      r0, r4, r6
	  subfe     r3, r3, r5
	  subfe     r3, r5, r5
	  neg.      r3, r3
	  bne-      .loc_0xF0
	  lwz       r3, 0x0(r25)
	  lwz       r4, 0x4(r25)
	  lwz       r5, 0x8(r25)
	  lwz       r6, 0xC(r25)
	  lwz       r7, 0x10(r25)
	  lwz       r8, 0x14(r25)
	  bl        0x588
	  cmpwi     r3, 0
	  beq-      .loc_0xFC
	  mulli     r0, r26, 0x28
	  add       r3, r28, r0
	  addi      r3, r3, 0x80
	  bl        -0x9560
	  li        r0, -0x1
	  stw       r0, 0x0(r25)
	  b         .loc_0xFC

	.loc_0xF0:
	  addi      r27, r27, 0x1
	  cmpwi     r27, 0x4
	  blt+      .loc_0x5C

	.loc_0xFC:
	  cmplwi    r21, 0
	  beq-      .loc_0x11C
	  addi      r12, r21, 0
	  mtlr      r12
	  addi      r3, r23, 0
	  addi      r4, r22, 0
	  addi      r5, r31, 0
	  blrl

	.loc_0x11C:
	  lis       r3, 0xCC00
	  addi      r4, r3, 0x6400
	  lwz       r5, 0x6438(r3)
	  rlwinm    r0,r23,3,0,28
	  lis       r3, 0xF00
	  sraw      r0, r3, r0
	  and       r5, r5, r0
	  rlwinm    r0,r23,2,0,29
	  stw       r5, 0x38(r4)
	  add       r6, r29, r0
	  lwzu      r0, 0x58(r6)
	  cmplwi    r0, 0x80
	  bne-      .loc_0x1C0
	  rlwinm    r0,r23,5,0,26
	  lwzx      r0, r28, r0
	  li        r3, 0x1
	  cmpwi     r0, -0x1
	  bne-      .loc_0x174
	  lwz       r0, 0x44(r29)
	  cmpw      r0, r23
	  beq-      .loc_0x174
	  li        r3, 0

	.loc_0x174:
	  cmpwi     r3, 0
	  bne-      .loc_0x1C0
	  lis       r3, 0x8000
	  lwz       r0, 0xF8(r3)
	  lis       r3, 0x431C
	  lis       r4, 0x800F
	  rlwinm    r0,r0,30,2,31
	  subi      r3, r3, 0x217D
	  mulhwu    r0, r3, r0
	  rlwinm    r0,r0,17,15,31
	  mulli     r0, r0, 0x41
	  addi      r8, r4, 0x6054
	  rlwinm    r10,r0,29,3,31
	  addi      r3, r23, 0
	  subi      r4, r13, 0x6FE0
	  li        r5, 0x1
	  li        r7, 0x3
	  li        r9, 0
	  bl        0xAD8

	.loc_0x1C0:
	  rlwinm    r3,r24,0,3,4
	  subis     r0, r3, 0x1800
	  cmplwi    r0, 0
	  bne-      .loc_0x330
	  bl        -0x23198
	  lwz       r0, 0x48(r29)
	  addi      r23, r28, 0x1E0
	  addi      r24, r29, 0x48
	  addi      r22, r23, 0
	  addi      r21, r3, 0x1
	  rlwinm    r26,r0,16,22,31
	  li        r25, 0

	.loc_0x1F0:
	  mr        r3, r25
	  bl        0x87C
	  cmpwi     r3, 0
	  beq-      .loc_0x204
	  stw       r21, 0x0(r22)

	.loc_0x204:
	  addi      r25, r25, 0x1
	  cmpwi     r25, 0x4
	  addi      r22, r22, 0x4
	  blt+      .loc_0x1F0
	  lwz       r5, 0x0(r24)
	  lis       r3, 0x8000
	  li        r0, 0x18
	  srw       r0, r3, r0
	  and.      r0, r5, r0
	  rlwinm    r6,r26,31,1,31
	  beq-      .loc_0x250
	  lwz       r0, 0x0(r23)
	  cmplwi    r0, 0
	  beq-      .loc_0x330
	  lwz       r0, 0x0(r23)
	  add       r0, r6, r0
	  cmplw     r0, r21
	  bge-      .loc_0x250
	  b         .loc_0x330

	.loc_0x250:
	  li        r0, 0x19
	  srw       r0, r3, r0
	  and.      r0, r5, r0
	  addi      r4, r23, 0x4
	  beq-      .loc_0x284
	  lwz       r0, 0x0(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x330
	  lwz       r0, 0x0(r4)
	  add       r0, r6, r0
	  cmplw     r0, r21
	  bge-      .loc_0x284
	  b         .loc_0x330

	.loc_0x284:
	  li        r0, 0x1A
	  srw       r0, r3, r0
	  and.      r0, r5, r0
	  addi      r4, r4, 0x4
	  beq-      .loc_0x2B8
	  lwz       r0, 0x0(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x330
	  lwz       r0, 0x0(r4)
	  add       r0, r6, r0
	  cmplw     r0, r21
	  bge-      .loc_0x2B8
	  b         .loc_0x330

	.loc_0x2B8:
	  li        r0, 0x1B
	  srw       r0, r3, r0
	  and.      r0, r5, r0
	  addi      r4, r4, 0x4
	  beq-      .loc_0x2EC
	  lwz       r0, 0x0(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x330
	  lwz       r0, 0x0(r4)
	  add       r0, r6, r0
	  cmplw     r0, r21
	  bge-      .loc_0x2EC
	  b         .loc_0x330

	.loc_0x2EC:
	  li        r22, 0
	  stw       r22, 0x0(r23)
	  addi      r21, r28, 0x1A0
	  stw       r22, 0x1E4(r28)
	  stw       r22, 0x1E8(r28)
	  stw       r22, 0x1EC(r28)

	.loc_0x304:
	  lwz       r12, 0x0(r21)
	  cmplwi    r12, 0
	  beq-      .loc_0x320
	  mtlr      r12
	  addi      r3, r30, 0
	  addi      r4, r31, 0
	  blrl

	.loc_0x320:
	  addi      r22, r22, 0x1
	  cmpwi     r22, 0x4
	  addi      r21, r21, 0x4
	  blt+      .loc_0x304

	.loc_0x330:
	  lmw       r21, 0x1C(r1)
	  lwz       r0, 0x4C(r1)
	  addi      r1, r1, 0x48
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F5598
 * Size:	000098
 */
void SIEnablePollingInterrupt(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stw       r31, 0x2C(r1)
	  addi      r31, r4, 0x7180
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  addi      r29, r3, 0
	  bl        -0x6984
	  lis       r4, 0xCC00
	  lwzu      r5, 0x6434(r4)
	  rlwinm.   r0,r5,0,4,4
	  beq-      .loc_0x40
	  li        r30, 0x1
	  b         .loc_0x44

	.loc_0x40:
	  li        r30, 0

	.loc_0x44:
	  cmpwi     r29, 0
	  beq-      .loc_0x68
	  li        r0, 0
	  stw       r0, 0x1E0(r31)
	  oris      r5, r5, 0x800
	  stw       r0, 0x1E4(r31)
	  stw       r0, 0x1E8(r31)
	  stw       r0, 0x1EC(r31)
	  b         .loc_0x6C

	.loc_0x68:
	  rlwinm    r5,r5,0,5,3

	.loc_0x6C:
	  rlwinm    r5,r5,0,1,30
	  stw       r5, 0x0(r4)
	  bl        -0x69AC
	  mr        r3, r30
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F5630
 * Size:	0000CC
 */
void SIRegisterPollingHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  bl        -0x6A10
	  lis       r4, 0x804F
	  li        r0, 0x4
	  addi      r4, r4, 0x7320
	  mtctr     r0
	  addi      r31, r3, 0
	  addi      r3, r4, 0

	.loc_0x34:
	  lwz       r0, 0x0(r3)
	  cmplw     r0, r30
	  bne-      .loc_0x50
	  mr        r3, r31
	  bl        -0x6A14
	  li        r3, 0x1
	  b         .loc_0xB4

	.loc_0x50:
	  addi      r3, r3, 0x4
	  bdnz+     .loc_0x34
	  li        r0, 0x4
	  mtctr     r0
	  li        r5, 0

	.loc_0x64:
	  lwz       r0, 0x0(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x9C
	  lis       r3, 0x804F
	  rlwinm    r4,r5,2,0,29
	  addi      r0, r3, 0x7320
	  add       r3, r0, r4
	  stw       r30, 0x0(r3)
	  li        r3, 0x1
	  bl        -0x120
	  mr        r3, r31
	  bl        -0x6A60
	  li        r3, 0x1
	  b         .loc_0xB4

	.loc_0x9C:
	  addi      r4, r4, 0x4
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x64
	  mr        r3, r31
	  bl        -0x6A7C
	  li        r3, 0

	.loc_0xB4:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F56FC
 * Size:	0000F4
 */
void SIUnregisterPollingHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  bl        -0x6ADC
	  lis       r4, 0x804F
	  li        r0, 0x4
	  addi      r5, r4, 0x7320
	  mtctr     r0
	  addi      r31, r3, 0
	  addi      r3, r5, 0
	  li        r4, 0

	.loc_0x38:
	  lwz       r0, 0x0(r3)
	  cmplw     r0, r30
	  bne-      .loc_0xC4
	  lis       r3, 0x804F
	  rlwinm    r4,r4,2,0,29
	  addi      r0, r3, 0x7320
	  add       r3, r0, r4
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  li        r4, 0
	  lwz       r0, 0x0(r5)
	  cmplwi    r0, 0
	  bne-      .loc_0xA4
	  addi      r3, r5, 0x4
	  lwz       r0, 0x4(r5)
	  li        r4, 0x1
	  cmplwi    r0, 0
	  bne-      .loc_0xA4
	  lwzu      r0, 0x4(r3)
	  li        r4, 0x2
	  cmplwi    r0, 0
	  bne-      .loc_0xA4
	  lwz       r0, 0x4(r3)
	  li        r4, 0x3
	  cmplwi    r0, 0
	  bne-      .loc_0xA4
	  li        r4, 0x4

	.loc_0xA4:
	  cmpwi     r4, 0x4
	  bne-      .loc_0xB4
	  li        r3, 0
	  bl        -0x214

	.loc_0xB4:
	  mr        r3, r31
	  bl        -0x6B54
	  li        r3, 0x1
	  b         .loc_0xDC

	.loc_0xC4:
	  addi      r3, r3, 0x4
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x38
	  mr        r3, r31
	  bl        -0x6B70
	  li        r3, 0

	.loc_0xDC:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F57F0
 * Size:	0000B4
 */
void SIInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x7180
	  lwz       r3, -0x7C60(r13)
	  bl        -0x9D84
	  li        r5, -0x1
	  stw       r5, 0x60(r31)
	  lis       r3, 0x804B
	  subi      r4, r3, 0x6104
	  stw       r5, 0x40(r31)
	  li        r0, 0
	  li        r3, 0
	  stw       r5, 0x20(r31)
	  stw       r5, 0x0(r31)
	  stw       r0, 0x4(r4)
	  bl        0xF24
	  lis       r3, 0xCC00

	.loc_0x50:
	  addi      r4, r3, 0x6400
	  lwzu      r0, 0x34(r4)
	  rlwinm.   r0,r0,0,31,31
	  bne+      .loc_0x50
	  lis       r0, 0x8000
	  lis       r3, 0x800F
	  stw       r0, 0x0(r4)
	  addi      r4, r3, 0x5254
	  li        r3, 0x14
	  bl        -0x6BE0
	  li        r3, 0x800
	  bl        -0x67E4
	  li        r3, 0
	  bl        0xA78
	  li        r3, 0x1
	  bl        0xA70
	  li        r3, 0x2
	  bl        0xA68
	  li        r3, 0x3
	  bl        0xA60
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F58A4
 * Size:	00020C
 */
void __SITransfer(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r9, 0x804B
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x48(r1)
	  stmw      r25, 0x2C(r1)
	  addi      r26, r3, 0
	  addi      r27, r4, 0
	  addi      r28, r5, 0
	  addi      r29, r6, 0
	  addi      r30, r7, 0
	  addi      r31, r8, 0
	  subi      r25, r9, 0x6148
	  bl        -0x6C9C
	  lwz       r0, 0x44(r25)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x4C
	  bl        -0x6C84
	  li        r3, 0
	  b         .loc_0x1F8

	.loc_0x4C:
	  lis       r6, 0xCC00
	  rlwinm    r0,r26,3,0,28
	  lwz       r7, 0x6438(r6)
	  lis       r4, 0xF00
	  sraw      r0, r4, r0
	  and       r7, r7, r0
	  stw       r7, 0x6438(r6)
	  addi      r0, r28, 0x3
	  rlwinm    r4,r0,30,2,31
	  stw       r26, 0x44(r25)
	  cmplwi    r4, 0
	  li        r5, 0
	  stw       r31, 0x54(r25)
	  stw       r30, 0x4C(r25)
	  stw       r29, 0x50(r25)
	  ble-      .loc_0x12C
	  cmplwi    r4, 0x8
	  subi      r7, r4, 0x8
	  ble-      .loc_0x1E0
	  addi      r0, r7, 0x7
	  rlwinm    r0,r0,29,3,31
	  cmplwi    r7, 0
	  mtctr     r0
	  addi      r7, r27, 0
	  addi      r6, r6, 0x6400
	  ble-      .loc_0x1E0

	.loc_0xB4:
	  lwz       r0, 0x0(r7)
	  addi      r5, r5, 0x8
	  stw       r0, 0x80(r6)
	  lwz       r0, 0x4(r7)
	  stw       r0, 0x84(r6)
	  lwz       r0, 0x8(r7)
	  stw       r0, 0x88(r6)
	  lwz       r0, 0xC(r7)
	  stw       r0, 0x8C(r6)
	  lwz       r0, 0x10(r7)
	  stw       r0, 0x90(r6)
	  lwz       r0, 0x14(r7)
	  stw       r0, 0x94(r6)
	  lwz       r0, 0x18(r7)
	  stw       r0, 0x98(r6)
	  lwz       r0, 0x1C(r7)
	  addi      r7, r7, 0x20
	  stw       r0, 0x9C(r6)
	  addi      r6, r6, 0x20
	  bdnz+     .loc_0xB4
	  b         .loc_0x1E0

	.loc_0x108:
	  sub       r0, r4, r5
	  cmplw     r5, r4
	  mtctr     r0
	  bge-      .loc_0x12C

	.loc_0x118:
	  lwz       r0, 0x0(r6)
	  addi      r6, r6, 0x4
	  stw       r0, 0x80(r7)
	  addi      r7, r7, 0x4
	  bdnz+     .loc_0x118

	.loc_0x12C:
	  lis       r4, 0xCC00
	  addi      r6, r4, 0x6400
	  lwzu      r0, 0x34(r6)
	  li        r4, 0x1
	  stw       r0, 0x24(r1)
	  cmplwi    r31, 0
	  lbz       r0, 0x24(r1)
	  rlwimi    r0,r4,7,24,24
	  stb       r0, 0x24(r1)
	  beq-      .loc_0x158
	  b         .loc_0x15C

	.loc_0x158:
	  li        r4, 0

	.loc_0x15C:
	  lbz       r0, 0x24(r1)
	  rlwimi    r0,r4,6,25,25
	  cmplwi    r28, 0x80
	  stb       r0, 0x24(r1)
	  bne-      .loc_0x178
	  li        r0, 0
	  b         .loc_0x17C

	.loc_0x178:
	  mr        r0, r28

	.loc_0x17C:
	  rlwinm    r4,r0,0,24,31
	  lbz       r0, 0x25(r1)
	  rlwimi    r0,r4,0,25,31
	  cmplwi    r30, 0x80
	  stb       r0, 0x25(r1)
	  bne-      .loc_0x19C
	  li        r0, 0
	  b         .loc_0x1A0

	.loc_0x19C:
	  mr        r0, r30

	.loc_0x1A0:
	  rlwinm    r4,r0,0,24,31
	  lbz       r0, 0x26(r1)
	  rlwimi    r0,r4,0,25,31
	  stb       r0, 0x26(r1)
	  li        r4, 0x1
	  lbz       r0, 0x27(r1)
	  rlwimi    r0,r26,1,29,30
	  stb       r0, 0x27(r1)
	  lbz       r0, 0x27(r1)
	  rlwimi    r0,r4,0,31,31
	  stb       r0, 0x27(r1)
	  lwz       r0, 0x24(r1)
	  stw       r0, 0x0(r6)
	  bl        -0x6E18
	  li        r3, 0x1
	  b         .loc_0x1F8

	.loc_0x1E0:
	  lis       r6, 0xCC00
	  rlwinm    r0,r5,2,0,29
	  addi      r7, r6, 0x6400
	  add       r6, r27, r0
	  add       r7, r7, r0
	  b         .loc_0x108

	.loc_0x1F8:
	  lmw       r25, 0x2C(r1)
	  lwz       r0, 0x4C(r1)
	  addi      r1, r1, 0x48
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 */
void SISync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F5AB0
 * Size:	00007C
 */
void SIGetStatus(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  bl        -0x6E90
	  lis       r4, 0xCC00
	  subfic    r0, r30, 0x3
	  lwz       r31, 0x6438(r4)
	  rlwinm    r0,r0,3,0,28
	  srw       r31, r31, r0
	  rlwinm.   r0,r31,0,28,28
	  beq-      .loc_0x5C
	  lis       r4, 0x804B
	  rlwinm    r5,r30,2,0,29
	  subi      r0, r4, 0x60F0
	  add       r4, r0, r5
	  lwz       r0, 0x0(r4)
	  rlwinm.   r0,r0,0,24,24
	  bne-      .loc_0x5C
	  li        r0, 0x8
	  stw       r0, 0x0(r4)

	.loc_0x5C:
	  bl        -0x6EAC
	  mr        r3, r31
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F5B2C
 * Size:	000014
 */
void SISetCommand(void)
{
	/*
	.loc_0x0:
	  mulli     r0, r3, 0xC
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6400
	  stwx      r4, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void SIGetCommand(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F5B40
 * Size:	000010
 */
void SITransferCommands(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xCC00
	  lis       r0, 0x8000
	  stw       r0, 0x6438(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F5B50
 * Size:	00006C
 */
void SISetXY(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  rlwinm    r0,r4,8,0,23
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  rlwinm    r31,r3,16,0,15
	  or        r31, r31, r0
	  bl        -0x6F34
	  lis       r4, 0x804B
	  subi      r4, r4, 0x6104
	  lwz       r0, 0x4(r4)
	  addi      r5, r4, 0x4
	  lis       r4, 0xCC00
	  rlwinm    r0,r0,0,24,5
	  stw       r0, 0x0(r5)
	  lwz       r0, 0x0(r5)
	  or        r0, r0, r31
	  stw       r0, 0x0(r5)
	  lwz       r31, 0x0(r5)
	  stw       r31, 0x6430(r4)
	  bl        -0x6F40
	  mr        r3, r31
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F5BBC
 * Size:	00009C
 */
void SIEnablePolling(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  mr.       r31, r3
	  bne-      .loc_0x28
	  lis       r3, 0x804B
	  subi      r3, r3, 0x6104
	  lwz       r3, 0x4(r3)
	  b         .loc_0x88

	.loc_0x28:
	  bl        -0x6FAC
	  lis       r4, 0x804B
	  subi      r4, r4, 0x6104
	  rlwinm    r31,r31,8,24,31
	  lwz       r0, 0x4(r4)
	  addi      r5, r4, 0x4
	  rlwinm    r4,r31,28,28,31
	  andc      r0, r0, r4
	  stw       r0, 0x0(r5)
	  oris      r0, r4, 0x3FF
	  ori       r0, r0, 0xFFF0
	  and       r31, r31, r0
	  lwz       r0, 0x0(r5)
	  rlwinm    r31,r31,0,24,5
	  or        r0, r0, r31
	  stw       r0, 0x0(r5)
	  lis       r4, 0xCC00
	  addi      r4, r4, 0x6400
	  lwz       r31, 0x0(r5)
	  lis       r0, 0x8000
	  stw       r0, 0x38(r4)
	  stw       r31, 0x30(r4)
	  bl        -0x6FDC
	  mr        r3, r31

	.loc_0x88:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F5C58
 * Size:	00006C
 */
void SIDisablePolling(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  mr.       r31, r3
	  bne-      .loc_0x28
	  lis       r3, 0x804B
	  subi      r3, r3, 0x6104
	  lwz       r3, 0x4(r3)
	  b         .loc_0x58

	.loc_0x28:
	  bl        -0x7048
	  lis       r4, 0x804B
	  subi      r4, r4, 0x6104
	  lwz       r0, 0x4(r4)
	  rlwinm    r31,r31,8,24,27
	  addi      r5, r4, 0x4
	  lis       r4, 0xCC00
	  andc      r31, r0, r31
	  stw       r31, 0x6430(r4)
	  stw       r31, 0x0(r5)
	  bl        -0x7048
	  mr        r3, r31

	.loc_0x58:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F5CC4
 * Size:	0000D4
 */
void SIGetResponseRaw(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  addi      r31, r4, 0x7180
	  stw       r30, 0x20(r1)
	  addi      r30, r3, 0
	  stw       r29, 0x1C(r1)
	  bl        -0x70B0
	  lis       r4, 0xCC00
	  subfic    r0, r30, 0x3
	  lwz       r29, 0x6438(r4)
	  rlwinm    r0,r0,3,0,28
	  srw       r29, r29, r0
	  rlwinm.   r0,r29,0,28,28
	  beq-      .loc_0x68
	  lis       r4, 0x804B
	  rlwinm    r5,r30,2,0,29
	  subi      r0, r4, 0x60F0
	  add       r4, r0, r5
	  lwz       r0, 0x0(r4)
	  rlwinm.   r0,r0,0,24,24
	  bne-      .loc_0x68
	  li        r0, 0x8
	  stw       r0, 0x0(r4)

	.loc_0x68:
	  bl        -0x70CC
	  rlwinm.   r0,r29,0,26,26
	  beq-      .loc_0xB4
	  mulli     r4, r30, 0xC
	  lis       r3, 0xCC00
	  addi      r0, r3, 0x6400
	  add       r3, r0, r4
	  rlwinm    r4,r30,3,0,28
	  lwz       r0, 0x4(r3)
	  add       r6, r31, r4
	  stw       r0, 0x1C0(r6)
	  rlwinm    r0,r30,2,0,29
	  add       r4, r31, r0
	  lwz       r5, 0x8(r3)
	  li        r0, 0x1
	  li        r3, 0x1
	  stw       r5, 0x1C4(r6)
	  stw       r0, 0x1B0(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F5D98
 * Size:	0000C4
 */
void SIGetResponse(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r5, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r27, 0x14(r1)
	  addi      r29, r3, 0
	  addi      r30, r4, 0
	  addi      r28, r5, 0x7180
	  bl        -0x7180
	  addi      r31, r3, 0
	  addi      r3, r29, 0
	  bl        -0x314
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0x70
	  mulli     r4, r29, 0xC
	  lis       r3, 0xCC00
	  addi      r0, r3, 0x6400
	  add       r4, r0, r4
	  rlwinm    r3,r29,3,0,28
	  lwz       r0, 0x4(r4)
	  add       r5, r28, r3
	  stw       r0, 0x1C0(r5)
	  rlwinm    r0,r29,2,0,29
	  add       r3, r28, r0
	  lwz       r4, 0x8(r4)
	  li        r0, 0x1
	  stw       r4, 0x1C4(r5)
	  stw       r0, 0x1B0(r3)

	.loc_0x70:
	  rlwinm    r0,r29,2,0,29
	  add       r3, r28, r0
	  lwz       r27, 0x1B0(r3)
	  li        r0, 0
	  cmpwi     r27, 0
	  stw       r0, 0x1B0(r3)
	  beq-      .loc_0xA4
	  rlwinm    r0,r29,3,0,28
	  add       r3, r28, r0
	  lwz       r0, 0x1C0(r3)
	  stw       r0, 0x0(r30)
	  lwz       r0, 0x1C4(r3)
	  stw       r0, 0x4(r30)

	.loc_0xA4:
	  mr        r3, r31
	  bl        -0x71E0
	  mr        r3, r27
	  lmw       r27, 0x14(r1)
	  lwz       r0, 0x2C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F5E5C
 * Size:	00008C
 */
void AlarmHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  addi      r0, r4, 0x7200
	  lis       r4, 0x6666
	  sub       r0, r3, r0
	  stwu      r1, -0x20(r1)
	  addi      r3, r4, 0x6667
	  mulhw     r0, r3, r0
	  stw       r31, 0x1C(r1)
	  srawi     r0, r0, 0x4
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  lis       r3, 0x804F
	  rlwinm    r4,r0,5,0,26
	  addi      r0, r3, 0x7180
	  add       r31, r0, r4
	  lwz       r3, 0x0(r31)
	  cmpwi     r3, -0x1
	  beq-      .loc_0x78
	  lwz       r4, 0x4(r31)
	  lwz       r5, 0x8(r31)
	  lwz       r6, 0xC(r31)
	  lwz       r7, 0x10(r31)
	  lwz       r8, 0x14(r31)
	  bl        -0x61C
	  cmpwi     r3, 0
	  beq-      .loc_0x78
	  li        r0, -0x1
	  stw       r0, 0x0(r31)

	.loc_0x78:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F5EE8
 * Size:	00016C
 */
void SITransfer(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x60(r1)
	  stmw      r19, 0x2C(r1)
	  addi      r24, r3, 0
	  lis       r3, 0x804F
	  addi      r23, r3, 0x7180
	  rlwinm    r0,r24,5,0,26
	  addi      r25, r4, 0
	  addi      r26, r5, 0
	  addi      r27, r6, 0
	  addi      r28, r7, 0
	  addi      r29, r8, 0
	  addi      r31, r9, 0
	  addi      r30, r10, 0
	  add       r22, r23, r0
	  bl        -0x72F0
	  lwz       r0, 0x0(r22)
	  addi      r21, r3, 0
	  cmpwi     r0, -0x1
	  bne-      .loc_0x64
	  lis       r3, 0x804B
	  lwz       r0, -0x6104(r3)
	  cmpw      r0, r24
	  bne-      .loc_0x74

	.loc_0x64:
	  mr        r3, r21
	  bl        -0x72F0
	  li        r3, 0
	  b         .loc_0x158

	.loc_0x74:
	  bl        -0x33AC
	  li        r0, 0
	  xor       r5, r30, r0
	  xor       r0, r31, r0
	  or.       r0, r5, r0
	  bne-      .loc_0x98
	  addi      r19, r4, 0
	  addi      r20, r3, 0
	  b         .loc_0xB0

	.loc_0x98:
	  rlwinm    r0,r24,3,0,28
	  add       r6, r23, r0
	  lwz       r5, 0x144(r6)
	  lwz       r0, 0x140(r6)
	  addc      r19, r30, r5
	  adde      r20, r31, r0

	.loc_0xB0:
	  xoris     r6, r3, 0x8000
	  xoris     r5, r20, 0x8000
	  subc      r0, r4, r19
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  beq-      .loc_0xF8
	  mulli     r0, r24, 0x28
	  subc      r30, r19, r4
	  subfe     r31, r3, r20
	  lis       r4, 0x800F
	  add       r3, r23, r0
	  addi      r7, r4, 0x5E5C
	  addi      r6, r30, 0
	  addi      r5, r31, 0
	  addi      r3, r3, 0x80
	  bl        -0xA26C
	  b         .loc_0x12C

	.loc_0xF8:
	  addi      r3, r24, 0
	  addi      r4, r25, 0
	  addi      r5, r26, 0
	  addi      r6, r27, 0
	  addi      r7, r28, 0
	  addi      r8, r29, 0
	  bl        -0x754
	  cmpwi     r3, 0
	  beq-      .loc_0x12C
	  mr        r3, r21
	  bl        -0x73A8
	  li        r3, 0x1
	  b         .loc_0x158

	.loc_0x12C:
	  stw       r24, 0x0(r22)
	  mr        r3, r21
	  stw       r25, 0x4(r22)
	  stw       r26, 0x8(r22)
	  stw       r27, 0xC(r22)
	  stw       r28, 0x10(r22)
	  stw       r29, 0x14(r22)
	  stw       r19, 0x1C(r22)
	  stw       r20, 0x18(r22)
	  bl        -0x73D8
	  li        r3, 0x1

	.loc_0x158:
	  lmw       r19, 0x2C(r1)
	  lwz       r0, 0x64(r1)
	  addi      r1, r1, 0x60
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void CallTypeAndStatusCallback(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F6054
 * Size:	000298
 */
void GetTypeCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r26, 0x18(r1)
	  addi      r27, r3, 0
	  lis       r3, 0x804B
	  subi      r0, r3, 0x60F0
	  rlwinm    r29,r27,2,0,29
	  add       r30, r0, r29
	  lis       r3, 0x804F
	  addi      r26, r4, 0
	  addi      r31, r3, 0x7180
	  lwz       r0, 0x0(r30)
	  rlwinm    r0,r0,0,25,23
	  stw       r0, 0x0(r30)
	  lwz       r0, 0x0(r30)
	  or        r0, r0, r26
	  stw       r0, 0x0(r30)
	  bl        -0x34EC
	  rlwinm    r0,r27,3,0,28
	  add       r5, r31, r0
	  stw       r4, 0x124(r5)
	  lis       r4, 0x8000
	  rlwinm.   r0,r26,0,28,31
	  stw       r3, 0x120(r5)
	  srw       r4, r4, r27
	  lwz       r3, -0x6FD8(r13)
	  lwz       r28, 0x0(r30)
	  andc      r0, r3, r4
	  stw       r0, -0x6FD8(r13)
	  and       r26, r3, r4
	  bne-      .loc_0xA0
	  rlwinm    r3,r28,0,3,4
	  subis     r0, r3, 0x800
	  cmplwi    r0, 0
	  bne-      .loc_0xA0
	  rlwinm.   r0,r28,0,0,0
	  beq-      .loc_0xA0
	  rlwinm.   r0,r28,0,5,5
	  beq-      .loc_0xF8

	.loc_0xA0:
	  addi      r3, r27, 0
	  li        r4, 0
	  bl        -0x4AFC
	  rlwinm    r0,r27,4,0,27
	  lwz       r30, 0x0(r30)
	  add       r31, r31, r0
	  li        r29, 0
	  addi      r28, r29, 0
	  addi      r31, r31, 0x160

	.loc_0xC4:
	  lwz       r12, 0x0(r31)
	  cmplwi    r12, 0
	  beq-      .loc_0xE4
	  stw       r28, 0x0(r31)
	  mtlr      r12
	  addi      r3, r27, 0
	  addi      r4, r30, 0
	  blrl

	.loc_0xE4:
	  addi      r29, r29, 0x1
	  cmpwi     r29, 0x4
	  addi      r31, r31, 0x4
	  blt+      .loc_0xC4
	  b         .loc_0x284

	.loc_0xF8:
	  mr        r3, r27
	  bl        -0x4BD4
	  cmpwi     r26, 0
	  rlwinm    r26,r3,8,8,23
	  beq-      .loc_0x15C
	  rlwinm.   r0,r26,0,11,11
	  beq-      .loc_0x15C
	  lis       r3, 0xD0
	  subi      r0, r3, 0x100
	  and       r0, r26, r0
	  oris      r0, r0, 0x4E10
	  add       r4, r31, r29
	  stwu      r0, 0x1F0(r4)
	  li        r0, 0x80
	  lis       r3, 0x800F
	  stw       r0, 0x0(r30)
	  addi      r8, r3, 0x6054
	  addi      r3, r27, 0
	  addi      r6, r30, 0
	  li        r5, 0x3
	  li        r7, 0x3
	  li        r10, 0
	  li        r9, 0
	  bl        -0x2C0
	  b         .loc_0x284

	.loc_0x15C:
	  rlwinm.   r0,r28,0,11,11
	  beq-      .loc_0x1D0
	  lis       r3, 0xD0
	  subi      r3, r3, 0x100
	  and       r0, r26, r3
	  and       r3, r28, r3
	  cmplw     r0, r3
	  beq-      .loc_0x23C
	  rlwinm.   r0,r26,0,11,11
	  bne-      .loc_0x194
	  oris      r26, r3, 0x10
	  addi      r3, r27, 0
	  rlwinm    r4,r26,24,16,31
	  bl        -0x4BE4

	.loc_0x194:
	  oris      r0, r26, 0x4E00
	  add       r4, r31, r29
	  stwu      r0, 0x1F0(r4)
	  li        r0, 0x80
	  lis       r3, 0x800F
	  stw       r0, 0x0(r30)
	  addi      r8, r3, 0x6054
	  addi      r3, r27, 0
	  addi      r6, r30, 0
	  li        r5, 0x3
	  li        r7, 0x3
	  li        r10, 0
	  li        r9, 0
	  bl        -0x334
	  b         .loc_0x284

	.loc_0x1D0:
	  rlwinm.   r0,r28,0,1,1
	  beq-      .loc_0x230
	  lis       r3, 0xD0
	  subi      r0, r3, 0x100
	  and       r28, r28, r0
	  oris      r28, r28, 0x10
	  addi      r3, r27, 0
	  rlwinm    r4,r28,24,16,31
	  bl        -0x4C44
	  oris      r0, r28, 0x4E00
	  add       r4, r31, r29
	  stwu      r0, 0x1F0(r4)
	  li        r0, 0x80
	  lis       r3, 0x800F
	  stw       r0, 0x0(r30)
	  addi      r8, r3, 0x6054
	  addi      r3, r27, 0
	  addi      r6, r30, 0
	  li        r5, 0x3
	  li        r7, 0x3
	  li        r10, 0
	  li        r9, 0
	  bl        -0x394
	  b         .loc_0x284

	.loc_0x230:
	  addi      r3, r27, 0
	  li        r4, 0
	  bl        -0x4C8C

	.loc_0x23C:
	  rlwinm    r0,r27,4,0,27
	  lwz       r30, 0x0(r30)
	  add       r31, r31, r0
	  li        r29, 0
	  addi      r28, r29, 0
	  addi      r31, r31, 0x160

	.loc_0x254:
	  lwz       r12, 0x0(r31)
	  cmplwi    r12, 0
	  beq-      .loc_0x274
	  stw       r28, 0x0(r31)
	  mtlr      r12
	  addi      r3, r27, 0
	  addi      r4, r30, 0
	  blrl

	.loc_0x274:
	  addi      r29, r29, 0x1
	  cmpwi     r29, 0x4
	  addi      r31, r31, 0x4
	  blt+      .loc_0x254

	.loc_0x284:
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F62EC
 * Size:	0001C4
 */
void SIGetType(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r27, 0x14(r1)
	  mr        r27, r3
	  bl        -0x76C8
	  lis       r4, 0x804B
	  rlwinm    r5,r27,2,0,29
	  subi      r0, r4, 0x60F0
	  add       r30, r0, r5
	  lwz       r28, 0x0(r30)
	  mr        r29, r3
	  bl        -0x376C
	  lis       r5, 0x804F
	  rlwinm    r6,r27,3,0,28
	  addi      r0, r5, 0x72A0
	  add       r31, r0, r6
	  lwz       r6, 0x4(r31)
	  lis       r5, 0x804B
	  subi      r5, r5, 0x6104
	  lwz       r0, 0x0(r31)
	  subc      r4, r4, r6
	  subfe     r0, r0, r3
	  lwz       r6, 0x4(r5)
	  li        r5, 0x80
	  sraw      r3, r5, r27
	  and.      r3, r6, r3
	  beq-      .loc_0xA0
	  cmplwi    r28, 0x8
	  beq-      .loc_0x94
	  bl        -0x37B4
	  stw       r4, 0x4(r31)
	  stw       r3, 0x0(r31)
	  mr        r3, r29
	  bl        -0x7714
	  mr        r3, r28
	  b         .loc_0x1B0

	.loc_0x94:
	  stw       r5, 0x0(r30)
	  li        r28, 0x80
	  b         .loc_0x150

	.loc_0xA0:
	  lis       r3, 0x8000
	  lwz       r6, 0xF8(r3)
	  lis       r5, 0x1062
	  addi      r5, r5, 0x4DD3
	  rlwinm    r6,r6,30,2,31
	  mulhwu    r5, r5, r6
	  rlwinm    r5,r5,26,6,31
	  mulli     r7, r5, 0x32
	  li        r3, 0
	  xoris     r6, r3, 0x8000
	  xoris     r5, r0, 0x8000
	  subc      r3, r7, r4
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  bne-      .loc_0xF8
	  cmplwi    r28, 0x8
	  beq-      .loc_0xF8
	  mr        r3, r29
	  bl        -0x7778
	  mr        r3, r28
	  b         .loc_0x1B0

	.loc_0xF8:
	  lis       r3, 0x8000
	  lwz       r6, 0xF8(r3)
	  lis       r5, 0x1062
	  addi      r5, r5, 0x4DD3
	  rlwinm    r6,r6,30,2,31
	  mulhwu    r5, r5, r6
	  rlwinm    r5,r5,26,6,31
	  mulli     r6, r5, 0x4B
	  li        r3, 0
	  xoris     r5, r3, 0x8000
	  xoris     r3, r0, 0x8000
	  subc      r0, r6, r4
	  subfe     r3, r3, r5
	  subfe     r3, r5, r5
	  neg.      r3, r3
	  bne-      .loc_0x144
	  li        r0, 0x80
	  stw       r0, 0x0(r30)
	  b         .loc_0x150

	.loc_0x144:
	  li        r0, 0x80
	  stw       r0, 0x0(r30)
	  li        r28, 0x80

	.loc_0x150:
	  bl        -0x388C
	  stw       r4, 0x4(r31)
	  lis       r4, 0x431C
	  lis       r5, 0x800F
	  stw       r3, 0x0(r31)
	  lis       r3, 0x8000
	  addi      r8, r5, 0x6054
	  lwz       r0, 0xF8(r3)
	  subi      r4, r4, 0x217D
	  addi      r3, r27, 0
	  rlwinm    r0,r0,30,2,31
	  mulhwu    r0, r4, r0
	  rlwinm    r0,r0,17,15,31
	  mulli     r0, r0, 0x41
	  rlwinm    r10,r0,29,3,31
	  addi      r6, r30, 0
	  subi      r4, r13, 0x6FDC
	  li        r5, 0x1
	  li        r7, 0x3
	  li        r9, 0
	  bl        -0x5A4
	  mr        r3, r29
	  bl        -0x7834
	  mr        r3, r28

	.loc_0x1B0:
	  lmw       r27, 0x14(r1)
	  lwz       r0, 0x2C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F64B0
 * Size:	00013C
 */
void SIGetTypeAsync(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  addi      r28, r3, 0
	  bl        -0x789C
	  addi      r30, r3, 0
	  addi      r3, r28, 0
	  bl        -0x1F4
	  lis       r4, 0x804B
	  rlwinm    r5,r28,2,0,29
	  subi      r0, r4, 0x60F0
	  add       r4, r0, r5
	  lwz       r0, 0x0(r4)
	  addi      r29, r3, 0
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0xFC
	  lis       r3, 0x804F
	  rlwinm    r4,r28,4,0,27
	  addi      r0, r3, 0x72E0
	  add       r4, r0, r4
	  lwz       r0, 0x0(r4)
	  li        r5, 0
	  cmplw     r0, r31
	  beq-      .loc_0x110
	  cmplwi    r0, 0
	  bne-      .loc_0x88
	  rlwinm    r0,r5,2,0,29
	  stwx      r31, r4, r0
	  b         .loc_0x110

	.loc_0x88:
	  addi      r3, r4, 0x4
	  lwz       r0, 0x4(r4)
	  li        r5, 0x1
	  cmplw     r0, r31
	  beq-      .loc_0x110
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  rlwinm    r0,r5,2,0,29
	  stwx      r31, r4, r0
	  b         .loc_0x110

	.loc_0xB0:
	  lwzu      r0, 0x4(r3)
	  li        r5, 0x2
	  cmplw     r0, r31
	  beq-      .loc_0x110
	  cmplwi    r0, 0
	  bne-      .loc_0xD4
	  rlwinm    r0,r5,2,0,29
	  stwx      r31, r4, r0
	  b         .loc_0x110

	.loc_0xD4:
	  lwz       r0, 0x4(r3)
	  li        r5, 0x3
	  cmplw     r0, r31
	  beq-      .loc_0x110
	  cmplwi    r0, 0
	  bne-      .loc_0x110
	  rlwinm    r0,r5,2,0,29
	  stwx      r31, r4, r0
	  b         .loc_0x110
	  b         .loc_0x110

	.loc_0xFC:
	  addi      r12, r31, 0
	  mtlr      r12
	  addi      r3, r28, 0
	  addi      r4, r29, 0
	  blrl

	.loc_0x110:
	  mr        r3, r30
	  bl        -0x7964
	  mr        r3, r29
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F65EC
 * Size:	00014C
 */
void SIDecodeType(void)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r3,0,28,28
	  rlwinm    r4,r3,0,24,31
	  rlwinm    r5,r3,0,0,23
	  beq-      .loc_0x18
	  li        r3, 0x8
	  blr

	.loc_0x18:
	  andi.     r0, r4, 0x47
	  beq-      .loc_0x28
	  li        r3, 0x40
	  blr

	.loc_0x28:
	  cmplwi    r4, 0
	  beq-      .loc_0x38
	  li        r3, 0x80
	  blr

	.loc_0x38:
	  rlwinm.   r3,r5,0,3,4
	  bne-      .loc_0xA0
	  rlwinm    r3,r5,0,0,15
	  lis       r0, 0x4
	  cmpw      r3, r0
	  beqlr-
	  bge-      .loc_0x74
	  lis       r0, 0x2
	  cmpw      r3, r0
	  beqlr-
	  bge-      .loc_0x98
	  lis       r0, 0x1
	  cmpw      r3, r0
	  beqlr-
	  b         .loc_0x98

	.loc_0x74:
	  lis       r0, 0x500
	  cmpw      r3, r0
	  beqlr-
	  bge-      .loc_0x98
	  lis       r0, 0x200
	  cmpw      r3, r0
	  beqlr-
	  b         .loc_0x98
	  blr

	.loc_0x98:
	  li        r3, 0x40
	  blr

	.loc_0xA0:
	  subis     r0, r3, 0x800
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  li        r3, 0x40
	  blr

	.loc_0xB4:
	  rlwinm    r3,r5,0,0,15
	  lis       r0, 0x900
	  cmpw      r3, r0
	  beqlr-
	  bge-      .loc_0xDC
	  lis       r0, 0x800
	  cmpw      r3, r0
	  beqlr-
	  b         .loc_0xDC
	  blr

	.loc_0xDC:
	  rlwinm    r3,r5,0,0,10
	  subis     r0, r3, 0x820
	  cmplwi    r0, 0
	  bne-      .loc_0xF4
	  lis       r3, 0x820
	  blr

	.loc_0xF4:
	  rlwinm.   r0,r5,0,0,0
	  beq-      .loc_0x12C
	  rlwinm.   r0,r5,0,5,5
	  bne-      .loc_0x12C
	  andis.    r3, r5, 0x8B10
	  addis     r0, r3, 0x74F0
	  cmplwi    r0, 0
	  bne-      .loc_0x11C
	  lis       r3, 0x8B10
	  blr

	.loc_0x11C:
	  rlwinm.   r0,r5,0,6,6
	  bne-      .loc_0x12C
	  lis       r3, 0x8800
	  blr

	.loc_0x12C:
	  andis.    r3, r5, 0x900
	  subis     r0, r3, 0x900
	  cmplwi    r0, 0
	  bne-      .loc_0x144
	  lis       r3, 0x900
	  blr

	.loc_0x144:
	  li        r3, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F6738
 * Size:	000024
 */
void SIProbe(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        -0x458
	  bl        -0x15C
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void SIGetTypeString(void)
{
	// UNUSED FUNCTION
}
