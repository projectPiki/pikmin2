

/*
 * --INFO--
 * Address:	800BDEA8
 * Size:	000008
 */
void __TRK_get_MSR(void)
{
	/*
	.loc_0x0:
	  mfmsr     r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BDEB0
 * Size:	000008
 */
void __TRK_set_MSR(void)
{
	/*
	.loc_0x0:
	  mtmsr     r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_PVR(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT0U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT0L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT1U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT1L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT2U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT2L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT3U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_IBAT3L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT0U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT0L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT1U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT1L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT2U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT2L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT3U(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __TRK_get_DBAT3L(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BDEB8
 * Size:	00003C
 */
void TRK_ppc_memcpy(void)
{
	/*
	.loc_0x0:
	  mfmsr     r8
	  li        r10, 0

	.loc_0x8:
	  cmpw      r10, r5
	  beq-      .loc_0x30
	  mtmsr     r7
	  sync
	  lbzx      r9, r10, r4
	  mtmsr     r6
	  sync
	  stbx      r9, r10, r3
	  addi      r10, r10, 0x1
	  b         .loc_0x8

	.loc_0x30:
	  mtmsr     r8
	  sync
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BDEF4
 * Size:	000194
 */
void TRKInterruptHandler(void)
{
	/*
	.loc_0x0:
	  mtsrr0    r2
	  mtsrr1    r4
	  mfsprg    r4, 0x3
	  mfcr      r2
	  mtsprg    3, r2
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  lwz       r2, 0x8C(r2)
	  ori       r2, r2, 0x8002
	  xori      r2, r2, 0x8002
	  sync
	  mtmsr     r2
	  sync
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4280
	  sth       r3, 0x0(r2)
	  cmpwi     r3, 0x500
	  bne-      .loc_0xC8
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4328
	  mflr      r3
	  stw       r3, 0x42C(r2)
	  bl        0x25A0
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4328
	  lwz       r3, 0x42C(r2)
	  mtlr      r3
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  lwz       r2, 0xA0(r2)
	  lbz       r2, 0x0(r2)
	  cmpwi     r2, 0
	  beq-      .loc_0xAC
	  lis       r2, 0x804A
	  ori       r2, r2, 0x68BC
	  lbz       r2, 0xC(r2)
	  cmpwi     r2, 0x1
	  beq-      .loc_0xAC
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  li        r3, 0x1
	  stb       r3, 0x9C(r2)
	  b         .loc_0xC8

	.loc_0xAC:
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4758
	  lwz       r3, 0x88(r2)
	  mtcr      r3
	  lwz       r3, 0xC(r2)
	  lwz       r2, 0x8(r2)
	  rfi

	.loc_0xC8:
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4280
	  lhz       r3, 0x0(r2)
	  lis       r2, 0x804A
	  ori       r2, r2, 0x68BC
	  lbz       r2, 0xC(r2)
	  cmpwi     r2, 0
	  bne-      .loc_0x194
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4328
	  stw       r0, 0x0(r2)
	  stw       r1, 0x4(r2)
	  mfsprg    r0, 0x1
	  stw       r0, 0x8(r2)
	  sth       r3, 0x2F8(r2)
	  sth       r3, 0x2FA(r2)
	  mfsprg    r0, 0x2
	  stw       r0, 0xC(r2)
	  stmw      r4, 0x10(r2)
	  mfsrr0    r27
	  mflr      r28
	  mfsprg    r29, 0x3
	  mfctr     r30
	  mfxer     r31
	  stmw      r27, 0x80(r2)
	  bl        0x1A40
	  lis       r2, 0x804A
	  ori       r2, r2, 0x68BC
	  li        r3, 0x1
	  stb       r3, 0xC(r2)
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  lwz       r0, 0x8C(r2)
	  sync
	  mtmsr     r0
	  sync
	  lwz       r0, 0x80(r2)
	  mtlr      r0
	  lwz       r0, 0x84(r2)
	  mtctr     r0
	  lwz       r0, 0x88(r2)
	  mtxer     r0
	  lwz       r0, 0x94(r2)
	  mtdsisr   r0
	  lwz       r0, 0x90(r2)
	  mtdar     r0
	  lmw       r3, 0xC(r2)
	  lwz       r0, 0x0(r2)
	  lwz       r1, 0x4(r2)
	  lwz       r2, 0x8(r2)
	  b         0x920

	.loc_0x194:
	*/
}

/*
 * --INFO--
 * Address:	800BE088
 * Size:	00009C
 */
void TRKExceptionHandler(void)
{
	/*
	.loc_0x0:
	  lis       r2, 0x804A
	  ori       r2, r2, 0x68BC
	  sth       r3, 0x8(r2)
	  mfsrr0    r3
	  stw       r3, 0x0(r2)
	  lhz       r3, 0x8(r2)
	  cmpwi     r3, 0x200
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x300
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x400
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x600
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x700
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x800
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x1000
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x1100
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x1200
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x1300
	  beq-      .loc_0x6C
	  b         .loc_0x78

	.loc_0x6C:
	  mfsrr0    r3
	  addi      r3, r3, 0x4
	  mtsrr0    r3

	.loc_0x78:
	  lis       r2, 0x804A
	  ori       r2, r2, 0x68BC
	  li        r3, 0x1
	  stb       r3, 0xD(r2)
	  mfsprg    r3, 0x3
	  mtcr      r3
	  mfsprg    r2, 0x1
	  mfsprg    r3, 0x2
	  rfi
	*/
}

/*
 * --INFO--
 * Address:	800BE124
 * Size:	0000C4
 */
void TRKSwapAndGo(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x804F
	  ori       r3, r3, 0x4284
	  stmw      r0, 0x0(r3)
	  mfmsr     r0
	  stw       r0, 0x8C(r3)
	  mflr      r0
	  stw       r0, 0x80(r3)
	  mfctr     r0
	  stw       r0, 0x84(r3)
	  mfxer     r0
	  stw       r0, 0x88(r3)
	  mfdsisr   r0
	  stw       r0, 0x94(r3)
	  mfdar     r0
	  stw       r0, 0x90(r3)
	  li        r1, -0x7FFE
	  not       r1, r1
	  mfmsr     r3
	  and       r3, r3, r1
	  mtmsr     r3
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  lwz       r2, 0xA0(r2)
	  lbz       r2, 0x0(r2)
	  cmpwi     r2, 0
	  beq-      .loc_0x7C
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  li        r3, 0x1
	  stb       r3, 0x9C(r2)
	  b         .loc_0xC4

	.loc_0x7C:
	  lis       r2, 0x804A
	  ori       r2, r2, 0x68BC
	  li        r3, 0
	  stb       r3, 0xC(r2)
	  bl        0x1A68
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4328
	  lmw       r27, 0x80(r2)
	  mtsrr0    r27
	  mtlr      r28
	  mtcr      r29
	  mtctr     r30
	  mtxer     r31
	  lmw       r3, 0xC(r2)
	  lwz       r0, 0x0(r2)
	  lwz       r1, 0x4(r2)
	  lwz       r2, 0x8(r2)
	  rfi

	.loc_0xC4:
	*/
}

/*
 * --INFO--
 * Address:	800BE1E8
 * Size:	000054
 */
void TRKInterruptHandlerEnableInterrupts(void)
{
	/*
	.loc_0x0:
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  lwz       r0, 0x8C(r2)
	  sync
	  mtmsr     r0
	  sync
	  lwz       r0, 0x80(r2)
	  mtlr      r0
	  lwz       r0, 0x84(r2)
	  mtctr     r0
	  lwz       r0, 0x88(r2)
	  mtxer     r0
	  lwz       r0, 0x94(r2)
	  mtdsisr   r0
	  lwz       r0, 0x90(r2)
	  mtdar     r0
	  lmw       r3, 0xC(r2)
	  lwz       r0, 0x0(r2)
	  lwz       r1, 0x4(r2)
	  lwz       r2, 0x8(r2)
	  b         0x76C
	*/
}

/*
 * --INFO--
 * Address:	800BE23C
 * Size:	000024
 */
void ReadFPSCR(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x20(r1),0,0
	  mffs      f31
	  stfd      f31, 0x0(r3)
	  psq_l     f31,0x20(r1),0,0
	  lfd       f31, 0x10(r1)
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BE260
 * Size:	000024
 */
void WriteFPSCR(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x20(r1),0,0
	  lfd       f31, 0x0(r3)
	  mtfsf     255, f31
	  psq_l     f31,0x20(r1),0,0
	  lfd       f31, 0x10(r1)
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BE284
 * Size:	0000C4
 */
void TRKTargetAccessARAM(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r7, 0x804A
	  cmpwi     r6, 0
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  stw       r31, 0x2C(r1)
	  addi      r31, r7, 0x68BC
	  stw       r30, 0x28(r1)
	  li        r30, 0
	  stw       r29, 0x24(r1)
	  mr        r29, r5
	  lwz       r6, 0xC(r31)
	  lwz       r9, 0x0(r31)
	  lwz       r8, 0x4(r31)
	  lwz       r7, 0x8(r31)
	  stw       r9, 0x8(r1)
	  stw       r8, 0xC(r1)
	  stw       r7, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stb       r0, 0xD(r31)
	  beq-      .loc_0x60
	  bl        0x1E0C
	  b         .loc_0x64

	.loc_0x60:
	  bl        0x1C18

	.loc_0x64:
	  lbz       r0, 0xD(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x7C
	  li        r0, 0
	  li        r30, 0x702
	  stw       r0, 0x0(r29)

	.loc_0x7C:
	  lis       r3, 0x804A
	  lwz       r6, 0x8(r1)
	  addi      r7, r3, 0x68BC
	  lwz       r5, 0xC(r1)
	  lwz       r4, 0x10(r1)
	  mr        r3, r30
	  lwz       r0, 0x14(r1)
	  stw       r6, 0x0(r7)
	  stw       r5, 0x4(r7)
	  stw       r4, 0x8(r7)
	  stw       r0, 0xC(r7)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void TRKGetInTRKFlag(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void SetInputState(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BE348
 * Size:	000010
 */
void TRKTargetSetInputPendingPtr(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804F
	  addi      r4, r4, 0x4284
	  stw       r3, 0xA0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void TRKPPCAccessSpecialReg(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00021C
 */
void TRKPPCAccessFPRegister(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void TRKPPCAccessPairedSingleRegister(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 */
void TRKPPCAccessSPR(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BE358
 * Size:	000018
 */
void TRKTargetStop(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x804F
	  li        r0, 0x1
	  addi      r4, r3, 0x4284
	  li        r3, 0
	  stw       r0, 0x98(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BE370
 * Size:	000010
 */
void TRKTargetSetStopped(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804F
	  addi      r4, r4, 0x4284
	  stw       r3, 0x98(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BE380
 * Size:	000010
 */
void TRKTargetStopped(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x804F
	  addi      r3, r3, 0x4284
	  lwz       r3, 0x98(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void TRKTargetFlushCache(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BE390
 * Size:	000200
 */
void TRKTargetSupportRequest(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  addi      r31, r3, 0x4328
	  lwz       r27, 0xC(r31)
	  cmpwi     r27, 0xD1
	  beq-      .loc_0x60
	  cmpwi     r27, 0xD0
	  beq-      .loc_0x60
	  cmpwi     r27, 0xD2
	  beq-      .loc_0x60
	  cmpwi     r27, 0xD3
	  beq-      .loc_0x60
	  cmpwi     r27, 0xD4
	  beq-      .loc_0x60
	  addi      r3, r1, 0x10
	  li        r4, 0x4
	  bl        -0x2F30
	  addi      r3, r1, 0x10
	  bl        -0x2F20
	  li        r3, 0
	  b         .loc_0x1EC

	.loc_0x60:
	  cmpwi     r27, 0xD2
	  bne-      .loc_0xB4
	  lis       r3, 0x804F
	  addi      r6, r1, 0xC
	  addi      r4, r3, 0x4328
	  lwz       r0, 0x14(r4)
	  lwz       r3, 0x10(r4)
	  lwz       r5, 0x18(r4)
	  rlwinm    r4,r0,0,24,31
	  bl        -0xC28
	  lwz       r0, 0xC(r1)
	  mr        r30, r3
	  cmpwi     r0, 0
	  bne-      .loc_0xA8
	  cmpwi     r30, 0
	  beq-      .loc_0xA8
	  li        r0, 0x1
	  stw       r0, 0xC(r1)

	.loc_0xA8:
	  lwz       r0, 0xC(r1)
	  stw       r0, 0xC(r31)
	  b         .loc_0x1D4

	.loc_0xB4:
	  cmpwi     r27, 0xD3
	  bne-      .loc_0xFC
	  lis       r3, 0x804F
	  addi      r4, r1, 0xC
	  addi      r3, r3, 0x4328
	  lwz       r3, 0x10(r3)
	  bl        -0xD58
	  lwz       r0, 0xC(r1)
	  mr        r30, r3
	  cmpwi     r0, 0
	  bne-      .loc_0xF0
	  cmpwi     r30, 0
	  beq-      .loc_0xF0
	  li        r0, 0x1
	  stw       r0, 0xC(r1)

	.loc_0xF0:
	  lwz       r0, 0xC(r1)
	  stw       r0, 0xC(r31)
	  b         .loc_0x1D4

	.loc_0xFC:
	  cmpwi     r27, 0xD4
	  bne-      .loc_0x168
	  lis       r3, 0x804F
	  addi      r4, r1, 0x8
	  addi      r29, r3, 0x4328
	  addi      r6, r1, 0xC
	  lwz       r3, 0x14(r29)
	  lwz       r0, 0x18(r29)
	  lwz       r7, 0x0(r3)
	  lwz       r3, 0x10(r29)
	  rlwinm    r5,r0,0,24,31
	  stw       r7, 0x8(r1)
	  bl        -0xEC8
	  lwz       r0, 0xC(r1)
	  mr        r30, r3
	  cmpwi     r0, 0
	  bne-      .loc_0x150
	  cmpwi     r30, 0
	  beq-      .loc_0x150
	  li        r0, 0x1
	  stw       r0, 0xC(r1)

	.loc_0x150:
	  lwz       r3, 0xC(r1)
	  lwz       r0, 0x8(r1)
	  stw       r3, 0xC(r31)
	  lwz       r3, 0x14(r29)
	  stw       r0, 0x0(r3)
	  b         .loc_0x1D4

	.loc_0x168:
	  lis       r3, 0x804F
	  subfic    r0, r27, 0xD1
	  addi      r29, r3, 0x4328
	  addi      r6, r1, 0xC
	  lwz       r28, 0x14(r29)
	  cntlzw    r0, r0
	  lwz       r3, 0x10(r29)
	  rlwinm    r8,r0,27,5,31
	  lwz       r4, 0x18(r29)
	  mr        r5, r28
	  li        r7, 0x1
	  bl        -0xA3C
	  lwz       r0, 0xC(r1)
	  mr        r30, r3
	  cmpwi     r0, 0
	  bne-      .loc_0x1B8
	  cmpwi     r30, 0
	  beq-      .loc_0x1B8
	  li        r0, 0x1
	  stw       r0, 0xC(r1)

	.loc_0x1B8:
	  lwz       r0, 0xC(r1)
	  cmpwi     r27, 0xD1
	  stw       r0, 0xC(r31)
	  bne-      .loc_0x1D4
	  lwz       r3, 0x18(r29)
	  lwz       r4, 0x0(r28)
	  bl        -0x7A8

	.loc_0x1D4:
	  lis       r4, 0x804F
	  mr        r3, r30
	  addi      r5, r4, 0x4328
	  lwz       r4, 0x80(r5)
	  addi      r0, r4, 0x4
	  stw       r0, 0x80(r5)

	.loc_0x1EC:
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BE590
 * Size:	000010
 */
void TRKTargetGetPC(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x804F
	  addi      r3, r3, 0x4328
	  lwz       r3, 0x80(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BE5A0
 * Size:	0000B8
 */
void TRKTargetStepOutOfRange(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  beq-      .loc_0x20
	  li        r3, 0x703
	  b         .loc_0xA4

	.loc_0x20:
	  lis       r6, 0x804A
	  lis       r5, 0x8048
	  addi      r31, r6, 0x68CC
	  li        r6, 0x1
	  stw       r3, 0xC(r31)
	  subi      r0, r5, 0x63D8
	  li        r3, 0x1
	  stw       r4, 0x10(r31)
	  mr        r4, r0
	  stw       r6, 0x4(r31)
	  stw       r6, 0x0(r31)
	  crclr     6, 0x6
	  bl        0x2F58
	  lis       r3, 0x804F
	  lwz       r4, 0x4(r31)
	  addi      r3, r3, 0x4328
	  lwz       r0, 0x1F8(r3)
	  cmpwi     r4, 0
	  ori       r0, r0, 0x400
	  stw       r0, 0x1F8(r3)
	  beq-      .loc_0x7C
	  cmpwi     r4, 0x10
	  bne-      .loc_0x90

	.loc_0x7C:
	  lis       r3, 0x804A
	  addi      r4, r3, 0x68CC
	  lwz       r3, 0x8(r4)
	  subi      r0, r3, 0x1
	  stw       r0, 0x8(r4)

	.loc_0x90:
	  lis       r3, 0x804F
	  li        r0, 0
	  addi      r4, r3, 0x4284
	  li        r3, 0
	  stw       r0, 0x98(r4)

	.loc_0xA4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BE658
 * Size:	0000AC
 */
void TRKTargetSingleStep(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  beq-      .loc_0x20
	  li        r3, 0x703
	  b         .loc_0x98

	.loc_0x20:
	  lis       r5, 0x804A
	  lis       r4, 0x8048
	  addi      r31, r5, 0x68CC
	  li        r0, 0x1
	  li        r5, 0
	  stw       r3, 0x8(r31)
	  subi      r4, r4, 0x63D8
	  li        r3, 0x1
	  stw       r5, 0x4(r31)
	  stw       r0, 0x0(r31)
	  crclr     6, 0x6
	  bl        0x2EA4
	  lis       r3, 0x804F
	  lwz       r4, 0x4(r31)
	  addi      r3, r3, 0x4328
	  lwz       r0, 0x1F8(r3)
	  cmpwi     r4, 0
	  ori       r0, r0, 0x400
	  stw       r0, 0x1F8(r3)
	  beq-      .loc_0x78
	  cmpwi     r4, 0x10
	  bne-      .loc_0x84

	.loc_0x78:
	  lwz       r3, 0x8(r31)
	  subi      r0, r3, 0x1
	  stw       r0, 0x8(r31)

	.loc_0x84:
	  lis       r3, 0x804F
	  li        r0, 0
	  addi      r4, r3, 0x4284
	  li        r3, 0
	  stw       r0, 0x98(r4)

	.loc_0x98:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000148
 */
void TRKTargetCheckStep(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void TRKTargetDoStep(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void TRKTargetStepDone(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void TRKTargetEnableTrace(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BE704
 * Size:	000084
 */
void TRKTargetAddExceptionInfo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  li        r4, 0
	  li        r5, 0x40
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0xC
	  bl        -0xB9670
	  lis       r3, 0x804A
	  li        r5, 0x40
	  lwz       r4, 0x68BC(r3)
	  li        r0, 0x91
	  stw       r5, 0xC(r1)
	  addi      r3, r1, 0x8
	  stb       r0, 0x10(r1)
	  stw       r4, 0x14(r1)
	  bl        0xEB0
	  lis       r3, 0x804A
	  lwz       r5, 0x8(r1)
	  addi      r4, r3, 0x68BC
	  mr        r3, r31
	  lhz       r0, 0x8(r4)
	  addi      r4, r1, 0xC
	  stw       r5, 0x18(r1)
	  li        r5, 0x40
	  stw       r0, 0x1C(r1)
	  bl        -0x2B78
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BE788
 * Size:	00008C
 */
void TRKTargetAddStopInfo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  li        r4, 0
	  li        r5, 0x40
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0xC
	  bl        -0xB96F4
	  lis       r3, 0x804F
	  li        r5, 0x40
	  addi      r3, r3, 0x4328
	  li        r0, 0x90
	  lwz       r4, 0x80(r3)
	  addi      r3, r1, 0x8
	  stw       r5, 0xC(r1)
	  stb       r0, 0x10(r1)
	  stw       r4, 0x14(r1)
	  bl        0xE28
	  lis       r3, 0x804F
	  lwz       r5, 0x8(r1)
	  addi      r4, r3, 0x4328
	  mr        r3, r31
	  lwz       r0, 0x2F8(r4)
	  addi      r4, r1, 0xC
	  stw       r5, 0x18(r1)
	  li        r5, 0x40
	  rlwinm    r0,r0,0,16,31
	  stw       r0, 0x1C(r1)
	  bl        -0x2C04
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BE814
 * Size:	000190
 */
void TRKTargetInterrupt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  li        r30, 0
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0x5
	  bge-      .loc_0x174
	  cmpwi     r0, 0x3
	  bge-      .loc_0x30
	  b         .loc_0x174

	.loc_0x30:
	  lis       r3, 0x804A
	  addi      r4, r3, 0x68CC
	  lwz       r0, 0x0(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x148
	  lis       r3, 0x804F
	  li        r5, 0x1
	  addi      r31, r3, 0x4328
	  lwz       r0, 0x1F8(r31)
	  rlwinm    r0,r0,0,22,20
	  stw       r0, 0x1F8(r31)
	  beq-      .loc_0xC0
	  lwz       r0, 0x2F8(r31)
	  rlwinm    r0,r0,0,16,31
	  cmplwi    r0, 0xD00
	  bne-      .loc_0xC0
	  lwz       r0, 0x4(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xA0
	  bge-      .loc_0xC0
	  cmpwi     r0, 0
	  bge-      .loc_0x8C
	  b         .loc_0xC0

	.loc_0x8C:
	  lwz       r0, 0x8(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  li        r5, 0
	  b         .loc_0xC0

	.loc_0xA0:
	  lwz       r3, 0x80(r31)
	  lwz       r0, 0xC(r4)
	  cmplw     r3, r0
	  blt-      .loc_0xC0
	  lwz       r0, 0x10(r4)
	  cmplw     r3, r0
	  bgt-      .loc_0xC0
	  li        r5, 0

	.loc_0xC0:
	  cmpwi     r5, 0
	  beq-      .loc_0xD8
	  lis       r3, 0x804A
	  li        r0, 0
	  stw       r0, 0x68CC(r3)
	  b         .loc_0x148

	.loc_0xD8:
	  lis       r4, 0x804A
	  li        r0, 0x1
	  addi      r5, r4, 0x68CC
	  lis       r3, 0x8048
	  stw       r0, 0x0(r5)
	  subi      r4, r3, 0x63D8
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x2C3C
	  lis       r3, 0x804A
	  lwz       r0, 0x1F8(r31)
	  addi      r3, r3, 0x68CC
	  lwz       r3, 0x4(r3)
	  ori       r0, r0, 0x400
	  stw       r0, 0x1F8(r31)
	  cmpwi     r3, 0
	  beq-      .loc_0x124
	  cmpwi     r3, 0x10
	  bne-      .loc_0x138

	.loc_0x124:
	  lis       r3, 0x804A
	  addi      r4, r3, 0x68CC
	  lwz       r3, 0x8(r4)
	  subi      r0, r3, 0x1
	  stw       r0, 0x8(r4)

	.loc_0x138:
	  lis       r3, 0x804F
	  li        r0, 0
	  addi      r3, r3, 0x4284
	  stw       r0, 0x98(r3)

	.loc_0x148:
	  lis       r3, 0x804A
	  lwz       r0, 0x68CC(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x174
	  lis       r3, 0x804F
	  li        r0, 0x1
	  addi      r4, r3, 0x4284
	  li        r3, 0x90
	  stw       r0, 0x98(r4)
	  bl        -0xC60
	  mr        r30, r3

	.loc_0x174:
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
 * Address:	800BE9A4
 * Size:	0000AC
 */
void TRKPostInterruptEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x24(r1)
	  addi      r3, r3, 0x4284
	  lwz       r0, 0x9C(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x2C
	  li        r0, 0
	  stw       r0, 0x9C(r3)
	  b         .loc_0x9C

	.loc_0x2C:
	  lis       r3, 0x804F
	  addi      r3, r3, 0x4328
	  lwz       r0, 0x2F8(r3)
	  rlwinm    r0,r0,0,16,31
	  cmpwi     r0, 0xD00
	  beq-      .loc_0x54
	  bge-      .loc_0x88
	  cmpwi     r0, 0x700
	  beq-      .loc_0x54
	  b         .loc_0x88

	.loc_0x54:
	  lis       r4, 0x804F
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x4328
	  lwz       r4, 0x80(r4)
	  bl        0xBF0
	  lwz       r3, 0x8(r1)
	  subis     r0, r3, 0xFE0
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  li        r4, 0x5
	  b         .loc_0x8C

	.loc_0x80:
	  li        r4, 0x3
	  b         .loc_0x8C

	.loc_0x88:
	  li        r4, 0x4

	.loc_0x8C:
	  addi      r3, r1, 0xC
	  bl        -0x3588
	  addi      r3, r1, 0xC
	  bl        -0x3578

	.loc_0x9C:
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void TRKTargetCheckException(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void TRKTargetCPUType(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void TRKTargetSupportMask(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void TRKTargetVersions(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BEA50
 * Size:	000438
 */
void TRKTargetAccessExtended2(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  stw       r0, 0x134(r1)
	  stmw      r19, 0xFC(r1)
	  mr        r23, r4
	  cmplwi    r23, 0x1F
	  mr        r27, r3
	  mr        r24, r5
	  mr        r25, r6
	  mr        r26, r7
	  ble-      .loc_0x34
	  li        r3, 0x701
	  b         .loc_0x424

	.loc_0x34:
	  lis       r3, 0x8048
	  lis       r5, 0x804A
	  subi      r29, r3, 0x6450
	  lis       r4, 0x7C99
	  lwz       r0, 0x0(r29)
	  addi      r31, r5, 0x68BC
	  lwz       r8, 0x4(r29)
	  lis       r3, 0x4E80
	  lwz       r7, 0x24(r29)
	  subi      r6, r4, 0x1D5A
	  stw       r0, 0xC4(r1)
	  addi      r0, r3, 0x20
	  lwz       r19, 0x0(r31)
	  li        r30, 0
	  lwz       r22, 0xC(r31)
	  lis       r5, 0x9083
	  stw       r8, 0xC8(r1)
	  addi      r3, r1, 0xC4
	  lwz       r20, 0x4(r31)
	  li        r4, 0x28
	  stw       r7, 0xE8(r1)
	  lwz       r21, 0x8(r31)
	  lwz       r28, 0x8(r29)
	  lwz       r12, 0xC(r29)
	  lwz       r11, 0x10(r29)
	  lwz       r10, 0x14(r29)
	  lwz       r9, 0x18(r29)
	  lwz       r8, 0x1C(r29)
	  lwz       r7, 0x20(r29)
	  stw       r19, 0x14(r1)
	  stw       r20, 0x18(r1)
	  stw       r21, 0x1C(r1)
	  stw       r22, 0x20(r1)
	  stb       r30, 0xD(r31)
	  stw       r28, 0xCC(r1)
	  stw       r12, 0xD0(r1)
	  stw       r11, 0xD4(r1)
	  stw       r10, 0xD8(r1)
	  stw       r9, 0xDC(r1)
	  stw       r8, 0xE0(r1)
	  stw       r7, 0xE4(r1)
	  stw       r6, 0xC4(r1)
	  stw       r5, 0xC8(r1)
	  stw       r0, 0xE8(r1)
	  bl        -0xD7C
	  lis       r3, 0x804F
	  addi      r12, r1, 0xC4
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8048
	  lwz       r5, 0x8(r1)
	  subi      r29, r3, 0x6450
	  lis       r4, 0x7C99
	  lwz       r8, 0x0(r29)
	  lis       r3, 0x4E80
	  lwz       r0, 0x4(r29)
	  oris      r30, r5, 0xA000
	  lwz       r7, 0x24(r29)
	  subi      r5, r4, 0x1C5A
	  stw       r0, 0xA0(r1)
	  addi      r0, r3, 0x20
	  lwz       r28, 0x8(r29)
	  lis       r6, 0x8083
	  stw       r8, 0x9C(r1)
	  addi      r3, r1, 0x9C
	  lwz       r12, 0xC(r29)
	  li        r4, 0x28
	  stw       r7, 0xC0(r1)
	  lwz       r11, 0x10(r29)
	  lwz       r10, 0x14(r29)
	  lwz       r9, 0x18(r29)
	  lwz       r8, 0x1C(r29)
	  lwz       r7, 0x20(r29)
	  stw       r30, 0x8(r1)
	  stw       r28, 0xA4(r1)
	  stw       r12, 0xA8(r1)
	  stw       r11, 0xAC(r1)
	  stw       r10, 0xB0(r1)
	  stw       r9, 0xB4(r1)
	  stw       r8, 0xB8(r1)
	  stw       r7, 0xBC(r1)
	  stw       r6, 0x9C(r1)
	  stw       r5, 0xA0(r1)
	  stw       r0, 0xC0(r1)
	  bl        -0xE24
	  lis       r3, 0x804F
	  addi      r12, r1, 0x9C
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8048
	  lis       r4, 0x7C91
	  subi      r29, r3, 0x6450
	  lis       r3, 0x4E80
	  lwz       r8, 0x0(r29)
	  li        r30, 0
	  lwz       r6, 0x4(r29)
	  subi      r5, r4, 0x1C5A
	  lwz       r7, 0x24(r29)
	  addi      r0, r3, 0x20
	  stw       r6, 0x78(r1)
	  lis       r6, 0x8083
	  lwz       r28, 0x8(r29)
	  addi      r3, r1, 0x74
	  stw       r8, 0x74(r1)
	  li        r4, 0x28
	  lwz       r12, 0xC(r29)
	  stw       r7, 0x98(r1)
	  lwz       r11, 0x10(r29)
	  lwz       r10, 0x14(r29)
	  lwz       r9, 0x18(r29)
	  lwz       r8, 0x1C(r29)
	  lwz       r7, 0x20(r29)
	  stw       r30, 0x8(r1)
	  stw       r28, 0x7C(r1)
	  stw       r12, 0x80(r1)
	  stw       r11, 0x84(r1)
	  stw       r10, 0x88(r1)
	  stw       r9, 0x8C(r1)
	  stw       r8, 0x90(r1)
	  stw       r7, 0x94(r1)
	  stw       r6, 0x74(r1)
	  stw       r5, 0x78(r1)
	  stw       r0, 0x98(r1)
	  bl        -0xEC8
	  lis       r3, 0x804F
	  addi      r12, r1, 0x74
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  rlwinm    r30,r27,21,0,10
	  stw       r0, 0x0(r25)
	  addi      r29, r1, 0x4C
	  addi      r28, r1, 0x24
	  li        r3, 0
	  b         .loc_0x3D4

	.loc_0x268:
	  cmpwi     r26, 0
	  beq-      .loc_0x318
	  lis       r3, 0x8048
	  lwzu      r12, -0x6428(r3)
	  oris      r0, r30, 0xE003
	  lwz       r11, 0x4(r3)
	  lwz       r10, 0x8(r3)
	  lwz       r9, 0xC(r3)
	  lwz       r8, 0x10(r3)
	  lwz       r7, 0x14(r3)
	  lwz       r6, 0x18(r3)
	  lwz       r5, 0x1C(r3)
	  lwz       r4, 0x20(r3)
	  lwz       r3, 0x24(r3)
	  stw       r12, 0x4C(r1)
	  stw       r11, 0x50(r1)
	  stw       r10, 0x54(r1)
	  stw       r9, 0x58(r1)
	  stw       r8, 0x5C(r1)
	  stw       r7, 0x60(r1)
	  stw       r6, 0x64(r1)
	  stw       r5, 0x68(r1)
	  stw       r4, 0x6C(r1)
	  stw       r3, 0x70(r1)
	  beq-      .loc_0x2D0
	  oris      r0, r30, 0xF003

	.loc_0x2D0:
	  lis       r3, 0x4E80
	  stw       r0, 0x4C(r1)
	  addi      r0, r3, 0x20
	  mr        r3, r29
	  stw       r0, 0x70(r1)
	  li        r4, 0x28
	  bl        -0xF80
	  lis       r3, 0x804F
	  addi      r12, r1, 0x4C
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0xC
	  mtctr     r12
	  bctrl
	  lwz       r5, 0xC(r1)
	  mr        r3, r24
	  lwz       r6, 0x10(r1)
	  bl        -0x3100
	  b         .loc_0x3C0

	.loc_0x318:
	  mr        r3, r24
	  addi      r4, r1, 0xC
	  bl        -0x335C
	  lis       r3, 0x8048
	  lwzu      r12, -0x6428(r3)
	  cmpwi     r26, 0
	  oris      r0, r30, 0xE003
	  lwz       r11, 0x4(r3)
	  lwz       r10, 0x8(r3)
	  lwz       r9, 0xC(r3)
	  lwz       r8, 0x10(r3)
	  lwz       r7, 0x14(r3)
	  lwz       r6, 0x18(r3)
	  lwz       r5, 0x1C(r3)
	  lwz       r4, 0x20(r3)
	  lwz       r3, 0x24(r3)
	  stw       r12, 0x24(r1)
	  stw       r11, 0x28(r1)
	  stw       r10, 0x2C(r1)
	  stw       r9, 0x30(r1)
	  stw       r8, 0x34(r1)
	  stw       r7, 0x38(r1)
	  stw       r6, 0x3C(r1)
	  stw       r5, 0x40(r1)
	  stw       r4, 0x44(r1)
	  stw       r3, 0x48(r1)
	  beq-      .loc_0x388
	  oris      r0, r30, 0xF003

	.loc_0x388:
	  lis       r3, 0x4E80
	  stw       r0, 0x24(r1)
	  addi      r0, r3, 0x20
	  mr        r3, r28
	  stw       r0, 0x48(r1)
	  li        r4, 0x28
	  bl        -0x1038
	  lis       r3, 0x804F
	  addi      r12, r1, 0x24
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0xC
	  mtctr     r12
	  bctrl
	  li        r3, 0

	.loc_0x3C0:
	  lwz       r4, 0x0(r25)
	  addis     r30, r30, 0x20
	  addi      r27, r27, 0x1
	  addi      r0, r4, 0x8
	  stw       r0, 0x0(r25)

	.loc_0x3D4:
	  cmplw     r27, r23
	  bgt-      .loc_0x3E4
	  cmpwi     r3, 0
	  beq+      .loc_0x268

	.loc_0x3E4:
	  lbz       r0, 0xD(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x3FC
	  li        r0, 0
	  li        r3, 0x702
	  stw       r0, 0x0(r25)

	.loc_0x3FC:
	  lis       r4, 0x804A
	  lwz       r6, 0x14(r1)
	  addi      r7, r4, 0x68BC
	  lwz       r5, 0x18(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r0, 0x20(r1)
	  stw       r6, 0x0(r7)
	  stw       r5, 0x4(r7)
	  stw       r4, 0x8(r7)
	  stw       r0, 0xC(r7)

	.loc_0x424:
	  lmw       r19, 0xFC(r1)
	  lwz       r0, 0x134(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BEE88
 * Size:	000170
 */
void TRKTargetAccessExtended1(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0x60
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  ble-      .loc_0x28
	  li        r3, 0x701
	  b         .loc_0x158

	.loc_0x28:
	  lis       r6, 0x804A
	  li        r0, 0
	  addi      r31, r6, 0x68BC
	  cmplw     r3, r4
	  lwz       r6, 0xC(r31)
	  lwz       r10, 0x0(r31)
	  lwz       r9, 0x4(r31)
	  lwz       r8, 0x8(r31)
	  stb       r0, 0xD(r31)
	  stw       r10, 0x8(r1)
	  stw       r9, 0xC(r1)
	  stw       r8, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r0, 0x0(r30)
	  bgt-      .loc_0x118
	  sub       r4, r4, r3
	  lis       r8, 0x804F
	  addi      r0, r4, 0x1
	  lwz       r4, 0x0(r30)
	  rlwinm    r6,r0,2,0,29
	  cmpwi     r7, 0
	  add       r4, r4, r6
	  addi      r7, r8, 0x4328
	  rlwinm    r3,r3,2,0,29
	  stw       r4, 0x0(r30)
	  add       r4, r7, r3
	  addi      r4, r4, 0x1A8
	  beq-      .loc_0xA8
	  mr        r3, r5
	  mr        r5, r0
	  bl        -0x342C
	  b         .loc_0x118

	.loc_0xA8:
	  addi      r3, r7, 0x1EC
	  cmplw     r4, r3
	  bgt-      .loc_0xD4
	  subi      r6, r6, 0x4
	  addi      r3, r7, 0x1E8
	  add       r6, r4, r6
	  cmplw     r6, r3
	  blt-      .loc_0xD4
	  lis       r3, 0x804A
	  li        r6, 0x1
	  stb       r6, 0x68B0(r3)

	.loc_0xD4:
	  lis       r3, 0x804F
	  addi      r3, r3, 0x4328
	  addi      r6, r3, 0x278
	  cmplw     r4, r6
	  bgt-      .loc_0x10C
	  rlwinm    r3,r0,2,0,29
	  subi      r3, r3, 0x4
	  add       r3, r4, r3
	  cmplw     r3, r6
	  blt-      .loc_0x10C
	  lis       r3, 0x804A
	  li        r6, 0x1
	  addi      r3, r3, 0x68B0
	  stb       r6, 0x1(r3)

	.loc_0x10C:
	  mr        r3, r5
	  mr        r5, r0
	  bl        -0x3710

	.loc_0x118:
	  lbz       r0, 0xD(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x130
	  li        r0, 0
	  li        r3, 0x702
	  stw       r0, 0x0(r30)

	.loc_0x130:
	  lis       r4, 0x804A
	  lwz       r6, 0x8(r1)
	  addi      r7, r4, 0x68BC
	  lwz       r5, 0xC(r1)
	  lwz       r4, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stw       r6, 0x0(r7)
	  stw       r5, 0x4(r7)
	  stw       r4, 0x8(r7)
	  stw       r0, 0xC(r7)

	.loc_0x158:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BEFF8
 * Size:	00050C
 */
void TRKTargetAccessFP(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stmw      r20, 0xC0(r1)
	  mr        r28, r4
	  cmplwi    r28, 0x21
	  mr        r20, r3
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  ble-      .loc_0x34
	  li        r3, 0x701
	  b         .loc_0x4F8

	.loc_0x34:
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r27, r3, 0x68BC
	  lwz       r3, 0xC(r27)
	  lwz       r6, 0x0(r27)
	  lwz       r5, 0x4(r27)
	  lwz       r4, 0x8(r27)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r4, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  stb       r0, 0xD(r27)
	  bl        -0x11B4
	  ori       r3, r3, 0x2000
	  bl        -0x11B4
	  li        r0, 0
	  mr        r21, r20
	  stw       r0, 0x0(r30)
	  rlwinm    r26,r20,21,0,10
	  addi      r25, r1, 0x98
	  addi      r24, r1, 0x48
	  addi      r23, r1, 0x70
	  addi      r22, r1, 0x20
	  li        r3, 0
	  b         .loc_0x4A8

	.loc_0x98:
	  cmpwi     r31, 0
	  beq-      .loc_0x298
	  lis       r3, 0x8048
	  cmplwi    r21, 0x20
	  subi      r12, r3, 0x6400
	  lwz       r11, 0x0(r12)
	  lwz       r10, 0x4(r12)
	  lwz       r9, 0x8(r12)
	  lwz       r8, 0xC(r12)
	  lwz       r7, 0x10(r12)
	  lwz       r6, 0x14(r12)
	  lwz       r5, 0x18(r12)
	  lwz       r4, 0x1C(r12)
	  lwz       r3, 0x20(r12)
	  lwz       r0, 0x24(r12)
	  stw       r11, 0x98(r1)
	  stw       r10, 0x9C(r1)
	  stw       r9, 0xA0(r1)
	  stw       r8, 0xA4(r1)
	  stw       r7, 0xA8(r1)
	  stw       r6, 0xAC(r1)
	  stw       r5, 0xB0(r1)
	  stw       r4, 0xB4(r1)
	  stw       r3, 0xB8(r1)
	  stw       r0, 0xBC(r1)
	  bge-      .loc_0x148
	  cmpwi     r31, 0
	  oris      r0, r26, 0xC803
	  beq-      .loc_0x110
	  oris      r0, r26, 0xD803

	.loc_0x110:
	  lis       r3, 0x4E80
	  stw       r0, 0x98(r1)
	  addi      r0, r3, 0x20
	  mr        r3, r25
	  stw       r0, 0xBC(r1)
	  li        r4, 0x28
	  bl        -0x1368
	  lis       r3, 0x804F
	  addi      r12, r1, 0x98
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  b         .loc_0x284

	.loc_0x148:
	  bne-      .loc_0x18C
	  cmpwi     r31, 0
	  beq-      .loc_0x160
	  addi      r3, r1, 0x8
	  bl        -0xF14
	  b         .loc_0x168

	.loc_0x160:
	  addi      r3, r1, 0x8
	  bl        -0xEFC

	.loc_0x168:
	  lwz       r4, 0x8(r1)
	  li        r0, 0
	  lwz       r5, 0xC(r1)
	  li        r3, -0x1
	  and       r0, r4, r0
	  and       r3, r5, r3
	  stw       r0, 0x8(r1)
	  stw       r3, 0xC(r1)
	  b         .loc_0x284

	.loc_0x18C:
	  cmplwi    r21, 0x21
	  bne-      .loc_0x284
	  cmpwi     r31, 0
	  bne-      .loc_0x1A4
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x8(r1)

	.loc_0x1A4:
	  lis       r3, 0x8048
	  cmpwi     r31, 0
	  subi      r12, r3, 0x6450
	  lwz       r11, 0x0(r12)
	  lwz       r10, 0x4(r12)
	  lwz       r9, 0x8(r12)
	  lwz       r8, 0xC(r12)
	  lwz       r7, 0x10(r12)
	  lwz       r6, 0x14(r12)
	  lwz       r5, 0x18(r12)
	  lwz       r4, 0x1C(r12)
	  lwz       r3, 0x20(r12)
	  lwz       r0, 0x24(r12)
	  stw       r11, 0x48(r1)
	  stw       r10, 0x4C(r1)
	  stw       r9, 0x50(r1)
	  stw       r8, 0x54(r1)
	  stw       r7, 0x58(r1)
	  stw       r6, 0x5C(r1)
	  stw       r5, 0x60(r1)
	  stw       r4, 0x64(r1)
	  stw       r3, 0x68(r1)
	  stw       r0, 0x6C(r1)
	  beq-      .loc_0x21C
	  lis       r3, 0x7C9F
	  lis       r0, 0x9083
	  subi      r3, r3, 0x55A
	  stw       r0, 0x4C(r1)
	  stw       r3, 0x48(r1)
	  b         .loc_0x230

	.loc_0x21C:
	  lis       r3, 0x7C9F
	  lis       r4, 0x8083
	  subi      r0, r3, 0x45A
	  stw       r4, 0x48(r1)
	  stw       r0, 0x4C(r1)

	.loc_0x230:
	  lis       r4, 0x4E80
	  mr        r3, r24
	  addi      r0, r4, 0x20
	  li        r4, 0x28
	  stw       r0, 0x6C(r1)
	  bl        -0x1484
	  lis       r3, 0x804F
	  addi      r12, r1, 0x48
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  cmpwi     r31, 0
	  beq-      .loc_0x284
	  lwz       r3, 0x8(r1)
	  li        r4, 0
	  li        r0, -0x1
	  and       r3, r3, r0
	  and       r0, r4, r4
	  stw       r3, 0xC(r1)
	  stw       r0, 0x8(r1)

	.loc_0x284:
	  lwz       r5, 0x8(r1)
	  mr        r3, r29
	  lwz       r6, 0xC(r1)
	  bl        -0x3628
	  b         .loc_0x494

	.loc_0x298:
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  bl        -0x3884
	  lis       r3, 0x8048
	  cmplwi    r21, 0x20
	  subi      r12, r3, 0x6400
	  li        r20, 0
	  lwz       r11, 0x0(r12)
	  lwz       r10, 0x4(r12)
	  lwz       r9, 0x8(r12)
	  lwz       r8, 0xC(r12)
	  lwz       r7, 0x10(r12)
	  lwz       r6, 0x14(r12)
	  lwz       r5, 0x18(r12)
	  lwz       r4, 0x1C(r12)
	  lwz       r3, 0x20(r12)
	  lwz       r0, 0x24(r12)
	  stw       r11, 0x70(r1)
	  stw       r10, 0x74(r1)
	  stw       r9, 0x78(r1)
	  stw       r8, 0x7C(r1)
	  stw       r7, 0x80(r1)
	  stw       r6, 0x84(r1)
	  stw       r5, 0x88(r1)
	  stw       r4, 0x8C(r1)
	  stw       r3, 0x90(r1)
	  stw       r0, 0x94(r1)
	  bge-      .loc_0x354
	  cmpwi     r31, 0
	  oris      r0, r26, 0xC803
	  beq-      .loc_0x318
	  oris      r0, r26, 0xD803

	.loc_0x318:
	  lis       r3, 0x4E80
	  stw       r0, 0x70(r1)
	  addi      r0, r3, 0x20
	  mr        r3, r23
	  stw       r0, 0x94(r1)
	  li        r4, 0x28
	  bl        -0x1570
	  lis       r3, 0x804F
	  addi      r12, r1, 0x70
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  li        r20, 0
	  b         .loc_0x490

	.loc_0x354:
	  bne-      .loc_0x398
	  cmpwi     r31, 0
	  beq-      .loc_0x36C
	  addi      r3, r1, 0x8
	  bl        -0x1120
	  b         .loc_0x374

	.loc_0x36C:
	  addi      r3, r1, 0x8
	  bl        -0x1108

	.loc_0x374:
	  lwz       r4, 0x8(r1)
	  li        r0, 0
	  lwz       r5, 0xC(r1)
	  li        r3, -0x1
	  and       r0, r4, r0
	  and       r3, r5, r3
	  stw       r0, 0x8(r1)
	  stw       r3, 0xC(r1)
	  b         .loc_0x490

	.loc_0x398:
	  cmplwi    r21, 0x21
	  bne-      .loc_0x490
	  cmpwi     r31, 0
	  bne-      .loc_0x3B0
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x8(r1)

	.loc_0x3B0:
	  lis       r3, 0x8048
	  cmpwi     r31, 0
	  subi      r12, r3, 0x6450
	  lwz       r11, 0x0(r12)
	  lwz       r10, 0x4(r12)
	  lwz       r9, 0x8(r12)
	  lwz       r8, 0xC(r12)
	  lwz       r7, 0x10(r12)
	  lwz       r6, 0x14(r12)
	  lwz       r5, 0x18(r12)
	  lwz       r4, 0x1C(r12)
	  lwz       r3, 0x20(r12)
	  lwz       r0, 0x24(r12)
	  stw       r11, 0x20(r1)
	  stw       r10, 0x24(r1)
	  stw       r9, 0x28(r1)
	  stw       r8, 0x2C(r1)
	  stw       r7, 0x30(r1)
	  stw       r6, 0x34(r1)
	  stw       r5, 0x38(r1)
	  stw       r4, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  stw       r0, 0x44(r1)
	  beq-      .loc_0x428
	  lis       r3, 0x7C9F
	  lis       r0, 0x9083
	  subi      r3, r3, 0x55A
	  stw       r0, 0x24(r1)
	  stw       r3, 0x20(r1)
	  b         .loc_0x43C

	.loc_0x428:
	  lis       r3, 0x7C9F
	  lis       r4, 0x8083
	  subi      r0, r3, 0x45A
	  stw       r4, 0x20(r1)
	  stw       r0, 0x24(r1)

	.loc_0x43C:
	  lis       r4, 0x4E80
	  mr        r3, r22
	  addi      r0, r4, 0x20
	  li        r4, 0x28
	  stw       r0, 0x44(r1)
	  bl        -0x1690
	  lis       r3, 0x804F
	  addi      r12, r1, 0x20
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  cmpwi     r31, 0
	  li        r20, 0
	  beq-      .loc_0x490
	  lwz       r4, 0x8(r1)
	  li        r3, -0x1
	  and       r0, r20, r20
	  and       r3, r4, r3
	  stw       r0, 0x8(r1)
	  stw       r3, 0xC(r1)

	.loc_0x490:
	  mr        r3, r20

	.loc_0x494:
	  lwz       r4, 0x0(r30)
	  addis     r26, r26, 0x20
	  addi      r21, r21, 0x1
	  addi      r0, r4, 0x8
	  stw       r0, 0x0(r30)

	.loc_0x4A8:
	  cmplw     r21, r28
	  bgt-      .loc_0x4B8
	  cmpwi     r3, 0
	  beq+      .loc_0x98

	.loc_0x4B8:
	  lbz       r0, 0xD(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x4D0
	  li        r0, 0
	  li        r3, 0x702
	  stw       r0, 0x0(r30)

	.loc_0x4D0:
	  lis       r4, 0x804A
	  lwz       r6, 0x10(r1)
	  addi      r7, r4, 0x68BC
	  lwz       r5, 0x14(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  stw       r6, 0x0(r7)
	  stw       r5, 0x4(r7)
	  stw       r4, 0x8(r7)
	  stw       r0, 0xC(r7)

	.loc_0x4F8:
	  lmw       r20, 0xC0(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BF504
 * Size:	0000F4
 */
void TRKTargetAccessDefault(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0x24
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  ble-      .loc_0x28
	  li        r3, 0x701
	  b         .loc_0xDC

	.loc_0x28:
	  lis       r6, 0x804A
	  sub       r4, r4, r3
	  addi      r30, r6, 0x68BC
	  lis       r6, 0x804F
	  lwz       r9, 0xC(r30)
	  li        r8, 0
	  addi      r12, r4, 0x1
	  lwz       r11, 0x0(r30)
	  lwz       r10, 0x4(r30)
	  cmpwi     r7, 0
	  lwz       r7, 0x8(r30)
	  rlwinm    r0,r12,2,0,29
	  stb       r8, 0xD(r30)
	  rlwinm    r4,r3,2,0,29
	  addi      r3, r6, 0x4328
	  stw       r11, 0x8(r1)
	  add       r4, r3, r4
	  stw       r10, 0xC(r1)
	  stw       r7, 0x10(r1)
	  stw       r9, 0x14(r1)
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x90
	  mr        r3, r5
	  mr        r5, r12
	  bl        -0x3A90
	  b         .loc_0x9C

	.loc_0x90:
	  mr        r3, r5
	  mr        r5, r12
	  bl        -0x3D10

	.loc_0x9C:
	  lbz       r0, 0xD(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  li        r0, 0
	  li        r3, 0x702
	  stw       r0, 0x0(r31)

	.loc_0xB4:
	  lis       r4, 0x804A
	  lwz       r6, 0x8(r1)
	  addi      r7, r4, 0x68BC
	  lwz       r5, 0xC(r1)
	  lwz       r4, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stw       r6, 0x0(r7)
	  stw       r5, 0x4(r7)
	  stw       r4, 0x8(r7)
	  stw       r0, 0xC(r7)

	.loc_0xDC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BF5F8
 * Size:	00004C
 */
void TRKTargetReadInstruction(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  li        r7, 0x1
	  stw       r0, 0x14(r1)
	  li        r0, 0x4
	  addi      r5, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        .loc_0x4C
	  cmpwi     r3, 0
	  bne-      .loc_0x3C
	  lwz       r0, 0x8(r1)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x3C
	  li        r3, 0x700

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x4C:
	*/
}

/*
 * --INFO--
 * Address:	800BF644
 * Size:	00014C
 */
void TRKTargetAccessMemory(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r6, 0x804A
	  stw       r0, 0x44(r1)
	  li        r0, 0
	  stmw      r25, 0x24(r1)
	  addi      r31, r6, 0x68BC
	  mr        r27, r4
	  mr        r28, r5
	  mr        r26, r3
	  mr        r29, r7
	  mr        r3, r27
	  lwz       r4, 0xC(r31)
	  lwz       r8, 0x0(r31)
	  lwz       r6, 0x4(r31)
	  lwz       r5, 0x8(r31)
	  stw       r8, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r4, 0x14(r1)
	  stb       r0, 0xD(r31)
	  bl        0xCFC
	  cntlzw    r0, r29
	  lwz       r4, 0x0(r28)
	  mr        r25, r3
	  rlwinm    r5,r0,27,5,31
	  bl        .loc_0x14C
	  mr.       r30, r3
	  beq-      .loc_0x80
	  li        r0, 0
	  stw       r0, 0x0(r28)
	  b         .loc_0xF4

	.loc_0x80:
	  bl        -0x181C
	  lis       r4, 0x804F
	  cmpwi     r29, 0
	  addi      r4, r4, 0x4328
	  mr        r8, r3
	  lwz       r0, 0x1F8(r4)
	  rlwinm    r0,r0,0,27,27
	  or        r7, r8, r0
	  beq-      .loc_0xBC
	  lwz       r5, 0x0(r28)
	  mr        r3, r26
	  mr        r4, r25
	  mr        r6, r8
	  bl        -0x1840
	  b         .loc_0xF4

	.loc_0xBC:
	  lwz       r5, 0x0(r28)
	  mr        r3, r25
	  mr        r4, r26
	  mr        r6, r7
	  mr        r7, r8
	  bl        -0x185C
	  lwz       r4, 0x0(r28)
	  mr        r3, r25
	  bl        -0x1968
	  cmplw     r27, r25
	  beq-      .loc_0xF4
	  lwz       r4, 0x0(r28)
	  mr        r3, r27
	  bl        -0x197C

	.loc_0xF4:
	  lbz       r0, 0xD(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x10C
	  li        r0, 0
	  li        r30, 0x702
	  stw       r0, 0x0(r28)

	.loc_0x10C:
	  lis       r3, 0x804A
	  lwz       r6, 0x8(r1)
	  addi      r7, r3, 0x68BC
	  lwz       r5, 0xC(r1)
	  lwz       r4, 0x10(r1)
	  mr        r3, r30
	  lwz       r0, 0x14(r1)
	  stw       r6, 0x0(r7)
	  stw       r5, 0x4(r7)
	  stw       r4, 0x8(r7)
	  stw       r0, 0xC(r7)
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x14C:
	*/
}

/*
 * --INFO--
 * Address:	800BF790
 * Size:	0002A4
 */
void TRKValidMemory32(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  add       r27, r4, r3
	  subi      r27, r27, 0x1
	  mr        r26, r5
	  cmplw     r27, r3
	  li        r5, 0x700
	  bge-      .loc_0x30
	  li        r3, 0x700
	  b         .loc_0x290

	.loc_0x30:
	  lis       r4, 0x8048
	  li        r6, 0
	  subi      r31, r4, 0x6460
	  lwz       r0, 0x4(r31)
	  cmplw     r3, r0
	  bgt-      .loc_0x28C
	  lwz       r0, 0x0(r31)
	  cmplw     r27, r0
	  blt-      .loc_0x28C
	  cmpwi     r26, 0
	  bne-      .loc_0x70
	  rlwinm    r0,r6,4,0,27
	  add       r4, r31, r0
	  lwz       r0, 0x8(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x94

	.loc_0x70:
	  cmpwi     r26, 0x1
	  bne-      .loc_0x9C
	  lis       r4, 0x8048
	  rlwinm    r0,r6,4,0,27
	  subi      r4, r4, 0x6460
	  add       r4, r4, r0
	  lwz       r0, 0xC(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x9C

	.loc_0x94:
	  li        r5, 0x700
	  b         .loc_0x28C

	.loc_0x9C:
	  lis       r4, 0x8048
	  rlwinm    r29,r6,4,0,27
	  subi      r4, r4, 0x6460
	  li        r5, 0
	  lwzx      r0, r4, r29
	  cmplw     r3, r0
	  bge-      .loc_0x198
	  sub       r0, r0, r3
	  li        r6, 0x700
	  add       r30, r0, r3
	  subi      r30, r30, 0x1
	  cmplw     r30, r3
	  bge-      .loc_0xD4
	  b         .loc_0x194

	.loc_0xD4:
	  lwz       r0, 0x4(r31)
	  li        r5, 0
	  cmplw     r3, r0
	  bgt-      .loc_0x194
	  lwz       r0, 0x0(r31)
	  cmplw     r30, r0
	  blt-      .loc_0x194
	  cmpwi     r26, 0
	  bne-      .loc_0x10C
	  rlwinm    r0,r5,4,0,27
	  add       r4, r4, r0
	  lwz       r0, 0x8(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x130

	.loc_0x10C:
	  cmpwi     r26, 0x1
	  bne-      .loc_0x138
	  lis       r4, 0x8048
	  rlwinm    r0,r5,4,0,27
	  subi      r4, r4, 0x6460
	  add       r4, r4, r0
	  lwz       r0, 0xC(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x138

	.loc_0x130:
	  li        r6, 0x700
	  b         .loc_0x194

	.loc_0x138:
	  lis       r4, 0x8048
	  rlwinm    r28,r5,4,0,27
	  subi      r4, r4, 0x6460
	  li        r6, 0
	  lwzx      r0, r4, r28
	  cmplw     r3, r0
	  bge-      .loc_0x164
	  mr        r5, r26
	  sub       r4, r0, r3
	  bl        .loc_0x0
	  mr        r6, r3

	.loc_0x164:
	  cmpwi     r6, 0
	  bne-      .loc_0x194
	  lis       r3, 0x8048
	  subi      r0, r3, 0x6460
	  add       r3, r0, r28
	  lwz       r3, 0x4(r3)
	  cmplw     r30, r3
	  ble-      .loc_0x194
	  mr        r5, r26
	  sub       r4, r30, r3
	  bl        .loc_0x0
	  mr        r6, r3

	.loc_0x194:
	  mr        r5, r6

	.loc_0x198:
	  cmpwi     r5, 0
	  bne-      .loc_0x28C
	  lis       r3, 0x8048
	  subi      r4, r3, 0x6460
	  addi      r28, r4, 0x4
	  lwzx      r3, r28, r29
	  cmplw     r27, r3
	  ble-      .loc_0x28C
	  sub       r0, r27, r3
	  li        r6, 0x700
	  add       r30, r0, r3
	  subi      r30, r30, 0x1
	  cmplw     r30, r3
	  bge-      .loc_0x1D4
	  b         .loc_0x288

	.loc_0x1D4:
	  lwz       r0, 0x4(r31)
	  li        r5, 0
	  cmplw     r3, r0
	  bgt-      .loc_0x288
	  lwz       r0, 0x0(r31)
	  cmplw     r30, r0
	  blt-      .loc_0x288
	  cmpwi     r26, 0
	  bne-      .loc_0x20C
	  rlwinm    r0,r5,4,0,27
	  add       r4, r4, r0
	  lwz       r0, 0x8(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x230

	.loc_0x20C:
	  cmpwi     r26, 0x1
	  bne-      .loc_0x238
	  lis       r4, 0x8048
	  rlwinm    r0,r5,4,0,27
	  subi      r4, r4, 0x6460
	  add       r4, r4, r0
	  lwz       r0, 0xC(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x238

	.loc_0x230:
	  li        r6, 0x700
	  b         .loc_0x288

	.loc_0x238:
	  lis       r4, 0x8048
	  rlwinm    r27,r5,4,0,27
	  subi      r4, r4, 0x6460
	  li        r6, 0
	  lwzx      r0, r4, r27
	  cmplw     r3, r0
	  bge-      .loc_0x264
	  mr        r5, r26
	  sub       r4, r0, r3
	  bl        .loc_0x0
	  mr        r6, r3

	.loc_0x264:
	  cmpwi     r6, 0
	  bne-      .loc_0x288
	  lwzx      r3, r28, r27
	  cmplw     r30, r3
	  ble-      .loc_0x288
	  mr        r5, r26
	  sub       r4, r30, r3
	  bl        .loc_0x0
	  mr        r6, r3

	.loc_0x288:
	  mr        r5, r6

	.loc_0x28C:
	  mr        r3, r5

	.loc_0x290:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
