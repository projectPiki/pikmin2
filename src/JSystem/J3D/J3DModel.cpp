

/*
 * --INFO--
 * Address:	800662FC
 * Size:	000084
 */
void J3DModel::initialize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7950(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x4(r3)
	  addi      r3, r31, 0x24
	  stw       r0, 0x8(r31)
	  stw       r0, 0xC(r31)
	  stw       r0, 0x10(r31)
	  stw       r0, 0x14(r31)
	  stfs      f0, 0x18(r31)
	  stfs      f0, 0x1C(r31)
	  stfs      f0, 0x20(r31)
	  bl        0x83F64
	  addi      r3, r31, 0x54
	  bl        0x83F5C
	  li        r0, 0
	  stw       r0, 0x84(r31)
	  stw       r0, 0xC0(r31)
	  stw       r0, 0xC4(r31)
	  stw       r0, 0xC8(r31)
	  stw       r0, 0xCC(r31)
	  stw       r0, 0xD0(r31)
	  stw       r0, 0xD4(r31)
	  stw       r0, 0xD8(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80066380
 * Size:	0000C4
 */
void J3DModel::entryModelData(J3DModelData*, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  mr        r27, r3
	  mr        r29, r5
	  mr        r30, r6
	  stw       r28, 0x4(r3)
	  li        r3, 0x38
	  bl        -0x42504
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r4, 0x804A
	  addi      r0, r4, 0x1A14
	  stw       r0, 0x34(r31)
	  bl        0x22518

	.loc_0x44:
	  stw       r31, 0x84(r27)
	  mr        r4, r28
	  mr        r5, r30
	  lwz       r3, 0x84(r27)
	  bl        0x22544
	  cmpwi     r3, 0
	  beq-      .loc_0x64
	  b         .loc_0xB0

	.loc_0x64:
	  mr        r3, r27
	  mr        r4, r28
	  bl        .loc_0xC4
	  cmpwi     r3, 0
	  beq-      .loc_0x7C
	  b         .loc_0xB0

	.loc_0x7C:
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r29
	  bl        0xF8
	  cmpwi     r3, 0
	  beq-      .loc_0x98
	  b         .loc_0xB0

	.loc_0x98:
	  addi      r3, r27, 0x88
	  addi      r4, r28, 0x88
	  bl        -0x7838
	  mr        r3, r27
	  bl        0x1140
	  li        r3, 0

	.loc_0xB0:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xC4:
	*/
}

/*
 * --INFO--
 * Address:	80066444
 * Size:	0000BC
 */
void J3DModel::createShapePacket(J3DModelData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  lhz       r29, 0x7C(r4)
	  cmplwi    r29, 0
	  beq-      .loc_0x9C
	  mulli     r3, r29, 0x3C
	  addi      r3, r3, 0x10
	  bl        -0x424CC
	  lis       r4, 0x8006
	  lis       r5, 0x8006
	  subi      r4, r4, 0x70
	  mr        r7, r29
	  subi      r5, r5, 0x18
	  li        r6, 0x3C
	  bl        0x5B55C
	  stw       r3, 0xC4(r30)
	  li        r7, 0
	  li        r6, 0
	  b         .loc_0x90

	.loc_0x64:
	  lwz       r3, 0x80(r31)
	  rlwinm    r0,r7,2,14,29
	  lwz       r4, 0xC4(r30)
	  addi      r7, r7, 0x1
	  lwzx      r5, r3, r0
	  addi      r3, r6, 0x28
	  addi      r0, r6, 0x38
	  addi      r6, r6, 0x3C
	  stwx      r5, r4, r3
	  lwz       r3, 0xC4(r30)
	  stwx      r30, r3, r0

	.loc_0x90:
	  lhz       r0, 0x7C(r31)
	  cmpw      r7, r0
	  blt+      .loc_0x64

	.loc_0x9C:
	  lwz       r0, 0x24(r1)
	  li        r3, 0
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
 * Address:	80066500
 * Size:	0001D8
 */
void J3DModel::createMatPacket(J3DModelData*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r23, 0xC(r1)
	  mr        r24, r4
	  mr        r23, r3
	  mr        r26, r5
	  lhz       r25, 0x5C(r4)
	  cmplwi    r25, 0
	  beq-      .loc_0x54
	  rlwinm    r3,r25,6,10,25
	  addi      r3, r3, 0x10
	  bl        -0x42584
	  lis       r4, 0x8006
	  lis       r5, 0x8006
	  subi      r4, r4, 0x2D4
	  mr        r7, r25
	  subi      r5, r5, 0x278
	  li        r6, 0x40
	  bl        0x5B4A4
	  stw       r3, 0xC0(r23)

	.loc_0x54:
	  lhz       r31, 0x5C(r24)
	  rlwinm    r29,r26,0,12,12
	  rlwinm    r28,r26,0,13,13
	  rlwinm    r27,r26,0,14,14
	  li        r26, 0
	  b         .loc_0x1B4

	.loc_0x6C:
	  lwz       r5, 0x60(r24)
	  rlwinm    r4,r26,2,14,29
	  lwz       r3, 0xC0(r23)
	  rlwinm    r0,r26,6,10,25
	  lwzx      r30, r5, r4
	  add       r25, r3, r0
	  lwz       r5, 0xC4(r23)
	  lwz       r4, 0x8(r30)
	  mr        r3, r25
	  lhz       r0, 0x8(r4)
	  mulli     r0, r0, 0x3C
	  stw       r30, 0x30(r25)
	  add       r4, r5, r0
	  stw       r4, 0x28(r25)
	  bl        -0x67B0
	  lwz       r0, 0x6C(r24)
	  stw       r0, 0x38(r25)
	  lwz       r0, 0x20(r30)
	  stw       r0, 0x34(r25)
	  lwz       r0, 0x1C(r24)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xD0
	  lwz       r0, 0x10(r25)
	  ori       r0, r0, 0x1
	  stw       r0, 0x10(r25)

	.loc_0xD0:
	  cmplwi    r29, 0
	  beq-      .loc_0xE4
	  lwz       r0, 0x48(r30)
	  stw       r0, 0x20(r25)
	  b         .loc_0x1B0

	.loc_0xE4:
	  lwz       r0, 0x1C(r24)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x124
	  cmplwi    r28, 0
	  beq-      .loc_0x104
	  lwz       r0, 0x48(r30)
	  stw       r0, 0x20(r25)
	  b         .loc_0x1B0

	.loc_0x104:
	  lwz       r30, 0x48(r30)
	  mr        r3, r30
	  bl        -0x6D28
	  cmpwi     r3, 0
	  beq-      .loc_0x11C
	  b         .loc_0x1C4

	.loc_0x11C:
	  stw       r30, 0x20(r25)
	  b         .loc_0x1B0

	.loc_0x124:
	  cmplwi    r27, 0
	  beq-      .loc_0x17C
	  cmplwi    r28, 0
	  beq-      .loc_0x154
	  mr        r3, r30
	  bl        -0x3E50
	  mr        r4, r3
	  mr        r3, r30
	  bl        -0x2EF8
	  lwz       r0, 0x48(r30)
	  stw       r0, 0x20(r25)
	  b         .loc_0x1B0

	.loc_0x154:
	  mr        r3, r30
	  bl        -0x3E70
	  mr        r4, r3
	  mr        r3, r30
	  bl        -0x2FAC
	  lwz       r30, 0x48(r30)
	  mr        r3, r30
	  bl        -0x6D8C
	  stw       r30, 0x20(r25)
	  b         .loc_0x1B0

	.loc_0x17C:
	  cmplwi    r28, 0
	  beq-      .loc_0x19C
	  mr        r3, r30
	  bl        -0x3EA0
	  mr        r4, r3
	  mr        r3, r25
	  bl        -0x6A30
	  b         .loc_0x1B0

	.loc_0x19C:
	  mr        r3, r30
	  bl        -0x3EB8
	  mr        r4, r3
	  mr        r3, r25
	  bl        -0x6AEC

	.loc_0x1B0:
	  addi      r26, r26, 0x1

	.loc_0x1B4:
	  rlwinm    r0,r26,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x6C
	  li        r3, 0

	.loc_0x1C4:
	  lmw       r23, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800666D8
 * Size:	000090
 */
void J3DModel::newDifferedDisplayList(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  stw       r29, 0xC(r3)
	  lwz       r3, 0x4(r3)
	  lhz       r31, 0x7C(r3)
	  b         .loc_0x60

	.loc_0x38:
	  rlwinm    r0,r30,0,16,31
	  lwz       r3, 0xC4(r28)
	  mulli     r0, r0, 0x3C
	  mr        r4, r29
	  add       r3, r3, r0
	  bl        -0x644C
	  cmpwi     r3, 0
	  beq-      .loc_0x5C
	  b         .loc_0x70

	.loc_0x5C:
	  addi      r30, r30, 0x1

	.loc_0x60:
	  rlwinm    r0,r30,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x38
	  li        r3, 0

	.loc_0x70:
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
 * Address:	80066768
 * Size:	00008C
 */
void J3DModel::newDifferedTexMtx(J3DTexDiffFlag)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r3, 0x4(r3)
	  lhz       r31, 0x7C(r3)
	  b         .loc_0x5C

	.loc_0x34:
	  rlwinm    r0,r30,0,16,31
	  lwz       r3, 0xC4(r28)
	  mulli     r0, r0, 0x3C
	  mr        r4, r29
	  add       r3, r3, r0
	  bl        -0x641C
	  cmpwi     r3, 0
	  beq-      .loc_0x58
	  b         .loc_0x6C

	.loc_0x58:
	  addi      r30, r30, 0x1

	.loc_0x5C:
	  rlwinm    r0,r30,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x34
	  li        r3, 0

	.loc_0x6C:
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
 * Size:	0000B4
 */
void J3DModel::ptrToIndex()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800667F4
 * Size:	000130
 */
void J3DModel::lock()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  li        r6, 0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lwz       r4, 0x4(r3)
	  lhz       r5, 0x5C(r4)
	  cmpwi     r5, 0
	  ble-      .loc_0x120
	  cmpwi     r5, 0x8
	  subi      r7, r5, 0x8
	  ble-      .loc_0xF0
	  addi      r0, r7, 0x7
	  li        r4, 0
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r7, 0
	  ble-      .loc_0xF0

	.loc_0x44:
	  lwz       r30, 0xC0(r3)
	  addi      r7, r4, 0x10
	  addi      r31, r4, 0x50
	  addi      r12, r4, 0x90
	  lwzx      r0, r30, r7
	  addi      r11, r4, 0xD0
	  addi      r10, r4, 0x110
	  addi      r9, r4, 0x150
	  ori       r0, r0, 0x1
	  addi      r8, r4, 0x190
	  stwx      r0, r30, r7
	  addi      r7, r4, 0x1D0
	  addi      r4, r4, 0x200
	  addi      r6, r6, 0x8
	  lwz       r30, 0xC0(r3)
	  lwzx      r0, r30, r31
	  ori       r0, r0, 0x1
	  stwx      r0, r30, r31
	  lwz       r31, 0xC0(r3)
	  lwzx      r0, r31, r12
	  ori       r0, r0, 0x1
	  stwx      r0, r31, r12
	  lwz       r12, 0xC0(r3)
	  lwzx      r0, r12, r11
	  ori       r0, r0, 0x1
	  stwx      r0, r12, r11
	  lwz       r11, 0xC0(r3)
	  lwzx      r0, r11, r10
	  ori       r0, r0, 0x1
	  stwx      r0, r11, r10
	  lwz       r10, 0xC0(r3)
	  lwzx      r0, r10, r9
	  ori       r0, r0, 0x1
	  stwx      r0, r10, r9
	  lwz       r9, 0xC0(r3)
	  lwzx      r0, r9, r8
	  ori       r0, r0, 0x1
	  stwx      r0, r9, r8
	  lwz       r8, 0xC0(r3)
	  lwzx      r0, r8, r7
	  ori       r0, r0, 0x1
	  stwx      r0, r8, r7
	  bdnz+     .loc_0x44

	.loc_0xF0:
	  sub       r0, r5, r6
	  rlwinm    r7,r6,6,0,25
	  mtctr     r0
	  cmpw      r6, r5
	  bge-      .loc_0x120

	.loc_0x104:
	  lwz       r5, 0xC0(r3)
	  addi      r4, r7, 0x10
	  addi      r7, r7, 0x40
	  lwzx      r0, r5, r4
	  ori       r0, r0, 0x1
	  stwx      r0, r5, r4
	  bdnz+     .loc_0x104

	.loc_0x120:
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000130
 */
void J3DModel::unlock()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80066924
 * Size:	0000A4
 */
void J3DModel::makeDL()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r4, 0xDD0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  stw       r28, 0x38(r31)
	  lwz       r3, 0x4(r3)
	  lwz       r0, 0x6C(r3)
	  stw       r0, 0x58(r31)
	  lhz       r30, 0x5C(r3)
	  b         .loc_0x78

	.loc_0x44:
	  lwz       r4, 0xC0(r28)
	  rlwinm    r3,r29,6,10,25
	  rlwinm    r0,r29,2,14,29
	  add       r3, r4, r3
	  stw       r3, 0x3C(r31)
	  lwz       r3, 0x4(r28)
	  lwz       r3, 0x60(r3)
	  lwzx      r3, r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x1

	.loc_0x78:
	  rlwinm    r0,r29,0,16,31
	  cmplw     r0, r30
	  blt+      .loc_0x44
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
 * Address:	800669C8
 * Size:	000164
 */
void J3DModel::calcMaterial()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r28, r3
	  subi      r3, r4, 0xDD0
	  stw       r28, 0x38(r3)
	  lwz       r0, 0x8(r28)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x3C
	  lwz       r0, 0x34(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0x34(r3)
	  b         .loc_0x48

	.loc_0x3C:
	  lwz       r0, 0x34(r3)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x34(r3)

	.loc_0x48:
	  lwz       r0, 0x8(r28)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x6C
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  lwz       r0, 0x34(r3)
	  ori       r0, r0, 0x8
	  stw       r0, 0x34(r3)
	  b         .loc_0x80

	.loc_0x6C:
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  lwz       r0, 0x34(r3)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x34(r3)

	.loc_0x80:
	  lwz       r3, 0x4(r28)
	  bl        0x1D12C
	  lwz       r4, 0x4(r28)
	  lis       r3, 0x8051
	  subi      r31, r3, 0xDD0
	  li        r29, 0
	  lwz       r0, 0x6C(r4)
	  lis       r27, 0xC000
	  stw       r0, 0x58(r31)
	  lhz       r30, 0x5C(r4)
	  b         .loc_0x144

	.loc_0xAC:
	  lwz       r4, 0xC0(r28)
	  rlwinm    r3,r29,6,10,25
	  rlwinm    r0,r29,2,14,29
	  add       r3, r4, r3
	  stw       r3, 0x3C(r31)
	  lwz       r3, 0x4(r28)
	  lwz       r3, 0x60(r3)
	  lwzx      r26, r3, r0
	  lwz       r3, 0x3C(r26)
	  cmplw     r3, r27
	  bge-      .loc_0xE0
	  mr        r0, r3
	  b         .loc_0xE4

	.loc_0xE0:
	  li        r0, 0

	.loc_0xE4:
	  cmplwi    r0, 0
	  beq-      .loc_0x114
	  lis       r0, 0xC000
	  cmplw     r3, r0
	  bge-      .loc_0xFC
	  b         .loc_0x100

	.loc_0xFC:
	  li        r3, 0

	.loc_0x100:
	  lwz       r12, 0x0(r3)
	  mr        r4, r26
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x114:
	  lwz       r4, 0xC(r26)
	  mr        r3, r26
	  lwz       r5, 0x84(r28)
	  lhz       r0, 0x14(r4)
	  lwz       r12, 0x0(r26)
	  mulli     r0, r0, 0x30
	  lwz       r4, 0xC(r5)
	  lwz       r12, 0x8(r12)
	  add       r4, r4, r0
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x1

	.loc_0x144:
	  rlwinm    r0,r29,0,16,31
	  cmplw     r0, r30
	  blt+      .loc_0xAC
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80066B2C
 * Size:	000140
 */
void J3DModel::calcDiffTexMtx()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r30, r3
	  subi      r31, r4, 0xDD0
	  li        r26, 0
	  stw       r30, 0x38(r31)
	  lwz       r3, 0x4(r3)
	  lhz       r29, 0x5C(r3)
	  b         .loc_0x7C

	.loc_0x30:
	  lwz       r4, 0xC0(r30)
	  rlwinm    r3,r26,6,10,25
	  rlwinm    r0,r26,2,14,29
	  add       r3, r4, r3
	  stw       r3, 0x3C(r31)
	  lwz       r4, 0x4(r30)
	  lwz       r3, 0x84(r30)
	  lwz       r4, 0x60(r4)
	  lwz       r5, 0xC(r3)
	  lwzx      r3, r4, r0
	  lwz       r4, 0xC(r3)
	  lwz       r12, 0x0(r3)
	  lhz       r0, 0x14(r4)
	  lwz       r12, 0xC(r12)
	  mulli     r0, r0, 0x30
	  add       r4, r5, r0
	  mtctr     r12
	  bctrl
	  addi      r26, r26, 0x1

	.loc_0x7C:
	  rlwinm    r0,r26,0,16,31
	  cmplw     r0, r29
	  blt+      .loc_0x30
	  lwz       r3, 0x4(r30)
	  li        r31, 0
	  lhz       r29, 0x7C(r3)
	  b         .loc_0x120

	.loc_0x98:
	  lwz       r3, 0x4(r30)
	  rlwinm    r4,r31,0,16,31
	  rlwinm    r0,r31,2,14,29
	  lwz       r5, 0xC4(r30)
	  lwz       r3, 0x80(r3)
	  mulli     r4, r4, 0x3C
	  li        r25, 0
	  lwzx      r3, r3, r0
	  add       r28, r5, r4
	  lwz       r3, 0x4(r3)
	  lwz       r27, 0x28(r3)
	  b         .loc_0x110

	.loc_0xC8:
	  mr        r3, r27
	  rlwinm    r26,r25,0,16,31
	  lwz       r12, 0x0(r27)
	  mr        r4, r26
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  lwz       r4, 0x24(r28)
	  beq-      .loc_0x10C
	  cmplwi    r4, 0
	  beq-      .loc_0x10C
	  mulli     r0, r26, 0x30
	  lwz       r4, 0x0(r4)
	  addi      r3, r3, 0x64
	  add       r4, r4, r0
	  bl        0x83698

	.loc_0x10C:
	  addi      r25, r25, 0x1

	.loc_0x110:
	  rlwinm    r0,r25,0,16,31
	  cmpwi     r0, 0x8
	  blt+      .loc_0xC8
	  addi      r31, r31, 0x1

	.loc_0x120:
	  rlwinm    r0,r31,0,16,31
	  cmplw     r0, r29
	  blt+      .loc_0x98
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void J3DModel::patch()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80066C6C
 * Size:	00009C
 */
void J3DModel::diff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lis       r3, 0x8051
	  lwz       r4, 0x4(r28)
	  subi      r31, r3, 0xDD0
	  lhz       r30, 0x5C(r4)
	  b         .loc_0x70

	.loc_0x38:
	  lwz       r4, 0xC0(r28)
	  rlwinm    r3,r29,6,10,25
	  rlwinm    r0,r29,2,14,29
	  add       r3, r4, r3
	  stw       r3, 0x3C(r31)
	  lwz       r3, 0x4(r28)
	  lwz       r4, 0xC(r28)
	  lwz       r3, 0x60(r3)
	  lwzx      r3, r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x1

	.loc_0x70:
	  rlwinm    r0,r29,0,16,31
	  cmplw     r0, r30
	  blt+      .loc_0x38
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
 * Size:	00005C
 */
void J3DModel::setDeformData(J3DDeformData*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
void J3DModel::setSkinDeform(J3DSkinDeform*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80066D08
 * Size:	000034
 */
void J3DModel::setVtxColorCalc(J3DVtxColorCalc*, J3DDeformAttachFlag)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0xD0(r3)
	  beq-      .loc_0x24
	  mr        r4, r5
	  addi      r3, r3, 0x88
	  bl        -0x8028

	.loc_0x24:
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
void J3DModel::setVtxShader(J3DVtxShader*, J3DDeformAttachFlag)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void J3DModel::calcAnmMtx()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80066D3C
 * Size:	00004C
 */
void J3DModel::calcWeightEnvelopeMtx()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  lhz       r0, 0x2E(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x3C
	  lwz       r0, 0x8(r4)
	  rlwinm.   r0,r0,0,23,23
	  bne-      .loc_0x3C
	  lwz       r3, 0x84(r3)
	  bl        0x22098

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80066D88
 * Size:	00004C
 */
void J3DModel::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80066DD4
 * Size:	0001E0
 */
void J3DModel::calc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0xDD0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stw       r30, 0x38(r31)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x40
	  lwz       r0, 0x34(r31)
	  ori       r0, r0, 0x4
	  stw       r0, 0x34(r31)
	  b         .loc_0x4C

	.loc_0x40:
	  lwz       r0, 0x34(r31)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x34(r31)

	.loc_0x4C:
	  lwz       r0, 0x8(r30)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x70
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  lwz       r0, 0x34(r3)
	  ori       r0, r0, 0x8
	  stw       r0, 0x34(r3)
	  b         .loc_0x84

	.loc_0x70:
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  lwz       r0, 0x34(r3)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x34(r3)

	.loc_0x84:
	  lwz       r3, 0x4(r30)
	  bl        0x1CD1C
	  lwz       r0, 0x8C(r30)
	  stw       r0, 0xB4(r30)
	  lwz       r0, 0x94(r30)
	  stw       r0, 0xB8(r30)
	  lwz       r0, 0x9C(r30)
	  stw       r0, 0xBC(r30)
	  lwz       r3, 0xD8(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x4(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC4:
	  lwz       r3, 0xC8(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xD8
	  mr        r4, r30
	  bl        0x36F4

	.loc_0xD8:
	  lwz       r3, 0xD0(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xEC
	  mr        r4, r30
	  bl        0x21824

	.loc_0xEC:
	  lwz       r3, 0xD4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x10C
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x10C:
	  stw       r30, 0x38(r31)
	  lwz       r0, 0x8(r30)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x148
	  lwz       r3, 0x4(r30)
	  lis       r5, 0x8048
	  lwzu      r12, 0x10(r3)
	  lis       r6, 0x8048
	  lwz       r4, 0x84(r30)
	  subi      r5, r5, 0x77A0
	  lwz       r12, 0x8(r12)
	  subi      r6, r6, 0x7794
	  mtctr     r12
	  bctrl
	  b         .loc_0x168

	.loc_0x148:
	  lwz       r3, 0x4(r30)
	  addi      r5, r30, 0x18
	  lwzu      r12, 0x10(r3)
	  addi      r6, r30, 0x24
	  lwz       r4, 0x84(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x168:
	  lwz       r3, 0x4(r30)
	  lhz       r0, 0x2E(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x198
	  lwz       r0, 0x8(r30)
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x198
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,23,23
	  bne-      .loc_0x198
	  lwz       r3, 0x84(r30)
	  bl        0x21EA4

	.loc_0x198:
	  lwz       r3, 0xCC(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x1AC
	  mr        r4, r30
	  bl        0x216DC

	.loc_0x1AC:
	  lwz       r12, 0x10(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0x1C8
	  mr        r3, r30
	  li        r4, 0
	  mtctr     r12
	  bctrl

	.loc_0x1C8:
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
 * Address:	80066FB4
 * Size:	0000F4
 */
void J3DModel::entry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  subi      r3, r4, 0xDD0
	  stw       r30, 0x8(r1)
	  stw       r31, 0x38(r3)
	  lwz       r0, 0x8(r31)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x40
	  lwz       r0, 0x34(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0x34(r3)
	  b         .loc_0x4C

	.loc_0x40:
	  lwz       r0, 0x34(r3)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x34(r3)

	.loc_0x4C:
	  lwz       r0, 0x8(r31)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x70
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  lwz       r0, 0x34(r3)
	  ori       r0, r0, 0x8
	  stw       r0, 0x34(r3)
	  b         .loc_0x84

	.loc_0x70:
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  lwz       r0, 0x34(r3)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x34(r3)

	.loc_0x84:
	  lwz       r3, 0x4(r31)
	  bl        0x1CB3C
	  lwz       r4, 0x4(r31)
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  li        r30, 0
	  lwz       r0, 0x6C(r4)
	  stw       r0, 0x58(r3)
	  b         .loc_0xC8

	.loc_0xA8:
	  lwz       r3, 0x28(r4)
	  rlwinm    r0,r30,2,14,29
	  lwzx      r3, r3, r0
	  lwz       r0, 0x58(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC4
	  bl        0x4944

	.loc_0xC4:
	  addi      r30, r30, 0x1

	.loc_0xC8:
	  lwz       r4, 0x4(r31)
	  rlwinm    r0,r30,0,16,31
	  lhz       r3, 0x2C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0xA8
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
 * Address:	800670A8
 * Size:	000368
 */
void J3DModel::viewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r3
	  lwz       r6, 0x84(r3)
	  lwz       r0, 0x30(r6)
	  lwz       r4, 0x14(r6)
	  rlwinm    r7,r0,2,0,29
	  lwz       r3, 0x18(r6)
	  lwzx      r5, r4, r7
	  lwzx      r0, r3, r7
	  stwx      r0, r4, r7
	  lwz       r0, 0x30(r6)
	  lwz       r3, 0x18(r6)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r3, r0
	  lwz       r6, 0x84(r31)
	  lwz       r0, 0x30(r6)
	  lwz       r4, 0x1C(r6)
	  rlwinm    r7,r0,2,0,29
	  lwz       r3, 0x20(r6)
	  lwzx      r5, r4, r7
	  lwzx      r0, r3, r7
	  stwx      r0, r4, r7
	  lwz       r0, 0x30(r6)
	  lwz       r3, 0x20(r6)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r3, r0
	  lwz       r3, 0x4(r31)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x13C
	  lwz       r0, 0x8(r31)
	  rlwinm    r0,r0,0,30,31
	  cmplwi    r0, 0x2
	  bne-      .loc_0x34C
	  lfs       f0, 0x24(r31)
	  lis       r3, 0x8051
	  lfs       f3, 0x18(r31)
	  subi      r3, r3, 0xDD0
	  addi      r4, r1, 0x38
	  addi      r5, r31, 0x54
	  fmuls     f0, f0, f3
	  stfs      f0, 0x38(r1)
	  lfs       f0, 0x28(r31)
	  lfs       f2, 0x1C(r31)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x3C(r1)
	  lfs       f0, 0x2C(r31)
	  lfs       f1, 0x20(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x40(r1)
	  lfs       f0, 0x30(r31)
	  stfs      f0, 0x44(r1)
	  lfs       f0, 0x34(r31)
	  fmuls     f0, f0, f3
	  stfs      f0, 0x48(r1)
	  lfs       f0, 0x38(r31)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x4C(r1)
	  lfs       f0, 0x3C(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x50(r1)
	  lfs       f0, 0x40(r31)
	  stfs      f0, 0x54(r1)
	  lfs       f0, 0x44(r31)
	  fmuls     f0, f0, f3
	  stfs      f0, 0x58(r1)
	  lfs       f0, 0x48(r31)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x5C(r1)
	  lfs       f0, 0x4C(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x60(r1)
	  lfs       f0, 0x50(r31)
	  stfs      f0, 0x64(r1)
	  bl        0x83124
	  b         .loc_0x34C

	.loc_0x13C:
	  lwz       r4, 0x8(r31)
	  li        r3, 0
	  rlwinm.   r5,r4,0,29,29
	  beq-      .loc_0x158
	  rlwinm.   r0,r4,0,28,28
	  beq-      .loc_0x158
	  li        r3, 0x1

	.loc_0x158:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x214
	  rlwinm    r0,r4,0,30,31
	  cmplwi    r0, 0x2
	  bne-      .loc_0x34C
	  lfs       f0, 0x24(r31)
	  lis       r3, 0x8051
	  lfs       f3, 0x18(r31)
	  subi      r3, r3, 0xDD0
	  addi      r4, r1, 0x8
	  addi      r5, r31, 0x54
	  fmuls     f0, f0, f3
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x28(r31)
	  lfs       f2, 0x1C(r31)
	  fmuls     f0, f0, f2
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x2C(r31)
	  lfs       f1, 0x20(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x30(r31)
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x34(r31)
	  fmuls     f0, f0, f3
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x38(r31)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x3C(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x20(r1)
	  lfs       f0, 0x40(r31)
	  stfs      f0, 0x24(r1)
	  lfs       f0, 0x44(r31)
	  fmuls     f0, f0, f3
	  stfs      f0, 0x28(r1)
	  lfs       f0, 0x48(r31)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x2C(r1)
	  lfs       f0, 0x4C(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x30(r1)
	  lfs       f0, 0x50(r31)
	  stfs      f0, 0x34(r1)
	  bl        0x8304C
	  b         .loc_0x34C

	.loc_0x214:
	  cmplwi    r5, 0
	  beq-      .loc_0x28C
	  lwz       r3, 0x84(r31)
	  rlwinm    r4,r4,0,30,31
	  addi      r5, r31, 0x18
	  addi      r6, r31, 0x24
	  bl        0x21D58
	  mr        r3, r31
	  bl        .loc_0x368
	  mr        r3, r31
	  bl        0x150
	  lwz       r5, 0x84(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x30(r5)
	  lhz       r0, 0x44(r3)
	  lwz       r5, 0x18(r5)
	  rlwinm    r3,r4,2,0,29
	  mulli     r4, r0, 0x30
	  lwzx      r3, r5, r3
	  bl        0x8549C
	  lwz       r5, 0x84(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x30(r5)
	  lhz       r0, 0x44(r3)
	  lwz       r5, 0x20(r5)
	  rlwinm    r3,r4,2,0,29
	  mulli     r4, r0, 0x24
	  lwzx      r3, r5, r3
	  bl        0x8541C
	  b         .loc_0x34C

	.loc_0x28C:
	  rlwinm.   r0,r4,0,28,28
	  beq-      .loc_0x2D8
	  lwz       r3, 0x84(r31)
	  rlwinm    r4,r4,0,30,31
	  addi      r5, r31, 0x18
	  addi      r6, r31, 0x24
	  bl        0x21CE0
	  mr        r3, r31
	  bl        0x1E0
	  lwz       r5, 0x84(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x30(r5)
	  lhz       r0, 0x44(r3)
	  lwz       r5, 0x18(r5)
	  rlwinm    r3,r4,2,0,29
	  mulli     r4, r0, 0x30
	  lwzx      r3, r5, r3
	  bl        0x853D0
	  b         .loc_0x34C

	.loc_0x2D8:
	  lwz       r3, 0x84(r31)
	  rlwinm    r4,r4,0,30,31
	  addi      r5, r31, 0x18
	  addi      r6, r31, 0x24
	  bl        0x21C9C
	  mr        r3, r31
	  bl        .loc_0x368
	  mr        r3, r31
	  bl        0x194
	  mr        r3, r31
	  bl        0x8C
	  lwz       r5, 0x84(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x30(r5)
	  lhz       r0, 0x44(r3)
	  lwz       r5, 0x18(r5)
	  rlwinm    r3,r4,2,0,29
	  mulli     r4, r0, 0x30
	  lwzx      r3, r5, r3
	  bl        0x853D8
	  lwz       r5, 0x84(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x30(r5)
	  lhz       r0, 0x44(r3)
	  lwz       r5, 0x20(r5)
	  rlwinm    r3,r4,2,0,29
	  mulli     r4, r0, 0x24
	  lwzx      r3, r5, r3
	  bl        0x85358

	.loc_0x34C:
	  mr        r3, r31
	  bl        0x170
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr

	.loc_0x368:
	*/
}

/*
 * --INFO--
 * Address:	80067410
 * Size:	000024
 */
void J3DModel::calcNrmMtx()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x84(r3)
	  bl        0x21F10
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80067434
 * Size:	000100
 */
void J3DModel::calcBumpMtx()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r28, r3
	  lwz       r3, 0x4(r3)
	  lhz       r0, 0xC(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xEC
	  lhz       r31, 0x5C(r3)
	  li        r29, 0
	  li        r30, 0
	  b         .loc_0xE0

	.loc_0x34:
	  lwz       r3, 0x4(r28)
	  rlwinm    r0,r29,2,14,29
	  lwz       r3, 0x60(r3)
	  lwzx      r27, r3, r0
	  lwz       r3, 0x28(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xDC
	  lwz       r6, 0x84(r28)
	  lwz       r3, 0x28(r27)
	  lwz       r4, 0x28(r6)
	  lwz       r12, 0x0(r3)
	  lwz       r0, 0x30(r6)
	  lwzx      r5, r4, r30
	  rlwinm    r0,r0,2,0,29
	  lwz       r4, 0x20(r6)
	  lwz       r12, 0x5C(r12)
	  lwzx      r26, r5, r0
	  lwzx      r25, r4, r0
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x8(r27)
	  mr        r5, r25
	  mr        r6, r26
	  addi      r4, r4, 0x4
	  bl        -0x6C20
	  lwz       r4, 0x84(r28)
	  lwz       r3, 0x4(r28)
	  lwz       r5, 0x28(r4)
	  lwz       r4, 0x30(r4)
	  lhz       r0, 0x44(r3)
	  lwzx      r5, r5, r30
	  rlwinm    r3,r4,2,0,29
	  mulli     r4, r0, 0x24
	  lwzx      r3, r5, r3
	  bl        0x85240
	  addi      r30, r30, 0x4

	.loc_0xDC:
	  addi      r29, r29, 0x1

	.loc_0xE0:
	  rlwinm    r0,r29,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x34

	.loc_0xEC:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80067534
 * Size:	000034
 */
void J3DModel::calcBBoardMtx()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  lhz       r0, 0xE(r4)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x24
	  lwz       r3, 0x84(r3)
	  bl        0x21F98

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80067568
 * Size:	000064
 */
void J3DModel::prepareShapePackets()
{
	/*
	.loc_0x0:
	  lwz       r6, 0x4(r3)
	  lis       r4, 0x8051
	  addi      r5, r3, 0x54
	  li        r9, 0
	  lhz       r8, 0x7C(r6)
	  subi      r4, r4, 0xDD0
	  b         .loc_0x54

	.loc_0x1C:
	  rlwinm    r0,r9,0,16,31
	  lwz       r7, 0xC4(r3)
	  mulli     r6, r0, 0x3C
	  lwz       r0, 0x84(r3)
	  add       r6, r7, r6
	  stw       r0, 0x2C(r6)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,30,31
	  cmplwi    r0, 0x2
	  bne-      .loc_0x4C
	  stw       r5, 0x30(r6)
	  b         .loc_0x50

	.loc_0x4C:
	  stw       r4, 0x30(r6)

	.loc_0x50:
	  addi      r9, r9, 0x1

	.loc_0x54:
	  rlwinm    r0,r9,0,16,31
	  cmplw     r0, r8
	  blt+      .loc_0x1C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800675CC
 * Size:	000064
 */
void J3DModel::~J3DModel()
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
	  beq-      .loc_0x48
	  lis       r4, 0x804A
	  addi      r3, r30, 0x88
	  addi      r0, r4, 0x19F0
	  li        r4, -0x1
	  stw       r0, 0x0(r30)
	  bl        -0x8960
	  extsh.    r0, r31
	  ble-      .loc_0x48
	  mr        r3, r30
	  bl        -0x4355C

	.loc_0x48:
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
 * Address:	80067630
 * Size:	000048
 */
void J3DMtxBuffer::~J3DMtxBuffer()
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
	  addi      r0, r5, 0x1A14
	  stw       r0, 0x34(r31)
	  ble-      .loc_0x30
	  bl        -0x435A8

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
