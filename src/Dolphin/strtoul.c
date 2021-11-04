

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void atol(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void atoi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void strtoll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800CB938
 * Size:	0000F0
 */
void strtol(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  li        r7, 0
	  lis       r6, 0x8000
	  stw       r0, 0x34(r1)
	  addi      r8, r1, 0xC
	  addi      r9, r1, 0x8
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  subi      r4, r6, 0x1
	  addi      r6, r1, 0x14
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lis       r3, 0x800D
	  subi      r0, r3, 0x697C
	  stw       r7, 0x18(r1)
	  mr        r3, r5
	  addi      r7, r1, 0x10
	  stw       r30, 0x14(r1)
	  mr        r5, r0
	  bl        0x558
	  cmplwi    r31, 0
	  beq-      .loc_0x68
	  lwz       r0, 0x10(r1)
	  add       r0, r30, r0
	  stw       r0, 0x0(r31)

	.loc_0x68:
	  lwz       r0, 0x8(r1)
	  cmpwi     r0, 0
	  bne-      .loc_0xA4
	  lwz       r5, 0xC(r1)
	  cmpwi     r5, 0
	  bne-      .loc_0x90
	  lis       r4, 0x8000
	  subi      r0, r4, 0x1
	  cmplw     r3, r0
	  bgt-      .loc_0xA4

	.loc_0x90:
	  cmpwi     r5, 0
	  beq-      .loc_0xCC
	  lis       r0, 0x8000
	  cmplw     r3, r0
	  ble-      .loc_0xCC

	.loc_0xA4:
	  lwz       r5, 0xC(r1)
	  lis       r3, 0x8000
	  li        r0, 0x22
	  neg       r4, r5
	  subi      r3, r3, 0x1
	  or        r4, r4, r5
	  stw       r0, -0x7340(r13)
	  rlwinm    r0,r4,1,31,31
	  add       r3, r0, r3
	  b         .loc_0xD8

	.loc_0xCC:
	  cmpwi     r5, 0
	  beq-      .loc_0xD8
	  neg       r3, r3

	.loc_0xD8:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void strtoull(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800CBA28
 * Size:	0000AC
 */
void strtoul(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  li        r7, 0
	  lis       r6, 0x8000
	  stw       r0, 0x34(r1)
	  addi      r8, r1, 0xC
	  addi      r9, r1, 0x8
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  subi      r4, r6, 0x1
	  addi      r6, r1, 0x14
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lis       r3, 0x800D
	  subi      r0, r3, 0x697C
	  stw       r7, 0x18(r1)
	  mr        r3, r5
	  addi      r7, r1, 0x10
	  stw       r30, 0x14(r1)
	  mr        r5, r0
	  bl        0x468
	  cmplwi    r31, 0
	  beq-      .loc_0x68
	  lwz       r0, 0x10(r1)
	  add       r0, r30, r0
	  stw       r0, 0x0(r31)

	.loc_0x68:
	  lwz       r0, 0x8(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x84
	  li        r0, 0x22
	  li        r3, -0x1
	  stw       r0, -0x7340(r13)
	  b         .loc_0x94

	.loc_0x84:
	  lwz       r0, 0xC(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x94
	  neg       r3, r3

	.loc_0x94:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800CBAD4
 * Size:	00040C
 */
void __strtoull(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  li        r0, 0
	  stmw      r16, 0x10(r1)
	  mr.       r31, r3
	  mr        r22, r9
	  mr        r17, r8
	  mr        r18, r4
	  mr        r28, r5
	  mr        r27, r6
	  mr        r16, r7
	  li        r30, 0x1
	  li        r29, 0
	  li        r19, 0
	  li        r26, 0
	  li        r23, 0
	  li        r24, 0
	  li        r25, 0
	  stw       r0, 0x0(r9)
	  stw       r0, 0x0(r8)
	  blt-      .loc_0x70
	  cmpwi     r31, 0x1
	  beq-      .loc_0x70
	  cmpwi     r31, 0x24
	  bgt-      .loc_0x70
	  cmpwi     r18, 0x1
	  bge-      .loc_0x78

	.loc_0x70:
	  li        r30, 0x40
	  b         .loc_0x98

	.loc_0x78:
	  mr        r12, r28
	  mr        r3, r27
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  li        r29, 0x1
	  bctrl
	  mr        r20, r3

	.loc_0x98:
	  cmpwi     r31, 0
	  beq-      .loc_0x398
	  srawi     r5, r31, 0x1F
	  mr        r6, r31
	  li        r3, -0x1
	  li        r4, -0x1
	  bl        -0x9EAC
	  mr        r24, r4
	  mr        r25, r3
	  b         .loc_0x398

	.loc_0xC0:
	  cmplwi    r30, 0x10
	  bgt-      .loc_0x398
	  lis       r3, 0x804A
	  rlwinm    r0,r30,2,0,29
	  addi      r3, r3, 0x7228
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lis       r3, 0x804A
	  rlwinm    r0,r20,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,29,30
	  beq-      .loc_0x11C
	  mr        r12, r28
	  mr        r3, r27
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  bctrl
	  mr        r20, r3
	  addi      r19, r19, 0x1
	  b         .loc_0x398

	.loc_0x11C:
	  cmpwi     r20, 0x2B
	  bne-      .loc_0x148
	  mr        r12, r28
	  mr        r3, r27
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r29, r29, 0x1
	  bctrl
	  mr        r20, r3
	  b         .loc_0x178

	.loc_0x148:
	  cmpwi     r20, 0x2D
	  bne-      .loc_0x178
	  mr        r12, r28
	  mr        r3, r27
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r29, r29, 0x1
	  bctrl
	  li        r0, 0x1
	  mr        r20, r3
	  stw       r0, 0x0(r17)

	.loc_0x178:
	  li        r30, 0x2
	  b         .loc_0x398
	  cmpwi     r31, 0
	  beq-      .loc_0x190
	  cmpwi     r31, 0x10
	  bne-      .loc_0x1C0

	.loc_0x190:
	  cmpwi     r20, 0x30
	  bne-      .loc_0x1C0
	  mr        r12, r28
	  mr        r3, r27
	  li        r30, 0x4
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r29, r29, 0x1
	  bctrl
	  mr        r20, r3
	  b         .loc_0x398

	.loc_0x1C0:
	  li        r30, 0x8
	  b         .loc_0x398
	  cmpwi     r20, 0x58
	  beq-      .loc_0x1D8
	  cmpwi     r20, 0x78
	  bne-      .loc_0x204

	.loc_0x1D8:
	  mr        r12, r28
	  mr        r3, r27
	  li        r31, 0x10
	  li        r30, 0x8
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r29, r29, 0x1
	  bctrl
	  mr        r20, r3
	  b         .loc_0x398

	.loc_0x204:
	  cmpwi     r31, 0
	  bne-      .loc_0x210
	  li        r31, 0x8

	.loc_0x210:
	  li        r30, 0x10
	  b         .loc_0x398
	  cmpwi     r31, 0
	  bne-      .loc_0x224
	  li        r31, 0xA

	.loc_0x224:
	  li        r3, 0
	  srawi     r0, r3, 0x1F
	  xor       r3, r24, r3
	  xor       r0, r25, r0
	  or.       r0, r3, r0
	  bne-      .loc_0x258
	  srawi     r5, r31, 0x1F
	  mr        r6, r31
	  li        r3, -0x1
	  li        r4, -0x1
	  bl        -0xA048
	  mr        r24, r4
	  mr        r25, r3

	.loc_0x258:
	  lis       r3, 0x804A
	  rlwinm    r4,r20,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r3, r3, r4
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x298
	  subi      r20, r20, 0x30
	  cmpw      r20, r31
	  blt-      .loc_0x300
	  cmpwi     r30, 0x10
	  li        r0, 0x40
	  bne-      .loc_0x28C
	  li        r0, 0x20

	.loc_0x28C:
	  mr        r30, r0
	  addi      r20, r20, 0x30
	  b         .loc_0x398

	.loc_0x298:
	  rlwinm.   r0,r3,0,24,25
	  beq-      .loc_0x2C8
	  cmpwi     r20, -0x1
	  bne-      .loc_0x2B0
	  li        r3, -0x1
	  b         .loc_0x2BC

	.loc_0x2B0:
	  lis       r3, 0x804A
	  addi      r3, r3, 0x6DF0
	  lbzx      r3, r3, r4

	.loc_0x2BC:
	  subi      r0, r3, 0x37
	  cmpw      r0, r31
	  blt-      .loc_0x2E0

	.loc_0x2C8:
	  cmpwi     r30, 0x10
	  bne-      .loc_0x2D8
	  li        r30, 0x20
	  b         .loc_0x398

	.loc_0x2D8:
	  li        r30, 0x40
	  b         .loc_0x398

	.loc_0x2E0:
	  cmpwi     r20, -0x1
	  bne-      .loc_0x2F0
	  li        r3, -0x1
	  b         .loc_0x2FC

	.loc_0x2F0:
	  lis       r3, 0x804A
	  addi      r3, r3, 0x6DF0
	  lbzx      r3, r3, r4

	.loc_0x2FC:
	  subi      r20, r3, 0x37

	.loc_0x300:
	  subc      r0, r24, r26
	  subfe     r0, r23, r25
	  subfe     r0, r21, r21
	  neg.      r0, r0
	  beq-      .loc_0x31C
	  li        r0, 0x1
	  stw       r0, 0x0(r22)

	.loc_0x31C:
	  mulhwu    r3, r26, r31
	  srawi     r8, r31, 0x1F
	  srawi     r0, r20, 0x1F
	  li        r4, -0x1
	  mullw     r5, r23, r31
	  add       r6, r3, r5
	  mullw     r7, r26, r31
	  mullw     r5, r26, r8
	  subc      r3, r4, r7
	  add       r5, r6, r5
	  subfe     r4, r5, r4
	  subc      r3, r3, r20
	  subfe     r3, r0, r4
	  subfe     r3, r21, r21
	  neg.      r3, r3
	  beq-      .loc_0x364
	  li        r3, 0x1
	  stw       r3, 0x0(r22)

	.loc_0x364:
	  addc      r4, r7, r20
	  mr        r12, r28
	  adde      r0, r5, r0
	  mr        r3, r27
	  mr        r26, r4
	  li        r30, 0x10
	  mr        r23, r0
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r29, r29, 0x1
	  bctrl
	  mr        r20, r3

	.loc_0x398:
	  cmpw      r29, r18
	  bgt-      .loc_0x3B0
	  cmpwi     r20, -0x1
	  beq-      .loc_0x3B0
	  rlwinm.   r0,r30,0,25,26
	  beq+      .loc_0xC0

	.loc_0x3B0:
	  andi.     r0, r30, 0x34
	  bne-      .loc_0x3CC
	  li        r0, 0
	  li        r26, 0
	  stw       r0, 0x0(r16)
	  srawi     r23, r0, 0x1F
	  b         .loc_0x3D8

	.loc_0x3CC:
	  add       r3, r29, r19
	  subi      r0, r3, 0x1
	  stw       r0, 0x0(r16)

	.loc_0x3D8:
	  mr        r12, r28
	  mr        r3, r27
	  mr        r4, r20
	  li        r5, 0x1
	  mtctr     r12
	  bctrl
	  mr        r4, r26
	  mr        r3, r23
	  lmw       r16, 0x10(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800CBEE0
 * Size:	000378
 */
void __strtoul(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  li        r0, 0
	  stmw      r20, 0x10(r1)
	  mr.       r29, r3
	  mr        r24, r9
	  mr        r21, r8
	  mr        r22, r4
	  mr        r30, r5
	  mr        r28, r6
	  mr        r20, r7
	  li        r25, 0x1
	  li        r31, 0
	  li        r23, 0
	  li        r27, 0
	  li        r26, 0
	  stw       r0, 0x0(r9)
	  stw       r0, 0x0(r8)
	  blt-      .loc_0x68
	  cmpwi     r29, 0x1
	  beq-      .loc_0x68
	  cmpwi     r29, 0x24
	  bgt-      .loc_0x68
	  cmpwi     r22, 0x1
	  bge-      .loc_0x70

	.loc_0x68:
	  li        r25, 0x40
	  b         .loc_0x90

	.loc_0x70:
	  mr        r12, r30
	  mr        r3, r28
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  li        r31, 0x1
	  bctrl
	  mr        r4, r3

	.loc_0x90:
	  cmpwi     r29, 0
	  beq-      .loc_0x310
	  li        r0, -0x1
	  divwu     r26, r0, r29
	  b         .loc_0x310

	.loc_0xA4:
	  cmplwi    r25, 0x10
	  bgt-      .loc_0x310
	  lis       r3, 0x804A
	  rlwinm    r0,r25,2,0,29
	  addi      r3, r3, 0x726C
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lis       r3, 0x804A
	  rlwinm    r0,r4,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,29,30
	  beq-      .loc_0x100
	  mr        r12, r30
	  mr        r3, r28
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r23, r23, 0x1
	  b         .loc_0x310

	.loc_0x100:
	  cmpwi     r4, 0x2B
	  bne-      .loc_0x12C
	  mr        r12, r30
	  mr        r3, r28
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r31, r31, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0x15C

	.loc_0x12C:
	  cmpwi     r4, 0x2D
	  bne-      .loc_0x15C
	  mr        r12, r30
	  mr        r3, r28
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r31, r31, 0x1
	  bctrl
	  li        r0, 0x1
	  mr        r4, r3
	  stw       r0, 0x0(r21)

	.loc_0x15C:
	  li        r25, 0x2
	  b         .loc_0x310
	  cmpwi     r29, 0
	  beq-      .loc_0x174
	  cmpwi     r29, 0x10
	  bne-      .loc_0x1A4

	.loc_0x174:
	  cmpwi     r4, 0x30
	  bne-      .loc_0x1A4
	  mr        r12, r30
	  mr        r3, r28
	  li        r25, 0x4
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r31, r31, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0x310

	.loc_0x1A4:
	  li        r25, 0x8
	  b         .loc_0x310
	  cmpwi     r4, 0x58
	  beq-      .loc_0x1BC
	  cmpwi     r4, 0x78
	  bne-      .loc_0x1E8

	.loc_0x1BC:
	  mr        r12, r30
	  mr        r3, r28
	  li        r29, 0x10
	  li        r25, 0x8
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r31, r31, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0x310

	.loc_0x1E8:
	  cmpwi     r29, 0
	  bne-      .loc_0x1F4
	  li        r29, 0x8

	.loc_0x1F4:
	  li        r25, 0x10
	  b         .loc_0x310
	  cmpwi     r29, 0
	  bne-      .loc_0x208
	  li        r29, 0xA

	.loc_0x208:
	  cmplwi    r26, 0
	  bne-      .loc_0x218
	  li        r0, -0x1
	  divwu     r26, r0, r29

	.loc_0x218:
	  lis       r3, 0x804A
	  rlwinm    r5,r4,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r3, r3, r5
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x258
	  subi      r4, r4, 0x30
	  cmpw      r4, r29
	  blt-      .loc_0x2C0
	  cmpwi     r25, 0x10
	  li        r0, 0x40
	  bne-      .loc_0x24C
	  li        r0, 0x20

	.loc_0x24C:
	  mr        r25, r0
	  addi      r4, r4, 0x30
	  b         .loc_0x310

	.loc_0x258:
	  rlwinm.   r0,r3,0,24,25
	  beq-      .loc_0x288
	  cmpwi     r4, -0x1
	  bne-      .loc_0x270
	  li        r3, -0x1
	  b         .loc_0x27C

	.loc_0x270:
	  lis       r3, 0x804A
	  addi      r3, r3, 0x6DF0
	  lbzx      r3, r3, r5

	.loc_0x27C:
	  subi      r0, r3, 0x37
	  cmpw      r0, r29
	  blt-      .loc_0x2A0

	.loc_0x288:
	  cmpwi     r25, 0x10
	  bne-      .loc_0x298
	  li        r25, 0x20
	  b         .loc_0x310

	.loc_0x298:
	  li        r25, 0x40
	  b         .loc_0x310

	.loc_0x2A0:
	  cmpwi     r4, -0x1
	  bne-      .loc_0x2B0
	  li        r3, -0x1
	  b         .loc_0x2BC

	.loc_0x2B0:
	  lis       r3, 0x804A
	  addi      r3, r3, 0x6DF0
	  lbzx      r3, r3, r5

	.loc_0x2BC:
	  subi      r4, r3, 0x37

	.loc_0x2C0:
	  cmplw     r27, r26
	  ble-      .loc_0x2D0
	  li        r0, 0x1
	  stw       r0, 0x0(r24)

	.loc_0x2D0:
	  mullw     r27, r27, r29
	  subfic    r0, r27, -0x1
	  cmplw     r4, r0
	  ble-      .loc_0x2E8
	  li        r0, 0x1
	  stw       r0, 0x0(r24)

	.loc_0x2E8:
	  mr        r12, r30
	  mr        r3, r28
	  add       r27, r27, r4
	  li        r25, 0x10
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r31, r31, 0x1
	  bctrl
	  mr        r4, r3

	.loc_0x310:
	  cmpw      r31, r22
	  bgt-      .loc_0x328
	  cmpwi     r4, -0x1
	  beq-      .loc_0x328
	  rlwinm.   r0,r25,0,25,26
	  beq+      .loc_0xA4

	.loc_0x328:
	  andi.     r0, r25, 0x34
	  bne-      .loc_0x340
	  li        r0, 0
	  li        r27, 0
	  stw       r0, 0x0(r20)
	  b         .loc_0x34C

	.loc_0x340:
	  add       r3, r31, r23
	  subi      r0, r3, 0x1
	  stw       r0, 0x0(r20)

	.loc_0x34C:
	  mr        r12, r30
	  mr        r3, r28
	  li        r5, 0x1
	  mtctr     r12
	  bctrl
	  mr        r3, r27
	  lmw       r20, 0x10(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}
