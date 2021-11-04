

/*
 * --INFO--
 * Address:	800C6288
 * Size:	00030C
 */
void __fwrite(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r4
	  mr        r26, r6
	  mr        r27, r3
	  mr        r28, r5
	  li        r4, 0
	  mr        r3, r26
	  bl        0x5FA8
	  cmpwi     r3, 0
	  bne-      .loc_0x40
	  mr        r3, r26
	  li        r4, -0x1
	  bl        0x5F94

	.loc_0x40:
	  mullw.    r29, r25, r28
	  beq-      .loc_0x60
	  lbz       r0, 0xA(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x60
	  lhz       r0, 0x4(r26)
	  rlwinm.   r0,r0,26,29,31
	  bne-      .loc_0x68

	.loc_0x60:
	  li        r3, 0
	  b         .loc_0x2F8

	.loc_0x68:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x74
	  bl        0x1130

	.loc_0x74:
	  lbz       r0, 0x5(r26)
	  li        r31, 0x1
	  li        r3, 0
	  rlwinm.   r0,r0,29,31,31
	  beq-      .loc_0x98
	  lbz       r0, 0x4(r26)
	  rlwinm    r0,r0,31,30,31
	  cmplwi    r0, 0x2
	  bne-      .loc_0x9C

	.loc_0x98:
	  li        r3, 0x1

	.loc_0x9C:
	  cmpwi     r3, 0
	  bne-      .loc_0xB8
	  lbz       r0, 0x4(r26)
	  rlwinm    r0,r0,31,30,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0xB8
	  li        r31, 0

	.loc_0xB8:
	  lbz       r0, 0x8(r26)
	  rlwinm.   r0,r0,27,29,31
	  bne-      .loc_0x114
	  lbz       r3, 0x4(r26)
	  rlwinm.   r0,r3,29,30,30
	  rlwinm    r3,r3,29,29,31
	  beq-      .loc_0x114
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0xFC
	  mr        r3, r26
	  li        r4, 0
	  li        r5, 0x2
	  bl        0x594
	  cmpwi     r3, 0
	  beq-      .loc_0xFC
	  li        r3, 0
	  b         .loc_0x2F8

	.loc_0xFC:
	  lbz       r0, 0x8(r26)
	  li        r3, 0x1
	  rlwimi    r0,r3,5,24,26
	  mr        r3, r26
	  stb       r0, 0x8(r26)
	  bl        -0x174

	.loc_0x114:
	  lbz       r0, 0x8(r26)
	  rlwinm    r0,r0,27,29,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0x13C
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0xA(r26)
	  li        r3, 0
	  stw       r0, 0x28(r26)
	  b         .loc_0x2F8

	.loc_0x13C:
	  cmplwi    r29, 0
	  mr        r30, r27
	  li        r28, 0
	  beq-      .loc_0x268
	  lwz       r4, 0x24(r26)
	  lwz       r3, 0x1C(r26)
	  cmplw     r4, r3
	  bne-      .loc_0x164
	  cmpwi     r31, 0
	  beq-      .loc_0x268

	.loc_0x164:
	  lwz       r0, 0x20(r26)
	  sub       r3, r4, r3
	  sub       r0, r0, r3
	  stw       r0, 0x28(r26)

	.loc_0x174:
	  lwz       r0, 0x28(r26)
	  li        r27, 0
	  cmplw     r0, r29
	  stw       r0, 0x8(r1)
	  ble-      .loc_0x18C
	  stw       r29, 0x8(r1)

	.loc_0x18C:
	  lbz       r0, 0x4(r26)
	  rlwinm    r0,r0,31,30,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x1C8
	  lwz       r5, 0x8(r1)
	  cmplwi    r5, 0
	  beq-      .loc_0x1C8
	  mr        r3, r30
	  li        r4, 0xA
	  bl        0xBFC
	  mr.       r27, r3
	  beq-      .loc_0x1C8
	  addi      r0, r27, 0x1
	  sub       r0, r0, r30
	  stw       r0, 0x8(r1)

	.loc_0x1C8:
	  lwz       r5, 0x8(r1)
	  cmplwi    r5, 0
	  beq-      .loc_0x20C
	  lwz       r3, 0x24(r26)
	  mr        r4, r30
	  bl        -0xC12C8
	  lwz       r3, 0x8(r1)
	  lwz       r0, 0x24(r26)
	  add       r30, r30, r3
	  add       r28, r28, r3
	  add       r0, r0, r3
	  sub       r29, r29, r3
	  stw       r0, 0x24(r26)
	  lwz       r3, 0x8(r1)
	  lwz       r0, 0x28(r26)
	  sub       r0, r0, r3
	  stw       r0, 0x28(r26)

	.loc_0x20C:
	  lwz       r0, 0x28(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0x22C
	  cmplwi    r27, 0
	  bne-      .loc_0x22C
	  lbz       r0, 0x4(r26)
	  rlwinm.   r0,r0,31,30,31
	  bne-      .loc_0x258

	.loc_0x22C:
	  mr        r3, r26
	  li        r4, 0
	  bl        -0x35C
	  cmpwi     r3, 0
	  beq-      .loc_0x258
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0xA(r26)
	  li        r29, 0
	  stw       r0, 0x28(r26)
	  b         .loc_0x268

	.loc_0x258:
	  cmplwi    r29, 0
	  beq-      .loc_0x268
	  cmpwi     r31, 0
	  bne+      .loc_0x174

	.loc_0x268:
	  cmplwi    r29, 0
	  beq-      .loc_0x2D4
	  cmpwi     r31, 0
	  bne-      .loc_0x2D4
	  lwz       r27, 0x1C(r26)
	  add       r0, r30, r29
	  lwz       r31, 0x20(r26)
	  mr        r3, r26
	  addi      r4, r1, 0x8
	  stw       r30, 0x1C(r26)
	  stw       r29, 0x20(r26)
	  stw       r0, 0x24(r26)
	  bl        -0x3C0
	  cmpwi     r3, 0
	  beq-      .loc_0x2B4
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0xA(r26)
	  stw       r0, 0x28(r26)

	.loc_0x2B4:
	  lwz       r0, 0x8(r1)
	  mr        r3, r26
	  stw       r27, 0x1C(r26)
	  add       r28, r28, r0
	  stw       r31, 0x20(r26)
	  bl        -0x32C
	  li        r0, 0
	  stw       r0, 0x28(r26)

	.loc_0x2D4:
	  lbz       r0, 0x4(r26)
	  rlwinm    r0,r0,31,30,31
	  cmplwi    r0, 0x2
	  beq-      .loc_0x2EC
	  li        r0, 0
	  stw       r0, 0x28(r26)

	.loc_0x2EC:
	  subi      r0, r25, 0x1
	  add       r0, r28, r0
	  divwu     r3, r0, r25

	.loc_0x2F8:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C6594
 * Size:	00007C
 */
void fwrite(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  li        r3, 0x2
	  bl        -0x368
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        -0x350
	  mr        r0, r3
	  li        r3, 0x2
	  mr        r31, r0
	  bl        -0x390
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Size:	000350
 */
void __fread(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void fread(void)
{
	// UNUSED FUNCTION
}
