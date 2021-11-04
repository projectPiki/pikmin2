

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DebugPrint_TaskInfo(STRUCT_DSP_TASK*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Check_Broken(STRUCT_DSP_TASK*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void Check_PriorBroken()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AAD00
 * Size:	000304
 */
void __DSPHandler(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x2E0(r1)
	  mflr      r0
	  lis       r6, 0xCC00
	  stw       r0, 0x2E4(r1)
	  li        r0, -0x29
	  addi      r3, r1, 0x8
	  stw       r31, 0x2DC(r1)
	  mr        r31, r4
	  lhz       r5, 0x500A(r6)
	  rlwinm    r4,r5,0,16,31
	  and       r0, r4, r0
	  ori       r0, r0, 0x80
	  sth       r0, 0x500A(r6)
	  bl        0x42438
	  addi      r3, r1, 0x8
	  bl        0x42268
	  lbz       r0, -0x74C0(r13)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x58
	  lbz       r0, -0x74C0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x60

	.loc_0x58:
	  lwz       r0, -0x74B8(r13)
	  stw       r0, -0x723C(r13)

	.loc_0x60:
	  bl        0x2FF60
	  cmplwi    r3, 0
	  beq+      .loc_0x60
	  bl        0x2FF64
	  lwz       r5, -0x723C(r13)
	  lwz       r0, 0x8(r5)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x94
	  addis     r0, r3, 0x232F
	  cmplwi    r0, 0x2
	  bne-      .loc_0x94
	  lis       r3, 0xDCD1
	  addi      r3, r3, 0x3

	.loc_0x94:
	  lis       r4, 0xDCD1
	  addi      r0, r4, 0x3
	  cmpw      r3, r0
	  beq-      .loc_0x1BC
	  bge-      .loc_0xC4
	  addi      r0, r4, 0x1
	  cmpw      r3, r0
	  beq-      .loc_0x10C
	  bge-      .loc_0x148
	  cmpw      r3, r4
	  bge-      .loc_0xD8
	  b         .loc_0x2E0

	.loc_0xC4:
	  addi      r0, r4, 0x5
	  cmpw      r3, r0
	  beq-      .loc_0x264
	  bge-      .loc_0x2E0
	  b         .loc_0x248

	.loc_0xD8:
	  li        r4, 0x1
	  stw       r4, 0x0(r5)
	  lwz       r3, -0x723C(r13)
	  lwz       r0, -0x74B8(r13)
	  cmplw     r3, r0
	  bne-      .loc_0xF4
	  stb       r4, -0x74C0(r13)

	.loc_0xF4:
	  lwz       r12, 0x28(r3)
	  cmplwi    r12, 0
	  beq-      .loc_0x2E0
	  mtctr     r12
	  bctrl
	  b         .loc_0x2E0

	.loc_0x10C:
	  li        r4, 0x1
	  stw       r4, 0x0(r5)
	  lwz       r3, -0x723C(r13)
	  lwz       r0, -0x74B8(r13)
	  cmplw     r3, r0
	  bne-      .loc_0x12C
	  stb       r4, -0x74C0(r13)
	  bl        0x258

	.loc_0x12C:
	  lwz       r3, -0x723C(r13)
	  lwz       r12, 0x2C(r3)
	  cmplwi    r12, 0
	  beq-      .loc_0x2E0
	  mtctr     r12
	  bctrl
	  b         .loc_0x2E0

	.loc_0x148:
	  lis       r3, 0xCDD1
	  addi      r3, r3, 0x1
	  bl        0x2FE98
	  nop

	.loc_0x158:
	  bl        0x2FE58
	  cmplwi    r3, 0
	  bne+      .loc_0x158
	  lwz       r3, -0x723C(r13)
	  li        r0, 0x2
	  stw       r0, 0x0(r3)
	  lwz       r3, -0x723C(r13)
	  lwz       r4, 0x38(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x1A8
	  lwz       r0, -0x74BC(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x1A8
	  lwz       r4, -0x74B8(r13)
	  bl        0x2FFC0
	  lwz       r0, -0x74B8(r13)
	  li        r3, 0
	  stw       r3, -0x74BC(r13)
	  stw       r0, -0x723C(r13)
	  b         .loc_0x2E0

	.loc_0x1A8:
	  bl        0x2FFA8
	  lwz       r3, -0x723C(r13)
	  lwz       r0, 0x38(r3)
	  stw       r0, -0x723C(r13)
	  b         .loc_0x2E0

	.loc_0x1BC:
	  lwz       r12, 0x30(r5)
	  cmplwi    r12, 0
	  beq-      .loc_0x1D4
	  mr        r3, r5
	  mtctr     r12
	  bctrl

	.loc_0x1D4:
	  lis       r3, 0xCDD1
	  addi      r3, r3, 0x1
	  bl        0x2FE0C

	.loc_0x1E0:
	  bl        0x2FDD0
	  cmplwi    r3, 0
	  bne+      .loc_0x1E0
	  lwz       r3, -0x723C(r13)
	  li        r0, 0x3
	  stw       r0, 0x0(r3)
	  lwz       r3, -0x723C(r13)
	  lwz       r4, 0x38(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x228
	  lwz       r4, -0x74B8(r13)
	  li        r3, 0
	  bl        0x2FF40
	  lwz       r3, -0x723C(r13)
	  bl        0x30304
	  lwz       r0, -0x74B8(r13)
	  stw       r0, -0x723C(r13)
	  b         .loc_0x2E0

	.loc_0x228:
	  li        r3, 0
	  bl        0x2FF24
	  lwz       r3, -0x723C(r13)
	  lwz       r3, 0x38(r3)
	  stw       r3, -0x723C(r13)
	  lwz       r3, 0x3C(r3)
	  bl        0x302DC
	  b         .loc_0x2E0

	.loc_0x248:
	  lwz       r12, 0x34(r5)
	  cmplwi    r12, 0
	  beq-      .loc_0x2E0
	  mr        r3, r5
	  mtctr     r12
	  bctrl
	  b         .loc_0x2E0

	.loc_0x264:
	  lwz       r0, -0x7240(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x27C
	  lwz       r0, -0x74BC(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x2AC

	.loc_0x27C:
	  lis       r3, 0xCDD1
	  addi      r3, r3, 0x3
	  bl        0x2FD64

	.loc_0x288:
	  bl        0x2FD28
	  cmplwi    r3, 0
	  bne+      .loc_0x288
	  lwz       r0, -0x74B8(r13)
	  li        r3, 0
	  stw       r3, -0x74BC(r13)
	  stw       r0, -0x723C(r13)
	  bl        0xDC
	  b         .loc_0x2E0

	.loc_0x2AC:
	  li        r0, 0x3
	  lis       r3, 0xCDD1
	  stb       r0, -0x74C0(r13)
	  addi      r3, r3, 0x1
	  bl        0x2FD2C

	.loc_0x2C0:
	  bl        0x2FCF0
	  cmplwi    r3, 0
	  bne+      .loc_0x2C0
	  lwz       r3, -0x74B8(r13)
	  lwz       r4, -0x7240(r13)
	  bl        0x2FE7C
	  lwz       r0, -0x7240(r13)
	  stw       r0, -0x723C(r13)

	.loc_0x2E0:
	  addi      r3, r1, 0x8
	  bl        0x42188
	  mr        r3, r31
	  bl        0x41FB8
	  lwz       r0, 0x2E4(r1)
	  lwz       r31, 0x2DC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2E0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AB020
 * Size:	000050
 */
void DsyncFrame2(unsigned long, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, -0x74C0(r13)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x34
	  lis       r6, 0x804F
	  stwu      r3, 0x2860(r6)
	  li        r0, 0x1
	  stw       r0, -0x74BC(r13)
	  stw       r4, 0x4(r6)
	  stw       r5, 0x8(r6)
	  b         .loc_0x40

	.loc_0x34:
	  bl        -0x7B4
	  li        r0, 0
	  stw       r0, -0x74BC(r13)

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AB080
 * Size:	000040
 */
void Dsp_Update_Request()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x74BC(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x30
	  lis       r3, 0x804F
	  addi      r5, r3, 0x2860
	  lwz       r3, 0x0(r5)
	  lwz       r4, 0x4(r5)
	  lwz       r5, 0x8(r5)
	  bl        -0x8C

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AB0C0
 * Size:	000014
 */
void Dsp_Running_Check()
{
	/*
	.loc_0x0:
	  lbz       r0, -0x74C0(r13)
	  subfic    r0, r0, 0x1
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AB0E0
 * Size:	00000C
 */
void Dsp_Running_Start()
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stb       r0, -0x74C0(r13)
	  blr
	*/
}
