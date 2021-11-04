

/*
 * --INFO--
 * Address:	800E1C70
 * Size:	0005FC
 */
void GDSetVtxDescv(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x4(r1)
	  addi      r4, r4, 0x7FE0
	  stwu      r1, -0x58(r1)
	  stmw      r15, 0x14(r1)
	  li        r31, 0
	  li        r30, 0
	  li        r29, 0
	  li        r28, 0
	  li        r27, 0
	  li        r26, 0x1
	  li        r25, 0
	  li        r24, 0
	  li        r23, 0
	  li        r22, 0
	  li        r21, 0
	  li        r20, 0
	  li        r19, 0
	  li        r18, 0
	  li        r17, 0
	  li        r16, 0
	  li        r15, 0
	  b         .loc_0x26C

	.loc_0x60:
	  cmplwi    r0, 0x19
	  bgt-      .loc_0x268
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  lwz       r28, 0x4(r3)
	  b         .loc_0x268
	  lwz       r0, 0x4(r3)
	  rlwinm    r5,r27,0,0,30
	  or        r27, r5, r0
	  b         .loc_0x268
	  lwz       r0, 0x4(r3)
	  rlwinm    r5,r27,0,31,29
	  rlwinm    r0,r0,1,0,30
	  or        r27, r5, r0
	  b         .loc_0x268
	  lwz       r0, 0x4(r3)
	  rlwinm    r5,r27,0,30,28
	  rlwinm    r0,r0,2,0,29
	  or        r27, r5, r0
	  b         .loc_0x268
	  lwz       r0, 0x4(r3)
	  rlwinm    r5,r27,0,29,27
	  rlwinm    r0,r0,3,0,28
	  or        r27, r5, r0
	  b         .loc_0x268
	  lwz       r0, 0x4(r3)
	  rlwinm    r5,r27,0,28,26
	  rlwinm    r0,r0,4,0,27
	  or        r27, r5, r0
	  b         .loc_0x268
	  lwz       r0, 0x4(r3)
	  rlwinm    r5,r27,0,27,25
	  rlwinm    r0,r0,5,0,26
	  or        r27, r5, r0
	  b         .loc_0x268
	  lwz       r0, 0x4(r3)
	  rlwinm    r5,r27,0,26,24
	  rlwinm    r0,r0,6,0,25
	  or        r27, r5, r0
	  b         .loc_0x268
	  lwz       r0, 0x4(r3)
	  rlwinm    r5,r27,0,25,23
	  rlwinm    r0,r0,7,0,24
	  or        r27, r5, r0
	  b         .loc_0x268
	  lwz       r26, 0x4(r3)
	  b         .loc_0x268
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x268
	  mr        r25, r0
	  li        r31, 0x1
	  b         .loc_0x268
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x268
	  mr        r25, r0
	  li        r31, 0x2
	  b         .loc_0x268
	  lwz       r6, 0x4(r3)
	  neg       r5, r6
	  subic     r0, r5, 0x1
	  subfe     r0, r0, r5
	  addi      r24, r6, 0
	  add       r30, r30, r0
	  b         .loc_0x268
	  lwz       r6, 0x4(r3)
	  neg       r5, r6
	  subic     r0, r5, 0x1
	  subfe     r0, r0, r5
	  addi      r23, r6, 0
	  add       r30, r30, r0
	  b         .loc_0x268
	  lwz       r6, 0x4(r3)
	  neg       r5, r6
	  subic     r0, r5, 0x1
	  subfe     r0, r0, r5
	  addi      r22, r6, 0
	  add       r29, r29, r0
	  b         .loc_0x268
	  lwz       r6, 0x4(r3)
	  neg       r5, r6
	  subic     r0, r5, 0x1
	  subfe     r0, r0, r5
	  addi      r21, r6, 0
	  add       r29, r29, r0
	  b         .loc_0x268
	  lwz       r6, 0x4(r3)
	  neg       r5, r6
	  subic     r0, r5, 0x1
	  subfe     r0, r0, r5
	  addi      r20, r6, 0
	  add       r29, r29, r0
	  b         .loc_0x268
	  lwz       r6, 0x4(r3)
	  neg       r5, r6
	  subic     r0, r5, 0x1
	  subfe     r0, r0, r5
	  addi      r19, r6, 0
	  add       r29, r29, r0
	  b         .loc_0x268
	  lwz       r6, 0x4(r3)
	  neg       r5, r6
	  subic     r0, r5, 0x1
	  subfe     r0, r0, r5
	  addi      r18, r6, 0
	  add       r29, r29, r0
	  b         .loc_0x268
	  lwz       r6, 0x4(r3)
	  neg       r5, r6
	  subic     r0, r5, 0x1
	  subfe     r0, r0, r5
	  addi      r17, r6, 0
	  add       r29, r29, r0
	  b         .loc_0x268
	  lwz       r6, 0x4(r3)
	  neg       r5, r6
	  subic     r0, r5, 0x1
	  subfe     r0, r0, r5
	  addi      r16, r6, 0
	  add       r29, r29, r0
	  b         .loc_0x268
	  lwz       r6, 0x4(r3)
	  neg       r5, r6
	  subic     r0, r5, 0x1
	  subfe     r0, r0, r5
	  addi      r15, r6, 0
	  add       r29, r29, r0

	.loc_0x268:
	  addi      r3, r3, 0x8

	.loc_0x26C:
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0xFF
	  bne+      .loc_0x60
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  ble-      .loc_0x294
	  bl        -0x2C0

	.loc_0x294:
	  lwz       r4, -0x7158(r13)
	  li        r5, 0x8
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  ble-      .loc_0x2C8
	  bl        -0x2F4

	.loc_0x2C8:
	  lwz       r4, -0x7158(r13)
	  li        r5, 0x50
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x4
	  cmplw     r3, r0
	  ble-      .loc_0x2FC
	  bl        -0x328

	.loc_0x2FC:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r0,r27,1,0,30
	  rlwinm    r5,r26,9,0,22
	  lwz       r3, 0x8(r4)
	  or        r0, r28, r0
	  or        r5, r5, r0
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  rlwinm    r6,r25,11,0,20
	  rlwinm    r7,r24,13,0,18
	  or        r0, r6, r5
	  rlwinm    r4,r23,15,0,16
	  or        r0, r7, r0
	  or        r7, r4, r0
	  rlwinm    r0,r7,8,24,31
	  stb       r0, 0x0(r3)
	  rlwinm    r6,r7,16,24,31
	  rlwinm    r5,r7,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  ble-      .loc_0x39C
	  bl        -0x3C8

	.loc_0x39C:
	  lwz       r4, -0x7158(r13)
	  li        r5, 0x8
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  ble-      .loc_0x3D0
	  bl        -0x3FC

	.loc_0x3D0:
	  lwz       r4, -0x7158(r13)
	  li        r5, 0x60
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x4
	  cmplw     r3, r0
	  ble-      .loc_0x404
	  bl        -0x430

	.loc_0x404:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r0,r21,2,0,29
	  rlwinm    r5,r20,4,0,27
	  or        r0, r22, r0
	  lwz       r3, 0x8(r4)
	  rlwinm    r6,r19,6,0,25
	  or        r0, r5, r0
	  or        r5, r6, r0
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  rlwinm    r7,r18,8,0,23
	  or        r0, r7, r5
	  rlwinm    r6,r17,10,0,21
	  rlwinm    r4,r16,12,0,19
	  or        r0, r6, r0
	  rlwinm    r5,r15,14,0,17
	  or        r0, r4, r0
	  or        r7, r5, r0
	  rlwinm    r0,r7,8,24,31
	  stb       r0, 0x0(r3)
	  rlwinm    r6,r7,16,24,31
	  rlwinm    r5,r7,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  ble-      .loc_0x4B4
	  bl        -0x4E0

	.loc_0x4B4:
	  lwz       r4, -0x7158(r13)
	  li        r5, 0x10
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x2
	  cmplw     r3, r0
	  ble-      .loc_0x4E8
	  bl        -0x514

	.loc_0x4E8:
	  lwz       r4, -0x7158(r13)
	  li        r5, 0
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x2
	  cmplw     r3, r0
	  ble-      .loc_0x530
	  bl        -0x55C

	.loc_0x530:
	  lwz       r4, -0x7158(r13)
	  li        r6, 0x10
	  li        r5, 0x8
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x4
	  cmplw     r3, r0
	  ble-      .loc_0x57C
	  bl        -0x5A8

	.loc_0x57C:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r0,r31,2,0,29
	  rlwinm    r5,r29,4,0,27
	  lwz       r3, 0x8(r4)
	  or        r0, r30, r0
	  or        r7, r5, r0
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  rlwinm    r0,r7,8,24,31
	  rlwinm    r6,r7,16,24,31
	  stb       r0, 0x0(r3)
	  rlwinm    r5,r7,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lmw       r15, 0x14(r1)
	  lwz       r0, 0x5C(r1)
	  addi      r1, r1, 0x58
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000620
 */
void GDSetVtxAttrFmtv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E226C
 * Size:	00020C
 */
void GDSetArray(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmpwi     r3, 0x19
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  addi      r30, r5, 0
	  stw       r29, 0x1C(r1)
	  addi      r29, r4, 0
	  bne-      .loc_0x30
	  li        r31, 0x1
	  b         .loc_0x34

	.loc_0x30:
	  subi      r31, r3, 0x9

	.loc_0x34:
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  ble-      .loc_0x50
	  bl        -0x678

	.loc_0x50:
	  lwz       r4, -0x7158(r13)
	  li        r5, 0x8
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  ble-      .loc_0x84
	  bl        -0x6AC

	.loc_0x84:
	  lwz       r4, -0x7158(r13)
	  addi      r5, r31, 0xA0
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x4
	  cmplw     r3, r0
	  ble-      .loc_0xB8
	  bl        -0x6E0

	.loc_0xB8:
	  lwz       r4, -0x7158(r13)
	  subis     r8, r29, 0x8000
	  rlwinm    r7,r8,8,24,31
	  lwz       r3, 0x8(r4)
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  ble-      .loc_0x134
	  bl        -0x75C

	.loc_0x134:
	  lwz       r4, -0x7158(r13)
	  li        r5, 0x8
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  ble-      .loc_0x168
	  bl        -0x790

	.loc_0x168:
	  lwz       r4, -0x7158(r13)
	  addi      r5, r31, 0xB0
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x4
	  cmplw     r3, r0
	  ble-      .loc_0x19C
	  bl        -0x7C4

	.loc_0x19C:
	  lwz       r4, -0x7158(r13)
	  li        r5, 0
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r30, 0x0(r3)
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
 * Address:	800E2478
 * Size:	000208
 */
void GDSetArrayRaw(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmpwi     r3, 0x19
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  addi      r30, r5, 0
	  stw       r29, 0x1C(r1)
	  addi      r29, r4, 0
	  bne-      .loc_0x30
	  li        r31, 0x1
	  b         .loc_0x34

	.loc_0x30:
	  subi      r31, r3, 0x9

	.loc_0x34:
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  ble-      .loc_0x50
	  bl        -0x884

	.loc_0x50:
	  lwz       r4, -0x7158(r13)
	  li        r5, 0x8
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  ble-      .loc_0x84
	  bl        -0x8B8

	.loc_0x84:
	  lwz       r4, -0x7158(r13)
	  addi      r5, r31, 0xA0
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x4
	  cmplw     r3, r0
	  ble-      .loc_0xB8
	  bl        -0x8EC

	.loc_0xB8:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r7,r29,8,24,31
	  rlwinm    r6,r29,16,24,31
	  lwz       r3, 0x8(r4)
	  rlwinm    r5,r29,24,24,31
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r29, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  ble-      .loc_0x130
	  bl        -0x964

	.loc_0x130:
	  lwz       r4, -0x7158(r13)
	  li        r5, 0x8
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  ble-      .loc_0x164
	  bl        -0x998

	.loc_0x164:
	  lwz       r4, -0x7158(r13)
	  addi      r5, r31, 0xB0
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x4
	  cmplw     r3, r0
	  ble-      .loc_0x198
	  bl        -0x9CC

	.loc_0x198:
	  lwz       r4, -0x7158(r13)
	  li        r5, 0
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r30, 0x0(r3)
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
 * Address:	........
 * Size:	0000A4
 */
void GDPatchArrayPtr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000434
 */
void GDSetTexCoordGen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00018C
 */
void GDSetCullMode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000434
 */
void GDSetGenMode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00043C
 */
void GDSetGenMode2(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void GDSetLPSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000184
 */
void GDSetCoPlanar(void)
{
	// UNUSED FUNCTION
}
