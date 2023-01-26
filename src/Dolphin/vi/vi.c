

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void getEncoderType(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void cntlzd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
void VISetRegs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D07E8
 * Size:	000274
 */
void __VIRetraceHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0xCC00
	  stw       r0, 0x4(r1)
	  addi      r5, r3, 0x2000
	  lis       r3, 0x804F
	  stwu      r1, -0x2F8(r1)
	  li        r7, 0
	  stmw      r27, 0x2E4(r1)
	  addi      r30, r4, 0
	  addi      r31, r3, 0x59A8
	  lhzu      r6, 0x30(r5)
	  rlwinm.   r0,r6,0,16,16
	  beq-      .loc_0x40
	  rlwinm    r0,r6,0,17,15
	  sth       r0, 0x0(r5)
	  ori       r7, r7, 0x1

	.loc_0x40:
	  lis       r3, 0xCC00
	  lhzu      r4, 0x2034(r3)
	  rlwinm.   r0,r4,0,16,16
	  beq-      .loc_0x5C
	  rlwinm    r0,r4,0,17,15
	  sth       r0, 0x0(r3)
	  ori       r7, r7, 0x2

	.loc_0x5C:
	  lis       r3, 0xCC00
	  lhzu      r4, 0x2038(r3)
	  rlwinm.   r0,r4,0,16,16
	  beq-      .loc_0x78
	  rlwinm    r0,r4,0,17,15
	  sth       r0, 0x0(r3)
	  ori       r7, r7, 0x4

	.loc_0x78:
	  lis       r3, 0xCC00
	  lhzu      r4, 0x203C(r3)
	  rlwinm.   r0,r4,0,16,16
	  beq-      .loc_0x94
	  rlwinm    r0,r4,0,17,15
	  sth       r0, 0x0(r3)
	  ori       r7, r7, 0x8

	.loc_0x94:
	  rlwinm.   r0,r7,0,29,29
	  bne-      .loc_0xA4
	  rlwinm.   r0,r7,0,28,28
	  beq-      .loc_0xF4

	.loc_0xA4:
	  addi      r3, r1, 0x18
	  bl        0x1C8DC
	  addi      r3, r1, 0x18
	  bl        0x1C70C
	  lwz       r0, -0x72EC(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xE0
	  addi      r3, r1, 0x16
	  addi      r4, r1, 0x14
	  bl        0x1D34
	  lwz       r12, -0x72EC(r13)
	  lha       r3, 0x16(r1)
	  mtlr      r12
	  lha       r4, 0x14(r1)
	  blrl

	.loc_0xE0:
	  addi      r3, r1, 0x18
	  bl        0x1C8A0
	  mr        r3, r30
	  bl        0x1C6D0
	  b         .loc_0x260

	.loc_0xF4:
	  lwz       r4, -0x7304(r13)
	  addi      r3, r1, 0x18
	  addi      r0, r4, 0x1
	  stw       r0, -0x7304(r13)
	  bl        0x1C880
	  addi      r3, r1, 0x18
	  bl        0x1C6B0
	  lwz       r12, -0x72F4(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x128
	  lwz       r3, -0x7304(r13)
	  mtlr      r12
	  blrl

	.loc_0x128:
	  lwz       r0, -0x7300(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x224
	  lwz       r0, -0x72D0(r13)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x14C
	  bl        0x1860
	  cmplwi    r3, 0
	  beq-      .loc_0x20C

	.loc_0x14C:
	  lis       r3, 0xCC00
	  addi      r29, r3, 0x2000
	  b         .loc_0x1CC

	.loc_0x158:
	  lwz       r3, -0x72C8(r13)
	  li        r5, 0x20
	  lwz       r27, -0x72C4(r13)
	  addi      r4, r27, 0
	  bl        -0xE840
	  cntlzw    r4, r4
	  cmpwi     r4, 0x20
	  li        r0, -0x1
	  and       r0, r27, r0
	  bge-      .loc_0x184
	  b         .loc_0x18C

	.loc_0x184:
	  cntlzw    r3, r0
	  addi      r4, r3, 0x20

	.loc_0x18C:
	  rlwinm    r6,r4,1,0,30
	  add       r3, r31, r6
	  lhz       r0, 0x78(r3)
	  subfic    r5, r4, 0x3F
	  li        r3, 0
	  sthx      r0, r29, r6
	  li        r4, 0x1
	  bl        -0xE8A4
	  lwz       r0, -0x72C8(r13)
	  not       r5, r3
	  not       r4, r4
	  lwz       r3, -0x72C4(r13)
	  and       r0, r0, r5
	  and       r3, r3, r4
	  stw       r3, -0x72C4(r13)
	  stw       r0, -0x72C8(r13)

	.loc_0x1CC:
	  lwz       r0, -0x72C8(r13)
	  li        r4, 0
	  lwz       r3, -0x72C4(r13)
	  xor       r0, r0, r4
	  xor       r3, r3, r4
	  or.       r0, r3, r0
	  bne+      .loc_0x158
	  stw       r4, -0x72D0(r13)
	  li        r4, 0x1
	  lwz       r0, -0x72B8(r13)
	  lwz       r3, 0x144(r31)
	  stw       r3, -0x72C0(r13)
	  lwz       r3, 0x118(r31)
	  stw       r3, -0x72BC(r13)
	  stw       r0, -0x72B4(r13)
	  b         .loc_0x210

	.loc_0x20C:
	  li        r4, 0

	.loc_0x210:
	  cmpwi     r4, 0
	  beq-      .loc_0x224
	  li        r0, 0
	  stw       r0, -0x7300(r13)
	  bl        0x25E38

	.loc_0x224:
	  lwz       r0, -0x72F0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x248
	  addi      r3, r1, 0x18
	  bl        0x1C750
	  lwz       r12, -0x72F0(r13)
	  lwz       r3, -0x7304(r13)
	  mtlr      r12
	  blrl

	.loc_0x248:
	  subi      r3, r13, 0x72FC
	  bl        0x21FA4
	  addi      r3, r1, 0x18
	  bl        0x1C730
	  mr        r3, r30
	  bl        0x1C560

	.loc_0x260:
	  lmw       r27, 0x2E4(r1)
	  lwz       r0, 0x2FC(r1)
	  addi      r1, r1, 0x2F8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D0A5C
 * Size:	000044
 */
void VISetPreRetraceCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  lwz       r31, -0x72F4(r13)
	  bl        0x1E1C0
	  stw       r30, -0x72F4(r13)
	  bl        0x1E1E0
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
 * Address:	800D0AA0
 * Size:	000044
 */
void VISetPostRetraceCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  lwz       r31, -0x72F0(r13)
	  bl        0x1E17C
	  stw       r30, -0x72F0(r13)
	  bl        0x1E19C
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
 * Address:	800D0AE4
 * Size:	0000A0
 */
void getTiming(void)
{
	/*
	.loc_0x0:
	  cmplwi    r3, 0x1A
	  lis       r4, 0x804A
	  addi      r5, r4, 0x72B0
	  bgt-      .loc_0x98
	  lis       r4, 0x804A
	  addi      r4, r4, 0x74A4
	  rlwinm    r0,r3,2,0,29
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  addi      r3, r5, 0x44
	  blr
	  addi      r3, r5, 0x6A
	  blr
	  addi      r3, r5, 0x90
	  blr
	  addi      r3, r5, 0xB6
	  blr
	  addi      r3, r5, 0x44
	  blr
	  addi      r3, r5, 0x6A
	  blr
	  addi      r3, r5, 0xDC
	  blr
	  addi      r3, r5, 0x102
	  blr
	  addi      r3, r5, 0x128
	  blr
	  addi      r3, r5, 0x14E
	  blr
	  addi      r3, r5, 0x90
	  blr
	  addi      r3, r5, 0xB6
	  blr
	  addi      r3, r5, 0x174
	  blr
	  addi      r3, r5, 0x19A
	  blr

	.loc_0x98:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D0B84
 * Size:	000200
 */
void __VIInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stw       r31, 0x2C(r1)
	  rlwinm    r31,r3,30,2,31
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  addi      r29, r3, 0
	  lis       r3, 0x8000
	  stw       r31, 0xCC(r3)
	  addi      r3, r29, 0
	  rlwinm    r30,r29,0,30,30
	  bl        -0xD0
	  lis       r4, 0xCC00
	  li        r0, 0x2
	  addi      r5, r4, 0x2000
	  sthu      r0, 0x2(r5)
	  li        r0, 0
	  stw       r0, 0x1C(r1)
	  lwz       r0, 0x1C(r1)
	  cmplwi    r0, 0x3E8
	  bge-      .loc_0x74
	  b         .loc_0x68

	.loc_0x5C:
	  lwz       r4, 0x1C(r1)
	  addi      r0, r4, 0x8
	  stw       r0, 0x1C(r1)

	.loc_0x68:
	  lwz       r0, 0x1C(r1)
	  cmplwi    r0, 0x3E8
	  blt+      .loc_0x5C

	.loc_0x74:
	  li        r0, 0
	  sth       r0, 0x0(r5)
	  lis       r12, 0xCC00
	  li        r8, 0x2828
	  lhz       r6, 0x1A(r3)
	  li        r7, 0x1
	  cmpwi     r29, 0x2
	  sth       r6, 0x2006(r12)
	  li        r6, 0x1001
	  addi      r4, r12, 0x2000
	  lbz       r9, 0x1D(r3)
	  lbz       r10, 0x1E(r3)
	  rlwimi    r10,r9,8,16,23
	  sth       r10, 0x2004(r12)
	  lbz       r9, 0x1F(r3)
	  lbz       r10, 0x1C(r3)
	  rlwinm    r9,r9,7,0,24
	  or        r9, r10, r9
	  sth       r9, 0x200A(r12)
	  lhz       r9, 0x20(r3)
	  rlwinm    r9,r9,1,16,30
	  sth       r9, 0x2008(r12)
	  lhz       r9, 0x2(r3)
	  lbz       r11, 0x0(r3)
	  rlwinm    r9,r9,1,0,30
	  lhz       r10, 0x4(r3)
	  subi      r9, r9, 0x2
	  sth       r11, 0x2000(r12)
	  add       r9, r10, r9
	  sth       r9, 0x200E(r12)
	  lhz       r9, 0x8(r3)
	  addi      r9, r9, 0x2
	  sth       r9, 0x200C(r12)
	  lhz       r9, 0x2(r3)
	  lhz       r10, 0x6(r3)
	  rlwinm    r9,r9,1,0,30
	  subi      r9, r9, 0x2
	  add       r9, r10, r9
	  sth       r9, 0x2012(r12)
	  lhz       r9, 0xA(r3)
	  addi      r9, r9, 0x2
	  sth       r9, 0x2010(r12)
	  lhz       r9, 0x10(r3)
	  lbz       r10, 0xC(r3)
	  rlwinm    r9,r9,5,0,26
	  or        r9, r10, r9
	  sth       r9, 0x2016(r12)
	  lhz       r9, 0x14(r3)
	  lbz       r10, 0xE(r3)
	  rlwinm    r9,r9,5,0,26
	  or        r9, r10, r9
	  sth       r9, 0x2014(r12)
	  lhz       r9, 0x12(r3)
	  lbz       r10, 0xD(r3)
	  rlwinm    r9,r9,5,0,26
	  or        r9, r10, r9
	  sth       r9, 0x201A(r12)
	  lhz       r9, 0x16(r3)
	  lbz       r10, 0xF(r3)
	  rlwinm    r9,r9,5,0,26
	  or        r9, r10, r9
	  sth       r9, 0x2018(r12)
	  sth       r8, 0x2048(r12)
	  sth       r7, 0x2036(r12)
	  sth       r6, 0x2034(r12)
	  lhz       r6, 0x18(r3)
	  lhz       r3, 0x1A(r3)
	  srawi     r6, r6, 0x1
	  addi      r3, r3, 0x1
	  addze     r6, r6
	  sth       r3, 0x2032(r12)
	  addi      r6, r6, 0x1
	  ori       r3, r6, 0x1000
	  sth       r3, 0x2030(r12)
	  beq-      .loc_0x1CC
	  cmpwi     r29, 0x3
	  beq-      .loc_0x1CC
	  cmpwi     r29, 0x1A
	  beq-      .loc_0x1CC
	  rlwinm    r3,r30,2,0,29
	  ori       r6, r3, 0x1
	  rlwinm    r3,r31,8,0,23
	  or        r3, r6, r3
	  sth       r3, 0x0(r5)
	  sth       r0, 0x6C(r4)
	  b         .loc_0x1E4

	.loc_0x1CC:
	  rlwinm    r0,r31,8,0,23
	  ori       r0, r0, 0x5
	  sth       r0, 0x0(r5)
	  lis       r3, 0xCC00
	  li        r0, 0x1
	  sth       r0, 0x206C(r3)

	.loc_0x1E4:
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
 * Address:	........
 * Size:	000160
 */
void AdjustPosition(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void ImportAdjustingValues(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D0D84
 * Size:	0004B0
 */
void VIInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x4(r1)
	  lis       r3, 0x804F
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0x59A8
	  stw       r29, 0xC(r1)
	  addi      r29, r4, 0x72B0
	  stw       r28, 0x8(r1)
	  lwz       r0, -0x7308(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x490
	  lwz       r3, -0x7D98(r13)
	  bl        0x1ACC8
	  li        r0, 0x1
	  stw       r0, -0x7308(r13)
	  lis       r3, 0xCC00
	  addi      r28, r3, 0x2000
	  stw       r0, -0x72E8(r13)
	  lhzu      r0, 0x2(r28)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x68
	  li        r3, 0
	  bl        -0x264

	.loc_0x68:
	  li        r31, 0
	  stw       r31, -0x7304(r13)
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x2000
	  stw       r31, -0x72D4(r13)
	  li        r0, 0x280
	  stw       r31, -0x72D8(r13)
	  stw       r31, -0x72C4(r13)
	  stw       r31, -0x72C8(r13)
	  stw       r31, -0x72E0(r13)
	  stw       r31, -0x72D0(r13)
	  stw       r31, -0x7300(r13)
	  lhz       r5, 0x1C2(r29)
	  lhz       r6, 0x1C0(r29)
	  rlwinm    r5,r5,10,16,21
	  or        r5, r6, r5
	  sth       r5, 0x4E(r3)
	  lhz       r6, 0x1C2(r29)
	  lhz       r5, 0x1C4(r29)
	  srawi     r6, r6, 0x6
	  rlwinm    r5,r5,4,0,27
	  or        r5, r6, r5
	  sth       r5, 0x4C(r3)
	  lhz       r5, 0x1C8(r29)
	  lhz       r6, 0x1C6(r29)
	  rlwinm    r5,r5,10,16,21
	  or        r5, r6, r5
	  sth       r5, 0x52(r3)
	  lhz       r6, 0x1C8(r29)
	  lhz       r5, 0x1CA(r29)
	  srawi     r6, r6, 0x6
	  rlwinm    r5,r5,4,0,27
	  or        r5, r6, r5
	  sth       r5, 0x50(r3)
	  lhz       r5, 0x1CE(r29)
	  lhz       r6, 0x1CC(r29)
	  rlwinm    r5,r5,10,16,21
	  or        r5, r6, r5
	  sth       r5, 0x56(r3)
	  lhz       r5, 0x1CE(r29)
	  lhz       r4, 0x1D0(r29)
	  srawi     r5, r5, 0x6
	  rlwinm    r4,r4,4,0,27
	  or        r4, r5, r4
	  sth       r4, 0x54(r3)
	  lhz       r4, 0x1D4(r29)
	  lhz       r5, 0x1D2(r29)
	  rlwinm    r4,r4,8,0,23
	  or        r4, r5, r4
	  sth       r4, 0x5A(r3)
	  lhz       r4, 0x1D8(r29)
	  lhz       r5, 0x1D6(r29)
	  rlwinm    r4,r4,8,0,23
	  or        r4, r5, r4
	  sth       r4, 0x58(r3)
	  lhz       r4, 0x1DC(r29)
	  lhz       r5, 0x1DA(r29)
	  rlwinm    r4,r4,8,0,23
	  or        r4, r5, r4
	  sth       r4, 0x5E(r3)
	  lhz       r4, 0x1E0(r29)
	  lhz       r5, 0x1DE(r29)
	  rlwinm    r4,r4,8,0,23
	  or        r4, r5, r4
	  sth       r4, 0x5C(r3)
	  lhz       r4, 0x1E4(r29)
	  lhz       r5, 0x1E2(r29)
	  rlwinm    r4,r4,8,0,23
	  or        r4, r5, r4
	  sth       r4, 0x62(r3)
	  lhz       r4, 0x1E8(r29)
	  lhz       r5, 0x1E6(r29)
	  rlwinm    r4,r4,8,0,23
	  or        r4, r5, r4
	  sth       r4, 0x60(r3)
	  lhz       r4, 0x1EC(r29)
	  lhz       r5, 0x1EA(r29)
	  rlwinm    r4,r4,8,0,23
	  or        r4, r5, r4
	  sth       r4, 0x66(r3)
	  lhz       r4, 0x1F0(r29)
	  lhz       r5, 0x1EE(r29)
	  rlwinm    r4,r4,8,0,23
	  or        r4, r5, r4
	  sth       r4, 0x64(r3)
	  sth       r0, 0x70(r3)
	  bl        0x1FDEC
	  lbz       r0, 0x10(r3)
	  li        r3, 0
	  extsb     r0, r0
	  sth       r31, -0x72E2(r13)
	  sth       r0, -0x72E4(r13)
	  bl        0x201C8
	  lhz       r29, 0x0(r28)
	  lis       r3, 0x8000
	  lwz       r3, 0xCC(r3)
	  addi      r4, r30, 0x114
	  rlwinm    r0,r29,30,31,31
	  stw       r0, 0x114(r30)
	  rlwinm    r0,r29,24,30,31
	  cmplwi    r3, 0x1
	  stw       r0, 0x118(r30)
	  addi      r28, r30, 0x118
	  bne-      .loc_0x21C
	  lwz       r0, 0x0(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x21C
	  li        r0, 0x5
	  stw       r0, 0x0(r28)

	.loc_0x21C:
	  lwz       r3, 0x0(r28)
	  cmplwi    r3, 0x3
	  bne-      .loc_0x22C
	  li        r3, 0

	.loc_0x22C:
	  lwz       r0, 0x0(r4)
	  rlwinm    r3,r3,2,0,29
	  add       r3, r3, r0
	  bl        -0x4D8
	  stw       r3, 0x144(r30)
	  addi      r4, r30, 0x144
	  li        r0, 0x280
	  sth       r29, 0x2(r30)
	  li        r8, 0
	  addi      r6, r30, 0xF6
	  lwz       r4, 0x0(r4)
	  addi      r3, r30, 0xF2
	  stw       r4, -0x72C0(r13)
	  lwz       r4, 0x0(r28)
	  stw       r4, -0x72BC(r13)
	  sth       r0, 0xF4(r30)
	  lwz       r4, -0x72C0(r13)
	  lhzu      r0, 0x2(r4)
	  rlwinm    r0,r0,1,16,30
	  sth       r0, 0xF6(r30)
	  lhz       r0, 0xF4(r30)
	  subfic    r0, r0, 0x2D0
	  srawi     r0, r0, 0x1
	  addze     r0, r0
	  sth       r0, 0xF0(r30)
	  sth       r8, 0xF2(r30)
	  lhz       r0, 0xF4(r30)
	  lha       r7, 0xF0(r30)
	  lha       r5, -0x72E4(r13)
	  subfic    r0, r0, 0x2D0
	  lhz       r9, 0x0(r4)
	  add       r5, r7, r5
	  cmpw      r5, r0
	  ble-      .loc_0x2B8
	  b         .loc_0x2CC

	.loc_0x2B8:
	  cmpwi     r5, 0
	  bge-      .loc_0x2C4
	  b         .loc_0x2C8

	.loc_0x2C4:
	  mr        r8, r5

	.loc_0x2C8:
	  mr        r0, r8

	.loc_0x2CC:
	  sth       r0, 0xF8(r30)
	  addi      r8, r30, 0x110
	  lwz       r0, 0x110(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x2E8
	  li        r11, 0x2
	  b         .loc_0x2EC

	.loc_0x2E8:
	  li        r11, 0x1

	.loc_0x2EC:
	  lhz       r0, 0x0(r3)
	  lha       r5, -0x72E2(r13)
	  extsh     r7, r0
	  rlwinm    r0,r0,0,31,31
	  add       r7, r7, r5
	  cmpw      r7, r0
	  ble-      .loc_0x30C
	  b         .loc_0x310

	.loc_0x30C:
	  mr        r7, r0

	.loc_0x310:
	  sth       r7, 0xFA(r30)
	  extsh     r7, r9
	  rlwinm    r7,r7,1,0,30
	  lhz       r28, 0x0(r6)
	  sub       r12, r7, r0
	  lha       r10, 0x0(r3)
	  extsh     r7, r28
	  add       r9, r7, r5
	  add       r9, r10, r9
	  sub.      r7, r9, r12
	  ble-      .loc_0x344
	  sub       r9, r9, r12
	  b         .loc_0x348

	.loc_0x344:
	  li        r9, 0

	.loc_0x348:
	  add       r10, r10, r5
	  sub.      r7, r10, r0
	  bge-      .loc_0x35C
	  sub       r7, r10, r0
	  b         .loc_0x360

	.loc_0x35C:
	  li        r7, 0

	.loc_0x360:
	  add       r7, r28, r7
	  sub       r7, r7, r9
	  sth       r7, 0xFC(r30)
	  lha       r7, 0x0(r3)
	  add       r9, r7, r5
	  sub.      r7, r9, r0
	  bge-      .loc_0x384
	  sub       r7, r9, r0
	  b         .loc_0x388

	.loc_0x384:
	  li        r7, 0

	.loc_0x388:
	  divw      r10, r7, r11
	  addi      r7, r30, 0x108
	  lhz       r9, 0x108(r30)
	  sub       r9, r9, r10
	  sth       r9, 0xFE(r30)
	  lha       r6, 0x0(r6)
	  lha       r9, 0x0(r3)
	  add       r6, r6, r5
	  add       r6, r9, r6
	  sub.      r3, r6, r12
	  ble-      .loc_0x3BC
	  sub       r6, r6, r12
	  b         .loc_0x3C0

	.loc_0x3BC:
	  li        r6, 0

	.loc_0x3C0:
	  add       r5, r9, r5
	  sub.      r3, r5, r0
	  bge-      .loc_0x3D4
	  sub       r0, r5, r0
	  b         .loc_0x3D8

	.loc_0x3D4:
	  li        r0, 0

	.loc_0x3D8:
	  divw      r0, r0, r11
	  lhz       r3, 0x10C(r30)
	  add       r0, r3, r0
	  divw      r5, r6, r11
	  sub       r0, r0, r5
	  sth       r0, 0x100(r30)
	  li        r9, 0x280
	  li        r28, 0
	  sth       r9, 0x102(r30)
	  li        r5, 0x28
	  li        r0, 0x1
	  lhz       r6, 0x0(r4)
	  subi      r3, r13, 0x72FC
	  rlwinm    r6,r6,1,16,30
	  sth       r6, 0x104(r30)
	  sth       r28, 0x106(r30)
	  sth       r28, 0x0(r7)
	  sth       r9, 0x10A(r30)
	  lhz       r4, 0x0(r4)
	  rlwinm    r4,r4,1,16,30
	  sth       r4, 0x10C(r30)
	  stw       r28, 0x0(r8)
	  stb       r5, 0x11C(r30)
	  stb       r5, 0x11D(r30)
	  stb       r5, 0x11E(r30)
	  stb       r28, 0x12C(r30)
	  stw       r0, 0x130(r30)
	  stw       r28, 0x134(r30)
	  bl        0x207E8
	  lis       r3, 0xCC00
	  lhz       r0, 0x2030(r3)
	  addi      r4, r3, 0x2000
	  addi      r5, r3, 0x2000
	  rlwinm    r0,r0,0,17,31
	  sth       r0, 0x30(r4)
	  lis       r3, 0x800D
	  addi      r4, r3, 0x7E8
	  lhz       r0, 0x34(r5)
	  li        r3, 0x18
	  rlwinm    r0,r0,0,17,31
	  sth       r0, 0x34(r5)
	  stw       r28, -0x72F4(r13)
	  stw       r28, -0x72F0(r13)
	  bl        0x1DA7C
	  li        r3, 0x80
	  bl        0x1DE78

	.loc_0x490:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  lwz       r28, 0x8(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D1234
 * Size:	000054
 */
void VIWaitForRetrace(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  bl        0x1D9F0
	  lwz       r30, -0x7304(r13)
	  mr        r31, r3

	.loc_0x20:
	  subi      r3, r13, 0x72FC
	  bl        0x21694
	  lwz       r0, -0x7304(r13)
	  cmplw     r30, r0
	  beq+      .loc_0x20
	  mr        r3, r31
	  bl        0x1D9F4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void setInterruptRegs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void setPicConfig(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void setBBIntervalRegs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void setScalingRegs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void calcFbbs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D1288
 * Size:	0002D4
 */
void setFbbRegs(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x48(r1)
	  lis       r9, 0x804F
	  addi      r9, r9, 0x59A8
	  stw       r31, 0x44(r1)
	  lbz       r8, 0x2C(r3)
	  lhz       r0, 0xE(r3)
	  rlwinm    r31,r8,5,0,26
	  lhz       r8, 0x16(r3)
	  mullw     r0, r31, r0
	  lwz       r11, 0x20(r3)
	  lwz       r10, 0x30(r3)
	  lhz       r12, 0xA(r3)
	  rlwinm    r8,r8,1,0,26
	  add       r0, r8, r0
	  add       r0, r10, r0
	  cmpwi     r11, 0
	  stw       r0, 0x0(r4)
	  bne-      .loc_0x50
	  lwz       r8, 0x0(r4)
	  b         .loc_0x58

	.loc_0x50:
	  lwz       r0, 0x0(r4)
	  add       r8, r0, r31

	.loc_0x58:
	  srawi     r0, r12, 0x1
	  stw       r8, 0x0(r5)
	  addze     r0, r0
	  rlwinm    r0,r0,1,0,30
	  subc      r0, r12, r0
	  cmpwi     r0, 0x1
	  bne-      .loc_0x84
	  lwz       r8, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x0(r4)
	  stw       r8, 0x0(r5)

	.loc_0x84:
	  lwz       r0, 0x0(r4)
	  rlwinm    r0,r0,0,2,31
	  stw       r0, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm    r0,r0,0,2,31
	  stw       r0, 0x0(r5)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x134
	  lbz       r8, 0x2C(r3)
	  lhz       r0, 0xE(r3)
	  rlwinm    r31,r8,5,0,26
	  lhz       r8, 0x16(r3)
	  mullw     r0, r31, r0
	  lwz       r11, 0x20(r3)
	  lwz       r10, 0x48(r3)
	  lhz       r12, 0xA(r3)
	  rlwinm    r8,r8,1,0,26
	  add       r0, r8, r0
	  add       r0, r10, r0
	  cmpwi     r11, 0
	  stw       r0, 0x0(r6)
	  bne-      .loc_0xE8
	  lwz       r8, 0x0(r6)
	  b         .loc_0xF0

	.loc_0xE8:
	  lwz       r0, 0x0(r6)
	  add       r8, r0, r31

	.loc_0xF0:
	  srawi     r0, r12, 0x1
	  stw       r8, 0x0(r7)
	  addze     r0, r0
	  rlwinm    r0,r0,1,0,30
	  subc      r0, r12, r0
	  cmpwi     r0, 0x1
	  bne-      .loc_0x11C
	  lwz       r8, 0x0(r6)
	  lwz       r0, 0x0(r7)
	  stw       r0, 0x0(r6)
	  stw       r8, 0x0(r7)

	.loc_0x11C:
	  lwz       r0, 0x0(r6)
	  rlwinm    r0,r0,0,2,31
	  stw       r0, 0x0(r6)
	  lwz       r0, 0x0(r7)
	  rlwinm    r0,r0,0,2,31
	  stw       r0, 0x0(r7)

	.loc_0x134:
	  lwz       r0, 0x0(r4)
	  lis       r8, 0x100
	  cmplw     r0, r8
	  bge-      .loc_0x170
	  lwz       r0, 0x0(r5)
	  cmplw     r0, r8
	  bge-      .loc_0x170
	  lwz       r0, 0x0(r6)
	  cmplw     r0, r8
	  bge-      .loc_0x170
	  lwz       r0, 0x0(r7)
	  cmplw     r0, r8
	  bge-      .loc_0x170
	  li        r10, 0
	  b         .loc_0x174

	.loc_0x170:
	  li        r10, 0x1

	.loc_0x174:
	  cmplwi    r10, 0
	  beq-      .loc_0x1AC
	  lwz       r0, 0x0(r4)
	  rlwinm    r0,r0,27,5,31
	  stw       r0, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm    r0,r0,27,5,31
	  stw       r0, 0x0(r5)
	  lwz       r0, 0x0(r6)
	  rlwinm    r0,r0,27,5,31
	  stw       r0, 0x0(r6)
	  lwz       r0, 0x0(r7)
	  rlwinm    r0,r0,27,5,31
	  stw       r0, 0x0(r7)

	.loc_0x1AC:
	  lwz       r0, 0x0(r4)
	  rlwinm    r11,r10,12,0,19
	  lis       r8, 0x1
	  sth       r0, 0x1E(r9)
	  lis       r0, 0x2
	  lwz       r10, -0x72D8(r13)
	  lwz       r12, -0x72D4(r13)
	  or        r10, r10, r8
	  stw       r12, -0x72D4(r13)
	  stw       r10, -0x72D8(r13)
	  lwz       r10, 0x0(r4)
	  lbz       r4, 0x3C(r3)
	  rlwinm    r10,r10,16,16,31
	  rlwinm    r4,r4,8,0,23
	  or        r4, r10, r4
	  or        r4, r11, r4
	  sth       r4, 0x1C(r9)
	  lwz       r4, -0x72D8(r13)
	  lwz       r10, -0x72D4(r13)
	  or        r0, r4, r0
	  stw       r10, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lwz       r0, 0x0(r5)
	  sth       r0, 0x26(r9)
	  lwz       r0, -0x72D8(r13)
	  lwz       r4, -0x72D4(r13)
	  ori       r0, r0, 0x1000
	  stw       r4, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lwz       r0, 0x0(r5)
	  rlwinm    r0,r0,16,16,31
	  sth       r0, 0x24(r9)
	  lwz       r0, -0x72D8(r13)
	  lwz       r4, -0x72D4(r13)
	  ori       r0, r0, 0x2000
	  stw       r4, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x2C8
	  lwz       r3, 0x0(r6)
	  subi      r0, r8, 0x8000
	  sth       r3, 0x22(r9)
	  lwz       r3, -0x72D8(r13)
	  lwz       r4, -0x72D4(r13)
	  ori       r3, r3, 0x4000
	  stw       r4, -0x72D4(r13)
	  stw       r3, -0x72D8(r13)
	  lwz       r3, 0x0(r6)
	  rlwinm    r3,r3,16,16,31
	  sth       r3, 0x20(r9)
	  lwz       r3, -0x72D8(r13)
	  lwz       r4, -0x72D4(r13)
	  or        r0, r3, r0
	  stw       r4, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lwz       r0, 0x0(r7)
	  sth       r0, 0x2A(r9)
	  lwz       r0, -0x72D8(r13)
	  lwz       r3, -0x72D4(r13)
	  ori       r0, r0, 0x400
	  stw       r3, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lwz       r0, 0x0(r7)
	  rlwinm    r0,r0,16,16,31
	  sth       r0, 0x28(r9)
	  lwz       r0, -0x72D8(r13)
	  lwz       r3, -0x72D4(r13)
	  ori       r0, r0, 0x800
	  stw       r3, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)

	.loc_0x2C8:
	  lwz       r31, 0x44(r1)
	  addi      r1, r1, 0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void setHorizontalRegs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D155C
 * Size:	0001A0
 */
void setVerticalRegs(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x28(r1)
	  lis       r11, 0x804F
	  addi      r11, r11, 0x59A8
	  stw       r31, 0x24(r1)
	  lwz       r31, 0x30(r1)
	  stw       r30, 0x20(r1)
	  stw       r29, 0x1C(r1)
	  lhz       r0, 0x6C(r11)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x34
	  li        r12, 0x1
	  li        r29, 0x2
	  b         .loc_0x3C

	.loc_0x34:
	  li        r12, 0x2
	  li        r29, 0x1

	.loc_0x3C:
	  rlwinm    r30,r3,0,16,31
	  srawi     r0, r30, 0x1
	  addze     r0, r0
	  rlwinm    r0,r0,1,0,30
	  subc.     r0, r30, r0
	  bne-      .loc_0x8C
	  rlwinm    r3,r12,0,16,31
	  rlwinm    r0,r6,0,16,31
	  mullw     r0, r3, r0
	  rlwinm    r3,r4,0,16,31
	  sub       r0, r0, r3
	  rlwinm    r3,r29,0,16,31
	  mullw     r29, r3, r30
	  sub       r0, r0, r30
	  mullw     r30, r3, r0
	  add       r0, r7, r29
	  add       r6, r9, r30
	  add       r3, r8, r29
	  add       r7, r10, r30
	  b         .loc_0xC0

	.loc_0x8C:
	  rlwinm    r3,r12,0,16,31
	  rlwinm    r0,r6,0,16,31
	  mullw     r0, r3, r0
	  rlwinm    r3,r4,0,16,31
	  sub       r0, r0, r3
	  rlwinm    r3,r29,0,16,31
	  mullw     r29, r3, r30
	  sub       r0, r0, r30
	  mullw     r30, r3, r0
	  add       r0, r8, r29
	  add       r6, r10, r30
	  add       r3, r7, r29
	  add       r7, r9, r30

	.loc_0xC0:
	  rlwinm    r8,r4,0,16,31
	  rlwinm    r4,r12,0,16,31
	  divw      r4, r8, r4
	  cmpwi     r31, 0
	  rlwinm    r4,r4,0,16,31
	  beq-      .loc_0xF4
	  rlwinm    r4,r4,1,0,30
	  subi      r4, r4, 0x2
	  add       r0, r0, r4
	  add       r3, r3, r4
	  li        r4, 0
	  addi      r6, r6, 0x2
	  addi      r7, r7, 0x2

	.loc_0xF4:
	  rlwinm    r5,r5,0,24,31
	  rlwinm    r4,r4,4,12,27
	  or        r4, r5, r4
	  sth       r4, 0x0(r11)
	  lis       r4, 0x8000
	  lis       r9, 0x100
	  lwz       r5, -0x72D8(r13)
	  lis       r8, 0x200
	  lwz       r10, -0x72D4(r13)
	  or        r4, r5, r4
	  lis       r5, 0x40
	  stw       r10, -0x72D4(r13)
	  stw       r4, -0x72D8(r13)
	  lis       r4, 0x80
	  sth       r0, 0xE(r11)
	  lwz       r0, -0x72D8(r13)
	  lwz       r10, -0x72D4(r13)
	  or        r0, r0, r9
	  stw       r10, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  sth       r6, 0xC(r11)
	  lwz       r0, -0x72D8(r13)
	  lwz       r6, -0x72D4(r13)
	  or        r0, r0, r8
	  stw       r6, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  sth       r3, 0x12(r11)
	  lwz       r0, -0x72D8(r13)
	  lwz       r3, -0x72D4(r13)
	  or        r0, r0, r5
	  stw       r3, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  sth       r7, 0x10(r11)
	  lwz       r0, -0x72D8(r13)
	  lwz       r3, -0x72D4(r13)
	  or        r0, r0, r4
	  stw       r3, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  addi      r1, r1, 0x28
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void PrintDebugPalCaution(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D16FC
 * Size:	000828
 */
void VIConfigure(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x4(r1)
	  lis       r4, 0x804F
	  stwu      r1, -0x78(r1)
	  stmw      r14, 0x30(r1)
	  addi      r31, r3, 0
	  addi      r15, r5, 0x72B0
	  addi      r29, r4, 0x59A8
	  bl        0x1D518
	  lwz       r4, 0x0(r31)
	  addi      r28, r29, 0x114
	  lwz       r0, 0x114(r29)
	  addi      r14, r3, 0
	  rlwinm    r4,r4,0,30,31
	  cmplw     r0, r4
	  beq-      .loc_0x50
	  li        r0, 0x1
	  stw       r0, -0x72E0(r13)
	  stw       r4, 0x0(r28)

	.loc_0x50:
	  lwz       r0, 0x0(r31)
	  lis       r3, 0x8000
	  lwz       r16, 0xCC(r3)
	  rlwinm    r0,r0,30,2,31
	  cmplwi    r0, 0x4
	  mr        r17, r0
	  bne-      .loc_0xD4
	  lwz       r0, -0x72AC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xD4
	  li        r0, 0x1
	  crclr     6, 0x6
	  stw       r0, -0x72AC(r13)
	  addi      r3, r15, 0x260
	  bl        0x1BF68
	  addi      r3, r15, 0x28C
	  crclr     6, 0x6
	  bl        0x1BF5C
	  addi      r3, r15, 0x2B8
	  crclr     6, 0x6
	  bl        0x1BF50
	  addi      r3, r15, 0x2E4
	  crclr     6, 0x6
	  bl        0x1BF44
	  addi      r3, r15, 0x310
	  crclr     6, 0x6
	  bl        0x1BF38
	  addi      r3, r15, 0x33C
	  crclr     6, 0x6
	  bl        0x1BF2C
	  addi      r3, r15, 0x260
	  crclr     6, 0x6
	  bl        0x1BF20

	.loc_0xD4:
	  cmpwi     r16, 0x2
	  beq-      .loc_0x108
	  bge-      .loc_0xF0
	  cmpwi     r16, 0
	  beq-      .loc_0x108
	  bge-      .loc_0x124
	  b         .loc_0x134

	.loc_0xF0:
	  cmpwi     r16, 0x6
	  beq-      .loc_0x108
	  bge-      .loc_0x134
	  cmpwi     r16, 0x5
	  bge-      .loc_0x124
	  b         .loc_0x134

	.loc_0x108:
	  cmplwi    r17, 0
	  beq-      .loc_0x150
	  cmplwi    r17, 0x2
	  beq-      .loc_0x150
	  cmplwi    r17, 0x6
	  bne-      .loc_0x134
	  b         .loc_0x150

	.loc_0x124:
	  cmplwi    r17, 0x1
	  beq-      .loc_0x150
	  cmplwi    r17, 0x5
	  beq-      .loc_0x150

	.loc_0x134:
	  addi      r6, r16, 0
	  crclr     6, 0x6
	  addi      r7, r17, 0
	  addi      r5, r15, 0x368
	  subi      r3, r13, 0x7D94
	  li        r4, 0x774
	  bl        0x1BF24

	.loc_0x150:
	  cmplwi    r17, 0
	  beq-      .loc_0x160
	  cmplwi    r17, 0x2
	  bne-      .loc_0x168

	.loc_0x160:
	  stw       r16, 0x118(r29)
	  b         .loc_0x16C

	.loc_0x168:
	  stw       r17, 0x118(r29)

	.loc_0x16C:
	  lhz       r0, 0xA(r31)
	  sth       r0, 0xF0(r29)
	  lwz       r0, 0x0(r28)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x18C
	  lhz       r0, 0xC(r31)
	  rlwinm    r0,r0,1,16,30
	  b         .loc_0x190

	.loc_0x18C:
	  lhz       r0, 0xC(r31)

	.loc_0x190:
	  sth       r0, 0xF2(r29)
	  addi      r23, r29, 0xF2
	  addi      r24, r29, 0xF4
	  lhz       r0, 0xE(r31)
	  addi      r27, r29, 0x102
	  addi      r25, r29, 0x110
	  sth       r0, 0xF4(r29)
	  li        r0, 0
	  addi      r16, r29, 0x10A
	  lhz       r3, 0x4(r31)
	  addi      r26, r29, 0x10C
	  addi      r15, r29, 0x106
	  sth       r3, 0x102(r29)
	  addi      r17, r29, 0x108
	  lhz       r3, 0x8(r31)
	  sth       r3, 0x104(r29)
	  lwz       r3, 0x14(r31)
	  stw       r3, 0x110(r29)
	  lhz       r3, 0x102(r29)
	  sth       r3, 0x10A(r29)
	  lhz       r3, 0x104(r29)
	  sth       r3, 0x10C(r29)
	  sth       r0, 0x106(r29)
	  sth       r0, 0x108(r29)
	  lwz       r0, 0x0(r28)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x204
	  lhz       r0, 0x0(r26)
	  b         .loc_0x230

	.loc_0x204:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x214
	  lhz       r0, 0x0(r26)
	  b         .loc_0x230

	.loc_0x214:
	  lwz       r0, 0x0(r25)
	  cmpwi     r0, 0
	  bne-      .loc_0x22C
	  lhz       r0, 0x0(r26)
	  rlwinm    r0,r0,1,16,30
	  b         .loc_0x230

	.loc_0x22C:
	  lhz       r0, 0x0(r26)

	.loc_0x230:
	  addi      r22, r29, 0xF6
	  sth       r0, 0xF6(r29)
	  lwz       r0, 0x0(r28)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x24C
	  li        r0, 0x1
	  b         .loc_0x250

	.loc_0x24C:
	  li        r0, 0

	.loc_0x250:
	  addi      r18, r29, 0x134
	  stw       r0, 0x134(r29)
	  addi      r21, r29, 0x118
	  lwz       r3, 0x118(r29)
	  lwz       r0, 0x0(r28)
	  rlwinm    r3,r3,2,0,29
	  add       r3, r3, r0
	  bl        -0xE84
	  mr        r30, r3
	  stw       r30, 0x144(r29)
	  lhz       r0, 0x0(r24)
	  lha       r4, 0xF0(r29)
	  lha       r3, -0x72E4(r13)
	  subfic    r5, r0, 0x2D0
	  lhz       r0, 0x2(r30)
	  add       r3, r4, r3
	  cmpw      r3, r5
	  ble-      .loc_0x29C
	  b         .loc_0x2AC

	.loc_0x29C:
	  cmpwi     r3, 0
	  bge-      .loc_0x2A8
	  li        r3, 0

	.loc_0x2A8:
	  mr        r5, r3

	.loc_0x2AC:
	  sth       r5, 0xF8(r29)
	  addi      r3, r29, 0xF8
	  lwz       r4, 0x0(r25)
	  cmpwi     r4, 0
	  bne-      .loc_0x2C8
	  li        r4, 0x2
	  b         .loc_0x2CC

	.loc_0x2C8:
	  li        r4, 0x1

	.loc_0x2CC:
	  lhz       r5, 0x0(r23)
	  lha       r6, -0x72E2(r13)
	  extsh     r7, r5
	  rlwinm    r5,r5,0,31,31
	  add       r7, r7, r6
	  cmpw      r7, r5
	  ble-      .loc_0x2EC
	  b         .loc_0x2F0

	.loc_0x2EC:
	  mr        r7, r5

	.loc_0x2F0:
	  sth       r7, 0xFA(r29)
	  extsh     r0, r0
	  rlwinm    r0,r0,1,0,30
	  lhz       r8, 0x0(r22)
	  sub       r0, r0, r5
	  lha       r7, 0x0(r23)
	  addi      r19, r29, 0xFA
	  extsh     r9, r8
	  add       r10, r9, r6
	  add       r10, r7, r10
	  sub.      r9, r10, r0
	  ble-      .loc_0x328
	  sub       r9, r10, r0
	  b         .loc_0x32C

	.loc_0x328:
	  li        r9, 0

	.loc_0x32C:
	  add       r10, r7, r6
	  sub.      r7, r10, r5
	  bge-      .loc_0x340
	  sub       r7, r10, r5
	  b         .loc_0x344

	.loc_0x340:
	  li        r7, 0

	.loc_0x344:
	  add       r7, r8, r7
	  sub       r7, r7, r9
	  addi      r20, r29, 0xFC
	  sth       r7, 0xFC(r29)
	  lha       r7, 0x0(r23)
	  add       r8, r7, r6
	  sub.      r7, r8, r5
	  bge-      .loc_0x36C
	  sub       r7, r8, r5
	  b         .loc_0x370

	.loc_0x36C:
	  li        r7, 0

	.loc_0x370:
	  divw      r8, r7, r4
	  lhz       r7, 0x0(r17)
	  sub       r7, r7, r8
	  sth       r7, 0xFE(r29)
	  lha       r7, 0x0(r22)
	  lha       r9, 0x0(r23)
	  add       r8, r7, r6
	  add       r8, r9, r8
	  sub.      r7, r8, r0
	  ble-      .loc_0x3A0
	  sub       r7, r8, r0
	  b         .loc_0x3A4

	.loc_0x3A0:
	  li        r7, 0

	.loc_0x3A4:
	  add       r6, r9, r6
	  sub.      r0, r6, r5
	  bge-      .loc_0x3B8
	  sub       r0, r6, r5
	  b         .loc_0x3BC

	.loc_0x3B8:
	  li        r0, 0

	.loc_0x3BC:
	  divw      r0, r0, r4
	  lhz       r5, 0x0(r26)
	  divw      r4, r7, r4
	  add       r0, r5, r0
	  sub       r0, r0, r4
	  sth       r0, 0x100(r29)
	  lwz       r0, -0x72E8(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x3E8
	  li        r0, 0x3
	  stw       r0, 0x0(r21)

	.loc_0x3E8:
	  lhz       r5, 0x18(r30)
	  srawi     r4, r5, 0x1
	  addze     r4, r4
	  srawi     r0, r5, 0x1
	  addze     r0, r0
	  rlwinm    r0,r0,1,0,30
	  subc      r0, r5, r0
	  rlwinm.   r0,r0,0,16,31
	  rlwinm    r4,r4,0,16,31
	  beq-      .loc_0x418
	  lhz       r5, 0x1A(r30)
	  b         .loc_0x41C

	.loc_0x418:
	  li        r5, 0

	.loc_0x41C:
	  addi      r0, r5, 0x1
	  sth       r0, 0x32(r29)
	  addi      r0, r4, 0x1
	  ori       r0, r0, 0x1000
	  lwz       r5, -0x72D8(r13)
	  addi      r4, r29, 0x2
	  lwz       r6, -0x72D4(r13)
	  ori       r5, r5, 0x40
	  stw       r6, -0x72D4(r13)
	  stw       r5, -0x72D8(r13)
	  sth       r0, 0x30(r29)
	  lwz       r0, -0x72D8(r13)
	  lwz       r5, -0x72D4(r13)
	  ori       r0, r0, 0x80
	  stw       r5, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lwz       r0, 0x0(r28)
	  lhz       r5, 0x2(r29)
	  cmplwi    r0, 0x2
	  beq-      .loc_0x474
	  cmplwi    r0, 0x3
	  bne-      .loc_0x480

	.loc_0x474:
	  rlwinm    r0,r5,0,30,28
	  ori       r5, r0, 0x4
	  b         .loc_0x488

	.loc_0x480:
	  rlwinm    r5,r5,0,30,28
	  rlwimi    r5,r0,2,29,29

	.loc_0x488:
	  lwz       r6, 0x0(r21)
	  rlwinm    r5,r5,0,29,27
	  lwz       r7, 0x0(r18)
	  cmplwi    r6, 0x4
	  rlwinm    r0,r7,3,0,28
	  or        r5, r5, r0
	  beq-      .loc_0x4B0
	  subi      r0, r6, 0x5
	  cmplwi    r0, 0x1
	  bgt-      .loc_0x4B8

	.loc_0x4B0:
	  rlwinm    r0,r5,0,24,21
	  b         .loc_0x4C4

	.loc_0x4B8:
	  rlwinm    r5,r5,0,24,21
	  rlwinm    r0,r6,8,0,23
	  or        r0, r5, r0

	.loc_0x4C4:
	  sth       r0, 0x0(r4)
	  lis       r0, 0x4000
	  addi      r6, r29, 0x6C
	  lwz       r4, -0x72D8(r13)
	  lwz       r5, -0x72D4(r13)
	  or        r0, r4, r0
	  stw       r5, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lwz       r0, 0x0(r31)
	  lhz       r4, 0x6C(r29)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x504
	  cmpwi     r0, 0x3
	  beq-      .loc_0x504
	  cmpwi     r0, 0x1A
	  bne-      .loc_0x510

	.loc_0x504:
	  rlwinm    r0,r4,0,0,30
	  ori       r0, r0, 0x1
	  b         .loc_0x514

	.loc_0x510:
	  rlwinm    r0,r4,0,0,30

	.loc_0x514:
	  sth       r0, 0x0(r6)
	  cmpwi     r7, 0
	  lwz       r4, -0x72D8(r13)
	  lwz       r0, -0x72D4(r13)
	  ori       r0, r0, 0x200
	  stw       r0, -0x72D4(r13)
	  stw       r4, -0x72D8(r13)
	  lhz       r4, 0x0(r24)
	  lhz       r5, 0x0(r16)
	  beq-      .loc_0x544
	  rlwinm    r0,r5,1,0,30
	  b         .loc_0x548

	.loc_0x544:
	  mr        r0, r5

	.loc_0x548:
	  rlwinm    r8,r0,0,16,31
	  cmplw     r8, r4
	  bge-      .loc_0x5A0
	  rlwinm    r6,r8,8,0,23
	  subi      r0, r6, 0x1
	  add       r0, r4, r0
	  divwu     r0, r0, r4
	  ori       r0, r0, 0x1000
	  sth       r0, 0x4A(r29)
	  lis       r0, 0x400
	  lwz       r6, -0x72D8(r13)
	  lwz       r7, -0x72D4(r13)
	  or        r0, r7, r0
	  stw       r0, -0x72D4(r13)
	  stw       r6, -0x72D8(r13)
	  sth       r8, 0x70(r29)
	  lwz       r6, -0x72D8(r13)
	  lwz       r0, -0x72D4(r13)
	  ori       r0, r0, 0x80
	  stw       r0, -0x72D4(r13)
	  stw       r6, -0x72D8(r13)
	  b         .loc_0x5C0

	.loc_0x5A0:
	  li        r0, 0x100
	  sth       r0, 0x4A(r29)
	  lis       r0, 0x400
	  lwz       r6, -0x72D8(r13)
	  lwz       r7, -0x72D4(r13)
	  or        r0, r7, r0
	  stw       r0, -0x72D4(r13)
	  stw       r6, -0x72D8(r13)

	.loc_0x5C0:
	  lhz       r0, 0x0(r3)
	  subfic    r12, r4, 0x2D0
	  lhz       r6, 0x1A(r30)
	  lis       r3, 0x1000
	  lis       r8, 0x2000
	  sth       r6, 0x6(r29)
	  lis       r9, 0x400
	  lis       r7, 0x800
	  lwz       r10, -0x72D8(r13)
	  lis       r6, 0x10
	  lis       r4, 0x20
	  lwz       r11, -0x72D4(r13)
	  or        r10, r10, r3
	  lis       r3, 0x4
	  stw       r11, -0x72D4(r13)
	  stw       r10, -0x72D8(r13)
	  lbz       r10, 0x1D(r30)
	  lbz       r11, 0x1E(r30)
	  rlwimi    r11,r10,8,16,23
	  sth       r11, 0x4(r29)
	  lwz       r10, -0x72D8(r13)
	  lwz       r11, -0x72D4(r13)
	  or        r8, r10, r8
	  stw       r11, -0x72D4(r13)
	  stw       r8, -0x72D8(r13)
	  lbz       r8, 0x1F(r30)
	  lbz       r10, 0x1C(r30)
	  add       r16, r8, r0
	  lhz       r11, 0x20(r30)
	  subi      r16, r16, 0x28
	  rlwinm    r8,r16,7,16,24
	  or        r8, r10, r8
	  sth       r8, 0xA(r29)
	  add       r8, r11, r0
	  addi      r0, r8, 0x28
	  lwz       r10, -0x72D8(r13)
	  sub       r0, r0, r12
	  rlwinm    r8,r16,23,9,31
	  lwz       r11, -0x72D4(r13)
	  rlwinm    r0,r0,1,0,30
	  or        r9, r10, r9
	  stw       r11, -0x72D4(r13)
	  or        r0, r8, r0
	  stw       r9, -0x72D8(r13)
	  sth       r0, 0x8(r29)
	  lwz       r0, -0x72D8(r13)
	  lwz       r8, -0x72D4(r13)
	  or        r0, r0, r7
	  stw       r8, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lhz       r0, 0x10(r30)
	  lbz       r7, 0xC(r30)
	  rlwinm    r0,r0,5,0,26
	  or        r0, r7, r0
	  sth       r0, 0x16(r29)
	  lwz       r0, -0x72D8(r13)
	  lwz       r7, -0x72D4(r13)
	  or        r0, r0, r6
	  stw       r7, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lhz       r0, 0x14(r30)
	  lbz       r6, 0xE(r30)
	  rlwinm    r0,r0,5,0,26
	  or        r0, r6, r0
	  sth       r0, 0x14(r29)
	  lwz       r0, -0x72D8(r13)
	  lwz       r6, -0x72D4(r13)
	  or        r0, r0, r4
	  stw       r6, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lhz       r0, 0x12(r30)
	  lbz       r4, 0xD(r30)
	  rlwinm    r0,r0,5,0,26
	  or        r0, r4, r0
	  sth       r0, 0x1A(r29)
	  lwz       r0, -0x72D8(r13)
	  lwz       r4, -0x72D4(r13)
	  or        r0, r0, r3
	  stw       r4, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lhz       r0, 0x16(r30)
	  lbz       r3, 0xF(r30)
	  rlwinm    r0,r0,5,0,26
	  or        r0, r3, r0
	  sth       r0, 0x18(r29)
	  lwz       r3, -0x72D8(r13)
	  lis       r0, 0x8
	  addi      r6, r29, 0x11C
	  lwz       r4, -0x72D4(r13)
	  or        r0, r3, r0
	  stw       r4, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lhz       r3, 0x0(r27)
	  lwz       r4, 0x0(r25)
	  addi      r0, r3, 0xF
	  lhz       r3, 0x0(r15)
	  srawi     r0, r0, 0x4
	  addze     r0, r0
	  cmpwi     r4, 0
	  stb       r0, 0x11C(r29)
	  bne-      .loc_0x75C
	  lbz       r4, 0x0(r6)
	  b         .loc_0x764

	.loc_0x75C:
	  lbz       r0, 0x0(r6)
	  rlwinm    r4,r0,1,24,30

	.loc_0x764:
	  srawi     r0, r3, 0x4
	  stb       r4, 0x11D(r29)
	  addze     r0, r0
	  rlwinm    r0,r0,4,0,27
	  subc      r0, r3, r0
	  stb       r0, 0x12C(r29)
	  addi      r0, r5, 0xF
	  lis       r3, 0x800
	  lbz       r4, 0x12C(r29)
	  add       r0, r4, r0
	  srawi     r0, r0, 0x4
	  addze     r0, r0
	  stb       r0, 0x11E(r29)
	  lbz       r0, 0x11E(r29)
	  lbz       r4, 0x11D(r29)
	  rlwimi    r4,r0,8,16,23
	  sth       r4, 0x48(r29)
	  lwz       r4, -0x72D8(r13)
	  lwz       r0, -0x72B0(r13)
	  lwz       r5, -0x72D4(r13)
	  cmplwi    r0, 0
	  or        r0, r5, r3
	  stw       r0, -0x72D4(r13)
	  stw       r4, -0x72D8(r13)
	  beq-      .loc_0x7E0
	  addi      r3, r29, 0xF0
	  addi      r4, r29, 0x124
	  addi      r5, r29, 0x128
	  addi      r6, r29, 0x13C
	  addi      r7, r29, 0x140
	  bl        -0xC50

	.loc_0x7E0:
	  lwz       r0, 0x130(r29)
	  stw       r0, 0x8(r1)
	  lhz       r3, 0x0(r19)
	  lhz       r4, 0x0(r20)
	  lbz       r5, 0x0(r30)
	  lhz       r6, 0x2(r30)
	  lhz       r7, 0x4(r30)
	  lhz       r8, 0x6(r30)
	  lhz       r9, 0x8(r30)
	  lhz       r10, 0xA(r30)
	  bl        -0x9A8
	  mr        r3, r14
	  bl        0x1CD54
	  lmw       r14, 0x30(r1)
	  lwz       r0, 0x7C(r1)
	  addi      r1, r1, 0x78
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000394
 */
void VIConfigurePan(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D1F24
 * Size:	000130
 */
void VIFlush(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0x59A8
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  bl        0x1CCF0
	  lwz       r5, -0x72D0(r13)
	  addi      r30, r3, 0
	  li        r0, 0
	  lwz       r4, -0x72E0(r13)
	  or        r3, r5, r4
	  stw       r3, -0x72D0(r13)
	  stw       r0, -0x72E0(r13)
	  lwz       r4, -0x72C8(r13)
	  lwz       r5, -0x72C4(r13)
	  lwz       r0, -0x72D8(r13)
	  lwz       r3, -0x72D4(r13)
	  or        r0, r4, r0
	  or        r3, r5, r3
	  stw       r3, -0x72C4(r13)
	  stw       r0, -0x72C8(r13)
	  b         .loc_0xDC

	.loc_0x68:
	  lwz       r3, -0x72D8(r13)
	  li        r5, 0x20
	  lwz       r28, -0x72D4(r13)
	  addi      r4, r28, 0
	  bl        -0xFE8C
	  cntlzw    r4, r4
	  cmpwi     r4, 0x20
	  li        r0, -0x1
	  and       r0, r28, r0
	  bge-      .loc_0x94
	  b         .loc_0x9C

	.loc_0x94:
	  cntlzw    r3, r0
	  addi      r4, r3, 0x20

	.loc_0x9C:
	  rlwinm    r3,r4,1,0,30
	  lhzx      r0, r31, r3
	  add       r3, r31, r3
	  subfic    r5, r4, 0x3F
	  sth       r0, 0x78(r3)
	  li        r3, 0
	  li        r4, 0x1
	  bl        -0xFEF0
	  lwz       r0, -0x72D8(r13)
	  not       r5, r3
	  not       r4, r4
	  lwz       r3, -0x72D4(r13)
	  and       r0, r0, r5
	  and       r3, r3, r4
	  stw       r3, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)

	.loc_0xDC:
	  lwz       r0, -0x72D8(r13)
	  li        r3, 0
	  lwz       r4, -0x72D4(r13)
	  xor       r0, r0, r3
	  xor       r3, r4, r3
	  or.       r0, r3, r0
	  bne+      .loc_0x68
	  li        r0, 0x1
	  stw       r0, -0x7300(r13)
	  mr        r3, r30
	  lwz       r0, 0x120(r31)
	  stw       r0, -0x72B8(r13)
	  bl        0x1CC30
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
 * Address:	800D2054
 * Size:	00006C
 */
void VISetNextFrameBuffer(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0x59A8
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  bl        0x1CBC4
	  stw       r30, 0x120(r31)
	  li        r0, 0x1
	  addi      r30, r3, 0
	  stw       r0, -0x72B0(r13)
	  addi      r3, r31, 0xF0
	  addi      r4, r31, 0x124
	  addi      r5, r31, 0x128
	  addi      r6, r31, 0x13C
	  addi      r7, r31, 0x140
	  bl        -0xE14
	  mr        r3, r30
	  bl        0x1CBBC
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
 * Size:	000008
 */
void VIGetNextFrameBuffer(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D20C0
 * Size:	000008
 */
void VIGetCurrentFrameBuffer(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x72B4(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void VISetNextRightFrameBuffer(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D20C8
 * Size:	00007C
 */
void VISetBlack(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x59A8
	  stw       r30, 0x18(r1)
	  addi      r30, r3, 0
	  bl        0x1CB50
	  stw       r30, 0x130(r31)
	  mr        r30, r3
	  lwz       r10, 0x144(r31)
	  lwz       r0, 0x130(r31)
	  stw       r0, 0x8(r1)
	  lhz       r3, 0xFA(r31)
	  lhz       r4, 0xF6(r31)
	  lbz       r5, 0x0(r10)
	  lhz       r6, 0x2(r10)
	  lhz       r7, 0x4(r10)
	  lhz       r8, 0x6(r10)
	  lhz       r9, 0x8(r10)
	  lhz       r10, 0xA(r10)
	  bl        -0xBC4
	  mr        r3, r30
	  bl        0x1CB38
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void VISet3D(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D2144
 * Size:	000008
 */
void VIGetRetraceCount(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7304(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D214C
 * Size:	00003C
 */
void GetCurrentDisplayPosition(void)
{
	/*
	.loc_0x0:
	  lis       r5, 0xCC00
	  addi      r7, r5, 0x2000
	  lhzu      r0, 0x2C(r7)
	  addi      r6, r5, 0x2000
	  rlwinm    r9,r0,0,21,31

	.loc_0x14:
	  lhz       r0, 0x0(r7)
	  mr        r8, r9
	  lhz       r5, 0x2E(r6)
	  rlwinm    r9,r0,0,21,31
	  cmplw     r8, r9
	  rlwinm    r0,r5,0,21,31
	  bne+      .loc_0x14
	  stw       r0, 0x0(r3)
	  stw       r9, 0x0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void getCurrentHalfLine(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D2188
 * Size:	000068
 */
void getCurrentFieldEvenOdd(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xCC00
	  addi      r7, r3, 0x2000
	  lhzu      r0, 0x2C(r7)
	  addi      r4, r3, 0x2000
	  rlwinm    r5,r0,0,21,31

	.loc_0x14:
	  lhz       r0, 0x0(r7)
	  mr        r6, r5
	  lhz       r3, 0x2E(r4)
	  rlwinm    r5,r0,0,21,31
	  cmplw     r6, r5
	  rlwinm    r3,r3,0,21,31
	  bne+      .loc_0x14
	  lwz       r6, -0x72C0(r13)
	  subi      r0, r5, 0x1
	  subi      r4, r3, 0x1
	  lhz       r3, 0x1A(r6)
	  rlwinm    r5,r0,1,0,30
	  lhz       r0, 0x18(r6)
	  divwu     r3, r4, r3
	  add       r3, r5, r3
	  cmplw     r3, r0
	  bge-      .loc_0x60
	  li        r3, 0x1
	  blr

	.loc_0x60:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D21F0
 * Size:	00009C
 */
void VIGetNextField(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  bl        0x1CA34
	  addi      r30, r3, 0
	  addi      r3, r1, 0x10
	  addi      r4, r1, 0x14
	  bl        -0xC8
	  lwz       r5, -0x72C0(r13)
	  lwz       r3, 0x10(r1)
	  lhz       r0, 0x1A(r5)
	  subi      r3, r3, 0x1
	  lwz       r4, 0x14(r1)
	  divwu     r3, r3, r0
	  lhz       r0, 0x18(r5)
	  subi      r4, r4, 0x1
	  rlwinm    r4,r4,1,0,30
	  add       r3, r4, r3
	  cmplw     r3, r0
	  bge-      .loc_0x60
	  li        r31, 0x1
	  b         .loc_0x64

	.loc_0x60:
	  li        r31, 0

	.loc_0x64:
	  mr        r3, r30
	  bl        0x1CA08
	  lis       r3, 0x804F
	  addi      r3, r3, 0x5A98
	  lhz       r0, 0xA(r3)
	  xori      r3, r31, 0x1
	  rlwinm    r0,r0,0,31,31
	  xor       r3, r3, r0
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D228C
 * Size:	000098
 */
void VIGetCurrentLine(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  lwz       r31, -0x72C0(r13)
	  bl        0x1C994
	  lis       r4, 0xCC00
	  addi      r8, r4, 0x2000
	  lhzu      r0, 0x2C(r8)
	  addi      r5, r4, 0x2000
	  rlwinm    r6,r0,0,21,31

	.loc_0x30:
	  lhz       r0, 0x0(r8)
	  mr        r7, r6
	  lhz       r4, 0x2E(r5)
	  rlwinm    r6,r0,0,21,31
	  cmplw     r7, r6
	  rlwinm    r7,r4,0,21,31
	  bne+      .loc_0x30
	  lwz       r4, -0x72C0(r13)
	  subi      r5, r7, 0x1
	  subi      r6, r6, 0x1
	  lhz       r0, 0x1A(r4)
	  rlwinm    r4,r6,1,0,30
	  divwu     r0, r5, r0
	  add       r30, r4, r0
	  bl        0x1C96C
	  lhz       r0, 0x18(r31)
	  cmplw     r30, r0
	  blt-      .loc_0x7C
	  sub       r30, r30, r0

	.loc_0x7C:
	  rlwinm    r3,r30,31,1,31
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D2324
 * Size:	000068
 */
void VIGetTvFormat(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  bl        0x1C904
	  lwz       r5, -0x72BC(r13)
	  cmplwi    r5, 0x6
	  bgt-      .loc_0x4C
	  lis       r4, 0x804A
	  addi      r4, r4, 0x7664
	  rlwinm    r0,r5,2,0,29
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  li        r31, 0
	  b         .loc_0x4C
	  li        r31, 0x1
	  b         .loc_0x4C
	  mr        r31, r5

	.loc_0x4C:
	  bl        0x1C8F0
	  mr        r3, r31
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D238C
 * Size:	00003C
 */
void VIGetDTVStatus(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  bl        0x1C89C
	  lis       r4, 0xCC00
	  lhz       r0, 0x206E(r4)
	  rlwinm    r31,r0,0,30,31
	  bl        0x1C8B4
	  rlwinm    r3,r31,0,31,31
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
 * Size:	0002C8
 */
void __VISetAdjustingValues(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void __VIGetAdjustingValues(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000180
 */
void __VIEnableRawPositionInterrupt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void __VIDisableRawPositionInterrupt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D23C8
 * Size:	00021C
 */
void __VIDisplayPositionToXY(void)
{
	/*
	.loc_0x0:
	  lwz       r9, -0x72C0(r13)
	  lis       r7, 0x804F
	  addi      r7, r7, 0x5A98
	  lhz       r0, 0x1A(r9)
	  subi      r8, r3, 0x1
	  lwz       r7, 0x24(r7)
	  subi      r4, r4, 0x1
	  divwu     r0, r8, r0
	  rlwinm    r4,r4,1,0,30
	  cmplwi    r7, 0
	  add       r0, r4, r0
	  bne-      .loc_0xEC
	  lhz       r10, 0x18(r9)
	  cmplw     r0, r10
	  bge-      .loc_0x90
	  lbz       r4, 0x0(r9)
	  lhz       r8, 0x4(r9)
	  mulli     r7, r4, 0x3
	  add       r4, r8, r7
	  cmplw     r0, r4
	  bge-      .loc_0x60
	  li        r0, -0x1
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0x60:
	  lhz       r4, 0x8(r9)
	  sub       r4, r10, r4
	  cmplw     r0, r4
	  blt-      .loc_0x7C
	  li        r0, -0x1
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0x7C:
	  sub       r0, r0, r7
	  sub       r0, r0, r8
	  rlwinm    r0,r0,0,0,30
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0x90:
	  lbz       r4, 0x0(r9)
	  sub       r0, r0, r10
	  lhz       r8, 0x6(r9)
	  mulli     r7, r4, 0x3
	  add       r4, r8, r7
	  cmplw     r0, r4
	  bge-      .loc_0xB8
	  li        r0, -0x1
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0xB8:
	  lhz       r4, 0xA(r9)
	  sub       r4, r10, r4
	  cmplw     r0, r4
	  blt-      .loc_0xD4
	  li        r0, -0x1
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0xD4:
	  sub       r0, r0, r7
	  sub       r0, r0, r8
	  rlwinm    r4,r0,0,0,30
	  addi      r0, r4, 0x1
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0xEC:
	  cmplwi    r7, 0x1
	  bne-      .loc_0x158
	  lhz       r7, 0x18(r9)
	  cmplw     r0, r7
	  blt-      .loc_0x104
	  sub       r0, r0, r7

	.loc_0x104:
	  lbz       r4, 0x0(r9)
	  lhz       r10, 0x4(r9)
	  mulli     r8, r4, 0x3
	  add       r4, r10, r8
	  cmplw     r0, r4
	  bge-      .loc_0x128
	  li        r0, -0x1
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0x128:
	  lhz       r4, 0x8(r9)
	  sub       r4, r7, r4
	  cmplw     r0, r4
	  blt-      .loc_0x144
	  li        r0, -0x1
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0x144:
	  sub       r0, r0, r8
	  sub       r0, r0, r10
	  rlwinm    r0,r0,0,0,30
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0x158:
	  cmplwi    r7, 0x2
	  bne-      .loc_0x210
	  lhz       r10, 0x18(r9)
	  cmplw     r0, r10
	  bge-      .loc_0x1BC
	  lbz       r4, 0x0(r9)
	  lhz       r8, 0x4(r9)
	  mulli     r7, r4, 0x3
	  add       r4, r8, r7
	  cmplw     r0, r4
	  bge-      .loc_0x190
	  li        r0, -0x1
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0x190:
	  lhz       r4, 0x8(r9)
	  sub       r4, r10, r4
	  cmplw     r0, r4
	  blt-      .loc_0x1AC
	  li        r0, -0x1
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0x1AC:
	  sub       r0, r0, r7
	  sub       r0, r0, r8
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0x1BC:
	  lbz       r4, 0x0(r9)
	  sub       r0, r0, r10
	  lhz       r8, 0x6(r9)
	  mulli     r7, r4, 0x3
	  add       r4, r8, r7
	  cmplw     r0, r4
	  bge-      .loc_0x1E4
	  li        r0, -0x1
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0x1E4:
	  lhz       r4, 0xA(r9)
	  sub       r4, r10, r4
	  cmplw     r0, r4
	  blt-      .loc_0x200
	  li        r0, -0x1
	  sth       r0, 0x0(r6)
	  b         .loc_0x210

	.loc_0x200:
	  sub       r0, r0, r7
	  sub       r0, r0, r8
	  rlwinm    r0,r0,0,0,30
	  sth       r0, 0x0(r6)

	.loc_0x210:
	  subi      r0, r3, 0x1
	  sth       r0, 0x0(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D25E4
 * Size:	000060
 */
void __VIGetCurrentPosition(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r7, 0xCC00
	  stw       r0, 0x4(r1)
	  addi      r6, r4, 0
	  addi      r9, r7, 0x2000
	  stwu      r1, -0x8(r1)
	  addi      r5, r3, 0
	  addi      r4, r7, 0x2000
	  lhzu      r0, 0x2C(r9)
	  rlwinm    r8,r0,0,21,31

	.loc_0x28:
	  lhz       r0, 0x0(r9)
	  mr        r7, r8
	  lhz       r3, 0x2E(r4)
	  rlwinm    r8,r0,0,21,31
	  cmplw     r7, r8
	  rlwinm    r0,r3,0,21,31
	  bne+      .loc_0x28
	  mr        r3, r0
	  addi      r4, r8, 0
	  bl        -0x268
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void __VISetLatchMode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void __VIGetLatch0Position(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void __VIGetLatch1Position(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void __VIGetLatchPosition(void)
{
	// UNUSED FUNCTION
}
