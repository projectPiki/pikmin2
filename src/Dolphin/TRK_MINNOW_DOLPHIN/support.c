

/*
 * --INFO--
 * Address:	800BD5F4
 * Size:	000110
 */
void HandlePositionFileSupportRequest(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r5
	  li        r5, 0x40
	  stw       r30, 0x68(r1)
	  mr        r30, r6
	  stw       r29, 0x64(r1)
	  mr        r29, r4
	  li        r4, 0
	  stw       r28, 0x60(r1)
	  mr        r28, r3
	  addi      r3, r1, 0x14
	  bl        -0xB8578
	  li        r3, 0xD4
	  li        r0, 0x40
	  stb       r3, 0x18(r1)
	  addi      r3, r1, 0xC
	  addi      r4, r1, 0x8
	  stw       r0, 0x14(r1)
	  stw       r28, 0x1C(r1)
	  lwz       r0, 0x0(r29)
	  stw       r0, 0x20(r1)
	  stb       r31, 0x24(r1)
	  bl        -0x16CC
	  mr.       r31, r3
	  bne-      .loc_0x84
	  lwz       r3, 0x8(r1)
	  addi      r4, r1, 0x14
	  li        r5, 0x40
	  bl        -0x1A78
	  mr        r31, r3

	.loc_0x84:
	  cmpwi     r31, 0
	  bne-      .loc_0xE4
	  li        r3, 0
	  li        r0, -0x1
	  stw       r3, 0x0(r30)
	  addi      r4, r1, 0x10
	  li        r5, 0x3
	  li        r6, 0x3
	  stw       r0, 0x0(r29)
	  li        r7, 0
	  lwz       r3, 0x8(r1)
	  bl        0x264
	  mr.       r31, r3
	  bne-      .loc_0xDC
	  lwz       r3, 0x10(r1)
	  bl        -0x1754
	  cmplwi    r3, 0
	  beq-      .loc_0xDC
	  lwz       r0, 0x20(r3)
	  stw       r0, 0x0(r30)
	  lwz       r0, 0x28(r3)
	  stw       r0, 0x0(r29)

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  bl        -0x17D8

	.loc_0xE4:
	  lwz       r3, 0xC(r1)
	  bl        -0x17E0
	  lwz       r0, 0x74(r1)
	  mr        r3, r31
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  lwz       r28, 0x60(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BD704
 * Size:	0000E8
 */
void HandleCloseFileSupportRequest(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  li        r5, 0x40
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x14
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  mr        r29, r4
	  li        r4, 0
	  bl        -0xB867C
	  li        r3, 0xD3
	  li        r0, 0x40
	  stb       r3, 0x18(r1)
	  addi      r3, r1, 0xC
	  addi      r4, r1, 0x8
	  stw       r0, 0x14(r1)
	  stw       r31, 0x1C(r1)
	  bl        -0x17C4
	  mr.       r31, r3
	  bne-      .loc_0x6C
	  lwz       r3, 0x8(r1)
	  addi      r4, r1, 0x14
	  li        r5, 0x40
	  bl        -0x1B70
	  mr        r31, r3

	.loc_0x6C:
	  cmpwi     r31, 0
	  bne-      .loc_0xC0
	  li        r0, 0
	  addi      r4, r1, 0x10
	  stw       r0, 0x0(r29)
	  li        r5, 0x3
	  li        r6, 0x3
	  li        r7, 0
	  lwz       r3, 0x8(r1)
	  bl        0x174
	  mr.       r31, r3
	  bne-      .loc_0xA8
	  lwz       r3, 0x10(r1)
	  bl        -0x1844
	  mr        r30, r3

	.loc_0xA8:
	  cmpwi     r31, 0
	  bne-      .loc_0xB8
	  lwz       r0, 0x20(r30)
	  stw       r0, 0x0(r29)

	.loc_0xB8:
	  lwz       r3, 0x10(r1)
	  bl        -0x18C4

	.loc_0xC0:
	  lwz       r3, 0xC(r1)
	  bl        -0x18CC
	  lwz       r0, 0x74(r1)
	  mr        r3, r31
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BD7EC
 * Size:	00011C
 */
void HandleOpenFileSupportRequest(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stmw      r27, 0x5C(r1)
	  mr        r27, r3
	  mr        r31, r4
	  mr        r28, r5
	  mr        r29, r6
	  addi      r3, r1, 0x14
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB8764
	  li        r3, 0
	  li        r0, 0xD2
	  stw       r3, 0x0(r28)
	  mr        r3, r27
	  stb       r0, 0x18(r1)
	  bl        0xD0E0
	  addi      r0, r3, 0x41
	  stb       r31, 0x1C(r1)
	  mr        r3, r27
	  stw       r0, 0x14(r1)
	  bl        0xD0CC
	  addi      r0, r3, 0x1
	  addi      r3, r1, 0xC
	  sth       r0, 0x20(r1)
	  addi      r4, r1, 0x8
	  bl        -0x18CC
	  lwz       r3, 0x8(r1)
	  addi      r4, r1, 0x14
	  li        r5, 0x40
	  bl        -0x1C70
	  mr.       r31, r3
	  bne-      .loc_0xA8
	  mr        r3, r27
	  bl        0xD098
	  mr        r5, r3
	  lwz       r3, 0x8(r1)
	  mr        r4, r27
	  addi      r5, r5, 0x1
	  bl        -0x1C94
	  mr        r31, r3

	.loc_0xA8:
	  cmpwi     r31, 0
	  bne-      .loc_0xFC
	  li        r0, 0
	  addi      r4, r1, 0x10
	  stw       r0, 0x0(r29)
	  li        r5, 0x7
	  li        r6, 0x3
	  li        r7, 0
	  lwz       r3, 0x8(r1)
	  bl        .loc_0x11C
	  mr.       r31, r3
	  bne-      .loc_0xE4
	  lwz       r3, 0x10(r1)
	  bl        -0x1968
	  mr        r30, r3

	.loc_0xE4:
	  lwz       r0, 0x20(r30)
	  stw       r0, 0x0(r29)
	  lwz       r0, 0x18(r30)
	  stw       r0, 0x0(r28)
	  lwz       r3, 0x10(r1)
	  bl        -0x19E8

	.loc_0xFC:
	  lwz       r3, 0xC(r1)
	  bl        -0x19F0
	  mr        r3, r31
	  lmw       r27, 0x5C(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr

	.loc_0x11C:
	*/
}

/*
 * --INFO--
 * Address:	800BD908
 * Size:	0001E0
 */
void TRKRequestSend(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  li        r0, -0x1
	  stmw      r21, 0x14(r1)
	  mr        r22, r4
	  lis       r4, 0x8048
	  mr        r21, r3
	  mr        r23, r7
	  addi      r27, r6, 0x1
	  subi      r31, r4, 0x6508
	  li        r30, 0
	  li        r24, 0x1
	  stw       r0, 0x0(r22)
	  b         .loc_0x19C

	.loc_0x3C:
	  addi      r4, r31, 0
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x3BF8
	  mr        r3, r21
	  bl        -0x2110
	  mr.       r30, r3
	  bne-      .loc_0x198
	  cmpwi     r23, 0
	  beq-      .loc_0x68
	  li        r28, 0

	.loc_0x68:
	  bl        -0x172C
	  stw       r3, 0x0(r22)
	  lwz       r3, 0x0(r22)
	  cmpwi     r3, -0x1
	  bne-      .loc_0x98
	  cmpwi     r23, 0
	  beq+      .loc_0x68
	  lis       r4, 0x4C5
	  addi      r28, r28, 0x1
	  subi      r0, r4, 0x4C14
	  cmplw     r28, r0
	  blt+      .loc_0x68

	.loc_0x98:
	  cmpwi     r3, -0x1
	  beq-      .loc_0xF8
	  li        r24, 0
	  bl        -0x1A4C
	  li        r4, 0
	  mr        r29, r3
	  bl        -0x1B2C
	  lwz       r4, 0x8(r29)
	  addi      r3, r29, 0x10
	  bl        -0x478
	  lbz       r26, 0x14(r29)
	  addi      r4, r31, 0x18
	  li        r3, 0x1
	  mr        r5, r26
	  mr        r6, r26
	  crclr     6, 0x6
	  bl        0x3B68
	  cmplwi    r26, 0x80
	  bge-      .loc_0xF8
	  lwz       r3, 0x0(r22)
	  bl        -0x185C
	  li        r0, -0x1
	  stw       r0, 0x0(r22)
	  b         .loc_0x68

	.loc_0xF8:
	  lwz       r0, 0x0(r22)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x198
	  lwz       r0, 0x8(r29)
	  cmplwi    r0, 0x40
	  bge-      .loc_0x114
	  li        r24, 0x1

	.loc_0x114:
	  cmpwi     r30, 0
	  bne-      .loc_0x13C
	  cmpwi     r24, 0
	  bne-      .loc_0x13C
	  lbz       r25, 0x18(r29)
	  addi      r4, r31, 0x40
	  li        r3, 0x1
	  mr        r5, r25
	  crclr     6, 0x6
	  bl        0x3B08

	.loc_0x13C:
	  cmpwi     r30, 0
	  bne-      .loc_0x178
	  cmpwi     r24, 0
	  bne-      .loc_0x178
	  cmpwi     r26, 0x80
	  mr        r5, r26
	  bne-      .loc_0x160
	  cmpwi     r25, 0
	  beq-      .loc_0x178

	.loc_0x160:
	  mr        r6, r25
	  addi      r4, r31, 0x54
	  li        r3, 0x8
	  crclr     6, 0x6
	  bl        0x3AD0
	  li        r24, 0x1

	.loc_0x178:
	  cmpwi     r30, 0
	  bne-      .loc_0x188
	  cmpwi     r24, 0
	  beq-      .loc_0x198

	.loc_0x188:
	  lwz       r3, 0x0(r22)
	  bl        -0x1B98
	  li        r0, -0x1
	  stw       r0, 0x0(r22)

	.loc_0x198:
	  subi      r27, r27, 0x1

	.loc_0x19C:
	  cmpwi     r27, 0
	  beq-      .loc_0x1B8
	  lwz       r0, 0x0(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x1B8
	  cmpwi     r30, 0
	  beq+      .loc_0x3C

	.loc_0x1B8:
	  lwz       r0, 0x0(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x1C8
	  li        r30, 0x800

	.loc_0x1C8:
	  mr        r3, r30
	  lmw       r21, 0x14(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BDAE8
 * Size:	000220
 */
void TRKSuppAccessFile(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stmw      r19, 0x5C(r1)
	  mr.       r24, r4
	  mr        r23, r3
	  mr        r25, r5
	  mr        r26, r6
	  mr        r27, r7
	  mr        r28, r8
	  beq-      .loc_0x38
	  lwz       r0, 0x0(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x40

	.loc_0x38:
	  li        r3, 0x2
	  b         .loc_0x20C

	.loc_0x40:
	  li        r0, 0
	  li        r29, 0
	  stw       r0, 0x0(r26)
	  li        r30, 0
	  li        r21, 0
	  b         .loc_0x1DC

	.loc_0x58:
	  addi      r3, r1, 0x14
	  li        r4, 0
	  li        r5, 0x40
	  bl        -0xB8A98
	  lwz       r0, 0x0(r25)
	  li        r3, 0x800
	  sub       r0, r0, r30
	  cmplwi    r0, 0x800
	  bgt-      .loc_0x80
	  mr        r3, r0

	.loc_0x80:
	  cmpwi     r28, 0
	  mr        r31, r3
	  li        r0, 0xD0
	  beq-      .loc_0x94
	  li        r0, 0xD1

	.loc_0x94:
	  cmpwi     r28, 0
	  stb       r0, 0x18(r1)
	  li        r0, 0x40
	  bne-      .loc_0xA8
	  addi      r0, r31, 0x40

	.loc_0xA8:
	  stw       r0, 0x14(r1)
	  addi      r3, r1, 0xC
	  addi      r4, r1, 0x8
	  stw       r23, 0x1C(r1)
	  sth       r31, 0x20(r1)
	  bl        -0x1C18
	  lwz       r3, 0x8(r1)
	  addi      r4, r1, 0x14
	  li        r5, 0x40
	  bl        -0x1FBC
	  cmpwi     r28, 0
	  mr        r21, r3
	  bne-      .loc_0xF8
	  cmpwi     r21, 0
	  bne-      .loc_0xF8
	  lwz       r3, 0x8(r1)
	  mr        r5, r31
	  add       r4, r24, r30
	  bl        -0x1FE0
	  mr        r21, r3

	.loc_0xF8:
	  cmpwi     r21, 0
	  bne-      .loc_0x1D0
	  cmpwi     r27, 0
	  beq-      .loc_0x1C4
	  cmpwi     r28, 0
	  li        r0, 0
	  beq-      .loc_0x120
	  cmplwi    r23, 0
	  bne-      .loc_0x120
	  li        r0, 0x1

	.loc_0x120:
	  cmpwi     r28, 0
	  lwz       r3, 0x8(r1)
	  addi      r4, r1, 0x10
	  li        r5, 0x5
	  cntlzw    r0, r0
	  li        r6, 0x3
	  rlwinm    r7,r0,27,5,31
	  bl        -0x31C
	  mr.       r21, r3
	  bne-      .loc_0x154
	  lwz       r3, 0x10(r1)
	  bl        -0x1CD4
	  mr        r22, r3

	.loc_0x154:
	  lwz       r0, 0x20(r22)
	  cmpwi     r28, 0
	  lhz       r19, 0x24(r22)
	  rlwinm    r20,r0,0,24,31
	  beq-      .loc_0x1A4
	  cmpwi     r21, 0
	  bne-      .loc_0x1A4
	  cmplw     r19, r31
	  bgt-      .loc_0x1A4
	  mr        r3, r22
	  li        r4, 0x40
	  bl        -0x1DDC
	  mr        r3, r22
	  mr        r5, r19
	  add       r4, r24, r30
	  bl        -0x22FC
	  mr        r21, r3
	  cmpwi     r21, 0x302
	  bne-      .loc_0x1A4
	  li        r21, 0

	.loc_0x1A4:
	  cmplw     r19, r31
	  beq-      .loc_0x1B4
	  mr        r31, r19
	  li        r29, 0x1

	.loc_0x1B4:
	  stw       r20, 0x0(r26)
	  lwz       r3, 0x10(r1)
	  bl        -0x1DA8
	  b         .loc_0x1D0

	.loc_0x1C4:
	  lwz       r3, 0x8(r1)
	  bl        -0x2468
	  mr        r21, r3

	.loc_0x1D0:
	  lwz       r3, 0xC(r1)
	  bl        -0x1DC0
	  add       r30, r30, r31

	.loc_0x1DC:
	  cmpwi     r29, 0
	  bne-      .loc_0x204
	  lwz       r0, 0x0(r25)
	  cmplw     r30, r0
	  bge-      .loc_0x204
	  cmpwi     r21, 0
	  bne-      .loc_0x204
	  lwz       r0, 0x0(r26)
	  cmpwi     r0, 0
	  beq+      .loc_0x58

	.loc_0x204:
	  stw       r30, 0x0(r25)
	  mr        r3, r21

	.loc_0x20C:
	  lmw       r19, 0x5C(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}
