

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void PADEnable(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void PADDisable(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void DoReset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F3540
 * Size:	0001A4
 */
void UpdateOrigin(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r5, 0x804F
	  stw       r0, 0x4(r1)
	  mulli     r6, r3, 0xC
	  stwu      r1, -0x18(r1)
	  addi      r5, r5, 0x7140
	  stw       r31, 0x14(r1)
	  add       r31, r5, r6
	  lwz       r0, -0x7C74(r13)
	  rlwinm    r4,r0,0,21,23
	  cmpwi     r4, 0x400
	  lis       r0, 0x8000
	  srw       r0, r0, r3
	  beq-      .loc_0x128
	  bge-      .loc_0x6C
	  cmpwi     r4, 0x200
	  beq-      .loc_0xF8
	  bge-      .loc_0x60
	  cmpwi     r4, 0x100
	  beq-      .loc_0xC4
	  bge-      .loc_0x128
	  cmpwi     r4, 0
	  beq-      .loc_0x90
	  b         .loc_0x128

	.loc_0x60:
	  cmpwi     r4, 0x300
	  beq-      .loc_0x128
	  b         .loc_0x128

	.loc_0x6C:
	  cmpwi     r4, 0x600
	  beq-      .loc_0x90
	  bge-      .loc_0x84
	  cmpwi     r4, 0x500
	  beq-      .loc_0x90
	  b         .loc_0x128

	.loc_0x84:
	  cmpwi     r4, 0x700
	  beq-      .loc_0x90
	  b         .loc_0x128

	.loc_0x90:
	  lbz       r4, 0x6(r31)
	  rlwinm    r4,r4,0,0,27
	  stb       r4, 0x6(r31)
	  lbz       r4, 0x7(r31)
	  rlwinm    r4,r4,0,0,27
	  stb       r4, 0x7(r31)
	  lbz       r4, 0x8(r31)
	  rlwinm    r4,r4,0,0,27
	  stb       r4, 0x8(r31)
	  lbz       r4, 0x9(r31)
	  rlwinm    r4,r4,0,0,27
	  stb       r4, 0x9(r31)
	  b         .loc_0x128

	.loc_0xC4:
	  lbz       r4, 0x4(r31)
	  rlwinm    r4,r4,0,0,27
	  stb       r4, 0x4(r31)
	  lbz       r4, 0x5(r31)
	  rlwinm    r4,r4,0,0,27
	  stb       r4, 0x5(r31)
	  lbz       r4, 0x8(r31)
	  rlwinm    r4,r4,0,0,27
	  stb       r4, 0x8(r31)
	  lbz       r4, 0x9(r31)
	  rlwinm    r4,r4,0,0,27
	  stb       r4, 0x9(r31)
	  b         .loc_0x128

	.loc_0xF8:
	  lbz       r4, 0x4(r31)
	  rlwinm    r4,r4,0,0,27
	  stb       r4, 0x4(r31)
	  lbz       r4, 0x5(r31)
	  rlwinm    r4,r4,0,0,27
	  stb       r4, 0x5(r31)
	  lbz       r4, 0x6(r31)
	  rlwinm    r4,r4,0,0,27
	  stb       r4, 0x6(r31)
	  lbz       r4, 0x7(r31)
	  rlwinm    r4,r4,0,0,27
	  stb       r4, 0x7(r31)

	.loc_0x128:
	  lbz       r4, 0x2(r31)
	  subi      r4, r4, 0x80
	  stb       r4, 0x2(r31)
	  lbz       r4, 0x3(r31)
	  subi      r4, r4, 0x80
	  stb       r4, 0x3(r31)
	  lbz       r4, 0x4(r31)
	  subi      r4, r4, 0x80
	  stb       r4, 0x4(r31)
	  lbz       r4, 0x5(r31)
	  subi      r4, r4, 0x80
	  stb       r4, 0x5(r31)
	  lwz       r4, -0x7C78(r13)
	  and.      r0, r4, r0
	  beq-      .loc_0x190
	  lbz       r0, 0x2(r31)
	  extsb     r0, r0
	  cmpwi     r0, 0x40
	  ble-      .loc_0x190
	  bl        0x2C38
	  rlwinm    r3,r3,0,0,15
	  subis     r0, r3, 0x900
	  cmplwi    r0, 0
	  bne-      .loc_0x190
	  li        r0, 0
	  stb       r0, 0x2(r31)

	.loc_0x190:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F36E4
 * Size:	0000C4
 */
void PADOriginCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  rlwinm.   r0,r4,0,28,31
	  stwu      r1, -0x30(r1)
	  stw       r31, 0x2C(r1)
	  bne-      .loc_0x5C
	  lwz       r3, -0x7C7C(r13)
	  bl        -0x1C0
	  lwz       r31, -0x7C7C(r13)
	  lis       r0, 0x8000
	  lwz       r3, -0x700C(r13)
	  addi      r4, r1, 0x1C
	  srw       r0, r0, r31
	  or        r0, r3, r0
	  stw       r0, -0x700C(r13)
	  mr        r3, r31
	  bl        0x2674
	  lwz       r0, -0x7C74(r13)
	  addi      r3, r31, 0
	  oris      r4, r0, 0x40
	  bl        0x23F8
	  lwz       r3, -0x700C(r13)
	  bl        0x2480

	.loc_0x5C:
	  lwz       r5, -0x7008(r13)
	  cntlzw    r0, r5
	  stw       r0, -0x7C7C(r13)
	  lwz       r4, -0x7C7C(r13)
	  cmpwi     r4, 0x20
	  beq-      .loc_0xB0
	  lis       r0, 0x8000
	  srw       r0, r0, r4
	  andc      r0, r5, r0
	  mulli     r4, r4, 0xC
	  stw       r0, -0x7008(r13)
	  lis       r3, 0x804F
	  addi      r0, r3, 0x7140
	  add       r3, r0, r4
	  li        r4, 0
	  li        r5, 0xC
	  bl        -0xEE6CC
	  lis       r4, 0x800F
	  lwz       r3, -0x7C7C(r13)
	  addi      r4, r4, 0x394C
	  bl        0x2D20

	.loc_0xB0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F37A8
 * Size:	0000CC
 */
void PADOriginUpdateCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  lis       r0, 0x8000
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  addi      r31, r4, 0
	  stw       r30, 0x20(r1)
	  stw       r29, 0x1C(r1)
	  mr        r29, r3
	  srw       r30, r0, r29
	  lwz       r3, -0x700C(r13)
	  and.      r0, r3, r30
	  beq-      .loc_0xB0
	  rlwinm.   r0,r31,0,28,31
	  bne-      .loc_0x44
	  mr        r3, r29
	  bl        -0x2A8

	.loc_0x44:
	  rlwinm.   r0,r31,0,28,28
	  beq-      .loc_0xB0
	  bl        -0x4BBC
	  addi      r31, r3, 0
	  addi      r3, r30, 0
	  bl        0x2458
	  lwz       r0, -0x700C(r13)
	  not       r9, r30
	  lwz       r6, -0x7000(r13)
	  mr        r3, r29
	  lwz       r5, -0x6FFC(r13)
	  lwz       r4, -0x6FF8(r13)
	  and       r8, r0, r9
	  lwz       r0, -0x6FF4(r13)
	  and       r7, r6, r9
	  and       r6, r5, r9
	  and       r5, r4, r9
	  stw       r8, -0x700C(r13)
	  and       r0, r0, r9
	  stw       r7, -0x7000(r13)
	  li        r4, 0
	  stw       r6, -0x6FFC(r13)
	  stw       r5, -0x6FF8(r13)
	  stw       r0, -0x6FF4(r13)
	  bl        -0x224C
	  mr        r3, r31
	  bl        -0x4BF4

	.loc_0xB0:
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
 * Address:	800F3874
 * Size:	0000D8
 */
void PADProbeCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  rlwinm.   r0,r4,0,28,31
	  stwu      r1, -0x30(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  bne-      .loc_0x6C
	  lwz       r30, -0x7C7C(r13)
	  lis       r31, 0x8000
	  lwz       r3, -0x700C(r13)
	  addi      r4, r1, 0x1C
	  srw       r0, r31, r30
	  or        r0, r3, r0
	  stw       r0, -0x700C(r13)
	  mr        r3, r30
	  bl        0x24E8
	  lwz       r0, -0x7C74(r13)
	  addi      r3, r30, 0
	  oris      r4, r0, 0x40
	  bl        0x226C
	  lwz       r3, -0x700C(r13)
	  bl        0x22F4
	  lwz       r0, -0x7C7C(r13)
	  lwz       r3, -0x7000(r13)
	  srw       r0, r31, r0
	  or        r0, r3, r0
	  stw       r0, -0x7000(r13)

	.loc_0x6C:
	  lwz       r5, -0x7008(r13)
	  cntlzw    r0, r5
	  stw       r0, -0x7C7C(r13)
	  lwz       r4, -0x7C7C(r13)
	  cmpwi     r4, 0x20
	  beq-      .loc_0xC0
	  lis       r0, 0x8000
	  srw       r0, r0, r4
	  andc      r0, r5, r0
	  mulli     r4, r4, 0xC
	  stw       r0, -0x7008(r13)
	  lis       r3, 0x804F
	  addi      r0, r3, 0x7140
	  add       r3, r0, r4
	  li        r4, 0
	  li        r5, 0xC
	  bl        -0xEE86C
	  lis       r4, 0x800F
	  lwz       r3, -0x7C7C(r13)
	  addi      r4, r4, 0x394C
	  bl        0x2B80

	.loc_0xC0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F394C
 * Size:	00032C
 */
void PADTypeAndStatusCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r6, 0x804F
	  stw       r0, 0x4(r1)
	  rlwinm.   r0,r4,0,28,31
	  stwu      r1, -0x40(r1)
	  stw       r31, 0x3C(r1)
	  lis       r31, 0x8000
	  stw       r30, 0x38(r1)
	  addi      r30, r6, 0x7130
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  lwz       r29, -0x7C7C(r13)
	  lwz       r5, -0x7004(r13)
	  srw       r28, r31, r29
	  andc      r3, r5, r28
	  stw       r3, -0x7004(r13)
	  and       r5, r5, r28
	  li        r3, 0x1
	  beq-      .loc_0x9C
	  lwz       r4, -0x7008(r13)
	  cntlzw    r0, r4
	  stw       r0, -0x7C7C(r13)
	  lwz       r3, -0x7C7C(r13)
	  cmpwi     r3, 0x20
	  beq-      .loc_0x30C
	  mulli     r0, r3, 0xC
	  srw       r3, r31, r3
	  andc      r4, r4, r3
	  add       r3, r30, r0
	  stw       r4, -0x7008(r13)
	  li        r4, 0
	  li        r5, 0xC
	  addi      r3, r3, 0x10
	  bl        -0xEE91C
	  lis       r4, 0x800F
	  lwz       r3, -0x7C7C(r13)
	  addi      r4, r4, 0x394C
	  bl        0x2AD0
	  b         .loc_0x30C

	.loc_0x9C:
	  rlwinm    r6,r4,0,0,23
	  rlwinm    r4,r4,0,3,4
	  subis     r0, r4, 0x800
	  rlwinm    r4,r29,2,0,29
	  cmplwi    r0, 0
	  stwx      r6, r30, r4
	  bne-      .loc_0xC0
	  rlwinm.   r0,r6,0,7,7
	  bne-      .loc_0x114

	.loc_0xC0:
	  lwz       r5, -0x7008(r13)
	  cntlzw    r0, r5
	  stw       r0, -0x7C7C(r13)
	  lwz       r4, -0x7C7C(r13)
	  cmpwi     r4, 0x20
	  beq-      .loc_0x30C
	  lis       r3, 0x8000
	  mulli     r0, r4, 0xC
	  srw       r3, r3, r4
	  andc      r4, r5, r3
	  add       r3, r30, r0
	  stw       r4, -0x7008(r13)
	  li        r4, 0
	  li        r5, 0xC
	  addi      r3, r3, 0x10
	  bl        -0xEE994
	  lis       r4, 0x800F
	  lwz       r3, -0x7C7C(r13)
	  addi      r4, r4, 0x394C
	  bl        0x2A58
	  b         .loc_0x30C

	.loc_0x114:
	  lwz       r0, -0x7C70(r13)
	  cmplwi    r0, 0x2
	  bge-      .loc_0x1A0
	  lwz       r0, -0x700C(r13)
	  addi      r3, r29, 0
	  addi      r4, r1, 0x1C
	  or        r0, r0, r28
	  stw       r0, -0x700C(r13)
	  bl        0x2318
	  lwz       r0, -0x7C74(r13)
	  addi      r3, r29, 0
	  oris      r4, r0, 0x40
	  bl        0x209C
	  lwz       r3, -0x700C(r13)
	  bl        0x2124
	  lwz       r4, -0x7008(r13)
	  cntlzw    r0, r4
	  stw       r0, -0x7C7C(r13)
	  lwz       r3, -0x7C7C(r13)
	  cmpwi     r3, 0x20
	  beq-      .loc_0x30C
	  mulli     r0, r3, 0xC
	  srw       r3, r31, r3
	  andc      r4, r4, r3
	  add       r3, r30, r0
	  stw       r4, -0x7008(r13)
	  li        r4, 0
	  li        r5, 0xC
	  addi      r3, r3, 0x10
	  bl        -0xEEA20
	  lis       r4, 0x800F
	  lwz       r3, -0x7C7C(r13)
	  addi      r4, r4, 0x394C
	  bl        0x29CC
	  b         .loc_0x30C

	.loc_0x1A0:
	  rlwinm.   r0,r6,0,0,0
	  beq-      .loc_0x1B0
	  rlwinm.   r0,r6,0,5,5
	  beq-      .loc_0x220

	.loc_0x1B0:
	  cmplwi    r5, 0
	  beq-      .loc_0x1EC
	  mulli     r0, r29, 0xC
	  lis       r3, 0x800F
	  add       r6, r30, r0
	  addi      r8, r3, 0x36E4
	  addi      r3, r29, 0
	  subi      r4, r13, 0x7C64
	  li        r5, 0x3
	  li        r7, 0xA
	  li        r10, 0
	  li        r9, 0
	  addi      r6, r6, 0x10
	  bl        0x23B8
	  b         .loc_0x2A8

	.loc_0x1EC:
	  mulli     r0, r29, 0xC
	  lis       r3, 0x800F
	  add       r6, r30, r0
	  addi      r8, r3, 0x36E4
	  addi      r3, r29, 0
	  subi      r4, r13, 0x7C68
	  li        r5, 0x1
	  li        r7, 0xA
	  li        r10, 0
	  li        r9, 0
	  addi      r6, r6, 0x10
	  bl        0x2384
	  b         .loc_0x2A8

	.loc_0x220:
	  rlwinm.   r0,r6,0,11,11
	  beq-      .loc_0x2A8
	  rlwinm.   r0,r6,0,12,12
	  bne-      .loc_0x2A8
	  rlwinm.   r0,r6,0,13,13
	  bne-      .loc_0x2A8
	  rlwinm.   r0,r6,0,1,1
	  beq-      .loc_0x274
	  mulli     r0, r29, 0xC
	  lis       r3, 0x800F
	  add       r6, r30, r0
	  addi      r8, r3, 0x36E4
	  addi      r3, r29, 0
	  subi      r4, r13, 0x7C68
	  li        r5, 0x1
	  li        r7, 0xA
	  li        r10, 0
	  li        r9, 0
	  addi      r6, r6, 0x10
	  bl        0x2330
	  b         .loc_0x2A8

	.loc_0x274:
	  mulli     r0, r29, 0xC
	  lis       r3, 0x800F
	  add       r4, r30, r4
	  add       r6, r30, r0
	  addi      r8, r3, 0x3874
	  addi      r3, r29, 0
	  li        r5, 0x3
	  li        r7, 0x8
	  li        r10, 0
	  li        r9, 0
	  addi      r4, r4, 0x40
	  addi      r6, r6, 0x10
	  bl        0x22F8

	.loc_0x2A8:
	  cmpwi     r3, 0
	  bne-      .loc_0x30C
	  lwz       r5, -0x7008(r13)
	  lwz       r3, -0x6FF8(r13)
	  cntlzw    r0, r5
	  stw       r0, -0x7C7C(r13)
	  or        r0, r3, r28
	  lwz       r4, -0x7C7C(r13)
	  stw       r0, -0x6FF8(r13)
	  cmpwi     r4, 0x20
	  beq-      .loc_0x30C
	  lis       r3, 0x8000
	  mulli     r0, r4, 0xC
	  srw       r3, r3, r4
	  andc      r4, r5, r3
	  add       r3, r30, r0
	  stw       r4, -0x7008(r13)
	  li        r4, 0
	  li        r5, 0xC
	  addi      r3, r3, 0x10
	  bl        -0xEEB90
	  lis       r4, 0x800F
	  lwz       r3, -0x7C7C(r13)
	  addi      r4, r4, 0x394C
	  bl        0x285C

	.loc_0x30C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F3C78
 * Size:	000140
 */
void PADReceiveCheckCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lis       r3, 0x8000
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  srw       r29, r3, r31
	  lwz       r0, -0x700C(r13)
	  and.      r0, r0, r29
	  beq-      .loc_0x124
	  lwz       r5, -0x7000(r13)
	  not       r6, r29
	  lwz       r3, -0x6FFC(r13)
	  rlwinm.   r0,r4,0,28,31
	  and       r5, r5, r6
	  and       r3, r3, r6
	  stw       r5, -0x7000(r13)
	  stw       r3, -0x6FFC(r13)
	  rlwinm    r3,r4,0,0,23
	  bne-      .loc_0xC0
	  rlwinm.   r0,r3,0,0,0
	  beq-      .loc_0xC0
	  rlwinm.   r0,r3,0,11,11
	  beq-      .loc_0xC0
	  rlwinm.   r0,r3,0,1,1
	  beq-      .loc_0xC0
	  rlwinm.   r0,r3,0,5,5
	  bne-      .loc_0xC0
	  rlwinm.   r0,r3,0,12,12
	  bne-      .loc_0xC0
	  rlwinm.   r0,r3,0,13,13
	  bne-      .loc_0xC0
	  mulli     r4, r31, 0xC
	  lis       r3, 0x804F
	  addi      r0, r3, 0x7140
	  lis       r3, 0x800F
	  add       r6, r0, r4
	  addi      r8, r3, 0x37A8
	  addi      r3, r31, 0
	  subi      r4, r13, 0x7C68
	  li        r5, 0x1
	  li        r7, 0xA
	  li        r10, 0
	  li        r9, 0
	  bl        0x21B8
	  b         .loc_0x124

	.loc_0xC0:
	  bl        -0x5100
	  addi      r30, r3, 0
	  addi      r3, r29, 0
	  bl        0x1F14
	  lwz       r0, -0x700C(r13)
	  not       r9, r29
	  lwz       r6, -0x7000(r13)
	  mr        r3, r31
	  lwz       r5, -0x6FFC(r13)
	  lwz       r4, -0x6FF8(r13)
	  and       r8, r0, r9
	  lwz       r0, -0x6FF4(r13)
	  and       r7, r6, r9
	  and       r6, r5, r9
	  and       r5, r4, r9
	  stw       r8, -0x700C(r13)
	  and       r0, r0, r9
	  stw       r7, -0x7000(r13)
	  li        r4, 0
	  stw       r6, -0x6FFC(r13)
	  stw       r5, -0x6FF8(r13)
	  stw       r0, -0x6FF4(r13)
	  bl        -0x2790
	  mr        r3, r30
	  bl        -0x5138

	.loc_0x124:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F3DB8
 * Size:	000110
 */
void PADReset(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  bl        -0x5198
	  lwz       r4, -0x6FF8(r13)
	  li        r8, 0
	  lwz       r5, -0x7000(r13)
	  mr        r31, r3
	  lwz       r0, -0x6FFC(r13)
	  or        r30, r30, r4
	  lwz       r4, -0x7008(r13)
	  or        r5, r5, r0
	  lwz       r0, -0x7C70(r13)
	  andc      r30, r30, r5
	  lwz       r6, -0x700C(r13)
	  or        r5, r4, r30
	  lwz       r4, -0x6FF4(r13)
	  not       r7, r30
	  stw       r5, -0x7008(r13)
	  and       r5, r6, r7
	  and       r4, r4, r7
	  lwz       r7, -0x7008(r13)
	  cmplwi    r0, 0x4
	  stw       r8, -0x6FF8(r13)
	  and       r3, r7, r6
	  stw       r5, -0x700C(r13)
	  stw       r4, -0x6FF4(r13)
	  bne-      .loc_0x88
	  lwz       r0, -0x7004(r13)
	  or        r0, r0, r30
	  stw       r0, -0x7004(r13)

	.loc_0x88:
	  bl        0x1E18
	  lwz       r0, -0x7C7C(r13)
	  cmpwi     r0, 0x20
	  bne-      .loc_0xEC
	  lwz       r5, -0x7008(r13)
	  cntlzw    r0, r5
	  stw       r0, -0x7C7C(r13)
	  lwz       r4, -0x7C7C(r13)
	  cmpwi     r4, 0x20
	  beq-      .loc_0xEC
	  lis       r0, 0x8000
	  srw       r0, r0, r4
	  andc      r0, r5, r0
	  mulli     r4, r4, 0xC
	  stw       r0, -0x7008(r13)
	  lis       r3, 0x804F
	  addi      r0, r3, 0x7140
	  add       r3, r0, r4
	  li        r4, 0
	  li        r5, 0xC
	  bl        -0xEEDDC
	  lis       r4, 0x800F
	  lwz       r3, -0x7C7C(r13)
	  addi      r4, r4, 0x394C
	  bl        0x2610

	.loc_0xEC:
	  mr        r3, r31
	  bl        -0x5248
	  lwz       r0, 0x1C(r1)
	  li        r3, 0x1
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F3EC8
 * Size:	000114
 */
void PADRecalibrate(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  bl        -0x52A8
	  lwz       r5, -0x6FF8(r13)
	  li        r8, 0
	  lwz       r6, -0x7000(r13)
	  lis       r4, 0x8000
	  lwz       r0, -0x6FFC(r13)
	  or        r30, r30, r5
	  lwz       r5, -0x7008(r13)
	  or        r6, r6, r0
	  lbz       r0, 0x30E3(r4)
	  andc      r30, r30, r6
	  lwz       r6, -0x700C(r13)
	  or        r5, r5, r30
	  lwz       r4, -0x6FF4(r13)
	  stw       r5, -0x7008(r13)
	  not       r9, r30
	  and       r5, r6, r9
	  and       r4, r4, r9
	  lwz       r7, -0x7008(r13)
	  mr        r31, r3
	  stw       r8, -0x6FF8(r13)
	  rlwinm.   r0,r0,0,25,25
	  stw       r5, -0x700C(r13)
	  and       r3, r7, r6
	  stw       r4, -0x6FF4(r13)
	  bne-      .loc_0x8C
	  lwz       r0, -0x7004(r13)
	  or        r0, r0, r30
	  stw       r0, -0x7004(r13)

	.loc_0x8C:
	  bl        0x1D04
	  lwz       r0, -0x7C7C(r13)
	  cmpwi     r0, 0x20
	  bne-      .loc_0xF0
	  lwz       r5, -0x7008(r13)
	  cntlzw    r0, r5
	  stw       r0, -0x7C7C(r13)
	  lwz       r4, -0x7C7C(r13)
	  cmpwi     r4, 0x20
	  beq-      .loc_0xF0
	  lis       r0, 0x8000
	  srw       r0, r0, r4
	  andc      r0, r5, r0
	  mulli     r4, r4, 0xC
	  stw       r0, -0x7008(r13)
	  lis       r3, 0x804F
	  addi      r0, r3, 0x7140
	  add       r3, r0, r4
	  li        r4, 0
	  li        r5, 0xC
	  bl        -0xEEEF0
	  lis       r4, 0x800F
	  lwz       r3, -0x7C7C(r13)
	  addi      r4, r4, 0x394C
	  bl        0x24FC

	.loc_0xF0:
	  mr        r3, r31
	  bl        -0x535C
	  lwz       r0, 0x1C(r1)
	  li        r3, 0x1
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F3FDC
 * Size:	000150
 */
void PADInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stmw      r25, 0x1C(r1)
	  addi      r31, r3, 0x7130
	  lwz       r0, -0x7010(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x2C
	  li        r3, 0x1
	  b         .loc_0x13C

	.loc_0x2C:
	  lwz       r3, -0x7C80(r13)
	  bl        -0x8584
	  lwz       r3, -0x6FE8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  bl        0x4C8

	.loc_0x44:
	  lwz       r0, -0x6FD8(r13)
	  li        r3, 0x1
	  stw       r3, -0x7010(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xE0
	  bl        -0x14A4
	  addi      r25, r4, 0
	  addi      r26, r3, 0
	  li        r5, 0x10
	  bl        -0x31F10
	  lis       r5, 0x1
	  subi      r27, r5, 0x1
	  li        r28, 0
	  and       r6, r4, r27
	  and       r4, r25, r27
	  and       r5, r3, r28
	  and       r0, r26, r28
	  addc      r29, r4, r6
	  addi      r3, r26, 0
	  addi      r4, r25, 0
	  adde      r30, r0, r5
	  li        r5, 0x20
	  bl        -0x31F44
	  and       r4, r4, r27
	  and       r0, r3, r28
	  addc      r29, r4, r29
	  addi      r3, r26, 0
	  addi      r4, r25, 0
	  adde      r30, r0, r30
	  li        r5, 0x30
	  bl        -0x31F64
	  and       r0, r4, r27
	  addc      r5, r0, r29
	  lis       r0, 0xF000
	  li        r4, 0x3FFF
	  stw       r0, -0x7004(r13)
	  and       r0, r5, r4
	  lis       r3, 0x8000
	  sth       r0, 0x30E0(r3)

	.loc_0xE0:
	  lis       r3, 0x8000
	  lhz       r0, 0x30E0(r3)
	  rlwinm    r0,r0,8,10,23
	  oris      r0, r0, 0x4D00
	  stw       r0, 0x40(r31)
	  lhz       r0, 0x30E0(r3)
	  rlwinm    r0,r0,8,10,23
	  oris      r0, r0, 0x4D40
	  stw       r0, 0x44(r31)
	  lhz       r0, 0x30E0(r3)
	  rlwinm    r0,r0,8,10,23
	  oris      r0, r0, 0x4D80
	  stw       r0, 0x48(r31)
	  lhz       r0, 0x30E0(r3)
	  rlwinm    r0,r0,8,10,23
	  oris      r0, r0, 0x4DC0
	  stw       r0, 0x4C(r31)
	  bl        0x2740
	  lis       r3, 0x804B
	  subi      r3, r3, 0x6158
	  bl        -0x3E68
	  lis       r3, 0xF000
	  bl        -0x35C

	.loc_0x13C:
	  lmw       r25, 0x1C(r1)
	  lwz       r0, 0x3C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F412C
 * Size:	000300
 */
void PADRead(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x40(r1)
	  stmw      r22, 0x18(r1)
	  mr        r23, r3
	  bl        -0x5508
	  li        r25, 0
	  mulli     r5, r25, 0xC
	  lis       r4, 0x804F
	  addi      r0, r4, 0x7140
	  add       r28, r0, r5
	  lis       r4, 0x800F
	  lis       r5, 0x800F
	  addi      r26, r3, 0
	  addi      r22, r4, 0x37A8
	  addi      r31, r5, 0x3C78
	  li        r24, 0
	  lis       r30, 0x8000

	.loc_0x48:
	  lwz       r0, -0x6FF8(r13)
	  srw       r27, r30, r25
	  and.      r0, r0, r27
	  beq-      .loc_0x7C
	  li        r3, 0
	  bl        -0x3D0
	  li        r0, -0x2
	  stb       r0, 0xA(r23)
	  addi      r3, r23, 0
	  li        r4, 0
	  li        r5, 0xA
	  bl        -0xEF0EC
	  b         .loc_0x2CC

	.loc_0x7C:
	  lwz       r0, -0x7008(r13)
	  and.      r0, r0, r27
	  bne-      .loc_0x94
	  lwz       r0, -0x7C7C(r13)
	  cmpw      r0, r25
	  bne-      .loc_0xB0

	.loc_0x94:
	  li        r0, -0x2
	  stb       r0, 0xA(r23)
	  addi      r3, r23, 0
	  li        r4, 0
	  li        r5, 0xA
	  bl        -0xEF120
	  b         .loc_0x2CC

	.loc_0xB0:
	  lwz       r0, -0x700C(r13)
	  and.      r0, r0, r27
	  bne-      .loc_0xD8
	  li        r0, -0x1
	  stb       r0, 0xA(r23)
	  addi      r3, r23, 0
	  li        r4, 0
	  li        r5, 0xA
	  bl        -0xEF148
	  b         .loc_0x2CC

	.loc_0xD8:
	  mr        r3, r25
	  bl        0xD14
	  cmpwi     r3, 0
	  beq-      .loc_0x104
	  li        r0, -0x3
	  stb       r0, 0xA(r23)
	  addi      r3, r23, 0
	  li        r4, 0
	  li        r5, 0xA
	  bl        -0xEF174
	  b         .loc_0x2CC

	.loc_0x104:
	  mr        r3, r25
	  bl        0x187C
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0x1E8
	  addi      r3, r25, 0
	  addi      r4, r1, 0x10
	  bl        0x1B50
	  lwz       r0, -0x7000(r13)
	  and.      r0, r0, r27
	  beq-      .loc_0x168
	  li        r0, 0
	  stb       r0, 0xA(r23)
	  addi      r3, r23, 0
	  li        r4, 0
	  li        r5, 0xA
	  bl        -0xEF1B8
	  lwz       r3, -0x6FFC(r13)
	  and.      r0, r3, r27
	  bne-      .loc_0x2CC
	  or        r0, r3, r27
	  stw       r0, -0x6FFC(r13)
	  addi      r3, r25, 0
	  addi      r4, r31, 0
	  bl        0x2224
	  b         .loc_0x2CC

	.loc_0x168:
	  bl        -0x565C
	  addi      r29, r3, 0
	  addi      r3, r27, 0
	  bl        0x19B8
	  lwz       r0, -0x700C(r13)
	  not       r9, r27
	  lwz       r6, -0x7000(r13)
	  mr        r3, r25
	  lwz       r5, -0x6FFC(r13)
	  lwz       r4, -0x6FF8(r13)
	  and       r8, r0, r9
	  lwz       r0, -0x6FF4(r13)
	  and       r7, r6, r9
	  and       r6, r5, r9
	  and       r5, r4, r9
	  stw       r8, -0x700C(r13)
	  and       r0, r0, r9
	  stw       r7, -0x7000(r13)
	  li        r4, 0
	  stw       r6, -0x6FFC(r13)
	  stw       r5, -0x6FF8(r13)
	  stw       r0, -0x6FF4(r13)
	  bl        -0x2CEC
	  mr        r3, r29
	  bl        -0x5694
	  li        r0, -0x1
	  stb       r0, 0xA(r23)
	  addi      r3, r23, 0
	  li        r4, 0
	  li        r5, 0xA
	  bl        -0xEF258
	  b         .loc_0x2CC

	.loc_0x1E8:
	  mr        r3, r25
	  bl        0x1FD4
	  rlwinm.   r0,r3,0,2,2
	  bne-      .loc_0x1FC
	  or        r24, r24, r27

	.loc_0x1FC:
	  addi      r3, r25, 0
	  addi      r4, r1, 0x10
	  bl        0x1A68
	  cmpwi     r3, 0
	  bne-      .loc_0x22C
	  li        r0, -0x3
	  stb       r0, 0xA(r23)
	  addi      r3, r23, 0
	  li        r4, 0
	  li        r5, 0xA
	  bl        -0xEF29C
	  b         .loc_0x2CC

	.loc_0x22C:
	  lwz       r0, 0x10(r1)
	  rlwinm.   r0,r0,0,0,0
	  beq-      .loc_0x254
	  li        r0, -0x3
	  stb       r0, 0xA(r23)
	  addi      r3, r23, 0
	  li        r4, 0
	  li        r5, 0xA
	  bl        -0xEF2C4
	  b         .loc_0x2CC

	.loc_0x254:
	  lwz       r12, -0x7C6C(r13)
	  addi      r3, r25, 0
	  addi      r4, r23, 0
	  mtlr      r12
	  addi      r5, r1, 0x10
	  blrl
	  lhz       r0, 0x0(r23)
	  rlwinm.   r0,r0,0,18,18
	  beq-      .loc_0x2B8
	  li        r0, -0x3
	  stb       r0, 0xA(r23)
	  addi      r3, r23, 0
	  li        r4, 0
	  li        r5, 0xA
	  bl        -0xEF304
	  addi      r3, r25, 0
	  addi      r6, r28, 0
	  addi      r8, r22, 0
	  subi      r4, r13, 0x7C68
	  li        r5, 0x1
	  li        r7, 0xA
	  li        r10, 0
	  li        r9, 0
	  bl        0x1B0C
	  b         .loc_0x2CC

	.loc_0x2B8:
	  li        r0, 0
	  stb       r0, 0xA(r23)
	  lhz       r0, 0x0(r23)
	  rlwinm    r0,r0,0,25,23
	  sth       r0, 0x0(r23)

	.loc_0x2CC:
	  addi      r25, r25, 0x1
	  cmpwi     r25, 0x4
	  addi      r28, r28, 0xC
	  addi      r23, r23, 0xC
	  blt+      .loc_0x48
	  mr        r3, r26
	  bl        -0x57B0
	  mr        r3, r24
	  lmw       r22, 0x18(r1)
	  lwz       r0, 0x44(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void PADSetSamplingRate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void PADControlAllMotors(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F442C
 * Size:	0000B8
 */
void PADControlMotor(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  addi      r30, r4, 0
	  stw       r29, 0x1C(r1)
	  addi      r29, r3, 0
	  bl        -0x5814
	  lis       r0, 0x8000
	  lwz       r4, -0x700C(r13)
	  srw       r0, r0, r29
	  and.      r0, r4, r0
	  addi      r31, r3, 0
	  beq-      .loc_0x94
	  mr        r3, r29
	  bl        0x1E80
	  rlwinm.   r0,r3,0,2,2
	  bne-      .loc_0x94
	  lwz       r0, -0x7C70(r13)
	  cmplwi    r0, 0x2
	  bge-      .loc_0x64
	  cmplwi    r30, 0x2
	  bne-      .loc_0x64
	  li        r30, 0

	.loc_0x64:
	  lis       r3, 0x8000
	  lbz       r0, 0x30E3(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x78
	  li        r30, 0

	.loc_0x78:
	  lwz       r4, -0x7C74(r13)
	  rlwinm    r0,r30,0,30,31
	  addi      r3, r29, 0
	  oris      r4, r4, 0x40
	  or        r4, r4, r0
	  bl        0x1674
	  bl        0x1684

	.loc_0x94:
	  mr        r3, r31
	  bl        -0x5864
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
 * Address:	800F44E4
 * Size:	000060
 */
void PADSetSpec(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  cmpwi     r3, 0x1
	  stw       r0, -0x6FE8(r13)
	  beq-      .loc_0x3C
	  bge-      .loc_0x20
	  cmpwi     r3, 0
	  bge-      .loc_0x2C
	  b         .loc_0x58

	.loc_0x20:
	  cmpwi     r3, 0x6
	  bge-      .loc_0x58
	  b         .loc_0x4C

	.loc_0x2C:
	  lis       r4, 0x800F
	  addi      r0, r4, 0x4544
	  stw       r0, -0x7C6C(r13)
	  b         .loc_0x58

	.loc_0x3C:
	  lis       r4, 0x800F
	  addi      r0, r4, 0x46B8
	  stw       r0, -0x7C6C(r13)
	  b         .loc_0x58

	.loc_0x4C:
	  lis       r4, 0x800F
	  addi      r0, r4, 0x482C
	  stw       r0, -0x7C6C(r13)

	.loc_0x58:
	  stw       r3, -0x7C70(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PADGetSpec(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F4544
 * Size:	000174
 */
void SPEC0_MakeStatus(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  sth       r3, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm.   r0,r0,16,28,28
	  beq-      .loc_0x18
	  li        r3, 0x100

	.loc_0x18:
	  lhz       r0, 0x0(r4)
	  or        r0, r0, r3
	  sth       r0, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm.   r0,r0,16,26,26
	  beq-      .loc_0x38
	  li        r3, 0x200
	  b         .loc_0x3C

	.loc_0x38:
	  li        r3, 0

	.loc_0x3C:
	  lhz       r0, 0x0(r4)
	  or        r0, r0, r3
	  sth       r0, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm.   r0,r0,16,23,23
	  beq-      .loc_0x5C
	  li        r3, 0x400
	  b         .loc_0x60

	.loc_0x5C:
	  li        r3, 0

	.loc_0x60:
	  lhz       r0, 0x0(r4)
	  or        r0, r0, r3
	  sth       r0, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm.   r0,r0,16,31,31
	  beq-      .loc_0x80
	  li        r3, 0x800
	  b         .loc_0x84

	.loc_0x80:
	  li        r3, 0

	.loc_0x84:
	  lhz       r0, 0x0(r4)
	  or        r0, r0, r3
	  sth       r0, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm.   r0,r0,16,27,27
	  beq-      .loc_0xA4
	  li        r6, 0x1000
	  b         .loc_0xA8

	.loc_0xA4:
	  li        r6, 0

	.loc_0xA8:
	  lhz       r3, 0x0(r4)
	  li        r0, 0
	  or        r3, r3, r6
	  sth       r3, 0x0(r4)
	  lwz       r3, 0x4(r5)
	  rlwinm    r3,r3,16,16,31
	  extsb     r3, r3
	  stb       r3, 0x2(r4)
	  lwz       r3, 0x4(r5)
	  rlwinm    r3,r3,8,24,31
	  extsb     r3, r3
	  stb       r3, 0x3(r4)
	  lwz       r3, 0x4(r5)
	  extsb     r3, r3
	  stb       r3, 0x4(r4)
	  lwz       r3, 0x4(r5)
	  rlwinm    r3,r3,24,8,31
	  extsb     r3, r3
	  stb       r3, 0x5(r4)
	  lwz       r3, 0x0(r5)
	  rlwinm    r3,r3,24,24,31
	  stb       r3, 0x6(r4)
	  lwz       r3, 0x0(r5)
	  stb       r3, 0x7(r4)
	  stb       r0, 0x8(r4)
	  stb       r0, 0x9(r4)
	  lbz       r0, 0x6(r4)
	  cmplwi    r0, 0xAA
	  blt-      .loc_0x128
	  lhz       r0, 0x0(r4)
	  ori       r0, r0, 0x40
	  sth       r0, 0x0(r4)

	.loc_0x128:
	  lbz       r0, 0x7(r4)
	  cmplwi    r0, 0xAA
	  blt-      .loc_0x140
	  lhz       r0, 0x0(r4)
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r4)

	.loc_0x140:
	  lbz       r3, 0x2(r4)
	  subi      r0, r3, 0x80
	  stb       r0, 0x2(r4)
	  lbz       r3, 0x3(r4)
	  subi      r0, r3, 0x80
	  stb       r0, 0x3(r4)
	  lbz       r3, 0x4(r4)
	  subi      r0, r3, 0x80
	  stb       r0, 0x4(r4)
	  lbz       r3, 0x5(r4)
	  subi      r0, r3, 0x80
	  stb       r0, 0x5(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F46B8
 * Size:	000174
 */
void SPEC1_MakeStatus(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  sth       r3, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm.   r0,r0,16,24,24
	  beq-      .loc_0x18
	  li        r3, 0x100

	.loc_0x18:
	  lhz       r0, 0x0(r4)
	  or        r0, r0, r3
	  sth       r0, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm.   r0,r0,16,23,23
	  beq-      .loc_0x38
	  li        r3, 0x200
	  b         .loc_0x3C

	.loc_0x38:
	  li        r3, 0

	.loc_0x3C:
	  lhz       r0, 0x0(r4)
	  or        r0, r0, r3
	  sth       r0, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm.   r0,r0,16,26,26
	  beq-      .loc_0x5C
	  li        r3, 0x400
	  b         .loc_0x60

	.loc_0x5C:
	  li        r3, 0

	.loc_0x60:
	  lhz       r0, 0x0(r4)
	  or        r0, r0, r3
	  sth       r0, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm.   r0,r0,16,27,27
	  beq-      .loc_0x80
	  li        r3, 0x800
	  b         .loc_0x84

	.loc_0x80:
	  li        r3, 0

	.loc_0x84:
	  lhz       r0, 0x0(r4)
	  or        r0, r0, r3
	  sth       r0, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm.   r0,r0,16,22,22
	  beq-      .loc_0xA4
	  li        r6, 0x1000
	  b         .loc_0xA8

	.loc_0xA4:
	  li        r6, 0

	.loc_0xA8:
	  lhz       r3, 0x0(r4)
	  li        r0, 0
	  or        r3, r3, r6
	  sth       r3, 0x0(r4)
	  lwz       r3, 0x4(r5)
	  rlwinm    r3,r3,16,16,31
	  extsb     r3, r3
	  stb       r3, 0x2(r4)
	  lwz       r3, 0x4(r5)
	  rlwinm    r3,r3,8,24,31
	  extsb     r3, r3
	  stb       r3, 0x3(r4)
	  lwz       r3, 0x4(r5)
	  extsb     r3, r3
	  stb       r3, 0x4(r4)
	  lwz       r3, 0x4(r5)
	  rlwinm    r3,r3,24,8,31
	  extsb     r3, r3
	  stb       r3, 0x5(r4)
	  lwz       r3, 0x0(r5)
	  rlwinm    r3,r3,24,24,31
	  stb       r3, 0x6(r4)
	  lwz       r3, 0x0(r5)
	  stb       r3, 0x7(r4)
	  stb       r0, 0x8(r4)
	  stb       r0, 0x9(r4)
	  lbz       r0, 0x6(r4)
	  cmplwi    r0, 0xAA
	  blt-      .loc_0x128
	  lhz       r0, 0x0(r4)
	  ori       r0, r0, 0x40
	  sth       r0, 0x0(r4)

	.loc_0x128:
	  lbz       r0, 0x7(r4)
	  cmplwi    r0, 0xAA
	  blt-      .loc_0x140
	  lhz       r0, 0x0(r4)
	  ori       r0, r0, 0x20
	  sth       r0, 0x0(r4)

	.loc_0x140:
	  lbz       r3, 0x2(r4)
	  subi      r0, r3, 0x80
	  stb       r0, 0x2(r4)
	  lbz       r3, 0x3(r4)
	  subi      r0, r3, 0x80
	  stb       r0, 0x3(r4)
	  lbz       r3, 0x4(r4)
	  subi      r0, r3, 0x80
	  stb       r0, 0x4(r4)
	  lbz       r3, 0x5(r4)
	  subi      r0, r3, 0x80
	  stb       r0, 0x5(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void ClampS8(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void ClampU8(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F482C
 * Size:	000470
 */
void SPEC2_MakeStatus(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r5)
	  rlwinm    r0,r0,16,18,31
	  sth       r0, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm    r0,r0,24,8,31
	  extsb     r0, r0
	  stb       r0, 0x2(r4)
	  lwz       r0, 0x0(r5)
	  extsb     r0, r0
	  stb       r0, 0x3(r4)
	  lwz       r0, -0x7C74(r13)
	  rlwinm    r0,r0,0,21,23
	  cmpwi     r0, 0x400
	  beq-      .loc_0x1CC
	  bge-      .loc_0x6C
	  cmpwi     r0, 0x200
	  beq-      .loc_0x138
	  bge-      .loc_0x60
	  cmpwi     r0, 0x100
	  beq-      .loc_0xE4
	  bge-      .loc_0x20C
	  cmpwi     r0, 0
	  beq-      .loc_0x90
	  b         .loc_0x20C

	.loc_0x60:
	  cmpwi     r0, 0x300
	  beq-      .loc_0x188
	  b         .loc_0x20C

	.loc_0x6C:
	  cmpwi     r0, 0x600
	  beq-      .loc_0x90
	  bge-      .loc_0x84
	  cmpwi     r0, 0x500
	  beq-      .loc_0x90
	  b         .loc_0x20C

	.loc_0x84:
	  cmpwi     r0, 0x700
	  beq-      .loc_0x90
	  b         .loc_0x20C

	.loc_0x90:
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,8,24,31
	  extsb     r0, r0
	  stb       r0, 0x4(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,16,16,31
	  extsb     r0, r0
	  stb       r0, 0x5(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,24,24,27
	  stb       r0, 0x6(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,28,24,27
	  stb       r0, 0x7(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,0,24,27
	  stb       r0, 0x8(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,4,24,27
	  stb       r0, 0x9(r4)
	  b         .loc_0x20C

	.loc_0xE4:
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,8,24,27
	  extsb     r0, r0
	  stb       r0, 0x4(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,12,24,27
	  extsb     r0, r0
	  stb       r0, 0x5(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,16,24,31
	  stb       r0, 0x6(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,24,24,31
	  stb       r0, 0x7(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,0,24,27
	  stb       r0, 0x8(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,4,24,27
	  stb       r0, 0x9(r4)
	  b         .loc_0x20C

	.loc_0x138:
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,8,24,27
	  extsb     r0, r0
	  stb       r0, 0x4(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,12,24,27
	  extsb     r0, r0
	  stb       r0, 0x5(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,16,24,27
	  stb       r0, 0x6(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,20,24,27
	  stb       r0, 0x7(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,24,24,31
	  stb       r0, 0x8(r4)
	  lwz       r0, 0x4(r5)
	  stb       r0, 0x9(r4)
	  b         .loc_0x20C

	.loc_0x188:
	  lwz       r6, 0x4(r5)
	  li        r0, 0
	  rlwinm    r6,r6,8,24,31
	  extsb     r6, r6
	  stb       r6, 0x4(r4)
	  lwz       r6, 0x4(r5)
	  rlwinm    r6,r6,16,16,31
	  extsb     r6, r6
	  stb       r6, 0x5(r4)
	  lwz       r6, 0x4(r5)
	  rlwinm    r6,r6,24,24,31
	  stb       r6, 0x6(r4)
	  lwz       r5, 0x4(r5)
	  stb       r5, 0x7(r4)
	  stb       r0, 0x8(r4)
	  stb       r0, 0x9(r4)
	  b         .loc_0x20C

	.loc_0x1CC:
	  lwz       r6, 0x4(r5)
	  li        r0, 0
	  rlwinm    r6,r6,8,24,31
	  extsb     r6, r6
	  stb       r6, 0x4(r4)
	  lwz       r6, 0x4(r5)
	  rlwinm    r6,r6,16,16,31
	  extsb     r6, r6
	  stb       r6, 0x5(r4)
	  stb       r0, 0x6(r4)
	  stb       r0, 0x7(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,24,24,31
	  stb       r0, 0x8(r4)
	  lwz       r0, 0x4(r5)
	  stb       r0, 0x9(r4)

	.loc_0x20C:
	  lbz       r7, 0x2(r4)
	  lis       r5, 0x804F
	  rlwinm    r6,r3,2,0,29
	  subi      r0, r7, 0x80
	  stb       r0, 0x2(r4)
	  addi      r0, r5, 0x7130
	  add       r5, r0, r6
	  lbz       r6, 0x3(r4)
	  subi      r0, r6, 0x80
	  stb       r0, 0x3(r4)
	  lbz       r6, 0x4(r4)
	  subi      r0, r6, 0x80
	  stb       r0, 0x4(r4)
	  lbz       r6, 0x5(r4)
	  subi      r0, r6, 0x80
	  stb       r0, 0x5(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm    r5,r0,0,0,15
	  subis     r0, r5, 0x900
	  cmplwi    r0, 0
	  bne-      .loc_0x2A0
	  lhz       r0, 0x0(r4)
	  rlwinm    r0,r0,0,24,24
	  xori      r0, r0, 0x80
	  cmpwi     r0, 0
	  beq-      .loc_0x2A0
	  lis       r0, 0x8000
	  lwz       r5, -0x6FF4(r13)
	  srw       r0, r0, r3
	  or        r0, r5, r0
	  stw       r0, -0x6FF4(r13)
	  li        r0, 0
	  stb       r0, 0x2(r4)
	  stb       r0, 0x3(r4)
	  stb       r0, 0x4(r4)
	  stb       r0, 0x5(r4)
	  blr

	.loc_0x2A0:
	  lis       r0, 0x8000
	  lwz       r5, -0x6FF4(r13)
	  srw       r0, r0, r3
	  andc      r0, r5, r0
	  stw       r0, -0x6FF4(r13)
	  lis       r5, 0x804F
	  mulli     r3, r3, 0xC
	  lbz       r6, 0x2(r4)
	  addi      r0, r5, 0x7140
	  add       r3, r0, r3
	  lbz       r7, 0x2(r3)
	  extsb.    r0, r7
	  ble-      .loc_0x2F4
	  extsb     r5, r7
	  subi      r0, r5, 0x80
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r0, r5
	  bge-      .loc_0x318
	  mr        r6, r5
	  b         .loc_0x318

	.loc_0x2F4:
	  extsb.    r0, r7
	  bge-      .loc_0x318
	  extsb     r5, r7
	  addi      r0, r5, 0x7F
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r5, r0
	  bge-      .loc_0x318
	  mr        r6, r5

	.loc_0x318:
	  sub       r6, r6, r7
	  stb       r6, 0x2(r4)
	  lbz       r7, 0x3(r3)
	  lbz       r6, 0x3(r4)
	  extsb.    r0, r7
	  ble-      .loc_0x350
	  extsb     r5, r7
	  subi      r0, r5, 0x80
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r0, r5
	  bge-      .loc_0x374
	  mr        r6, r5
	  b         .loc_0x374

	.loc_0x350:
	  extsb.    r0, r7
	  bge-      .loc_0x374
	  extsb     r5, r7
	  addi      r0, r5, 0x7F
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r5, r0
	  bge-      .loc_0x374
	  mr        r6, r5

	.loc_0x374:
	  sub       r6, r6, r7
	  stb       r6, 0x3(r4)
	  lbz       r7, 0x4(r3)
	  lbz       r6, 0x4(r4)
	  extsb.    r0, r7
	  ble-      .loc_0x3AC
	  extsb     r5, r7
	  subi      r0, r5, 0x80
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r0, r5
	  bge-      .loc_0x3D0
	  mr        r6, r5
	  b         .loc_0x3D0

	.loc_0x3AC:
	  extsb.    r0, r7
	  bge-      .loc_0x3D0
	  extsb     r5, r7
	  addi      r0, r5, 0x7F
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r5, r0
	  bge-      .loc_0x3D0
	  mr        r6, r5

	.loc_0x3D0:
	  sub       r6, r6, r7
	  stb       r6, 0x4(r4)
	  lbz       r7, 0x5(r3)
	  lbz       r6, 0x5(r4)
	  extsb.    r0, r7
	  ble-      .loc_0x408
	  extsb     r5, r7
	  subi      r0, r5, 0x80
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r0, r5
	  bge-      .loc_0x42C
	  mr        r6, r5
	  b         .loc_0x42C

	.loc_0x408:
	  extsb.    r0, r7
	  bge-      .loc_0x42C
	  extsb     r5, r7
	  addi      r0, r5, 0x7F
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r5, r0
	  bge-      .loc_0x42C
	  mr        r6, r5

	.loc_0x42C:
	  sub       r6, r6, r7
	  stb       r6, 0x5(r4)
	  lbz       r0, 0x6(r3)
	  lbz       r5, 0x6(r4)
	  cmplw     r5, r0
	  bge-      .loc_0x448
	  mr        r5, r0

	.loc_0x448:
	  sub       r5, r5, r0
	  stb       r5, 0x6(r4)
	  lbz       r0, 0x7(r3)
	  lbz       r3, 0x7(r4)
	  cmplw     r3, r0
	  bge-      .loc_0x464
	  mr        r3, r0

	.loc_0x464:
	  sub       r3, r3, r0
	  stb       r3, 0x7(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void PADGetType(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void PADSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F4C9C
 * Size:	000074
 */
void PADSetAnalogMode(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  mr        r31, r3
	  bl        -0x6078
	  lwz       r5, -0x700C(r13)
	  rlwinm    r6,r31,8,0,23
	  lwz       r4, -0x7000(r13)
	  mr        r31, r3
	  addi      r8, r5, 0
	  not       r7, r8
	  lwz       r0, -0x6FFC(r13)
	  andc      r5, r5, r5
	  stw       r6, -0x7C74(r13)
	  and       r4, r4, r7
	  and       r0, r0, r7
	  stw       r5, -0x700C(r13)
	  mr        r3, r8
	  stw       r4, -0x7000(r13)
	  stw       r0, -0x6FFC(r13)
	  bl        0xF68
	  mr        r3, r31
	  bl        -0x6098
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F4D10
 * Size:	0000BC
 */
void OnReset(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0
	  lwz       r0, -0x6FF0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  li        r3, 0
	  bl        0xF8

	.loc_0x28:
	  cmpwi     r31, 0
	  bne-      .loc_0x9C
	  lwz       r0, -0x7008(r13)
	  li        r31, 0
	  addi      r3, r31, 0
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  lwz       r0, -0x7C7C(r13)
	  cmpwi     r0, 0x20
	  bne-      .loc_0x54
	  li        r3, 0x1

	.loc_0x54:
	  cmpwi     r3, 0
	  beq-      .loc_0x6C
	  bl        0x190
	  cmpwi     r3, 0
	  bne-      .loc_0x6C
	  li        r31, 0x1

	.loc_0x6C:
	  lwz       r0, -0x6FEC(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x94
	  cmpwi     r31, 0
	  beq-      .loc_0x94
	  lis       r3, 0xF000
	  bl        -0xECC
	  stw       r3, -0x6FEC(r13)
	  li        r3, 0
	  b         .loc_0xA8

	.loc_0x94:
	  mr        r3, r31
	  b         .loc_0xA8

	.loc_0x9C:
	  li        r0, 0
	  stw       r0, -0x6FEC(r13)
	  li        r3, 0x1

	.loc_0xA8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void __PADDisableXPatch(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F4DCC
 * Size:	000060
 */
void SamplingHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x2E0(r1)
	  stw       r31, 0x2DC(r1)
	  addi      r31, r4, 0
	  lwz       r0, -0x6FF0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  addi      r3, r1, 0x10
	  bl        -0x7C84
	  addi      r3, r1, 0x10
	  bl        -0x7E54
	  lwz       r12, -0x6FF0(r13)
	  mtlr      r12
	  blrl
	  addi      r3, r1, 0x10
	  bl        -0x7CA0
	  mr        r3, r31
	  bl        -0x7E70

	.loc_0x4C:
	  lwz       r0, 0x2E4(r1)
	  lwz       r31, 0x2DC(r1)
	  addi      r1, r1, 0x2E0
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F4E2C
 * Size:	000054
 */
void PADSetSamplingCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  lwz       r31, -0x6FF0(r13)
	  stw       r3, -0x6FF0(r13)
	  beq-      .loc_0x30
	  lis       r3, 0x800F
	  addi      r3, r3, 0x4DCC
	  bl        0x7DC
	  b         .loc_0x3C

	.loc_0x30:
	  lis       r3, 0x800F
	  addi      r3, r3, 0x4DCC
	  bl        0x898

	.loc_0x3C:
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
 * Address:	800F4E80
 * Size:	00007C
 */
void __PADDisableRecalibration(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  bl        -0x6260
	  lis       r4, 0x8000
	  lbz       r0, 0x30E3(r4)
	  rlwinm.   r0,r0,0,25,25
	  beq-      .loc_0x34
	  li        r31, 0x1
	  b         .loc_0x38

	.loc_0x34:
	  li        r31, 0

	.loc_0x38:
	  lis       r4, 0x8000
	  lbz       r0, 0x30E3(r4)
	  cmpwi     r30, 0
	  rlwinm    r0,r0,0,26,24
	  stb       r0, 0x30E3(r4)
	  beq-      .loc_0x5C
	  lbz       r0, 0x30E3(r4)
	  ori       r0, r0, 0x40
	  stb       r0, 0x30E3(r4)

	.loc_0x5C:
	  bl        -0x627C
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
 * Address:	........
 * Size:	00007C
 */
void __PADDisableRumble(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void PADIsBarrel(void)
{
	// UNUSED FUNCTION
}
