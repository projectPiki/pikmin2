

/*
 * --INFO--
 * Address:	800BFDD0
 * Size:	000098
 */
void InitMetroTRK(void)
{
	/*
	.loc_0x0:
	  subi      r1, r1, 0x4
	  stw       r3, 0x0(r1)
	  lis       r3, 0x804F
	  ori       r3, r3, 0x4328
	  stmw      r0, 0x0(r3)
	  lwz       r4, 0x0(r1)
	  addi      r1, r1, 0x4
	  stw       r1, 0x4(r3)
	  stw       r4, 0xC(r3)
	  mflr      r4
	  stw       r4, 0x84(r3)
	  stw       r4, 0x80(r3)
	  mfcr      r4
	  stw       r4, 0x88(r3)
	  mfmsr     r4
	  ori       r3, r4, 0x8000
	  xori      r3, r3, 0x8000
	  mtmsr     r3
	  mtsrr1    r4
	  bl        -0x3BC
	  lis       r3, 0x804F
	  ori       r3, r3, 0x4328
	  lmw       r0, 0x0(r3)
	  li        r0, 0
	  mtspr     1010, r0
	  mtdabr    r0
	  lis       r1, 0x8053
	  ori       r1, r1, 0x2ED8
	  mr        r3, r5
	  bl        0x8D4
	  cmpwi     r3, 0x1
	  bne-      .loc_0x90
	  lwz       r4, 0x84(r3)
	  mtlr      r4
	  lmw       r0, 0x0(r3)
	  blr

	.loc_0x90:
	  b         0x5AC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BFE68
 * Size:	000094
 */
void InitMetroTRK_BBA(void)
{
	/*
	.loc_0x0:
	  subi      r1, r1, 0x4
	  stw       r3, 0x0(r1)
	  lis       r3, 0x804F
	  ori       r3, r3, 0x4328
	  stmw      r0, 0x0(r3)
	  lwz       r4, 0x0(r1)
	  addi      r1, r1, 0x4
	  stw       r1, 0x4(r3)
	  stw       r4, 0xC(r3)
	  mflr      r4
	  stw       r4, 0x84(r3)
	  stw       r4, 0x80(r3)
	  mfcr      r4
	  stw       r4, 0x88(r3)
	  mfmsr     r4
	  ori       r3, r4, 0x8000
	  mtmsr     r3
	  mtsrr1    r4
	  bl        -0x450
	  lis       r3, 0x804F
	  ori       r3, r3, 0x4328
	  lmw       r0, 0x0(r3)
	  li        r0, 0
	  mtspr     1010, r0
	  mtdabr    r0
	  lis       r1, 0x8053
	  ori       r1, r1, 0x2ED8
	  li        r3, 0x2
	  bl        0x840
	  cmpwi     r3, 0x1
	  bne-      .loc_0x8C
	  lwz       r4, 0x84(r3)
	  mtlr      r4
	  lmw       r0, 0x0(r3)
	  blr

	.loc_0x8C:
	  b         0x518
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BFEFC
 * Size:	0001EC
 */
void TRK__write_aram(void)
{
	/*
	.loc_0x0:
	  rlwinm    r11,r1,0,27,31
	  mr        r12, r1
	  subfic    r11, r11, -0x80
	  stwux     r1, r1, r11
	  mflr      r0
	  stw       r0, 0x4(r12)
	  stmw      r23, -0x24(r12)
	  mr        r31, r4
	  cmplwi    r31, 0x4000
	  mr        r30, r3
	  mr        r23, r5
	  blt-      .loc_0x1D4
	  lwz       r4, 0x0(r23)
	  lis       r0, 0x800
	  add       r3, r31, r4
	  cmplw     r3, r0
	  ble-      .loc_0x48
	  b         .loc_0x1D4

	.loc_0x48:
	  rlwinm    r0,r31,0,27,31
	  rlwinm    r27,r31,0,0,26
	  add       r26, r4, r0
	  li        r24, 0
	  addi      r0, r26, 0x1F
	  rlwinm    r26,r0,0,0,26
	  cmplwi    r26, 0
	  addi      r3, r26, 0x1F
	  rlwinm    r3,r3,27,5,31
	  ble-      .loc_0xD8
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0xC8

	.loc_0x7C:
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  bdnz+     .loc_0x7C
	  andi.     r3, r3, 0x7
	  beq-      .loc_0xD8

	.loc_0xC8:
	  mtctr     r3

	.loc_0xCC:
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  bdnz+     .loc_0xCC

	.loc_0xD8:
	  bl        0x126E4
	  cmplwi    r3, 0
	  bne+      .loc_0xD8
	  bl        0x129D8
	  rlwinm.   r24,r31,0,27,31
	  mr        r29, r3
	  lis       r25, 0x800
	  beq-      .loc_0x13C
	  addi      r28, r1, 0x20
	  mr        r25, r27
	  dcbi      r0, r28
	  bl        0x12998
	  mr        r4, r28
	  mr        r5, r27
	  li        r3, 0x1
	  li        r6, 0x20
	  bl        0x126E0

	.loc_0x11C:
	  bl        0x129A0
	  rlwinm.   r0,r3,0,16,31
	  beq+      .loc_0x11C
	  mr        r3, r30
	  mr        r5, r24
	  addi      r4, r1, 0x20
	  bl        -0xBCF00
	  dcbf      r0, r30

	.loc_0x13C:
	  lwz       r0, 0x0(r23)
	  add       r31, r31, r0
	  rlwinm.   r24,r31,0,27,31
	  beq-      .loc_0x1A0
	  rlwinm    r23,r31,0,0,26
	  cmplw     r23, r25
	  beq-      .loc_0x184
	  addi      r28, r1, 0x20
	  dcbi      r0, r28
	  bl        0x1293C
	  mr        r4, r28
	  mr        r5, r23
	  li        r3, 0x1
	  li        r6, 0x20
	  bl        0x12684

	.loc_0x178:
	  bl        0x12944
	  rlwinm.   r0,r3,0,16,31
	  beq+      .loc_0x178

	.loc_0x184:
	  add       r25, r30, r31
	  addi      r4, r1, 0x20
	  mr        r3, r25
	  subfic    r5, r24, 0x20
	  add       r4, r4, r24
	  bl        -0xBCF64
	  dcbf      r0, r25

	.loc_0x1A0:
	  sync
	  bl        0x128F8
	  mr        r4, r30
	  mr        r5, r27
	  mr        r6, r26
	  li        r3, 0
	  bl        0x12640
	  rlwinm.   r0,r29,0,16,31
	  bne-      .loc_0x1D4

	.loc_0x1C4:
	  bl        0x128F8
	  rlwinm.   r0,r3,0,16,31
	  beq+      .loc_0x1C4
	  bl        0x128CC

	.loc_0x1D4:
	  lwz       r10, 0x0(r1)
	  lmw       r23, -0x24(r10)
	  lwz       r0, 0x4(r10)
	  mtlr      r0
	  mr        r1, r10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void __read_aram_1block(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C00E8
 * Size:	000134
 */
void TRK__read_aram(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0x4000
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  blt-      .loc_0x114
	  lwz       r5, 0x0(r5)
	  lis       r0, 0x800
	  add       r3, r4, r5
	  cmplw     r3, r0
	  ble-      .loc_0x40
	  b         .loc_0x114

	.loc_0x40:
	  rlwinm    r0,r4,0,27,31
	  rlwinm    r30,r4,0,0,26
	  add       r29, r5, r0
	  li        r4, 0
	  addi      r0, r29, 0x1F
	  rlwinm    r29,r0,0,0,26
	  cmplwi    r29, 0
	  addi      r3, r29, 0x1F
	  rlwinm    r3,r3,27,5,31
	  ble-      .loc_0xD0
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0xC0

	.loc_0x74:
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  bdnz+     .loc_0x74
	  andi.     r3, r3, 0x7
	  beq-      .loc_0xD0

	.loc_0xC0:
	  mtctr     r3

	.loc_0xC4:
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  bdnz+     .loc_0xC4

	.loc_0xD0:
	  bl        0x12500
	  cmplwi    r3, 0
	  bne+      .loc_0xD0
	  bl        0x127F4
	  mr        r31, r3
	  bl        0x127CC
	  mr        r4, r28
	  mr        r5, r30
	  mr        r6, r29
	  li        r3, 0x1
	  bl        0x12514

	.loc_0xFC:
	  bl        0x127D4
	  rlwinm.   r0,r3,0,16,31
	  beq+      .loc_0xFC
	  rlwinm.   r0,r31,0,16,31
	  bne-      .loc_0x114
	  bl        0x127A0

	.loc_0x114:
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
 * Address:	800C021C
 * Size:	00004C
 */
void TRKInitializeTarget(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  addi      r3, r3, 0x4284
	  stw       r0, 0x98(r3)
	  bl        -0x2390
	  lis       r5, 0x804F
	  lis       r4, 0x804F
	  addi      r5, r5, 0x4284
	  lis       r0, 0xE000
	  stw       r3, 0x8C(r5)
	  li        r3, 0
	  stw       r0, 0x4800(r4)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0268
 * Size:	00012C
 */
void __TRK_copy_vectors(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x24(r1)
	  addi      r3, r3, 0x4800
	  stmw      r27, 0xC(r1)
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0x44
	  bgt-      .loc_0x4C
	  addi      r0, r3, 0x4000
	  cmplwi    r0, 0x44
	  ble-      .loc_0x4C
	  lis       r3, 0x804F
	  addi      r3, r3, 0x4328
	  lwz       r0, 0x238(r3)
	  rlwinm.   r0,r0,0,30,31
	  beq-      .loc_0x4C
	  li        r5, 0x44
	  b         .loc_0x54

	.loc_0x4C:
	  lis       r3, 0x8000
	  addi      r5, r3, 0x44

	.loc_0x54:
	  lis       r4, 0x804A
	  lis       r3, 0x804F
	  lwz       r29, 0x0(r5)
	  addi      r31, r4, 0x68E0
	  addi      r28, r3, 0x4328
	  li        r30, 0

	.loc_0x6C:
	  li        r0, 0x1
	  slw       r0, r0, r30
	  and.      r0, r29, r0
	  beq-      .loc_0x108
	  cmpwi     r30, 0x4
	  beq-      .loc_0x108
	  lis       r3, 0x804F
	  lwz       r6, 0x0(r31)
	  addi      r3, r3, 0x4800
	  lwz       r3, 0x0(r3)
	  cmplw     r6, r3
	  blt-      .loc_0xBC
	  addi      r0, r3, 0x4000
	  cmplw     r6, r0
	  bge-      .loc_0xBC
	  lwz       r0, 0x238(r28)
	  rlwinm.   r0,r0,0,30,31
	  beq-      .loc_0xBC
	  mr        r27, r6
	  b         .loc_0xE4

	.loc_0xBC:
	  lis       r0, 0x7E00
	  cmplw     r6, r0
	  blt-      .loc_0xDC
	  lis       r0, 0x8000
	  cmplw     r6, r0
	  bgt-      .loc_0xDC
	  mr        r27, r6
	  b         .loc_0xE4

	.loc_0xDC:
	  rlwinm    r0,r6,0,2,31
	  oris      r27, r0, 0x8000

	.loc_0xE4:
	  lis       r4, 0x8000
	  mr        r3, r27
	  addi      r0, r4, 0x3154
	  li        r5, 0x100
	  add       r4, r0, r6
	  bl        -0xBD230
	  mr        r3, r27
	  li        r4, 0x100
	  bl        -0x25B4

	.loc_0x108:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0xE
	  ble+      .loc_0x6C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void TRK_copy_vector(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C0394
 * Size:	000058
 */
void TRKTargetTranslate(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804F
	  addi      r4, r4, 0x4800
	  lwz       r4, 0x0(r4)
	  cmplw     r3, r4
	  blt-      .loc_0x34
	  addi      r0, r4, 0x4000
	  cmplw     r3, r0
	  bge-      .loc_0x34
	  lis       r4, 0x804F
	  addi      r4, r4, 0x4328
	  lwz       r0, 0x238(r4)
	  rlwinm.   r0,r0,0,30,31
	  bnelr-

	.loc_0x34:
	  lis       r0, 0x7E00
	  cmplw     r3, r0
	  blt-      .loc_0x4C
	  lis       r0, 0x8000
	  cmplw     r3, r0
	  blelr-

	.loc_0x4C:
	  rlwinm    r0,r3,0,2,31
	  oris      r3, r0, 0x8000
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C03EC
 * Size:	000020
 */
void EnableMetroTRKInterrupts(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x288
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
