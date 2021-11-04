

/*
 * --INFO--
 * Address:	800F6864
 * Size:	000044
 */
void AIRegisterDMACallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  lwz       r31, -0x6FC4(r13)
	  bl        -0x7C48
	  stw       r30, -0x6FC4(r13)
	  bl        -0x7C28
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
 * Address:	800F68A8
 * Size:	000088
 */
void AIInitDMA(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  bl        -0x7C8C
	  lis       r4, 0xCC00
	  lhz       r0, 0x5030(r4)
	  addi      r5, r4, 0x5000
	  addi      r6, r4, 0x5000
	  addi      r7, r4, 0x5000
	  rlwinm    r4,r0,0,0,21
	  rlwinm    r0,r30,16,16,31
	  or        r0, r4, r0
	  sth       r0, 0x30(r5)
	  rlwinm    r0,r30,0,16,31
	  lhz       r4, 0x32(r6)
	  rlwinm    r4,r4,0,27,15
	  or        r0, r4, r0
	  sth       r0, 0x32(r6)
	  rlwinm    r0,r31,27,16,31
	  lhz       r4, 0x36(r7)
	  rlwinm    r4,r4,0,0,16
	  or        r0, r4, r0
	  sth       r0, 0x36(r7)
	  bl        -0x7CB4
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
 * Size:	000010
 */
void AIGetDMAEnableFlag(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F6930
 * Size:	000018
 */
void AIStartDMA(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x5000
	  lhz       r0, 0x36(r3)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x36(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F6948
 * Size:	000018
 */
void AIStopDMA(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x5000
	  lhz       r0, 0x36(r3)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x36(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void AIGetDMABytesLeft(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void AIGetDMAStartAddr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void AIGetDMALength(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void AICheckInit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void AIRegisterStreamCallback(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void AIGetStreamSampleCount(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void AIResetStreamSampleCount(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void AISetStreamTrigger(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void AIGetStreamTrigger(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F6960
 * Size:	0000D8
 */
void AISetStreamPlayState(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        .loc_0xD8
	  cmplw     r29, r3
	  beq-      .loc_0xBC
	  bl        0x288
	  cmplwi    r3, 0
	  bne-      .loc_0xA8
	  cmplwi    r29, 0x1
	  bne-      .loc_0xA8
	  bl        0x2CC
	  mr        r30, r3
	  bl        0x298
	  addi      r29, r3, 0
	  li        r3, 0
	  bl        0x29C
	  li        r3, 0
	  bl        0x268
	  bl        -0x7D84
	  mr        r31, r3
	  bl        0x5A0
	  lis       r4, 0xCC00
	  lwz       r0, 0x6C00(r4)
	  addi      r3, r31, 0
	  rlwinm    r0,r0,0,27,25
	  ori       r0, r0, 0x20
	  stw       r0, 0x6C00(r4)
	  lwz       r0, 0x6C00(r4)
	  rlwinm    r0,r0,0,0,30
	  ori       r0, r0, 0x1
	  stw       r0, 0x6C00(r4)
	  bl        -0x7D90
	  mr        r3, r30
	  bl        0x228
	  mr        r3, r29
	  bl        0x24C
	  b         .loc_0xBC

	.loc_0xA8:
	  lis       r3, 0xCC00
	  lwz       r0, 0x6C00(r3)
	  rlwinm    r0,r0,0,0,30
	  or        r0, r0, r29
	  stw       r0, 0x6C00(r3)

	.loc_0xBC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr

	.loc_0xD8:
	*/
}

/*
 * --INFO--
 * Address:	800F6A38
 * Size:	000010
 */
void AIGetStreamPlayState(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xCC00
	  lwz       r0, 0x6C00(r3)
	  rlwinm    r3,r0,0,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F6A48
 * Size:	0000E0
 */
void AISetDSPSampleRate(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r26, 0x10(r1)
	  mr        r26, r3
	  bl        .loc_0xE0
	  cmplw     r26, r3
	  beq-      .loc_0xCC
	  lis       r31, 0xCC00
	  lwz       r0, 0x6C00(r31)
	  cmplwi    r26, 0
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x6C00(r31)
	  bne-      .loc_0xCC
	  bl        0x1BC
	  mr        r30, r3
	  bl        0x1E0
	  lwz       r0, 0x6C00(r31)
	  addi      r29, r3, 0
	  rlwinm    r27,r0,0,31,31
	  bl        0x178
	  addi      r28, r3, 0
	  li        r3, 0
	  bl        0x17C
	  li        r3, 0
	  bl        0x1A0
	  bl        -0x7E78
	  mr        r26, r3
	  bl        0x4AC
	  lwz       r4, 0x6C00(r31)
	  rlwinm    r0,r28,1,0,30
	  addi      r3, r26, 0
	  rlwinm    r4,r4,0,27,25
	  ori       r4, r4, 0x20
	  stw       r4, 0x6C00(r31)
	  lwz       r4, 0x6C00(r31)
	  rlwinm    r4,r4,0,31,29
	  or        r0, r4, r0
	  stw       r0, 0x6C00(r31)
	  lwz       r0, 0x6C00(r31)
	  rlwinm    r0,r0,0,0,30
	  or        r0, r0, r27
	  stw       r0, 0x6C00(r31)
	  lwz       r0, 0x6C00(r31)
	  ori       r0, r0, 0x40
	  stw       r0, 0x6C00(r31)
	  bl        -0x7EA0
	  mr        r3, r30
	  bl        0x118
	  mr        r3, r29
	  bl        0x13C

	.loc_0xCC:
	  lmw       r26, 0x10(r1)
	  lwz       r0, 0x2C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr

	.loc_0xE0:
	*/
}

/*
 * --INFO--
 * Address:	800F6B28
 * Size:	000014
 */
void AIGetDSPSampleRate(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xCC00
	  lwz       r0, 0x6C00(r3)
	  rlwinm    r0,r0,26,31,31
	  xori      r3, r0, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void AISetStreamSampleRate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void __AI_DEBUG_set_stream_sample_rate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F6B3C
 * Size:	0000D4
 */
void __AI_set_stream_sample_rate(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  bl        .loc_0xD4
	  cmplw     r25, r3
	  beq-      .loc_0xC0
	  lis       r31, 0xCC00
	  lwz       r0, 0x6C00(r31)
	  rlwinm    r0,r0,0,31,31
	  mr        r29, r0
	  bl        0xD0
	  mr        r28, r3
	  bl        0xF4
	  addi      r27, r3, 0
	  li        r3, 0
	  bl        0xCC
	  li        r3, 0
	  bl        0x98
	  lwz       r3, 0x6C00(r31)
	  lwz       r0, 0x6C00(r31)
	  rlwinm    r26,r3,0,25,25
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x6C00(r31)
	  bl        -0x7F68
	  mr        r30, r3
	  bl        0x3BC
	  lwz       r4, 0x6C00(r31)
	  rlwinm    r0,r25,1,0,30
	  addi      r3, r30, 0
	  or        r4, r4, r26
	  stw       r4, 0x6C00(r31)
	  lwz       r4, 0x6C00(r31)
	  rlwinm    r4,r4,0,27,25
	  ori       r4, r4, 0x20
	  stw       r4, 0x6C00(r31)
	  lwz       r4, 0x6C00(r31)
	  rlwinm    r4,r4,0,31,29
	  or        r0, r4, r0
	  stw       r0, 0x6C00(r31)
	  bl        -0x7F80
	  mr        r3, r29
	  bl        -0x288
	  mr        r3, r28
	  bl        0x30
	  mr        r3, r27
	  bl        0x54

	.loc_0xC0:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr

	.loc_0xD4:
	*/
}

/*
 * --INFO--
 * Address:	800F6C10
 * Size:	000010
 */
void AIGetStreamSampleRate(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xCC00
	  lwz       r0, 0x6C00(r3)
	  rlwinm    r3,r0,31,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F6C20
 * Size:	00001C
 */
void AISetStreamVolLeft(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0xCC00
	  addi      r4, r4, 0x6C00
	  lwz       r0, 0x4(r4)
	  rlwinm    r0,r0,0,0,23
	  rlwimi    r0,r3,0,24,31
	  stw       r0, 0x4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F6C3C
 * Size:	000010
 */
void AIGetStreamVolLeft(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xCC00
	  lwz       r0, 0x6C04(r3)
	  rlwinm    r3,r0,0,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F6C4C
 * Size:	00001C
 */
void AISetStreamVolRight(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0xCC00
	  addi      r4, r4, 0x6C00
	  lwz       r0, 0x4(r4)
	  rlwinm    r0,r0,0,24,15
	  rlwimi    r0,r3,8,16,23
	  stw       r0, 0x4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F6C68
 * Size:	000010
 */
void AIGetStreamVolRight(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xCC00
	  lwz       r0, 0x6C04(r3)
	  rlwinm    r3,r0,24,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F6C78
 * Size:	00016C
 */
void AIInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  lwz       r0, -0x6FB8(r13)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x154
	  lwz       r3, -0x7C58(r13)
	  bl        -0xB218
	  lis       r3, 0x8000
	  lwz       r0, 0xF8(r3)
	  lis       r3, 0x431C
	  lis       r4, 0x1
	  rlwinm    r0,r0,30,2,31
	  subi      r3, r3, 0x217D
	  mulhwu    r0, r3, r0
	  rlwinm    r9,r0,17,15,31
	  subi      r5, r4, 0x5BD8
	  subi      r3, r4, 0x5BF0
	  subi      r0, r4, 0x9E8
	  lis       r4, 0x1062
	  mullw     r7, r9, r5
	  addi      r10, r4, 0x4DD3
	  mullw     r5, r9, r3
	  mullw     r4, r9, r0
	  mulli     r8, r9, 0x7B24
	  mulli     r3, r9, 0xBB8
	  mulhwu    r8, r10, r8
	  mulhwu    r7, r10, r7
	  mulhwu    r5, r10, r5
	  mulhwu    r4, r10, r4
	  mulhwu    r3, r10, r3
	  rlwinm    r8,r8,23,9,31
	  rlwinm    r7,r7,23,9,31
	  stw       r8, -0x6FAC(r13)
	  rlwinm    r5,r5,23,9,31
	  rlwinm    r4,r4,23,9,31
	  stw       r7, -0x6FA4(r13)
	  li        r31, 0
	  rlwinm    r3,r3,23,9,31
	  stw       r5, -0x6F9C(r13)
	  lis       r6, 0xCC00
	  stw       r3, -0x6F8C(r13)
	  li        r3, 0x1
	  lwz       r0, 0x6C00(r6)
	  stw       r4, -0x6F94(r13)
	  rlwinm    r0,r0,0,27,25
	  ori       r0, r0, 0x20
	  stw       r31, -0x6FB0(r13)
	  stw       r31, -0x6FA8(r13)
	  stw       r31, -0x6FA0(r13)
	  stw       r31, -0x6F98(r13)
	  stw       r31, -0x6F90(r13)
	  lwz       r5, 0x6C04(r6)
	  stw       r0, 0x6C00(r6)
	  rlwinm    r0,r5,0,24,15
	  nop
	  stw       r0, 0x6C04(r6)
	  lwz       r0, 0x6C04(r6)
	  rlwinm    r0,r0,0,0,23
	  nop
	  stw       r0, 0x6C04(r6)
	  stw       r31, 0x6C0C(r6)
	  bl        -0x240
	  li        r3, 0
	  bl        -0x33C
	  lis       r3, 0x800F
	  stw       r31, -0x6FC8(r13)
	  addi      r4, r3, 0x6E60
	  stw       r31, -0x6FC4(r13)
	  li        r3, 0x5
	  stw       r30, -0x6FC0(r13)
	  bl        -0x811C
	  lis       r3, 0x400
	  bl        -0x7D20
	  lis       r3, 0x800F
	  addi      r4, r3, 0x6DE4
	  li        r3, 0x8
	  bl        -0x8134
	  lis       r3, 0x80
	  bl        -0x7D38
	  li        r0, 0x1
	  stw       r0, -0x6FB8(r13)

	.loc_0x154:
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
 * Size:	00000C
 */
void AIReset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F6DE4
 * Size:	00007C
 */
void __AISHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x2E0(r1)
	  stw       r31, 0x2DC(r1)
	  lis       r31, 0xCC00
	  lwz       r0, 0x6C00(r31)
	  addi      r3, r1, 0x10
	  stw       r30, 0x2D8(r1)
	  ori       r0, r0, 0x8
	  stw       r0, 0x6C00(r31)
	  addi      r30, r4, 0
	  bl        -0x9CA4
	  addi      r3, r1, 0x10
	  bl        -0x9E74
	  lwz       r12, -0x6FC8(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x54
	  addi      r3, r31, 0x6C00
	  mtlr      r12
	  lwz       r3, 0x8(r3)
	  blrl

	.loc_0x54:
	  addi      r3, r1, 0x10
	  bl        -0x9CD0
	  mr        r3, r30
	  bl        -0x9EA0
	  lwz       r0, 0x2E4(r1)
	  lwz       r31, 0x2DC(r1)
	  lwz       r30, 0x2D8(r1)
	  addi      r1, r1, 0x2E0
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F6E60
 * Size:	0000AC
 */
void __AIDHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0xCC00
	  stw       r0, 0x4(r1)
	  addi      r3, r3, 0x5000
	  li        r0, -0xA1
	  stwu      r1, -0x2E0(r1)
	  stw       r31, 0x2DC(r1)
	  addi      r31, r4, 0
	  lhz       r5, 0xA(r3)
	  and       r0, r5, r0
	  ori       r0, r0, 0x8
	  sth       r0, 0xA(r3)
	  addi      r3, r1, 0x10
	  bl        -0x9D28
	  addi      r3, r1, 0x10
	  bl        -0x9EF8
	  lwz       r3, -0x6FC4(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  lwz       r0, -0x6FB4(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x88
	  lwz       r0, -0x6FC0(r13)
	  li        r4, 0x1
	  stw       r4, -0x6FB4(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  bl        .loc_0xAC
	  b         .loc_0x80

	.loc_0x74:
	  addi      r12, r3, 0
	  mtlr      r12
	  blrl

	.loc_0x80:
	  li        r0, 0
	  stw       r0, -0x6FB4(r13)

	.loc_0x88:
	  addi      r3, r1, 0x10
	  bl        -0x9D80
	  mr        r3, r31
	  bl        -0x9F50
	  lwz       r0, 0x2E4(r1)
	  lwz       r31, 0x2DC(r1)
	  addi      r1, r1, 0x2E0
	  mtlr      r0
	  blr

	.loc_0xAC:
	*/
}

/*
 * --INFO--
 * Address:	800F6F0C
 * Size:	000058
 */
void __AICallbackStackSwitch(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  mr        r31, r3
	  lis       r5, 0x8051
	  addi      r5, r5, 0x56C4
	  stw       r1, 0x0(r5)
	  lis       r5, 0x8051
	  addi      r5, r5, 0x56C0
	  lwz       r1, 0x0(r5)
	  subi      r1, r1, 0x8
	  mtlr      r31
	  blrl
	  lis       r5, 0x8051
	  addi      r5, r5, 0x56C4
	  lwz       r1, 0x0(r5)
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F6F64
 * Size:	0001E4
 */
void __AI_SRC_INIT(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r26, 0x18(r1)
	  li        r4, 0
	  li        r3, 0
	  li        r0, 0
	  li        r28, 0
	  li        r29, 0
	  b         .loc_0x28

	.loc_0x28:
	  lis       r31, 0xCC00
	  b         .loc_0x30

	.loc_0x30:
	  b         .loc_0x194

	.loc_0x34:
	  lwz       r0, 0x6C00(r31)
	  addi      r30, r31, 0x6C00
	  addi      r30, r30, 0x8
	  rlwinm    r0,r0,0,27,25
	  ori       r0, r0, 0x20
	  stw       r0, 0x6C00(r31)
	  lwz       r0, 0x6C00(r31)
	  rlwinm    r0,r0,0,31,29
	  stw       r0, 0x6C00(r31)
	  lwz       r0, 0x6C00(r31)
	  rlwinm    r0,r0,0,0,30
	  ori       r0, r0, 0x1
	  stw       r0, 0x6C00(r31)
	  lwz       r3, 0x0(r30)
	  b         .loc_0x70

	.loc_0x70:
	  b         .loc_0x74

	.loc_0x74:
	  lwz       r0, 0x0(r30)
	  cmplw     r3, r0
	  beq+      .loc_0x74
	  bl        -0x4454
	  lwz       r0, 0x6C00(r31)
	  mr        r26, r4
	  mr        r27, r3
	  rlwinm    r0,r0,0,31,29
	  ori       r0, r0, 0x2
	  stw       r0, 0x6C00(r31)
	  lwz       r0, 0x6C00(r31)
	  rlwinm    r0,r0,0,0,30
	  ori       r0, r0, 0x1
	  stw       r0, 0x6C00(r31)
	  lwz       r3, 0x0(r30)
	  b         .loc_0xB4

	.loc_0xB4:
	  b         .loc_0xB8

	.loc_0xB8:
	  lwz       r0, 0x0(r30)
	  cmplw     r3, r0
	  beq+      .loc_0xB8
	  bl        -0x4498
	  subc      r8, r4, r26
	  lwz       r12, -0x6FAC(r13)
	  lwz       r5, 0x6C00(r31)
	  subfe     r7, r27, r3
	  lwz       r10, -0x6F8C(r13)
	  xoris     r7, r7, 0x8000
	  rlwinm    r5,r5,0,31,29
	  lwz       r11, -0x6FB0(r13)
	  subc      r6, r12, r10
	  lwz       r9, -0x6F90(r13)
	  stw       r5, 0x6C00(r31)
	  subfe     r0, r9, r11
	  xoris     r5, r0, 0x8000
	  subc      r0, r8, r6
	  lwz       r0, 0x6C00(r31)
	  subfe     r5, r5, r7
	  subfe     r5, r7, r7
	  neg       r5, r5
	  rlwinm    r0,r0,0,0,30
	  cmpwi     r5, 0
	  stw       r0, 0x6C00(r31)
	  beq-      .loc_0x130
	  lwz       r29, -0x6FA0(r13)
	  li        r0, 0x1
	  lwz       r28, -0x6F9C(r13)
	  b         .loc_0x194

	.loc_0x130:
	  addc      r6, r12, r10
	  adde      r0, r11, r9
	  xoris     r5, r0, 0x8000
	  subc      r0, r8, r6
	  subfe     r5, r5, r7
	  subfe     r5, r7, r7
	  neg       r5, r5
	  cmpwi     r5, 0
	  bne-      .loc_0x190
	  lwz       r5, -0x6FA4(r13)
	  lwz       r0, -0x6FA8(r13)
	  subc      r6, r5, r10
	  subfe     r0, r9, r0
	  xoris     r5, r0, 0x8000
	  subc      r0, r8, r6
	  subfe     r5, r5, r7
	  subfe     r5, r7, r7
	  neg       r5, r5
	  cmpwi     r5, 0
	  beq-      .loc_0x190
	  lwz       r29, -0x6F98(r13)
	  li        r0, 0x1
	  lwz       r28, -0x6F94(r13)
	  b         .loc_0x194

	.loc_0x190:
	  li        r0, 0

	.loc_0x194:
	  cmplwi    r0, 0
	  beq+      .loc_0x34
	  addc      r27, r4, r28
	  adde      r26, r3, r29
	  b         .loc_0x1A8

	.loc_0x1A8:
	  b         .loc_0x1AC

	.loc_0x1AC:
	  bl        -0x4580
	  xoris     r5, r3, 0x8000
	  xoris     r3, r26, 0x8000
	  subc      r0, r4, r27
	  subfe     r3, r3, r5
	  subfe     r3, r5, r5
	  neg       r3, r3
	  cmpwi     r3, 0
	  bne+      .loc_0x1AC
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __ai_src_get_time(void)
{
	// UNUSED FUNCTION
}
