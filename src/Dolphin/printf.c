

/*
 * --INFO--
 * Address:	800C7438
 * Size:	0000E0
 */
void sprintf(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stmw      r25, 0x84(r1)
	  mr        r25, r3
	  mr        r26, r4
	  bne-      cr1, .loc_0x3C
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x3C:
	  addi      r29, r1, 0xA8
	  addi      r30, r1, 0x8
	  lis       r28, 0x200
	  li        r31, -0x1
	  li        r12, 0
	  lis       r11, 0x800C
	  stw       r4, 0xC(r1)
	  addi      r27, r1, 0x74
	  addi      r0, r11, 0x7770
	  addi      r4, r1, 0x68
	  stw       r3, 0x8(r1)
	  mr        r3, r0
	  stw       r5, 0x10(r1)
	  mr        r5, r26
	  stw       r6, 0x14(r1)
	  mr        r6, r27
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  stw       r28, 0x74(r1)
	  stw       r29, 0x78(r1)
	  stw       r30, 0x7C(r1)
	  stw       r25, 0x68(r1)
	  stw       r31, 0x6C(r1)
	  stw       r12, 0x70(r1)
	  bl        0x358
	  cmplwi    r25, 0
	  beq-      .loc_0xCC
	  li        r0, -0x1
	  li        r4, -0x2
	  cmplw     r3, r0
	  bge-      .loc_0xC4
	  mr        r4, r3

	.loc_0xC4:
	  li        r0, 0
	  stbx      r0, r25, r4

	.loc_0xCC:
	  lmw       r25, 0x84(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C7518
 * Size:	0000D4
 */
void snprintf(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stmw      r26, 0x88(r1)
	  mr        r26, r3
	  mr        r27, r4
	  bne-      cr1, .loc_0x3C
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x3C:
	  addi      r30, r1, 0xA8
	  addi      r31, r1, 0x8
	  lis       r29, 0x300
	  li        r12, 0
	  lis       r11, 0x800C
	  stw       r4, 0xC(r1)
	  addi      r28, r1, 0x74
	  addi      r4, r1, 0x68
	  stw       r6, 0x14(r1)
	  addi      r0, r11, 0x7770
	  mr        r6, r28
	  stw       r3, 0x8(r1)
	  mr        r3, r0
	  stw       r5, 0x10(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  stw       r29, 0x74(r1)
	  stw       r30, 0x78(r1)
	  stw       r31, 0x7C(r1)
	  stw       r26, 0x68(r1)
	  stw       r27, 0x6C(r1)
	  stw       r12, 0x70(r1)
	  bl        0x280
	  cmplwi    r26, 0
	  beq-      .loc_0xC0
	  cmplw     r3, r27
	  subi      r4, r27, 0x1
	  bge-      .loc_0xB8
	  mr        r4, r3

	.loc_0xB8:
	  li        r0, 0
	  stbx      r0, r26, r4

	.loc_0xC0:
	  lmw       r26, 0x88(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C75EC
 * Size:	000078
 */
void vsprintf(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r6, r5
	  mr        r5, r4
	  stw       r0, 0x24(r1)
	  li        r7, -0x1
	  li        r0, 0
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lis       r3, 0x800C
	  stw       r31, 0x8(r1)
	  addi      r3, r3, 0x7770
	  stw       r7, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        0x20C
	  cmplwi    r31, 0
	  beq-      .loc_0x64
	  li        r0, -0x1
	  li        r4, -0x2
	  cmplw     r3, r0
	  bge-      .loc_0x5C
	  mr        r4, r3

	.loc_0x5C:
	  li        r0, 0
	  stbx      r0, r31, r4

	.loc_0x64:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C7664
 * Size:	000074
 */
void vsnprintf(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x8
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lis       r3, 0x800C
	  stw       r30, 0x8(r1)
	  addi      r3, r3, 0x7770
	  stw       r31, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        0x198
	  cmplwi    r30, 0
	  beq-      .loc_0x5C
	  cmplw     r3, r31
	  subi      r4, r31, 0x1
	  bge-      .loc_0x54
	  mr        r4, r3

	.loc_0x54:
	  li        r0, 0
	  stbx      r0, r30, r4

	.loc_0x5C:
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
 * Address:	........
 * Size:	00008C
 */
void vfprintf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C76D8
 * Size:	000098
 */
void vprintf(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  addi      r4, r5, 0x6948
	  stw       r29, 0x14(r1)
	  addi      r31, r4, 0x50
	  mr        r29, r3
	  li        r4, -0x1
	  mr        r3, r31
	  bl        0x4B4C
	  cmpwi     r3, 0
	  blt-      .loc_0x48
	  li        r3, -0x1
	  b         .loc_0x7C

	.loc_0x48:
	  li        r3, 0x2
	  bl        -0x14C8
	  lis       r3, 0x800C
	  mr        r4, r31
	  addi      r3, r3, 0x77DC
	  mr        r5, r29
	  mr        r6, r30
	  bl        0xF8
	  mr        r0, r3
	  li        r3, 0x2
	  mr        r31, r0
	  bl        -0x14F4
	  mr        r3, r31

	.loc_0x7C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void fprintf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void printf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C7770
 * Size:	00006C
 */
void __StringWrite(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x8(r3)
	  lwz       r6, 0x4(r30)
	  add       r0, r3, r5
	  cmplw     r0, r6
	  sub       r31, r6, r3
	  bgt-      .loc_0x34
	  mr        r31, r5

	.loc_0x34:
	  lwz       r0, 0x0(r30)
	  mr        r5, r31
	  add       r3, r0, r3
	  bl        -0xC2614
	  lwz       r0, 0x8(r30)
	  li        r3, 0x1
	  add       r0, r0, r31
	  stw       r0, 0x8(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C77DC
 * Size:	000058
 */
void(int, long, ..., int, ...)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r4
	  li        r4, 0x1
	  mr        r6, r30
	  bl        -0x1270
	  cmplw     r31, r3
	  bne-      .loc_0x3C
	  mr        r3, r30
	  b         .loc_0x40

	.loc_0x3C:
	  li        r3, 0

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C7834
 * Size:	000774
 */
void __pformatter(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x2C0(r1)
	  mflr      r0
	  stw       r0, 0x2C4(r1)
	  li        r0, 0x20
	  stmw      r19, 0x28C(r1)
	  mr        r31, r3
	  mr        r30, r4
	  mr        r29, r6
	  mr        r26, r5
	  addi      r24, r1, 0x27C
	  addi      r21, r1, 0x27B
	  li        r27, 0
	  stb       r0, 0x9(r1)
	  b         .loc_0x750

	.loc_0x38:
	  mr        r3, r26
	  li        r4, 0x25
	  bl        0x2DDC
	  mr.       r25, r3
	  bne-      .loc_0x84
	  mr        r3, r26
	  bl        0x308C
	  mr.       r5, r3
	  add       r27, r27, r5
	  beq-      .loc_0x75C
	  mr        r12, r31
	  mr        r3, r30
	  mr        r4, r26
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x75C
	  li        r3, -0x1
	  b         .loc_0x760

	.loc_0x84:
	  sub.      r5, r25, r26
	  add       r27, r27, r5
	  beq-      .loc_0xB4
	  mr        r12, r31
	  mr        r3, r30
	  mr        r4, r26
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0xB4
	  li        r3, -0x1
	  b         .loc_0x760

	.loc_0xB4:
	  mr        r3, r25
	  mr        r4, r29
	  addi      r5, r1, 0x6C
	  bl        0x17A0
	  lbz       r0, 0x71(r1)
	  mr        r26, r3
	  cmpwi     r0, 0x68
	  beq-      .loc_0x5D0
	  bge-      .loc_0x134
	  cmpwi     r0, 0x58
	  beq-      .loc_0x28C
	  bge-      .loc_0x110
	  cmpwi     r0, 0x41
	  beq-      .loc_0x3F4
	  bge-      .loc_0xFC
	  cmpwi     r0, 0x25
	  beq-      .loc_0x5BC
	  b         .loc_0x5D0

	.loc_0xFC:
	  cmpwi     r0, 0x48
	  bge-      .loc_0x5D0
	  cmpwi     r0, 0x45
	  bge-      .loc_0x388
	  b         .loc_0x5D0

	.loc_0x110:
	  cmpwi     r0, 0x63
	  beq-      .loc_0x59C
	  bge-      .loc_0x128
	  cmpwi     r0, 0x61
	  beq-      .loc_0x3F4
	  b         .loc_0x5D0

	.loc_0x128:
	  cmpwi     r0, 0x65
	  bge-      .loc_0x388
	  b         .loc_0x190

	.loc_0x134:
	  cmpwi     r0, 0x74
	  beq-      .loc_0x5D0
	  bge-      .loc_0x16C
	  cmpwi     r0, 0x6F
	  beq-      .loc_0x28C
	  bge-      .loc_0x160
	  cmpwi     r0, 0x6E
	  bge-      .loc_0x538
	  cmpwi     r0, 0x6A
	  bge-      .loc_0x5D0
	  b         .loc_0x190

	.loc_0x160:
	  cmpwi     r0, 0x73
	  bge-      .loc_0x460
	  b         .loc_0x5D0

	.loc_0x16C:
	  cmpwi     r0, 0x78
	  beq-      .loc_0x28C
	  bge-      .loc_0x184
	  cmpwi     r0, 0x76
	  bge-      .loc_0x5D0
	  b         .loc_0x28C

	.loc_0x184:
	  cmpwi     r0, 0xFF
	  beq-      .loc_0x5D0
	  b         .loc_0x5D0

	.loc_0x190:
	  lbz       r0, 0x70(r1)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x1B0
	  mr        r3, r29
	  li        r4, 0x1
	  bl        -0x63E8
	  lwz       r28, 0x0(r3)
	  b         .loc_0x1E0

	.loc_0x1B0:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x1D0
	  mr        r3, r29
	  li        r4, 0x2
	  bl        -0x6404
	  lwz       r22, 0x0(r3)
	  lwz       r23, 0x4(r3)
	  b         .loc_0x1E0

	.loc_0x1D0:
	  mr        r3, r29
	  li        r4, 0x1
	  bl        -0x641C
	  lwz       r28, 0x0(r3)

	.loc_0x1E0:
	  lbz       r3, 0x70(r1)
	  cmplwi    r3, 0x2
	  bne-      .loc_0x1F4
	  extsh     r0, r28
	  mr        r28, r0

	.loc_0x1F4:
	  cmplwi    r3, 0x1
	  bne-      .loc_0x204
	  extsb     r0, r28
	  mr        r28, r0

	.loc_0x204:
	  cmplwi    r3, 0x4
	  bne-      .loc_0x24C
	  lwz       r9, 0x6C(r1)
	  mr        r4, r23
	  lwz       r8, 0x70(r1)
	  mr        r3, r22
	  lwz       r7, 0x74(r1)
	  mr        r5, r24
	  lwz       r0, 0x78(r1)
	  addi      r6, r1, 0x5C
	  stw       r9, 0x5C(r1)
	  stw       r8, 0x60(r1)
	  stw       r7, 0x64(r1)
	  stw       r0, 0x68(r1)
	  bl        0x10B8
	  mr.       r20, r3
	  beq-      .loc_0x5D0
	  b         .loc_0x284

	.loc_0x24C:
	  lwz       r8, 0x6C(r1)
	  mr        r3, r28
	  lwz       r7, 0x70(r1)
	  mr        r4, r24
	  lwz       r6, 0x74(r1)
	  addi      r5, r1, 0x4C
	  lwz       r0, 0x78(r1)
	  stw       r8, 0x4C(r1)
	  stw       r7, 0x50(r1)
	  stw       r6, 0x54(r1)
	  stw       r0, 0x58(r1)
	  bl        0x1390
	  mr.       r20, r3
	  beq-      .loc_0x5D0

	.loc_0x284:
	  sub       r25, r21, r20
	  b         .loc_0x610

	.loc_0x28C:
	  lbz       r0, 0x70(r1)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x2AC
	  mr        r3, r29
	  li        r4, 0x1
	  bl        -0x64E4
	  lwz       r28, 0x0(r3)
	  b         .loc_0x2DC

	.loc_0x2AC:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x2CC
	  mr        r3, r29
	  li        r4, 0x2
	  bl        -0x6500
	  lwz       r22, 0x0(r3)
	  lwz       r23, 0x4(r3)
	  b         .loc_0x2DC

	.loc_0x2CC:
	  mr        r3, r29
	  li        r4, 0x1
	  bl        -0x6518
	  lwz       r28, 0x0(r3)

	.loc_0x2DC:
	  lbz       r3, 0x70(r1)
	  cmplwi    r3, 0x2
	  bne-      .loc_0x2F0
	  rlwinm    r0,r28,0,16,31
	  mr        r28, r0

	.loc_0x2F0:
	  cmplwi    r3, 0x1
	  bne-      .loc_0x300
	  rlwinm    r0,r28,0,24,31
	  mr        r28, r0

	.loc_0x300:
	  cmplwi    r3, 0x4
	  bne-      .loc_0x348
	  lwz       r9, 0x6C(r1)
	  mr        r4, r23
	  lwz       r8, 0x70(r1)
	  mr        r3, r22
	  lwz       r7, 0x74(r1)
	  mr        r5, r24
	  lwz       r0, 0x78(r1)
	  addi      r6, r1, 0x3C
	  stw       r9, 0x3C(r1)
	  stw       r8, 0x40(r1)
	  stw       r7, 0x44(r1)
	  stw       r0, 0x48(r1)
	  bl        0xFBC
	  mr.       r20, r3
	  beq-      .loc_0x5D0
	  b         .loc_0x380

	.loc_0x348:
	  lwz       r8, 0x6C(r1)
	  mr        r3, r28
	  lwz       r7, 0x70(r1)
	  mr        r4, r24
	  lwz       r6, 0x74(r1)
	  addi      r5, r1, 0x2C
	  lwz       r0, 0x78(r1)
	  stw       r8, 0x2C(r1)
	  stw       r7, 0x30(r1)
	  stw       r6, 0x34(r1)
	  stw       r0, 0x38(r1)
	  bl        0x1294
	  mr.       r20, r3
	  beq-      .loc_0x5D0

	.loc_0x380:
	  sub       r25, r21, r20
	  b         .loc_0x610

	.loc_0x388:
	  lbz       r0, 0x70(r1)
	  cmplwi    r0, 0x5
	  bne-      .loc_0x3A8
	  mr        r3, r29
	  li        r4, 0x3
	  bl        -0x65E0
	  lfd       f1, 0x0(r3)
	  b         .loc_0x3B8

	.loc_0x3A8:
	  mr        r3, r29
	  li        r4, 0x3
	  bl        -0x65F4
	  lfd       f1, 0x0(r3)

	.loc_0x3B8:
	  lwz       r7, 0x6C(r1)
	  mr        r3, r24
	  lwz       r6, 0x70(r1)
	  addi      r4, r1, 0x1C
	  lwz       r5, 0x74(r1)
	  lwz       r0, 0x78(r1)
	  stw       r7, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stw       r5, 0x24(r1)
	  stw       r0, 0x28(r1)
	  bl        .loc_0x774
	  mr.       r20, r3
	  beq-      .loc_0x5D0
	  sub       r25, r21, r20
	  b         .loc_0x610

	.loc_0x3F4:
	  lbz       r0, 0x70(r1)
	  cmplwi    r0, 0x5
	  bne-      .loc_0x414
	  mr        r3, r29
	  li        r4, 0x3
	  bl        -0x664C
	  lfd       f1, 0x0(r3)
	  b         .loc_0x424

	.loc_0x414:
	  mr        r3, r29
	  li        r4, 0x3
	  bl        -0x6660
	  lfd       f1, 0x0(r3)

	.loc_0x424:
	  lwz       r7, 0x6C(r1)
	  mr        r3, r24
	  lwz       r6, 0x70(r1)
	  addi      r4, r1, 0xC
	  lwz       r5, 0x74(r1)
	  lwz       r0, 0x78(r1)
	  stw       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x18(r1)
	  bl        0xB70
	  mr.       r20, r3
	  beq-      .loc_0x5D0
	  sub       r25, r21, r20
	  b         .loc_0x610

	.loc_0x460:
	  lbz       r0, 0x70(r1)
	  cmplwi    r0, 0x6
	  bne-      .loc_0x4A4
	  mr        r3, r29
	  li        r4, 0x1
	  bl        -0x66B8
	  lwz       r4, 0x0(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x488
	  subi      r4, r13, 0x7DE0

	.loc_0x488:
	  addi      r3, r1, 0x7C
	  li        r5, 0x200
	  bl        -0x1000
	  cmpwi     r3, 0
	  blt-      .loc_0x5D0
	  addi      r20, r1, 0x7C
	  b         .loc_0x4B4

	.loc_0x4A4:
	  mr        r3, r29
	  li        r4, 0x1
	  bl        -0x66F0
	  lwz       r20, 0x0(r3)

	.loc_0x4B4:
	  cmplwi    r20, 0
	  bne-      .loc_0x4C4
	  lis       r3, 0x8048
	  subi      r20, r3, 0x5F50

	.loc_0x4C4:
	  lbz       r0, 0x6F(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x4F8
	  lbz       r0, 0x6E(r1)
	  lbz       r25, 0x0(r20)
	  addi      r20, r20, 0x1
	  cmplwi    r0, 0
	  beq-      .loc_0x610
	  lwz       r0, 0x78(r1)
	  cmpw      r25, r0
	  ble-      .loc_0x610
	  mr        r25, r0
	  b         .loc_0x610

	.loc_0x4F8:
	  lbz       r0, 0x6E(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x528
	  lwz       r25, 0x78(r1)
	  mr        r3, r20
	  li        r4, 0
	  mr        r5, r25
	  bl        -0xCE8
	  cmplwi    r3, 0
	  beq-      .loc_0x610
	  sub       r25, r3, r20
	  b         .loc_0x610

	.loc_0x528:
	  mr        r3, r20
	  bl        0x2BB0
	  mr        r25, r3
	  b         .loc_0x610

	.loc_0x538:
	  mr        r3, r29
	  li        r4, 0x1
	  bl        -0x6784
	  lbz       r0, 0x70(r1)
	  lwz       r3, 0x0(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x57C
	  bge-      .loc_0x564
	  cmpwi     r0, 0
	  beq-      .loc_0x574
	  b         .loc_0x750

	.loc_0x564:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x58C
	  bge-      .loc_0x750
	  b         .loc_0x584

	.loc_0x574:
	  stw       r27, 0x0(r3)
	  b         .loc_0x750

	.loc_0x57C:
	  sth       r27, 0x0(r3)
	  b         .loc_0x750

	.loc_0x584:
	  stw       r27, 0x0(r3)
	  b         .loc_0x750

	.loc_0x58C:
	  stw       r27, 0x4(r3)
	  srawi     r0, r27, 0x1F
	  stw       r0, 0x0(r3)
	  b         .loc_0x750

	.loc_0x59C:
	  mr        r3, r29
	  addi      r20, r1, 0x7C
	  li        r4, 0x1
	  bl        -0x67EC
	  lwz       r0, 0x0(r3)
	  li        r25, 0x1
	  stb       r0, 0x7C(r1)
	  b         .loc_0x610

	.loc_0x5BC:
	  li        r0, 0x25
	  addi      r20, r1, 0x7C
	  stb       r0, 0x7C(r1)
	  li        r25, 0x1
	  b         .loc_0x610

	.loc_0x5D0:
	  mr        r3, r25
	  bl        0x2B08
	  mr.       r5, r3
	  add       r27, r27, r5
	  beq-      .loc_0x608
	  mr        r12, r31
	  mr        r3, r30
	  mr        r4, r25
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x608
	  li        r3, -0x1
	  b         .loc_0x760

	.loc_0x608:
	  mr        r3, r27
	  b         .loc_0x760

	.loc_0x610:
	  lbz       r0, 0x6C(r1)
	  mr        r19, r25
	  cmplwi    r0, 0
	  beq-      .loc_0x6CC
	  cmplwi    r0, 0x2
	  li        r0, 0x20
	  bne-      .loc_0x630
	  li        r0, 0x30

	.loc_0x630:
	  stb       r0, 0x9(r1)
	  lbz       r0, 0x0(r20)
	  extsb     r0, r0
	  cmpwi     r0, 0x2B
	  beq-      .loc_0x654
	  cmpwi     r0, 0x2D
	  beq-      .loc_0x654
	  cmpwi     r0, 0x20
	  bne-      .loc_0x6C0

	.loc_0x654:
	  lbz       r0, 0x9(r1)
	  cmpwi     r0, 0x30
	  bne-      .loc_0x6C0
	  mr        r12, r31
	  mr        r3, r30
	  mr        r4, r20
	  li        r5, 0x1
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x688
	  li        r3, -0x1
	  b         .loc_0x760

	.loc_0x688:
	  addi      r20, r20, 0x1
	  subi      r25, r25, 0x1
	  b         .loc_0x6C0

	.loc_0x694:
	  mr        r12, r31
	  mr        r3, r30
	  addi      r4, r1, 0x9
	  li        r5, 0x1
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x6BC
	  li        r3, -0x1
	  b         .loc_0x760

	.loc_0x6BC:
	  addi      r19, r19, 0x1

	.loc_0x6C0:
	  lwz       r0, 0x74(r1)
	  cmpw      r19, r0
	  blt+      .loc_0x694

	.loc_0x6CC:
	  cmpwi     r25, 0
	  beq-      .loc_0x6FC
	  mr        r12, r31
	  mr        r3, r30
	  mr        r4, r20
	  mr        r5, r25
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x6FC
	  li        r3, -0x1
	  b         .loc_0x760

	.loc_0x6FC:
	  lbz       r0, 0x6C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x74C
	  li        r20, 0x20
	  b         .loc_0x740

	.loc_0x710:
	  mr        r12, r31
	  mr        r3, r30
	  stb       r20, 0x8(r1)
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x73C
	  li        r3, -0x1
	  b         .loc_0x760

	.loc_0x73C:
	  addi      r19, r19, 0x1

	.loc_0x740:
	  lwz       r0, 0x74(r1)
	  cmpw      r19, r0
	  blt+      .loc_0x710

	.loc_0x74C:
	  add       r27, r27, r19

	.loc_0x750:
	  lbz       r0, 0x0(r26)
	  extsb.    r0, r0
	  bne+      .loc_0x38

	.loc_0x75C:
	  mr        r3, r27

	.loc_0x760:
	  lmw       r19, 0x28C(r1)
	  lwz       r0, 0x2C4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2C0
	  blr

	.loc_0x774:
	*/
}

/*
 * --INFO--
 * Address:	800C7FA8
 * Size:	00071C
 */
void float2str(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  lwz       r0, 0xC(r4)
	  stfd      f31, 0x48(r1)
	  fmr       f31, f1
	  cmpwi     r0, 0x1FD
	  stw       r31, 0x44(r1)
	  stw       r30, 0x40(r1)
	  stw       r29, 0x3C(r1)
	  mr        r29, r4
	  stw       r28, 0x38(r1)
	  mr        r28, r3
	  ble-      .loc_0x40
	  li        r3, 0
	  b         .loc_0x6F8

	.loc_0x40:
	  li        r3, 0
	  li        r0, 0x20
	  stb       r3, 0x8(r1)
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0xC
	  sth       r0, 0xA(r1)
	  bl        -0x4464
	  lbz       r0, 0x10(r1)
	  addi      r31, r1, 0x11
	  add       r5, r31, r0
	  b         .loc_0x84

	.loc_0x6C:
	  lbz       r4, 0x10(r1)
	  lha       r3, 0xE(r1)
	  subi      r4, r4, 0x1
	  addi      r0, r3, 0x1
	  stb       r4, 0x10(r1)
	  sth       r0, 0xE(r1)

	.loc_0x84:
	  lbz       r0, 0x10(r1)
	  cmplwi    r0, 0x1
	  ble-      .loc_0x9C
	  lbzu      r0, -0x1(r5)
	  cmpwi     r0, 0x30
	  beq+      .loc_0x6C

	.loc_0x9C:
	  lbz       r0, 0x11(r1)
	  cmpwi     r0, 0x49
	  beq-      .loc_0xD0
	  bge-      .loc_0xB8
	  cmpwi     r0, 0x30
	  beq-      .loc_0xC4
	  b         .loc_0x220

	.loc_0xB8:
	  cmpwi     r0, 0x4E
	  beq-      .loc_0x178
	  b         .loc_0x220

	.loc_0xC4:
	  li        r0, 0
	  sth       r0, 0xE(r1)
	  b         .loc_0x220

	.loc_0xD0:
	  lfd       f0, -0x7290(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x128
	  lis       r3, 0x804A
	  lbz       r0, 0x5(r29)
	  addi      r3, r3, 0x6BF0
	  subi      r28, r28, 0x5
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x110
	  lis       r4, 0x8048
	  mr        r3, r28
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0x1
	  bl        0x27A8
	  b         .loc_0x170

	.loc_0x110:
	  lis       r4, 0x8048
	  mr        r3, r28
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0x6
	  bl        0x2790
	  b         .loc_0x170

	.loc_0x128:
	  lis       r3, 0x804A
	  lbz       r0, 0x5(r29)
	  addi      r3, r3, 0x6BF0
	  subi      r28, r28, 0x4
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x15C
	  lis       r4, 0x8048
	  mr        r3, r28
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0xB
	  bl        0x275C
	  b         .loc_0x170

	.loc_0x15C:
	  lis       r4, 0x8048
	  mr        r3, r28
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0xF
	  bl        0x2744

	.loc_0x170:
	  mr        r3, r28
	  b         .loc_0x6F8

	.loc_0x178:
	  lbz       r0, 0xC(r1)
	  extsb.    r0, r0
	  beq-      .loc_0x1D0
	  lis       r3, 0x804A
	  lbz       r0, 0x5(r29)
	  addi      r3, r3, 0x6BF0
	  subi      r28, r28, 0x5
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x1B8
	  lis       r4, 0x8048
	  mr        r3, r28
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0x13
	  bl        0x2700
	  b         .loc_0x218

	.loc_0x1B8:
	  lis       r4, 0x8048
	  mr        r3, r28
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0x18
	  bl        0x26E8
	  b         .loc_0x218

	.loc_0x1D0:
	  lis       r3, 0x804A
	  lbz       r0, 0x5(r29)
	  addi      r3, r3, 0x6BF0
	  subi      r28, r28, 0x4
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x204
	  lis       r4, 0x8048
	  mr        r3, r28
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0x1D
	  bl        0x26B4
	  b         .loc_0x218

	.loc_0x204:
	  lis       r4, 0x8048
	  mr        r3, r28
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0x21
	  bl        0x269C

	.loc_0x218:
	  mr        r3, r28
	  b         .loc_0x6F8

	.loc_0x220:
	  lha       r5, 0xE(r1)
	  li        r3, 0
	  lbz       r4, 0x10(r1)
	  subi      r30, r28, 0x1
	  lbz       r0, 0x5(r29)
	  add       r4, r4, r5
	  subi      r4, r4, 0x1
	  cmpwi     r0, 0x65
	  sth       r4, 0xE(r1)
	  stb       r3, -0x1(r28)
	  beq-      .loc_0x33C
	  bge-      .loc_0x274
	  cmpwi     r0, 0x46
	  beq-      .loc_0x4A0
	  bge-      .loc_0x268
	  cmpwi     r0, 0x45
	  bge-      .loc_0x33C
	  b         .loc_0x6F4

	.loc_0x268:
	  cmpwi     r0, 0x48
	  bge-      .loc_0x6F4
	  b         .loc_0x284

	.loc_0x274:
	  cmpwi     r0, 0x67
	  beq-      .loc_0x284
	  bge-      .loc_0x6F4
	  b         .loc_0x4A0

	.loc_0x284:
	  lbz       r0, 0x10(r1)
	  lwz       r4, 0xC(r29)
	  cmpw      r0, r4
	  ble-      .loc_0x29C
	  addi      r3, r1, 0xC
	  bl        .loc_0x71C

	.loc_0x29C:
	  lha       r4, 0xE(r1)
	  cmpwi     r4, -0x4
	  blt-      .loc_0x2B4
	  lwz       r3, 0xC(r29)
	  cmpw      r4, r3
	  blt-      .loc_0x300

	.loc_0x2B4:
	  lbz       r0, 0x3(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x2D0
	  lwz       r3, 0xC(r29)
	  subi      r0, r3, 0x1
	  stw       r0, 0xC(r29)
	  b         .loc_0x2DC

	.loc_0x2D0:
	  lbz       r3, 0x10(r1)
	  subi      r0, r3, 0x1
	  stw       r0, 0xC(r29)

	.loc_0x2DC:
	  lbz       r0, 0x5(r29)
	  cmplwi    r0, 0x67
	  bne-      .loc_0x2F4
	  li        r0, 0x65
	  stb       r0, 0x5(r29)
	  b         .loc_0x33C

	.loc_0x2F4:
	  li        r0, 0x45
	  stb       r0, 0x5(r29)
	  b         .loc_0x33C

	.loc_0x300:
	  lbz       r0, 0x3(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x31C
	  addi      r0, r4, 0x1
	  sub       r0, r3, r0
	  stw       r0, 0xC(r29)
	  b         .loc_0x4A0

	.loc_0x31C:
	  lbz       r0, 0x10(r1)
	  addi      r3, r4, 0x1
	  sub.      r0, r0, r3
	  stw       r0, 0xC(r29)
	  bge-      .loc_0x4A0
	  li        r0, 0
	  stw       r0, 0xC(r29)
	  b         .loc_0x4A0

	.loc_0x33C:
	  lwz       r3, 0xC(r29)
	  lbz       r0, 0x10(r1)
	  addi      r4, r3, 0x1
	  cmpw      r0, r4
	  ble-      .loc_0x358
	  addi      r3, r1, 0xC
	  bl        .loc_0x71C

	.loc_0x358:
	  lha       r6, 0xE(r1)
	  li        r8, 0x2B
	  cmpwi     r6, 0
	  bge-      .loc_0x370
	  neg       r6, r6
	  li        r8, 0x2D

	.loc_0x370:
	  lis       r3, 0x6666
	  li        r7, 0
	  addi      r5, r3, 0x6667
	  b         .loc_0x3B4

	.loc_0x380:
	  mulhw     r0, r5, r6
	  addi      r7, r7, 0x1
	  srawi     r3, r0, 0x2
	  rlwinm    r4,r3,1,31,31
	  srawi     r0, r0, 0x2
	  add       r3, r3, r4
	  mulli     r4, r3, 0xA
	  rlwinm    r3,r0,1,31,31
	  sub       r4, r6, r4
	  add       r6, r0, r3
	  addi      r0, r4, 0x30
	  stb       r0, -0x1(r30)
	  subi      r30, r30, 0x1

	.loc_0x3B4:
	  cmpwi     r6, 0
	  bne+      .loc_0x380
	  cmpwi     r7, 0x2
	  blt+      .loc_0x380
	  lbz       r0, 0x5(r29)
	  stb       r8, -0x1(r30)
	  lwz       r3, 0xC(r29)
	  stbu      r0, -0x2(r30)
	  sub       r0, r28, r30
	  add       r0, r3, r0
	  cmpwi     r0, 0x1FD
	  ble-      .loc_0x3EC
	  li        r3, 0
	  b         .loc_0x6F8

	.loc_0x3EC:
	  lbz       r4, 0x10(r1)
	  addi      r0, r3, 0x1
	  cmpw      r4, r0
	  bge-      .loc_0x418
	  addi      r3, r3, 0x2
	  li        r0, 0x30
	  sub       r3, r3, r4
	  b         .loc_0x410

	.loc_0x40C:
	  stbu      r0, -0x1(r30)

	.loc_0x410:
	  subic.    r3, r3, 0x1
	  bne+      .loc_0x40C

	.loc_0x418:
	  lbz       r3, 0x10(r1)
	  add       r4, r31, r3
	  b         .loc_0x42C

	.loc_0x424:
	  lbzu      r0, -0x1(r4)
	  stbu      r0, -0x1(r30)

	.loc_0x42C:
	  subic.    r3, r3, 0x1
	  bne+      .loc_0x424
	  lwz       r0, 0xC(r29)
	  cmpwi     r0, 0
	  bne-      .loc_0x44C
	  lbz       r0, 0x3(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x454

	.loc_0x44C:
	  li        r0, 0x2E
	  stbu      r0, -0x1(r30)

	.loc_0x454:
	  lbz       r0, 0x11(r1)
	  stbu      r0, -0x1(r30)
	  lbz       r0, 0xC(r1)
	  extsb.    r0, r0
	  beq-      .loc_0x474
	  li        r0, 0x2D
	  stbu      r0, -0x1(r30)
	  b         .loc_0x6F4

	.loc_0x474:
	  lbz       r0, 0x1(r29)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x48C
	  li        r0, 0x2B
	  stbu      r0, -0x1(r30)
	  b         .loc_0x6F4

	.loc_0x48C:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x6F4
	  li        r0, 0x20
	  stbu      r0, -0x1(r30)
	  b         .loc_0x6F4

	.loc_0x4A0:
	  lha       r0, 0xE(r1)
	  lbz       r4, 0x10(r1)
	  sub       r3, r4, r0
	  subic.    r7, r3, 0x1
	  bge-      .loc_0x4B8
	  li        r7, 0

	.loc_0x4B8:
	  lwz       r0, 0xC(r29)
	  cmpw      r7, r0
	  ble-      .loc_0x4EC
	  sub       r0, r7, r0
	  addi      r3, r1, 0xC
	  sub       r4, r4, r0
	  bl        .loc_0x71C
	  lha       r3, 0xE(r1)
	  lbz       r0, 0x10(r1)
	  sub       r3, r0, r3
	  subic.    r7, r3, 0x1
	  bge-      .loc_0x4EC
	  li        r7, 0

	.loc_0x4EC:
	  lha       r3, 0xE(r1)
	  addic.    r6, r3, 0x1
	  bge-      .loc_0x4FC
	  li        r6, 0

	.loc_0x4FC:
	  add       r0, r6, r7
	  cmpwi     r0, 0x1FD
	  ble-      .loc_0x510
	  li        r3, 0
	  b         .loc_0x6F8

	.loc_0x510:
	  lwz       r0, 0xC(r29)
	  li        r4, 0x30
	  lbz       r5, 0x10(r1)
	  sub.      r3, r0, r7
	  add       r5, r31, r5
	  ble-      .loc_0x56C
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0x560

	.loc_0x534:
	  stb       r4, -0x1(r30)
	  stb       r4, -0x2(r30)
	  stb       r4, -0x3(r30)
	  stb       r4, -0x4(r30)
	  stb       r4, -0x5(r30)
	  stb       r4, -0x6(r30)
	  stb       r4, -0x7(r30)
	  stbu      r4, -0x8(r30)
	  bdnz+     .loc_0x534
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x56C

	.loc_0x560:
	  mtctr     r3

	.loc_0x564:
	  stbu      r4, -0x1(r30)
	  bdnz+     .loc_0x564

	.loc_0x56C:
	  li        r3, 0
	  b         .loc_0x580

	.loc_0x574:
	  lbzu      r0, -0x1(r5)
	  addi      r3, r3, 0x1
	  stbu      r0, -0x1(r30)

	.loc_0x580:
	  cmpw      r3, r7
	  bge-      .loc_0x594
	  lbz       r0, 0x10(r1)
	  cmpw      r3, r0
	  blt+      .loc_0x574

	.loc_0x594:
	  cmpw      r3, r7
	  sub       r3, r7, r3
	  li        r4, 0x30
	  bge-      .loc_0x5E8
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0x5DC

	.loc_0x5B0:
	  stb       r4, -0x1(r30)
	  stb       r4, -0x2(r30)
	  stb       r4, -0x3(r30)
	  stb       r4, -0x4(r30)
	  stb       r4, -0x5(r30)
	  stb       r4, -0x6(r30)
	  stb       r4, -0x7(r30)
	  stbu      r4, -0x8(r30)
	  bdnz+     .loc_0x5B0
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x5E8

	.loc_0x5DC:
	  mtctr     r3

	.loc_0x5E0:
	  stbu      r4, -0x1(r30)
	  bdnz+     .loc_0x5E0

	.loc_0x5E8:
	  lwz       r0, 0xC(r29)
	  cmpwi     r0, 0
	  bne-      .loc_0x600
	  lbz       r0, 0x3(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x608

	.loc_0x600:
	  li        r0, 0x2E
	  stbu      r0, -0x1(r30)

	.loc_0x608:
	  cmpwi     r6, 0
	  beq-      .loc_0x6AC
	  li        r4, 0
	  li        r3, 0x30
	  b         .loc_0x624

	.loc_0x61C:
	  stbu      r3, -0x1(r30)
	  addi      r4, r4, 0x1

	.loc_0x624:
	  lbz       r0, 0x10(r1)
	  sub       r0, r6, r0
	  cmpw      r4, r0
	  blt+      .loc_0x61C
	  cmpw      r4, r6
	  sub       r3, r6, r4
	  bge-      .loc_0x6B4
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0x698

	.loc_0x64C:
	  lbz       r0, -0x1(r5)
	  stb       r0, -0x1(r30)
	  lbz       r0, -0x2(r5)
	  stb       r0, -0x2(r30)
	  lbz       r0, -0x3(r5)
	  stb       r0, -0x3(r30)
	  lbz       r0, -0x4(r5)
	  stb       r0, -0x4(r30)
	  lbz       r0, -0x5(r5)
	  stb       r0, -0x5(r30)
	  lbz       r0, -0x6(r5)
	  stb       r0, -0x6(r30)
	  lbz       r0, -0x7(r5)
	  stb       r0, -0x7(r30)
	  lbzu      r0, -0x8(r5)
	  stbu      r0, -0x8(r30)
	  bdnz+     .loc_0x64C
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x6B4

	.loc_0x698:
	  mtctr     r3

	.loc_0x69C:
	  lbzu      r0, -0x1(r5)
	  stbu      r0, -0x1(r30)
	  bdnz+     .loc_0x69C
	  b         .loc_0x6B4

	.loc_0x6AC:
	  li        r0, 0x30
	  stbu      r0, -0x1(r30)

	.loc_0x6B4:
	  lbz       r0, 0xC(r1)
	  extsb.    r0, r0
	  beq-      .loc_0x6CC
	  li        r0, 0x2D
	  stbu      r0, -0x1(r30)
	  b         .loc_0x6F4

	.loc_0x6CC:
	  lbz       r0, 0x1(r29)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x6E4
	  li        r0, 0x2B
	  stbu      r0, -0x1(r30)
	  b         .loc_0x6F4

	.loc_0x6E4:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x6F4
	  li        r0, 0x20
	  stbu      r0, -0x1(r30)

	.loc_0x6F4:
	  mr        r3, r30

	.loc_0x6F8:
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x48(r1)
	  lwz       r31, 0x44(r1)
	  lwz       r30, 0x40(r1)
	  lwz       r29, 0x3C(r1)
	  lwz       r28, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr

	.loc_0x71C:
	*/
}

/*
 * --INFO--
 * Address:	800C86C4
 * Size:	00012C
 */
void round_decimal(void)
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0
	  bge-      .loc_0x24

	.loc_0x8:
	  li        r0, 0
	  li        r4, 0x1
	  sth       r0, 0x2(r3)
	  li        r0, 0x30
	  stb       r4, 0x4(r3)
	  stb       r0, 0x5(r3)
	  blr

	.loc_0x24:
	  lbz       r7, 0x4(r3)
	  cmpw      r4, r7
	  bgelr-
	  add       r6, r3, r4
	  lbz       r5, 0x5(r6)
	  addi      r8, r6, 0x5
	  subi      r0, r5, 0x30
	  extsb     r6, r0
	  cmpwi     r6, 0x5
	  bne-      .loc_0x88
	  add       r5, r3, r7
	  addi      r5, r5, 0x5

	.loc_0x54:
	  subi      r5, r5, 0x1
	  cmplw     r5, r8
	  ble-      .loc_0x6C
	  lbz       r0, 0x0(r5)
	  cmpwi     r0, 0x30
	  beq+      .loc_0x54

	.loc_0x6C:
	  cmplw     r5, r8
	  bne-      .loc_0x80
	  lbz       r0, -0x1(r8)
	  rlwinm    r5,r0,0,31,31
	  b         .loc_0xE8

	.loc_0x80:
	  li        r5, 0x1
	  b         .loc_0xE8

	.loc_0x88:
	  li        r0, 0x5
	  xor       r0, r6, r0
	  srawi     r5, r0, 0x1
	  and       r0, r0, r6
	  sub       r0, r5, r0
	  rlwinm    r5,r0,1,31,31
	  b         .loc_0xE8

	.loc_0xA4:
	  lbzu      r0, -0x1(r8)
	  add       r5, r0, r5
	  subi      r0, r5, 0x30
	  extsb     r7, r0
	  xor       r0, r7, r6
	  srawi     r5, r0, 0x1
	  and       r0, r0, r7
	  sub       r0, r5, r0
	  rlwinm.   r5,r0,1,31,31
	  bne-      .loc_0xD4
	  extsb.    r0, r7
	  bne-      .loc_0xDC

	.loc_0xD4:
	  subi      r4, r4, 0x1
	  b         .loc_0xEC

	.loc_0xDC:
	  addi      r0, r7, 0x30
	  stb       r0, 0x0(r8)
	  b         .loc_0xF4

	.loc_0xE8:
	  li        r6, 0x9

	.loc_0xEC:
	  cmpwi     r4, 0
	  bne+      .loc_0xA4

	.loc_0xF4:
	  cmpwi     r5, 0
	  beq-      .loc_0x11C
	  lha       r5, 0x2(r3)
	  li        r4, 0x1
	  li        r0, 0x31
	  addi      r5, r5, 0x1
	  sth       r5, 0x2(r3)
	  stb       r4, 0x4(r3)
	  stb       r0, 0x5(r3)
	  blr

	.loc_0x11C:
	  cmpwi     r4, 0
	  beq+      .loc_0x8
	  stb       r4, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C87F0
 * Size:	000338
 */
void double2hex(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  lwz       r0, 0xC(r4)
	  stw       r31, 0x7C(r1)
	  mr        r31, r4
	  cmpwi     r0, 0x1FD
	  stw       r30, 0x78(r1)
	  mr        r30, r3
	  stfd      f1, 0x8(r1)
	  stfd      f1, 0x18(r1)
	  ble-      .loc_0x38
	  li        r3, 0
	  b         .loc_0x320

	.loc_0x38:
	  li        r3, 0
	  li        r0, 0x20
	  stb       r3, 0x10(r1)
	  addi      r3, r1, 0x10
	  addi      r4, r1, 0x40
	  sth       r0, 0x12(r1)
	  bl        -0x4CA4
	  lbz       r0, 0x45(r1)
	  cmplwi    r0, 0x49
	  bne-      .loc_0xF0
	  lha       r0, 0x18(r1)
	  rlwinm.   r0,r0,0,16,16
	  beq-      .loc_0xAC
	  lbz       r0, 0x5(r31)
	  subi      r30, r30, 0x5
	  cmplwi    r0, 0x41
	  bne-      .loc_0x94
	  lis       r4, 0x8048
	  mr        r3, r30
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0x1
	  bl        0x1FDC
	  b         .loc_0xE8

	.loc_0x94:
	  lis       r4, 0x8048
	  mr        r3, r30
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0x6
	  bl        0x1FC4
	  b         .loc_0xE8

	.loc_0xAC:
	  lbz       r0, 0x5(r31)
	  subi      r30, r30, 0x4
	  cmplwi    r0, 0x41
	  bne-      .loc_0xD4
	  lis       r4, 0x8048
	  mr        r3, r30
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0xB
	  bl        0x1F9C
	  b         .loc_0xE8

	.loc_0xD4:
	  lis       r4, 0x8048
	  mr        r3, r30
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0xF
	  bl        0x1F84

	.loc_0xE8:
	  mr        r3, r30
	  b         .loc_0x320

	.loc_0xF0:
	  cmplwi    r0, 0x4E
	  bne-      .loc_0x188
	  lbz       r0, 0x8(r1)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x144
	  lbz       r0, 0x5(r31)
	  subi      r30, r30, 0x5
	  cmplwi    r0, 0x41
	  bne-      .loc_0x12C
	  lis       r4, 0x8048
	  mr        r3, r30
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0x13
	  bl        0x1F44
	  b         .loc_0x180

	.loc_0x12C:
	  lis       r4, 0x8048
	  mr        r3, r30
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0x18
	  bl        0x1F2C
	  b         .loc_0x180

	.loc_0x144:
	  lbz       r0, 0x5(r31)
	  subi      r30, r30, 0x4
	  cmplwi    r0, 0x41
	  bne-      .loc_0x16C
	  lis       r4, 0x8048
	  mr        r3, r30
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0x1D
	  bl        0x1F04
	  b         .loc_0x180

	.loc_0x16C:
	  lis       r4, 0x8048
	  mr        r3, r30
	  subi      r4, r4, 0x5F50
	  addi      r4, r4, 0x21
	  bl        0x1EEC

	.loc_0x180:
	  mr        r3, r30
	  b         .loc_0x320

	.loc_0x188:
	  li        r8, 0
	  li        r9, 0x1
	  lha       r0, 0x18(r1)
	  li        r7, 0x64
	  stb       r9, 0x30(r1)
	  mr        r4, r30
	  rlwinm    r0,r0,28,21,31
	  addi      r5, r1, 0x20
	  extsh     r3, r0
	  stb       r9, 0x31(r1)
	  subi      r3, r3, 0x3FF
	  stb       r8, 0x32(r1)
	  stb       r8, 0x33(r1)
	  lwz       r6, 0x30(r1)
	  stb       r8, 0x34(r1)
	  stb       r7, 0x35(r1)
	  lwz       r0, 0x34(r1)
	  stw       r8, 0x38(r1)
	  stw       r9, 0x3C(r1)
	  stw       r6, 0x20(r1)
	  stw       r0, 0x24(r1)
	  stw       r8, 0x28(r1)
	  stw       r9, 0x2C(r1)
	  bl        0x468
	  lbz       r0, 0x5(r31)
	  cmplwi    r0, 0x61
	  bne-      .loc_0x204
	  li        r0, 0x70
	  subi      r4, r3, 0x1
	  stb       r0, -0x1(r3)
	  b         .loc_0x210

	.loc_0x204:
	  li        r0, 0x50
	  subi      r4, r3, 0x1
	  stb       r0, -0x1(r3)

	.loc_0x210:
	  lwz       r8, 0xC(r31)
	  addi      r6, r1, 0x8
	  mtctr     r8
	  cmpwi     r8, 0x1
	  blt-      .loc_0x28C

	.loc_0x224:
	  rlwinm    r5,r8,1,31,31
	  rlwinm    r0,r8,0,31,31
	  add       r3, r5, r8
	  srawi     r3, r3, 0x1
	  xor       r0, r0, r5
	  addi      r3, r3, 0x1
	  lbzx      r7, r6, r3
	  sub.      r0, r0, r5
	  rlwinm    r0,r7,28,28,31
	  extsb     r3, r0
	  beq-      .loc_0x254
	  rlwinm    r3,r7,0,28,31

	.loc_0x254:
	  extsb     r0, r3
	  cmpwi     r0, 0xA
	  bge-      .loc_0x268
	  addi      r0, r3, 0x30
	  b         .loc_0x280

	.loc_0x268:
	  lbz       r0, 0x5(r31)
	  cmplwi    r0, 0x61
	  bne-      .loc_0x27C
	  addi      r0, r3, 0x57
	  b         .loc_0x280

	.loc_0x27C:
	  addi      r0, r3, 0x37

	.loc_0x280:
	  stbu      r0, -0x1(r4)
	  subi      r8, r8, 0x1
	  bdnz+     .loc_0x224

	.loc_0x28C:
	  lwz       r0, 0xC(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x2A4
	  lbz       r0, 0x3(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x2AC

	.loc_0x2A4:
	  li        r0, 0x2E
	  stbu      r0, -0x1(r4)

	.loc_0x2AC:
	  lbz       r0, 0x5(r31)
	  li        r3, 0x31
	  stb       r3, -0x1(r4)
	  cmplwi    r0, 0x61
	  bne-      .loc_0x2CC
	  li        r0, 0x78
	  stbu      r0, -0x2(r4)
	  b         .loc_0x2D4

	.loc_0x2CC:
	  li        r0, 0x58
	  stbu      r0, -0x2(r4)

	.loc_0x2D4:
	  lha       r0, 0x18(r1)
	  li        r3, 0x30
	  stbu      r3, -0x1(r4)
	  rlwinm.   r0,r0,0,16,16
	  beq-      .loc_0x2F4
	  li        r0, 0x2D
	  stbu      r0, -0x1(r4)
	  b         .loc_0x31C

	.loc_0x2F4:
	  lbz       r0, 0x1(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x30C
	  li        r0, 0x2B
	  stbu      r0, -0x1(r4)
	  b         .loc_0x31C

	.loc_0x30C:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x31C
	  li        r0, 0x20
	  stbu      r0, -0x1(r4)

	.loc_0x31C:
	  mr        r3, r4

	.loc_0x320:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C8B28
 * Size:	000314
 */
void longlong2str(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  stmw      r22, 0x8(r1)
	  mr        r23, r5
	  xor       r5, r4, r0
	  mr        r24, r6
	  mr        r30, r4
	  mr        r31, r3
	  subi      r27, r23, 0x1
	  li        r25, 0
	  li        r26, 0
	  stb       r0, -0x1(r23)
	  xor       r0, r3, r0
	  or.       r0, r5, r0
	  bne-      .loc_0x70
	  lwz       r0, 0xC(r24)
	  cmpwi     r0, 0
	  bne-      .loc_0x70
	  lbz       r0, 0x3(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  lbz       r0, 0x5(r24)
	  cmplwi    r0, 0x6F
	  beq-      .loc_0x70

	.loc_0x68:
	  mr        r3, r27
	  b         .loc_0x300

	.loc_0x70:
	  lbz       r5, 0x5(r24)
	  subi      r0, r5, 0x58
	  cmplwi    r0, 0x20
	  bgt-      .loc_0x108
	  lis       r5, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r5, r5, 0x6F28
	  lwzx      r0, r5, r0
	  mtctr     r0
	  bctr
	  li        r0, 0
	  xoris     r5, r3, 0x8000
	  xoris     r3, r0, 0x8000
	  li        r28, 0xA
	  subc      r0, r4, r0
	  li        r29, 0
	  subfe     r3, r3, r5
	  subfe     r3, r5, r5
	  neg.      r3, r3
	  beq-      .loc_0x108
	  subfic    r30, r30, 0
	  li        r25, 0x1
	  subfze    r31, r31
	  b         .loc_0x108
	  li        r0, 0
	  li        r28, 0x8
	  stb       r0, 0x1(r24)
	  li        r29, 0
	  b         .loc_0x108
	  li        r0, 0
	  li        r28, 0xA
	  stb       r0, 0x1(r24)
	  li        r29, 0
	  b         .loc_0x108
	  li        r0, 0
	  li        r28, 0x10
	  stb       r0, 0x1(r24)
	  li        r29, 0

	.loc_0x108:
	  mr        r3, r31
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r28
	  bl        -0x6D44
	  mr        r22, r4
	  mr        r3, r31
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r28
	  bl        -0x6F80
	  cmpwi     r22, 0xA
	  mr        r30, r4
	  mr        r31, r3
	  bge-      .loc_0x14C
	  addi      r0, r22, 0x30
	  b         .loc_0x164

	.loc_0x14C:
	  lbz       r0, 0x5(r24)
	  cmplwi    r0, 0x78
	  bne-      .loc_0x160
	  addi      r0, r22, 0x57
	  b         .loc_0x164

	.loc_0x160:
	  addi      r0, r22, 0x37

	.loc_0x164:
	  li        r4, 0
	  stbu      r0, -0x1(r27)
	  xor       r3, r30, r4
	  addi      r26, r26, 0x1
	  xor       r0, r31, r4
	  or.       r0, r3, r0
	  bne+      .loc_0x108
	  li        r3, 0x8
	  xor       r0, r29, r4
	  xor       r3, r28, r3
	  or.       r0, r3, r0
	  bne-      .loc_0x1B8
	  lbz       r0, 0x3(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x1B8
	  lbz       r0, 0x0(r27)
	  cmpwi     r0, 0x30
	  beq-      .loc_0x1B8
	  li        r0, 0x30
	  addi      r26, r26, 0x1
	  stbu      r0, -0x1(r27)

	.loc_0x1B8:
	  lbz       r0, 0x0(r24)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x21C
	  lwz       r0, 0x8(r24)
	  cmpwi     r25, 0
	  stw       r0, 0xC(r24)
	  bne-      .loc_0x1E0
	  lbz       r0, 0x1(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x1EC

	.loc_0x1E0:
	  lwz       r3, 0xC(r24)
	  subi      r0, r3, 0x1
	  stw       r0, 0xC(r24)

	.loc_0x1EC:
	  li        r3, 0x10
	  li        r0, 0
	  xor       r3, r28, r3
	  xor       r0, r29, r0
	  or.       r0, r3, r0
	  bne-      .loc_0x21C
	  lbz       r0, 0x3(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x21C
	  lwz       r3, 0xC(r24)
	  subi      r0, r3, 0x2
	  stw       r0, 0xC(r24)

	.loc_0x21C:
	  lwz       r3, 0xC(r24)
	  sub       r0, r23, r27
	  add       r0, r3, r0
	  cmpwi     r0, 0x1FD
	  ble-      .loc_0x238
	  li        r3, 0
	  b         .loc_0x300

	.loc_0x238:
	  cmpw      r26, r3
	  sub       r3, r3, r26
	  li        r4, 0x30
	  bge-      .loc_0x28C
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0x280

	.loc_0x254:
	  stb       r4, -0x1(r27)
	  stb       r4, -0x2(r27)
	  stb       r4, -0x3(r27)
	  stb       r4, -0x4(r27)
	  stb       r4, -0x5(r27)
	  stb       r4, -0x6(r27)
	  stb       r4, -0x7(r27)
	  stbu      r4, -0x8(r27)
	  bdnz+     .loc_0x254
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x28C

	.loc_0x280:
	  mtctr     r3

	.loc_0x284:
	  stbu      r4, -0x1(r27)
	  bdnz+     .loc_0x284

	.loc_0x28C:
	  li        r3, 0x10
	  li        r0, 0
	  xor       r3, r28, r3
	  xor       r0, r29, r0
	  or.       r0, r3, r0
	  bne-      .loc_0x2C0
	  lbz       r0, 0x3(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C0
	  lbz       r3, 0x5(r24)
	  li        r0, 0x30
	  stb       r3, -0x1(r27)
	  stbu      r0, -0x2(r27)

	.loc_0x2C0:
	  cmpwi     r25, 0
	  beq-      .loc_0x2D4
	  li        r0, 0x2D
	  stbu      r0, -0x1(r27)
	  b         .loc_0x2FC

	.loc_0x2D4:
	  lbz       r0, 0x1(r24)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2EC
	  li        r0, 0x2B
	  stbu      r0, -0x1(r27)
	  b         .loc_0x2FC

	.loc_0x2EC:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x2FC
	  li        r0, 0x20
	  stbu      r0, -0x1(r27)

	.loc_0x2FC:
	  mr        r3, r27

	.loc_0x300:
	  lmw       r22, 0x8(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C8E3C
 * Size:	000258
 */
void long2str(void)
{
	/*
	.loc_0x0:
	  li        r6, 0
	  cmpwi     r3, 0
	  stb       r6, -0x1(r4)
	  subi      r6, r4, 0x1
	  li        r8, 0
	  li        r7, 0
	  bne-      .loc_0x48
	  lwz       r9, 0xC(r5)
	  cmpwi     r9, 0
	  bne-      .loc_0x48
	  lbz       r9, 0x3(r5)
	  cmplwi    r9, 0
	  beq-      .loc_0x40
	  lbz       r9, 0x5(r5)
	  cmplwi    r9, 0x6F
	  beq-      .loc_0x48

	.loc_0x40:
	  mr        r3, r6
	  blr

	.loc_0x48:
	  lbz       r9, 0x5(r5)
	  subi      r10, r9, 0x58
	  cmplwi    r10, 0x20
	  bgt-      .loc_0xB4
	  lis       r9, 0x804A
	  rlwinm    r10,r10,2,0,29
	  addi      r9, r9, 0x6FAC
	  lwzx      r9, r9, r10
	  mtctr     r9
	  bctr
	  cmpwi     r3, 0
	  li        r0, 0xA
	  bge-      .loc_0xB4
	  neg       r3, r3
	  li        r8, 0x1
	  b         .loc_0xB4
	  li        r9, 0
	  li        r0, 0x8
	  stb       r9, 0x1(r5)
	  b         .loc_0xB4
	  li        r9, 0
	  li        r0, 0xA
	  stb       r9, 0x1(r5)
	  b         .loc_0xB4
	  li        r9, 0
	  li        r0, 0x10
	  stb       r9, 0x1(r5)

	.loc_0xB4:
	  lbz       r9, 0x5(r5)

	.loc_0xB8:
	  divwu     r10, r3, r0
	  mullw     r10, r10, r0
	  sub       r10, r3, r10
	  divwu     r3, r3, r0
	  cmpwi     r10, 0xA
	  bge-      .loc_0xD8
	  addi      r10, r10, 0x30
	  b         .loc_0xEC

	.loc_0xD8:
	  cmplwi    r9, 0x78
	  bne-      .loc_0xE8
	  addi      r10, r10, 0x57
	  b         .loc_0xEC

	.loc_0xE8:
	  addi      r10, r10, 0x37

	.loc_0xEC:
	  cmplwi    r3, 0
	  stb       r10, -0x1(r6)
	  subi      r6, r6, 0x1
	  addi      r7, r7, 0x1
	  bne+      .loc_0xB8
	  cmplwi    r0, 0x8
	  bne-      .loc_0x12C
	  lbz       r3, 0x3(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0x12C
	  lbz       r3, 0x0(r6)
	  cmpwi     r3, 0x30
	  beq-      .loc_0x12C
	  li        r3, 0x30
	  addi      r7, r7, 0x1
	  stbu      r3, -0x1(r6)

	.loc_0x12C:
	  lbz       r3, 0x0(r5)
	  cmplwi    r3, 0x2
	  bne-      .loc_0x180
	  lwz       r3, 0x8(r5)
	  cmpwi     r8, 0
	  stw       r3, 0xC(r5)
	  bne-      .loc_0x154
	  lbz       r3, 0x1(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0x160

	.loc_0x154:
	  lwz       r3, 0xC(r5)
	  subi      r3, r3, 0x1
	  stw       r3, 0xC(r5)

	.loc_0x160:
	  cmplwi    r0, 0x10
	  bne-      .loc_0x180
	  lbz       r3, 0x3(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0x180
	  lwz       r3, 0xC(r5)
	  subi      r3, r3, 0x2
	  stw       r3, 0xC(r5)

	.loc_0x180:
	  lwz       r9, 0xC(r5)
	  sub       r3, r4, r6
	  add       r3, r9, r3
	  cmpwi     r3, 0x1FD
	  ble-      .loc_0x19C
	  li        r3, 0
	  blr

	.loc_0x19C:
	  cmpw      r7, r9
	  sub       r4, r9, r7
	  li        r7, 0x30
	  bge-      .loc_0x1F0
	  rlwinm.   r3,r4,29,3,31
	  mtctr     r3
	  beq-      .loc_0x1E4

	.loc_0x1B8:
	  stb       r7, -0x1(r6)
	  stb       r7, -0x2(r6)
	  stb       r7, -0x3(r6)
	  stb       r7, -0x4(r6)
	  stb       r7, -0x5(r6)
	  stb       r7, -0x6(r6)
	  stb       r7, -0x7(r6)
	  stbu      r7, -0x8(r6)
	  bdnz+     .loc_0x1B8
	  andi.     r4, r4, 0x7
	  beq-      .loc_0x1F0

	.loc_0x1E4:
	  mtctr     r4

	.loc_0x1E8:
	  stbu      r7, -0x1(r6)
	  bdnz+     .loc_0x1E8

	.loc_0x1F0:
	  cmplwi    r0, 0x10
	  bne-      .loc_0x214
	  lbz       r0, 0x3(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x214
	  lbz       r3, 0x5(r5)
	  li        r0, 0x30
	  stb       r3, -0x1(r6)
	  stbu      r0, -0x2(r6)

	.loc_0x214:
	  cmpwi     r8, 0
	  beq-      .loc_0x228
	  li        r0, 0x2D
	  stbu      r0, -0x1(r6)
	  b         .loc_0x250

	.loc_0x228:
	  lbz       r0, 0x1(r5)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x240
	  li        r0, 0x2B
	  stbu      r0, -0x1(r6)
	  b         .loc_0x250

	.loc_0x240:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x250
	  li        r0, 0x20
	  stbu      r0, -0x1(r6)

	.loc_0x250:
	  mr        r3, r6
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C9094
 * Size:	000504
 */
void parse_format(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  li        r7, 0
	  lbz       r6, 0x1(r3)
	  stw       r0, 0x34(r1)
	  li        r0, 0x1
	  extsb     r6, r6
	  stw       r31, 0x2C(r1)
	  cmpwi     r6, 0x25
	  addi      r31, r3, 0x1
	  stw       r30, 0x28(r1)
	  mr        r30, r5
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  stb       r7, 0x9(r1)
	  stb       r0, 0x8(r1)
	  stb       r7, 0xA(r1)
	  stb       r7, 0xB(r1)
	  stb       r7, 0xC(r1)
	  stw       r7, 0x10(r1)
	  stw       r7, 0x14(r1)
	  bne-      .loc_0x7C
	  stb       r6, 0xD(r1)
	  addi      r3, r31, 0x1
	  lwz       r4, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  stw       r7, 0x8(r30)
	  stw       r7, 0xC(r30)
	  b         .loc_0x4E8

	.loc_0x7C:
	  subi      r0, r6, 0x20
	  li        r4, 0x1
	  cmplwi    r0, 0x10
	  bgt-      .loc_0xF8
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x7110
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r0, 0
	  stb       r0, 0x8(r1)
	  b         .loc_0xFC
	  li        r0, 0x1
	  stb       r0, 0x9(r1)
	  b         .loc_0xFC
	  lbz       r0, 0x9(r1)
	  cmplwi    r0, 0x1
	  beq-      .loc_0xFC
	  li        r0, 0x2
	  stb       r0, 0x9(r1)
	  b         .loc_0xFC
	  li        r0, 0x1
	  stb       r0, 0xB(r1)
	  b         .loc_0xFC
	  lbz       r0, 0x8(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0xFC
	  li        r0, 0x2
	  stb       r0, 0x8(r1)
	  b         .loc_0xFC

	.loc_0xF8:
	  li        r4, 0

	.loc_0xFC:
	  cmpwi     r4, 0
	  beq-      .loc_0x110
	  lbzu      r6, 0x1(r31)
	  extsb     r6, r6
	  b         .loc_0x7C

	.loc_0x110:
	  cmpwi     r6, 0x2A
	  bne-      .loc_0x150
	  mr        r3, r29
	  li        r4, 0x1
	  bl        -0x7BC4
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0
	  stw       r0, 0x10(r1)
	  bge-      .loc_0x144
	  neg       r0, r0
	  li        r3, 0
	  stb       r3, 0x8(r1)
	  stw       r0, 0x10(r1)

	.loc_0x144:
	  lbzu      r6, 0x1(r31)
	  extsb     r6, r6
	  b         .loc_0x188

	.loc_0x150:
	  lis       r3, 0x804A
	  addi      r3, r3, 0x6BF0
	  b         .loc_0x178

	.loc_0x15C:
	  lwz       r0, 0x10(r1)
	  mulli     r0, r0, 0xA
	  add       r4, r6, r0
	  lbzu      r6, 0x1(r31)
	  subi      r0, r4, 0x30
	  stw       r0, 0x10(r1)
	  extsb     r6, r6

	.loc_0x178:
	  rlwinm    r0,r6,0,24,31
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,27,27
	  bne+      .loc_0x15C

	.loc_0x188:
	  lwz       r5, 0x10(r1)
	  cmpwi     r5, 0x1FD
	  ble-      .loc_0x1C0
	  li        r0, 0xFF
	  lwz       r4, 0x8(r1)
	  stb       r0, 0xD(r1)
	  addi      r3, r31, 0x1
	  lwz       r0, 0x14(r1)
	  stw       r4, 0x0(r30)
	  lwz       r4, 0xC(r1)
	  stw       r4, 0x4(r30)
	  stw       r5, 0x8(r30)
	  stw       r0, 0xC(r30)
	  b         .loc_0x4E8

	.loc_0x1C0:
	  cmpwi     r6, 0x2E
	  bne-      .loc_0x248
	  lbzu      r6, 0x1(r31)
	  li        r0, 0x1
	  stb       r0, 0xA(r1)
	  extsb     r6, r6
	  cmpwi     r6, 0x2A
	  bne-      .loc_0x210
	  mr        r3, r29
	  li        r4, 0x1
	  bl        -0x7C8C
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0
	  stw       r0, 0x14(r1)
	  bge-      .loc_0x204
	  li        r0, 0
	  stb       r0, 0xA(r1)

	.loc_0x204:
	  lbzu      r6, 0x1(r31)
	  extsb     r6, r6
	  b         .loc_0x248

	.loc_0x210:
	  lis       r3, 0x804A
	  addi      r3, r3, 0x6BF0
	  b         .loc_0x238

	.loc_0x21C:
	  lwz       r0, 0x14(r1)
	  mulli     r0, r0, 0xA
	  add       r4, r6, r0
	  lbzu      r6, 0x1(r31)
	  subi      r0, r4, 0x30
	  stw       r0, 0x14(r1)
	  extsb     r6, r6

	.loc_0x238:
	  rlwinm    r0,r6,0,24,31
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,27,27
	  bne+      .loc_0x21C

	.loc_0x248:
	  cmpwi     r6, 0x68
	  li        r4, 0x1
	  beq-      .loc_0x270
	  bge-      .loc_0x264
	  cmpwi     r6, 0x4C
	  beq-      .loc_0x2C4
	  b         .loc_0x2D0

	.loc_0x264:
	  cmpwi     r6, 0x6C
	  beq-      .loc_0x298
	  b         .loc_0x2D0

	.loc_0x270:
	  lbz       r0, 0x1(r31)
	  li        r3, 0x2
	  stb       r3, 0xC(r1)
	  extsb     r0, r0
	  cmpwi     r0, 0x68
	  bne-      .loc_0x2D4
	  stb       r4, 0xC(r1)
	  mr        r6, r0
	  addi      r31, r31, 0x1
	  b         .loc_0x2D4

	.loc_0x298:
	  lbz       r0, 0x1(r31)
	  li        r3, 0x3
	  stb       r3, 0xC(r1)
	  extsb     r3, r0
	  cmpwi     r3, 0x6C
	  bne-      .loc_0x2D4
	  li        r0, 0x4
	  mr        r6, r3
	  stb       r0, 0xC(r1)
	  addi      r31, r31, 0x1
	  b         .loc_0x2D4

	.loc_0x2C4:
	  li        r0, 0x5
	  stb       r0, 0xC(r1)
	  b         .loc_0x2D4

	.loc_0x2D0:
	  li        r4, 0

	.loc_0x2D4:
	  cmpwi     r4, 0
	  beq-      .loc_0x2E4
	  lbzu      r6, 0x1(r31)
	  extsb     r6, r6

	.loc_0x2E4:
	  subi      r0, r6, 0x41
	  stb       r6, 0xD(r1)
	  cmplwi    r0, 0x37
	  bgt-      .loc_0x4BC
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x7030
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lbz       r0, 0xC(r1)
	  cmplwi    r0, 0x5
	  bne-      .loc_0x324
	  li        r0, 0xFF
	  stb       r0, 0xD(r1)
	  b         .loc_0x4C4

	.loc_0x324:
	  lbz       r0, 0xA(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x33C
	  li        r0, 0x1
	  stw       r0, 0x14(r1)
	  b         .loc_0x4C4

	.loc_0x33C:
	  lbz       r0, 0x8(r1)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x4C4
	  li        r0, 0x1
	  stb       r0, 0x8(r1)
	  b         .loc_0x4C4
	  lbz       r0, 0xC(r1)
	  cmplwi    r0, 0x2
	  beq-      .loc_0x368
	  cmplwi    r0, 0x4
	  bne-      .loc_0x374

	.loc_0x368:
	  li        r0, 0xFF
	  stb       r0, 0xD(r1)
	  b         .loc_0x4C4

	.loc_0x374:
	  lbz       r0, 0xA(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C4
	  li        r0, 0x6
	  stw       r0, 0x14(r1)
	  b         .loc_0x4C4
	  lbz       r0, 0xA(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x3A0
	  li        r0, 0xD
	  stw       r0, 0x14(r1)

	.loc_0x3A0:
	  lbz       r0, 0xC(r1)
	  cmplwi    r0, 0x2
	  beq-      .loc_0x3BC
	  cmplwi    r0, 0x4
	  beq-      .loc_0x3BC
	  cmplwi    r0, 0x1
	  bne-      .loc_0x4C4

	.loc_0x3BC:
	  li        r0, 0xFF
	  stb       r0, 0xD(r1)
	  b         .loc_0x4C4
	  lwz       r0, 0x14(r1)
	  cmpwi     r0, 0
	  bne-      .loc_0x3DC
	  li        r0, 0x1
	  stw       r0, 0x14(r1)

	.loc_0x3DC:
	  lbz       r0, 0xC(r1)
	  cmplwi    r0, 0x2
	  beq-      .loc_0x3F8
	  cmplwi    r0, 0x4
	  beq-      .loc_0x3F8
	  cmplwi    r0, 0x1
	  bne-      .loc_0x404

	.loc_0x3F8:
	  li        r0, 0xFF
	  stb       r0, 0xD(r1)
	  b         .loc_0x4C4

	.loc_0x404:
	  lbz       r0, 0xA(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C4
	  li        r0, 0x6
	  stw       r0, 0x14(r1)
	  b         .loc_0x4C4
	  li        r5, 0x78
	  li        r4, 0x1
	  li        r3, 0x3
	  li        r0, 0x8
	  stb       r5, 0xD(r1)
	  stb       r4, 0xB(r1)
	  stb       r3, 0xC(r1)
	  stw       r0, 0x14(r1)
	  b         .loc_0x4C4
	  lbz       r3, 0xC(r1)
	  cmplwi    r3, 0x3
	  bne-      .loc_0x458
	  li        r0, 0x6
	  stb       r0, 0xC(r1)
	  b         .loc_0x4C4

	.loc_0x458:
	  lbz       r0, 0xA(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x46C
	  cmplwi    r3, 0
	  beq-      .loc_0x4C4

	.loc_0x46C:
	  li        r0, 0xFF
	  stb       r0, 0xD(r1)
	  b         .loc_0x4C4
	  lbz       r0, 0xC(r1)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x490
	  li        r0, 0x6
	  stb       r0, 0xC(r1)
	  b         .loc_0x4C4

	.loc_0x490:
	  cmplwi    r0, 0
	  beq-      .loc_0x4C4
	  li        r0, 0xFF
	  stb       r0, 0xD(r1)
	  b         .loc_0x4C4
	  lbz       r0, 0xC(r1)
	  cmplwi    r0, 0x5
	  bne-      .loc_0x4C4
	  li        r0, 0xFF
	  stb       r0, 0xD(r1)
	  b         .loc_0x4C4

	.loc_0x4BC:
	  li        r0, 0xFF
	  stb       r0, 0xD(r1)

	.loc_0x4C4:
	  lwz       r4, 0x8(r1)
	  addi      r3, r31, 0x1
	  lwz       r0, 0xC(r1)
	  stw       r4, 0x0(r30)
	  lwz       r4, 0x10(r1)
	  stw       r0, 0x4(r30)
	  lwz       r0, 0x14(r1)
	  stw       r4, 0x8(r30)
	  stw       r0, 0xC(r30)

	.loc_0x4E8:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}
