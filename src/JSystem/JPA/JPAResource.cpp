

/*
 * --INFO--
 * Address:	800955EC
 * Size:	000070
 */
void JPAResource::JPAResource()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x8(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x0(r3)
	  stw       r0, 0x18(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x2C(r3)
	  stw       r0, 0x30(r3)
	  stw       r0, 0x34(r3)
	  stw       r0, 0x38(r3)
	  stb       r0, 0x47(r3)
	  stb       r0, 0x46(r3)
	  stb       r0, 0x45(r3)
	  stb       r0, 0x44(r3)
	  stb       r0, 0x43(r3)
	  stb       r0, 0x42(r3)
	  stb       r0, 0x41(r3)
	  stb       r0, 0x40(r3)
	  stb       r0, 0x3F(r3)
	  stb       r0, 0x3E(r3)
	  sth       r0, 0x3C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009565C
 * Size:	001540
 */
void JPAResource::init(JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x64(r1)
	  stmw      r14, 0x18(r1)
	  mr        r16, r4
	  mr        r15, r3
	  lwz       r4, 0x1C(r3)
	  lwz       r3, 0x20(r3)
	  lwz       r4, 0x0(r4)
	  cmplwi    r3, 0
	  lwz       r0, 0x8(r4)
	  lbz       r6, 0x21(r4)
	  lbz       r4, 0x1E(r4)
	  rlwinm    r31,r0,0,19,19
	  rlwinm    r27,r0,0,17,17
	  rlwinm    r30,r6,0,30,30
	  rlwinm    r28,r4,0,31,31
	  rlwinm    r4,r0,0,7,7
	  stw       r4, 0x14(r1)
	  rlwinm    r4,r0,0,11,11
	  rlwinm    r29,r6,0,28,28
	  stw       r4, 0x10(r1)
	  beq-      .loc_0x74
	  lwz       r4, 0x0(r3)
	  lwz       r4, 0x8(r4)
	  rlwinm.   r4,r4,0,31,31
	  beq-      .loc_0x74
	  li        r5, 0x1

	.loc_0x74:
	  cmplwi    r3, 0
	  rlwinm    r26,r5,0,24,31
	  li        r5, 0
	  beq-      .loc_0x98
	  lwz       r4, 0x0(r3)
	  lwz       r4, 0x8(r4)
	  rlwinm.   r4,r4,0,15,15
	  beq-      .loc_0x98
	  li        r5, 0x1

	.loc_0x98:
	  cmplwi    r3, 0
	  rlwinm    r25,r5,0,24,31
	  li        r6, 0
	  beq-      .loc_0xC4
	  lwz       r4, 0x0(r3)
	  lwz       r5, 0x8(r4)
	  rlwinm.   r4,r5,0,15,15
	  beq-      .loc_0xC4
	  rlwinm.   r4,r5,0,14,14
	  beq-      .loc_0xC4
	  li        r6, 0x1

	.loc_0xC4:
	  cmplwi    r3, 0
	  rlwinm    r14,r6,0,24,31
	  li        r4, 0
	  beq-      .loc_0xE8
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x8(r3)
	  rlwinm.   r3,r3,0,7,7
	  beq-      .loc_0xE8
	  li        r4, 0x1

	.loc_0xE8:
	  rlwinm.   r24,r4,0,24,31
	  li        r4, 0
	  bne-      .loc_0x110
	  lwz       r3, 0x24(r15)
	  cmplwi    r3, 0
	  beq-      .loc_0x114
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x8(r3)
	  rlwinm.   r3,r3,0,7,7
	  beq-      .loc_0x114

	.loc_0x110:
	  li        r4, 0x1

	.loc_0x114:
	  rlwinm    r5,r0,0,28,31
	  rlwinm    r23,r4,0,24,31
	  cmplwi    r5, 0x5
	  li        r6, 0x1
	  beq-      .loc_0x134
	  cmplwi    r5, 0x6
	  beq-      .loc_0x134
	  li        r6, 0

	.loc_0x134:
	  subfic    r3, r5, 0x1
	  li        r7, 0x1
	  orc       r4, r7, r5
	  cntlzw    r5, r5
	  rlwinm    r3,r3,31,1,31
	  rlwinm    r22,r6,0,24,31
	  sub       r3, r4, r3
	  rlwinm.   r4,r3,1,31,31
	  rlwinm    r3,r5,27,24,31
	  stw       r3, 0xC(r1)
	  bne-      .loc_0x164
	  li        r7, 0

	.loc_0x164:
	  lwz       r3, 0x24(r15)
	  rlwinm    r21,r7,0,24,31
	  li        r5, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x1A8
	  lwz       r4, 0x0(r3)
	  li        r6, 0x1
	  lwz       r4, 0x8(r4)
	  rlwinm    r4,r4,0,28,31
	  cmplwi    r4, 0x5
	  beq-      .loc_0x19C
	  cmplwi    r4, 0x6
	  beq-      .loc_0x19C
	  mr        r6, r5

	.loc_0x19C:
	  rlwinm.   r4,r6,0,24,31
	  beq-      .loc_0x1A8
	  li        r5, 0x1

	.loc_0x1A8:
	  cmplwi    r3, 0
	  rlwinm    r20,r5,0,24,31
	  li        r5, 0
	  beq-      .loc_0x1CC
	  lwz       r4, 0x0(r3)
	  lwz       r4, 0x8(r4)
	  rlwinm.   r4,r4,0,28,31
	  bne-      .loc_0x1CC
	  li        r5, 0x1

	.loc_0x1CC:
	  rlwinm    r4,r5,0,24,31
	  cmplwi    r3, 0
	  stw       r4, 0x8(r1)
	  li        r4, 0
	  beq-      .loc_0x20C
	  lwz       r3, 0x0(r3)
	  li        r5, 0x1
	  lwz       r3, 0x8(r3)
	  rlwinm.   r3,r3,0,28,31
	  beq-      .loc_0x200
	  cmplwi    r3, 0x1
	  beq-      .loc_0x200
	  mr        r5, r4

	.loc_0x200:
	  rlwinm.   r3,r5,0,24,31
	  beq-      .loc_0x20C
	  li        r4, 0x1

	.loc_0x20C:
	  rlwinm    r3,r0,5,31,31
	  rlwinm    r0,r0,4,31,31
	  cntlzw    r3, r3
	  cmpwi     r27, 0
	  cntlzw    r0, r0
	  rlwinm    r19,r4,0,24,31
	  rlwinm    r18,r3,27,24,31
	  rlwinm    r17,r0,27,24,31
	  beq-      .loc_0x244
	  cmpwi     r28, 0
	  beq-      .loc_0x244
	  lbz       r3, 0x41(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x41(r15)

	.loc_0x244:
	  cmpwi     r31, 0
	  beq-      .loc_0x290
	  cmpwi     r30, 0
	  beq-      .loc_0x260
	  lbz       r3, 0x41(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x41(r15)

	.loc_0x260:
	  cmpwi     r29, 0
	  beq-      .loc_0x274
	  lbz       r3, 0x41(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x41(r15)

	.loc_0x274:
	  cmpwi     r30, 0
	  bne-      .loc_0x284
	  cmpwi     r29, 0
	  beq-      .loc_0x290

	.loc_0x284:
	  lbz       r3, 0x41(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x41(r15)

	.loc_0x290:
	  lbz       r0, 0x41(r15)
	  cmplwi    r0, 0
	  beq-      .loc_0x2B0
	  mr        r5, r16
	  rlwinm    r3,r0,2,22,29
	  li        r4, 0x4
	  bl        -0x72324
	  stw       r3, 0x0(r15)

	.loc_0x2B0:
	  cmpwi     r27, 0
	  li        r3, 0
	  beq-      .loc_0x364
	  cmpwi     r28, 0
	  beq-      .loc_0x364
	  lwz       r3, 0x1C(r15)
	  lwz       r3, 0x0(r3)
	  lbz       r0, 0x1E(r3)
	  rlwinm    r0,r0,30,29,31
	  cmpwi     r0, 0x2
	  beq-      .loc_0x328
	  bge-      .loc_0x2F0
	  cmpwi     r0, 0
	  beq-      .loc_0x300
	  bge-      .loc_0x314
	  b         .loc_0x360

	.loc_0x2F0:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x350
	  bge-      .loc_0x360
	  b         .loc_0x33C

	.loc_0x300:
	  lis       r4, 0x8009
	  lwz       r3, 0x0(r15)
	  subi      r0, r4, 0x3F90
	  stw       r0, 0x0(r3)
	  b         .loc_0x360

	.loc_0x314:
	  lis       r4, 0x8009
	  lwz       r3, 0x0(r15)
	  subi      r0, r4, 0x3F1C
	  stw       r0, 0x0(r3)
	  b         .loc_0x360

	.loc_0x328:
	  lis       r4, 0x8009
	  lwz       r3, 0x0(r15)
	  subi      r0, r4, 0x3EA0
	  stw       r0, 0x0(r3)
	  b         .loc_0x360

	.loc_0x33C:
	  lis       r4, 0x8009
	  lwz       r3, 0x0(r15)
	  subi      r0, r4, 0x3DF4
	  stw       r0, 0x0(r3)
	  b         .loc_0x360

	.loc_0x350:
	  lis       r4, 0x8009
	  lwz       r3, 0x0(r15)
	  subi      r0, r4, 0x3D60
	  stw       r0, 0x0(r3)

	.loc_0x360:
	  li        r3, 0x1

	.loc_0x364:
	  cmpwi     r31, 0
	  beq-      .loc_0x46C
	  cmpwi     r30, 0
	  beq-      .loc_0x38C
	  lis       r5, 0x8009
	  lwz       r4, 0x0(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x4570
	  stwx      r5, r4, r0

	.loc_0x38C:
	  cmpwi     r29, 0
	  beq-      .loc_0x3AC
	  lis       r5, 0x8009
	  lwz       r4, 0x0(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x44F4
	  stwx      r5, r4, r0

	.loc_0x3AC:
	  cmpwi     r30, 0
	  bne-      .loc_0x3BC
	  cmpwi     r29, 0
	  beq-      .loc_0x46C

	.loc_0x3BC:
	  lwz       r4, 0x1C(r15)
	  lwz       r4, 0x0(r4)
	  lbz       r0, 0x21(r4)
	  rlwinm    r0,r0,28,29,31
	  cmpwi     r0, 0x2
	  beq-      .loc_0x428
	  bge-      .loc_0x3E8
	  cmpwi     r0, 0
	  beq-      .loc_0x3F8
	  bge-      .loc_0x410
	  b         .loc_0x46C

	.loc_0x3E8:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x458
	  bge-      .loc_0x46C
	  b         .loc_0x440

	.loc_0x3F8:
	  lis       r5, 0x8009
	  lwz       r4, 0x0(r15)
	  subi      r5, r5, 0x4778
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x46C

	.loc_0x410:
	  lis       r5, 0x8009
	  lwz       r4, 0x0(r15)
	  subi      r5, r5, 0x4724
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x46C

	.loc_0x428:
	  lis       r5, 0x8009
	  lwz       r4, 0x0(r15)
	  subi      r5, r5, 0x46B8
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x46C

	.loc_0x440:
	  lis       r5, 0x8009
	  lwz       r4, 0x0(r15)
	  subi      r5, r5, 0x462C
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x46C

	.loc_0x458:
	  lis       r5, 0x8009
	  lwz       r4, 0x0(r15)
	  subi      r5, r5, 0x45B0
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0

	.loc_0x46C:
	  cmpwi     r27, 0
	  bne-      .loc_0x488
	  cmpwi     r28, 0
	  beq-      .loc_0x488
	  lbz       r3, 0x44(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x44(r15)

	.loc_0x488:
	  cmpwi     r22, 0
	  bne-      .loc_0x4AC
	  cmpwi     r25, 0
	  bne-      .loc_0x4A0
	  cmpwi     r14, 0
	  beq-      .loc_0x4AC

	.loc_0x4A0:
	  lbz       r3, 0x44(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x44(r15)

	.loc_0x4AC:
	  cmpwi     r31, 0
	  bne-      .loc_0x4FC
	  cmpwi     r30, 0
	  beq-      .loc_0x4C8
	  lbz       r3, 0x44(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x44(r15)

	.loc_0x4C8:
	  cmpwi     r29, 0
	  beq-      .loc_0x4DC
	  lbz       r3, 0x44(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x44(r15)

	.loc_0x4DC:
	  cmpwi     r30, 0
	  bne-      .loc_0x4EC
	  cmpwi     r29, 0
	  beq-      .loc_0x508

	.loc_0x4EC:
	  lbz       r3, 0x44(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x44(r15)
	  b         .loc_0x508

	.loc_0x4FC:
	  lbz       r3, 0x44(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x44(r15)

	.loc_0x508:
	  cmpwi     r26, 0
	  beq-      .loc_0x598
	  lwz       r3, 0x1C(r15)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,28,31
	  beq-      .loc_0x580
	  lwz       r3, 0x20(r15)
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x8(r3)
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x574
	  rlwinm.   r0,r3,24,30,31
	  bne-      .loc_0x558
	  rlwinm.   r0,r3,22,30,31
	  bne-      .loc_0x558
	  lbz       r3, 0x44(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x44(r15)
	  b         .loc_0x580

	.loc_0x558:
	  lbz       r3, 0x44(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x44(r15)
	  lbz       r3, 0x44(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x44(r15)
	  b         .loc_0x580

	.loc_0x574:
	  lbz       r3, 0x44(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x44(r15)

	.loc_0x580:
	  lbz       r3, 0x44(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x44(r15)
	  lbz       r3, 0x44(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x44(r15)

	.loc_0x598:
	  lbz       r0, 0x44(r15)
	  cmplwi    r0, 0
	  beq-      .loc_0x5B8
	  mr        r5, r16
	  rlwinm    r3,r0,2,22,29
	  li        r4, 0x4
	  bl        -0x7262C
	  stw       r3, 0xC(r15)

	.loc_0x5B8:
	  cmpwi     r27, 0
	  li        r3, 0
	  bne-      .loc_0x66C
	  cmpwi     r28, 0
	  beq-      .loc_0x66C
	  lwz       r3, 0x1C(r15)
	  lwz       r3, 0x0(r3)
	  lbz       r0, 0x1E(r3)
	  rlwinm    r0,r0,30,29,31
	  cmpwi     r0, 0x2
	  beq-      .loc_0x630
	  bge-      .loc_0x5F8
	  cmpwi     r0, 0
	  beq-      .loc_0x608
	  bge-      .loc_0x61C
	  b         .loc_0x668

	.loc_0x5F8:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x658
	  bge-      .loc_0x668
	  b         .loc_0x644

	.loc_0x608:
	  lis       r4, 0x8009
	  lwz       r3, 0xC(r15)
	  subi      r0, r4, 0x3F54
	  stw       r0, 0x0(r3)
	  b         .loc_0x668

	.loc_0x61C:
	  lis       r4, 0x8009
	  lwz       r3, 0xC(r15)
	  subi      r0, r4, 0x3EE4
	  stw       r0, 0x0(r3)
	  b         .loc_0x668

	.loc_0x630:
	  lis       r4, 0x8009
	  lwz       r3, 0xC(r15)
	  subi      r0, r4, 0x3E50
	  stw       r0, 0x0(r3)
	  b         .loc_0x668

	.loc_0x644:
	  lis       r4, 0x8009
	  lwz       r3, 0xC(r15)
	  subi      r0, r4, 0x3DD8
	  stw       r0, 0x0(r3)
	  b         .loc_0x668

	.loc_0x658:
	  lis       r4, 0x8009
	  lwz       r3, 0xC(r15)
	  subi      r0, r4, 0x3D44
	  stw       r0, 0x0(r3)

	.loc_0x668:
	  li        r3, 0x1

	.loc_0x66C:
	  cmpwi     r22, 0
	  bne-      .loc_0x6C0
	  cmpwi     r25, 0
	  bne-      .loc_0x684
	  cmpwi     r14, 0
	  beq-      .loc_0x6C0

	.loc_0x684:
	  cmpwi     r14, 0
	  beq-      .loc_0x6A8
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  addi      r5, r5, 0x1388
	  stwx      r5, r4, r0
	  b         .loc_0x6C0

	.loc_0x6A8:
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  addi      r5, r5, 0x1308
	  stwx      r5, r4, r0

	.loc_0x6C0:
	  cmpwi     r31, 0
	  bne-      .loc_0x7D0
	  cmpwi     r30, 0
	  beq-      .loc_0x6E8
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x4530
	  stwx      r5, r4, r0

	.loc_0x6E8:
	  cmpwi     r29, 0
	  beq-      .loc_0x708
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x44B4
	  stwx      r5, r4, r0

	.loc_0x708:
	  cmpwi     r30, 0
	  bne-      .loc_0x718
	  cmpwi     r29, 0
	  beq-      .loc_0x7E8

	.loc_0x718:
	  lwz       r4, 0x1C(r15)
	  lwz       r4, 0x0(r4)
	  lbz       r0, 0x21(r4)
	  rlwinm    r0,r0,28,29,31
	  cmpwi     r0, 0x2
	  beq-      .loc_0x784
	  bge-      .loc_0x744
	  cmpwi     r0, 0
	  beq-      .loc_0x754
	  bge-      .loc_0x76C
	  b         .loc_0x7C8

	.loc_0x744:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x7B4
	  bge-      .loc_0x7C8
	  b         .loc_0x79C

	.loc_0x754:
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  subi      r5, r5, 0x474C
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x7C8

	.loc_0x76C:
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  subi      r5, r5, 0x46F4
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x7C8

	.loc_0x784:
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  subi      r5, r5, 0x4678
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x7C8

	.loc_0x79C:
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  subi      r5, r5, 0x4620
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x7C8

	.loc_0x7B4:
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  subi      r5, r5, 0x45A4
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0

	.loc_0x7C8:
	  addi      r3, r3, 0x1
	  b         .loc_0x7E8

	.loc_0x7D0:
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x4478
	  stwx      r5, r4, r0

	.loc_0x7E8:
	  cmpwi     r26, 0
	  beq-      .loc_0x96C
	  lwz       r4, 0x1C(r15)
	  lwz       r4, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  rlwinm.   r0,r0,0,28,31
	  beq-      .loc_0x8D4
	  lwz       r4, 0x20(r15)
	  lwz       r4, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x8BC
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  addi      r5, r5, 0x10A0
	  stwx      r5, r4, r0
	  lwz       r4, 0x20(r15)
	  lwz       r4, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  rlwinm.   r4,r0,22,30,31
	  bne-      .loc_0x84C
	  rlwinm.   r0,r0,24,30,31
	  beq-      .loc_0x8D4

	.loc_0x84C:
	  cmpwi     r4, 0x1
	  beq-      .loc_0x888
	  bge-      .loc_0x864
	  cmpwi     r4, 0
	  bge-      .loc_0x870
	  b         .loc_0x8B4

	.loc_0x864:
	  cmpwi     r4, 0x3
	  bge-      .loc_0x8B4
	  b         .loc_0x8A0

	.loc_0x870:
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  addi      r5, r5, 0x111C
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x8B4

	.loc_0x888:
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  addi      r5, r5, 0x118C
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x8B4

	.loc_0x8A0:
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  addi      r5, r5, 0x127C
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0

	.loc_0x8B4:
	  addi      r3, r3, 0x1
	  b         .loc_0x8D4

	.loc_0x8BC:
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  addi      r5, r5, 0x1110
	  stwx      r5, r4, r0

	.loc_0x8D4:
	  lis       r5, 0x8009
	  lwz       r4, 0xC(r15)
	  addi      r5, r5, 0x1030
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x20(r15)
	  lwz       r4, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  rlwinm    r0,r0,24,30,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x938
	  bge-      .loc_0x910
	  cmpwi     r0, 0
	  bge-      .loc_0x91C
	  b         .loc_0x96C

	.loc_0x910:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x96C
	  b         .loc_0x954

	.loc_0x91C:
	  addi      r0, r3, 0x1
	  lis       r4, 0x8009
	  lwz       r3, 0xC(r15)
	  addi      r4, r4, 0x111C
	  rlwinm    r0,r0,2,0,29
	  stwx      r4, r3, r0
	  b         .loc_0x96C

	.loc_0x938:
	  addi      r0, r3, 0x1
	  lis       r4, 0x8009
	  lwz       r3, 0xC(r15)
	  addi      r4, r4, 0x1128
	  rlwinm    r0,r0,2,0,29
	  stwx      r4, r3, r0
	  b         .loc_0x96C

	.loc_0x954:
	  addi      r0, r3, 0x1
	  lis       r4, 0x8009
	  lwz       r3, 0xC(r15)
	  addi      r4, r4, 0x11F0
	  rlwinm    r0,r0,2,0,29
	  stwx      r4, r3, r0

	.loc_0x96C:
	  lwz       r3, 0x24(r15)
	  cmplwi    r3, 0
	  beq-      .loc_0x994
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,9,9
	  beq-      .loc_0x994
	  lbz       r3, 0x46(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x46(r15)

	.loc_0x994:
	  lwz       r3, 0x24(r15)
	  cmplwi    r3, 0
	  beq-      .loc_0x9BC
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,8,8
	  beq-      .loc_0x9BC
	  lbz       r3, 0x46(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x46(r15)

	.loc_0x9BC:
	  lbz       r0, 0x46(r15)
	  cmplwi    r0, 0
	  beq-      .loc_0x9DC
	  mr        r5, r16
	  rlwinm    r3,r0,2,22,29
	  li        r4, 0x4
	  bl        -0x72A50
	  stw       r3, 0x14(r15)

	.loc_0x9DC:
	  lwz       r3, 0x24(r15)
	  li        r0, 0
	  cmplwi    r3, 0
	  beq-      .loc_0xA10
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x8(r3)
	  rlwinm.   r3,r3,0,9,9
	  beq-      .loc_0xA10
	  lis       r4, 0x8009
	  lwz       r3, 0x14(r15)
	  subi      r4, r4, 0x1068
	  li        r0, 0x1
	  stw       r4, 0x0(r3)

	.loc_0xA10:
	  lwz       r3, 0x24(r15)
	  cmplwi    r3, 0
	  beq-      .loc_0xA40
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x8(r3)
	  rlwinm.   r3,r3,0,8,8
	  beq-      .loc_0xA40
	  lis       r4, 0x8009
	  lwz       r3, 0x14(r15)
	  subi      r4, r4, 0x1094
	  rlwinm    r0,r0,2,0,29
	  stwx      r4, r3, r0

	.loc_0xA40:
	  cmpwi     r18, 0
	  beq-      .loc_0xA5C
	  cmpwi     r22, 0
	  beq-      .loc_0xA5C
	  lbz       r3, 0x42(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x42(r15)

	.loc_0xA5C:
	  lbz       r3, 0x42(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x42(r15)
	  lwz       r0, 0x28(r15)
	  cmplwi    r0, 0
	  beq-      .loc_0xA80
	  lbz       r3, 0x42(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x42(r15)

	.loc_0xA80:
	  cmpwi     r27, 0
	  bne-      .loc_0xA90
	  cmpwi     r28, 0
	  bne-      .loc_0xA9C

	.loc_0xA90:
	  lbz       r3, 0x42(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x42(r15)

	.loc_0xA9C:
	  lbz       r3, 0x42(r15)
	  cmpwi     r21, 0
	  addi      r0, r3, 0x1
	  stb       r0, 0x42(r15)
	  beq-      .loc_0xABC
	  lbz       r3, 0x42(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x42(r15)

	.loc_0xABC:
	  cmpwi     r21, 0
	  beq-      .loc_0xAD8
	  cmpwi     r26, 0
	  bne-      .loc_0xAD8
	  lbz       r3, 0x42(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x42(r15)

	.loc_0xAD8:
	  cmpwi     r31, 0
	  bne-      .loc_0xAF8
	  cmpwi     r30, 0
	  bne-      .loc_0xAF0
	  cmpwi     r25, 0
	  beq-      .loc_0xAF8

	.loc_0xAF0:
	  cmpwi     r29, 0
	  bne-      .loc_0xB04

	.loc_0xAF8:
	  lbz       r3, 0x42(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x42(r15)

	.loc_0xB04:
	  lbz       r0, 0x42(r15)
	  cmplwi    r0, 0
	  beq-      .loc_0xB24
	  mr        r5, r16
	  rlwinm    r3,r0,2,22,29
	  li        r4, 0x4
	  bl        -0x72B98
	  stw       r3, 0x4(r15)

	.loc_0xB24:
	  cmpwi     r18, 0
	  li        r3, 0
	  beq-      .loc_0xB7C
	  cmpwi     r22, 0
	  beq-      .loc_0xB7C
	  lwz       r3, 0x1C(r15)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,28,31
	  cmplwi    r0, 0x5
	  bne-      .loc_0xB68
	  lis       r3, 0x8009
	  lwz       r4, 0x4(r15)
	  subi      r0, r3, 0x264C
	  li        r3, 0x1
	  stw       r0, 0x0(r4)
	  b         .loc_0xB7C

	.loc_0xB68:
	  lis       r3, 0x8009
	  lwz       r4, 0x4(r15)
	  subi      r0, r3, 0x20C4
	  li        r3, 0x1
	  stw       r0, 0x0(r4)

	.loc_0xB7C:
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x1718
	  stwx      r5, r4, r0
	  lwz       r0, 0x28(r15)
	  cmplwi    r0, 0
	  beq-      .loc_0xBB8
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  addi      r5, r5, 0xF2C
	  stwx      r5, r4, r0

	.loc_0xBB8:
	  cmpwi     r28, 0
	  bne-      .loc_0xBDC
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x4080
	  stwx      r5, r4, r0
	  b         .loc_0xBFC

	.loc_0xBDC:
	  cmpwi     r27, 0
	  beq-      .loc_0xBFC
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x402C
	  stwx      r5, r4, r0

	.loc_0xBFC:
	  cmpwi     r21, 0
	  beq-      .loc_0xC20
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x4430
	  stwx      r5, r4, r0
	  b         .loc_0xCAC

	.loc_0xC20:
	  lwz       r0, 0x10(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0xC48
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x43C0
	  stwx      r5, r4, r0
	  b         .loc_0xCAC

	.loc_0xC48:
	  lwz       r0, 0x14(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0xC94
	  cmpwi     r22, 0
	  beq-      .loc_0xC78
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x4388
	  stwx      r5, r4, r0
	  b         .loc_0xCAC

	.loc_0xC78:
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x43F8
	  stwx      r5, r4, r0
	  b         .loc_0xCAC

	.loc_0xC94:
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x4430
	  stwx      r5, r4, r0

	.loc_0xCAC:
	  cmpwi     r21, 0
	  beq-      .loc_0xCCC
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x3D08
	  stwx      r5, r4, r0

	.loc_0xCCC:
	  cmpwi     r21, 0
	  beq-      .loc_0xD1C
	  cmpwi     r26, 0
	  bne-      .loc_0xD1C
	  lwz       r0, 0xC(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0xD04
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x4EEC
	  stwx      r5, r4, r0
	  b         .loc_0xD1C

	.loc_0xD04:
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x4EB0
	  stwx      r5, r4, r0

	.loc_0xD1C:
	  cmpwi     r31, 0
	  beq-      .loc_0xD68
	  cmpwi     r22, 0
	  bne-      .loc_0xD34
	  cmpwi     r25, 0
	  bne-      .loc_0xD4C

	.loc_0xD34:
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  subi      r5, r5, 0x4CCC
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0xDCC

	.loc_0xD4C:
	  beq-      .loc_0xDCC
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  subi      r5, r5, 0x4D50
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0xDCC

	.loc_0xD68:
	  cmpwi     r30, 0
	  bne-      .loc_0xDB0
	  cmpwi     r25, 0
	  bne-      .loc_0xDB0
	  cmpwi     r29, 0
	  bne-      .loc_0xD98
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  subi      r5, r5, 0x4CCC
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0xDCC

	.loc_0xD98:
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  subi      r5, r5, 0x4DEC
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0xDCC

	.loc_0xDB0:
	  cmpwi     r29, 0
	  bne-      .loc_0xDCC
	  lis       r5, 0x8009
	  lwz       r4, 0x4(r15)
	  subi      r5, r5, 0x4D50
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0

	.loc_0xDCC:
	  cmpwi     r17, 0
	  beq-      .loc_0xDE8
	  cmpwi     r20, 0
	  beq-      .loc_0xDE8
	  lbz       r3, 0x43(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x43(r15)

	.loc_0xDE8:
	  lbz       r3, 0x43(r15)
	  cmpwi     r19, 0
	  addi      r0, r3, 0x1
	  stb       r0, 0x43(r15)
	  beq-      .loc_0xE08
	  lbz       r3, 0x43(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x43(r15)

	.loc_0xE08:
	  lwz       r3, 0x24(r15)
	  cmplwi    r3, 0
	  beq-      .loc_0xE40
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x8(r3)
	  rlwinm.   r0,r3,0,8,8
	  bne-      .loc_0xE40
	  rlwinm.   r0,r3,0,14,14
	  bne-      .loc_0xE40
	  rlwinm.   r0,r3,0,13,13
	  bne-      .loc_0xE40
	  lbz       r3, 0x43(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x43(r15)

	.loc_0xE40:
	  lbz       r0, 0x43(r15)
	  cmplwi    r0, 0
	  beq-      .loc_0xE60
	  mr        r5, r16
	  rlwinm    r3,r0,2,22,29
	  li        r4, 0x4
	  bl        -0x72ED4
	  stw       r3, 0x8(r15)

	.loc_0xE60:
	  cmpwi     r17, 0
	  li        r3, 0
	  beq-      .loc_0xEB8
	  cmpwi     r20, 0
	  beq-      .loc_0xEB8
	  lwz       r3, 0x24(r15)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,28,31
	  cmplwi    r0, 0x5
	  bne-      .loc_0xEA4
	  lis       r3, 0x8009
	  lwz       r4, 0x8(r15)
	  subi      r0, r3, 0x264C
	  li        r3, 0x1
	  stw       r0, 0x0(r4)
	  b         .loc_0xEB8

	.loc_0xEA4:
	  lis       r3, 0x8009
	  lwz       r4, 0x8(r15)
	  subi      r0, r3, 0x20C4
	  li        r3, 0x1
	  stw       r0, 0x0(r4)

	.loc_0xEB8:
	  lis       r5, 0x8009
	  lwz       r4, 0x8(r15)
	  rlwinm    r0,r3,2,0,29
	  cmpwi     r19, 0
	  subi      r5, r5, 0x1718
	  addi      r3, r3, 0x1
	  stwx      r5, r4, r0
	  beq-      .loc_0xEF0
	  lis       r5, 0x8009
	  lwz       r4, 0x8(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x3D08
	  stwx      r5, r4, r0

	.loc_0xEF0:
	  lwz       r4, 0x24(r15)
	  cmplwi    r4, 0
	  beq-      .loc_0xF30
	  lwz       r4, 0x0(r4)
	  lwz       r4, 0x8(r4)
	  rlwinm.   r0,r4,0,8,8
	  bne-      .loc_0xF30
	  rlwinm.   r0,r4,0,14,14
	  bne-      .loc_0xF30
	  rlwinm.   r0,r4,0,13,13
	  bne-      .loc_0xF30
	  lis       r5, 0x8009
	  lwz       r4, 0x8(r15)
	  subi      r5, r5, 0x11BC
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0

	.loc_0xF30:
	  cmpwi     r18, 0
	  beq-      .loc_0xF4C
	  cmpwi     r22, 0
	  bne-      .loc_0xF4C
	  lbz       r3, 0x45(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x45(r15)

	.loc_0xF4C:
	  lbz       r3, 0x45(r15)
	  cmpwi     r27, 0
	  addi      r0, r3, 0x1
	  stb       r0, 0x45(r15)
	  bne-      .loc_0xF74
	  cmpwi     r28, 0
	  beq-      .loc_0xF74
	  lbz       r3, 0x45(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x45(r15)

	.loc_0xF74:
	  cmpwi     r21, 0
	  beq-      .loc_0xF84
	  cmpwi     r26, 0
	  bne-      .loc_0xF9C

	.loc_0xF84:
	  lwz       r0, 0x14(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0xFA8
	  lwz       r0, 0x10(r1)
	  cmpwi     r0, 0
	  bne-      .loc_0xFA8

	.loc_0xF9C:
	  lbz       r3, 0x45(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x45(r15)

	.loc_0xFA8:
	  cmpwi     r31, 0
	  bne-      .loc_0xFC8
	  cmpwi     r30, 0
	  bne-      .loc_0xFE0
	  cmpwi     r29, 0
	  bne-      .loc_0xFE0
	  cmpwi     r25, 0
	  bne-      .loc_0xFE0

	.loc_0xFC8:
	  cmpwi     r31, 0
	  beq-      .loc_0xFEC
	  cmpwi     r25, 0
	  beq-      .loc_0xFEC
	  cmpwi     r22, 0
	  bne-      .loc_0xFEC

	.loc_0xFE0:
	  lbz       r3, 0x45(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x45(r15)

	.loc_0xFEC:
	  lbz       r0, 0x45(r15)
	  cmplwi    r0, 0
	  beq-      .loc_0x100C
	  mr        r5, r16
	  rlwinm    r3,r0,2,22,29
	  li        r4, 0x4
	  bl        -0x73080
	  stw       r3, 0x10(r15)

	.loc_0x100C:
	  cmpwi     r18, 0
	  li        r3, 0
	  beq-      .loc_0x1130
	  cmpwi     r22, 0
	  bne-      .loc_0x1130
	  lwz       r3, 0x1C(r15)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,28,31
	  cmplwi    r0, 0xA
	  bgt-      .loc_0x112C
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x352C
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  cmpwi     r24, 0
	  beq-      .loc_0x106C
	  lis       r4, 0x8009
	  lwz       r3, 0x10(r15)
	  subi      r0, r4, 0x3A10
	  stw       r0, 0x0(r3)
	  b         .loc_0x112C

	.loc_0x106C:
	  lis       r4, 0x8009
	  lwz       r3, 0x10(r15)
	  subi      r0, r4, 0x3AF8
	  stw       r0, 0x0(r3)
	  b         .loc_0x112C
	  cmpwi     r24, 0
	  beq-      .loc_0x109C
	  lis       r4, 0x8009
	  lwz       r3, 0x10(r15)
	  subi      r0, r4, 0x37FC
	  stw       r0, 0x0(r3)
	  b         .loc_0x112C

	.loc_0x109C:
	  lis       r4, 0x8009
	  lwz       r3, 0x10(r15)
	  subi      r0, r4, 0x38F8
	  stw       r0, 0x0(r3)
	  b         .loc_0x112C
	  cmpwi     r24, 0
	  beq-      .loc_0x10CC
	  lis       r4, 0x8009
	  lwz       r3, 0x10(r15)
	  subi      r0, r4, 0x3004
	  stw       r0, 0x0(r3)
	  b         .loc_0x112C

	.loc_0x10CC:
	  lis       r4, 0x8009
	  lwz       r3, 0x10(r15)
	  subi      r0, r4, 0x3354
	  stw       r0, 0x0(r3)
	  b         .loc_0x112C
	  lis       r4, 0x8009
	  lwz       r3, 0x10(r15)
	  subi      r0, r4, 0x2C08
	  stw       r0, 0x0(r3)
	  b         .loc_0x112C
	  lis       r4, 0x8009
	  lwz       r3, 0x10(r15)
	  subi      r0, r4, 0x2A00
	  stw       r0, 0x0(r3)
	  b         .loc_0x112C
	  lis       r4, 0x8009
	  lwz       r3, 0x10(r15)
	  subi      r0, r4, 0x28B0
	  stw       r0, 0x0(r3)
	  b         .loc_0x112C
	  lis       r4, 0x8009
	  lwz       r3, 0x10(r15)
	  subi      r0, r4, 0x2814
	  stw       r0, 0x0(r3)

	.loc_0x112C:
	  li        r3, 0x1

	.loc_0x1130:
	  lis       r5, 0x8009
	  lwz       r4, 0x10(r15)
	  rlwinm    r0,r3,2,0,29
	  cmpwi     r27, 0
	  subi      r5, r5, 0x16DC
	  addi      r3, r3, 0x1
	  stwx      r5, r4, r0
	  bne-      .loc_0x1170
	  cmpwi     r28, 0
	  beq-      .loc_0x1170
	  lis       r5, 0x8009
	  lwz       r4, 0x10(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x3FDC
	  stwx      r5, r4, r0

	.loc_0x1170:
	  cmpwi     r21, 0
	  beq-      .loc_0x11C4
	  cmpwi     r26, 0
	  beq-      .loc_0x11C4
	  lwz       r0, 0xC(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x11A8
	  lis       r5, 0x8009
	  lwz       r4, 0x10(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x4E74
	  stwx      r5, r4, r0
	  b         .loc_0x11F4

	.loc_0x11A8:
	  lis       r5, 0x8009
	  lwz       r4, 0x10(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x4E30
	  stwx      r5, r4, r0
	  b         .loc_0x11F4

	.loc_0x11C4:
	  lwz       r0, 0x14(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x11F4
	  lwz       r0, 0x10(r1)
	  cmpwi     r0, 0
	  bne-      .loc_0x11F4
	  lis       r5, 0x8009
	  lwz       r4, 0x10(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x41F0
	  stwx      r5, r4, r0

	.loc_0x11F4:
	  cmpwi     r31, 0
	  bne-      .loc_0x129C
	  cmpwi     r30, 0
	  beq-      .loc_0x123C
	  cmpwi     r29, 0
	  beq-      .loc_0x1224
	  lis       r5, 0x8009
	  lwz       r4, 0x10(r15)
	  subi      r5, r5, 0x4A54
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x12C0

	.loc_0x1224:
	  lis       r5, 0x8009
	  lwz       r4, 0x10(r15)
	  subi      r5, r5, 0x4B04
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x12C0

	.loc_0x123C:
	  cmpwi     r25, 0
	  beq-      .loc_0x127C
	  cmpwi     r29, 0
	  beq-      .loc_0x1264
	  lis       r5, 0x8009
	  lwz       r4, 0x10(r15)
	  subi      r5, r5, 0x4920
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x12C0

	.loc_0x1264:
	  lis       r5, 0x8009
	  lwz       r4, 0x10(r15)
	  subi      r5, r5, 0x4BB4
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x12C0

	.loc_0x127C:
	  cmpwi     r29, 0
	  beq-      .loc_0x12C0
	  lis       r5, 0x8009
	  lwz       r4, 0x10(r15)
	  subi      r5, r5, 0x47FC
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0
	  b         .loc_0x12C0

	.loc_0x129C:
	  cmpwi     r25, 0
	  beq-      .loc_0x12C0
	  cmpwi     r22, 0
	  bne-      .loc_0x12C0
	  lis       r5, 0x8009
	  lwz       r4, 0x10(r15)
	  subi      r5, r5, 0x4BB4
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0

	.loc_0x12C0:
	  cmpwi     r17, 0
	  beq-      .loc_0x12E8
	  lwz       r0, 0x24(r15)
	  cmplwi    r0, 0
	  beq-      .loc_0x12E8
	  cmpwi     r20, 0
	  bne-      .loc_0x12E8
	  lbz       r3, 0x47(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x47(r15)

	.loc_0x12E8:
	  lbz       r3, 0x47(r15)
	  cmpwi     r19, 0
	  addi      r0, r3, 0x1
	  stb       r0, 0x47(r15)
	  beq-      .loc_0x1308
	  lbz       r3, 0x47(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x47(r15)

	.loc_0x1308:
	  lwz       r3, 0x24(r15)
	  cmplwi    r3, 0
	  beq-      .loc_0x1340
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x8(r3)
	  rlwinm.   r0,r3,0,8,8
	  bne-      .loc_0x1334
	  rlwinm.   r0,r3,0,14,14
	  bne-      .loc_0x1334
	  rlwinm.   r0,r3,0,13,13
	  beq-      .loc_0x1340

	.loc_0x1334:
	  lbz       r3, 0x47(r15)
	  addi      r0, r3, 0x1
	  stb       r0, 0x47(r15)

	.loc_0x1340:
	  lbz       r0, 0x47(r15)
	  cmplwi    r0, 0
	  beq-      .loc_0x1360
	  mr        r5, r16
	  rlwinm    r3,r0,2,22,29
	  li        r4, 0x4
	  bl        -0x733D4
	  stw       r3, 0x18(r15)

	.loc_0x1360:
	  cmpwi     r17, 0
	  li        r3, 0
	  beq-      .loc_0x148C
	  lwz       r4, 0x24(r15)
	  cmplwi    r4, 0
	  beq-      .loc_0x148C
	  cmpwi     r20, 0
	  bne-      .loc_0x148C
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,28,31
	  cmplwi    r0, 0xA
	  bgt-      .loc_0x1488
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x3500
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  cmpwi     r23, 0
	  beq-      .loc_0x13C8
	  lis       r4, 0x8009
	  lwz       r3, 0x18(r15)
	  subi      r0, r4, 0x3A10
	  stw       r0, 0x0(r3)
	  b         .loc_0x1488

	.loc_0x13C8:
	  lis       r4, 0x8009
	  lwz       r3, 0x18(r15)
	  subi      r0, r4, 0x3AF8
	  stw       r0, 0x0(r3)
	  b         .loc_0x1488
	  cmpwi     r23, 0
	  beq-      .loc_0x13F8
	  lis       r4, 0x8009
	  lwz       r3, 0x18(r15)
	  subi      r0, r4, 0x37FC
	  stw       r0, 0x0(r3)
	  b         .loc_0x1488

	.loc_0x13F8:
	  lis       r4, 0x8009
	  lwz       r3, 0x18(r15)
	  subi      r0, r4, 0x38F8
	  stw       r0, 0x0(r3)
	  b         .loc_0x1488
	  cmpwi     r23, 0
	  beq-      .loc_0x1428
	  lis       r4, 0x8009
	  lwz       r3, 0x18(r15)
	  subi      r0, r4, 0x3004
	  stw       r0, 0x0(r3)
	  b         .loc_0x1488

	.loc_0x1428:
	  lis       r4, 0x8009
	  lwz       r3, 0x18(r15)
	  subi      r0, r4, 0x3354
	  stw       r0, 0x0(r3)
	  b         .loc_0x1488
	  lis       r4, 0x8009
	  lwz       r3, 0x18(r15)
	  subi      r0, r4, 0x2C08
	  stw       r0, 0x0(r3)
	  b         .loc_0x1488
	  lis       r4, 0x8009
	  lwz       r3, 0x18(r15)
	  subi      r0, r4, 0x2A00
	  stw       r0, 0x0(r3)
	  b         .loc_0x1488
	  lis       r4, 0x8009
	  lwz       r3, 0x18(r15)
	  subi      r0, r4, 0x28B0
	  stw       r0, 0x0(r3)
	  b         .loc_0x1488
	  lis       r4, 0x8009
	  lwz       r3, 0x18(r15)
	  subi      r0, r4, 0x2814
	  stw       r0, 0x0(r3)

	.loc_0x1488:
	  li        r3, 0x1

	.loc_0x148C:
	  lis       r5, 0x8009
	  lwz       r4, 0x18(r15)
	  rlwinm    r0,r3,2,0,29
	  cmpwi     r19, 0
	  subi      r5, r5, 0x16DC
	  addi      r3, r3, 0x1
	  stwx      r5, r4, r0
	  beq-      .loc_0x14EC
	  lwz       r0, 0x8(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x14D4
	  lis       r5, 0x8009
	  lwz       r4, 0x18(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x4E74
	  stwx      r5, r4, r0
	  b         .loc_0x14EC

	.loc_0x14D4:
	  lis       r5, 0x8009
	  lwz       r4, 0x18(r15)
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r3, 0x1
	  subi      r5, r5, 0x4E30
	  stwx      r5, r4, r0

	.loc_0x14EC:
	  lwz       r4, 0x24(r15)
	  cmplwi    r4, 0
	  beq-      .loc_0x152C
	  lwz       r4, 0x0(r4)
	  lwz       r4, 0x8(r4)
	  rlwinm.   r0,r4,0,8,8
	  bne-      .loc_0x1518
	  rlwinm.   r0,r4,0,14,14
	  bne-      .loc_0x1518
	  rlwinm.   r0,r4,0,13,13
	  beq-      .loc_0x152C

	.loc_0x1518:
	  lis       r5, 0x8009
	  lwz       r4, 0x18(r15)
	  subi      r5, r5, 0x4A54
	  rlwinm    r0,r3,2,0,29
	  stwx      r5, r4, r0

	.loc_0x152C:
	  lmw       r14, 0x18(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80096B9C
 * Size:	00055C
 */
void JPAResource::calc(JPAEmitterWorkData*, JPABaseEmitter*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stmw      r27, 0xC(r1)
	  mr        r29, r5
	  mr        r30, r3
	  mr        r28, r4
	  mr        r3, r29
	  stw       r29, 0x0(r4)
	  stw       r30, 0x4(r4)
	  stw       r0, 0x40(r4)
	  bl        -0x6800
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x548

	.loc_0x44:
	  mr        r3, r29
	  bl        -0x67D8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  li        r3, 0x1
	  b         .loc_0x548

	.loc_0x5C:
	  lwz       r0, 0xF4(r29)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0xC8
	  lwz       r3, 0xEC(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x544
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xF4(r29)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x9C
	  li        r3, 0x1
	  b         .loc_0x548

	.loc_0x9C:
	  lwz       r3, 0xEC(r29)
	  mr        r4, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xF4(r29)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x544
	  li        r3, 0x1
	  b         .loc_0x548

	.loc_0xC8:
	  mr        r3, r30
	  mr        r4, r28
	  bl        0x10D8
	  lbz       r3, 0x3E(r30)
	  subic.    r3, r3, 0x1
	  rlwinm    r6,r3,2,0,29
	  addi      r3, r3, 0x1
	  blt-      .loc_0x1F8
	  rlwinm.   r0,r3,31,1,31
	  mtctr     r0
	  beq-      .loc_0x1A0

	.loc_0xF4:
	  lwz       r4, 0x30(r30)
	  lwzx      r5, r4, r6
	  subi      r6, r6, 0x4
	  lwz       r4, 0x0(r5)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x14(r4)
	  stfs      f0, 0x18(r5)
	  lwz       r4, 0x0(r5)
	  lfs       f0, 0x18(r4)
	  stfs      f0, 0x1C(r5)
	  lfs       f0, 0x1C(r4)
	  stfs      f0, 0x20(r5)
	  lfs       f0, 0x20(r4)
	  stfs      f0, 0x24(r5)
	  lwz       r4, 0x0(r5)
	  lfs       f0, 0x24(r4)
	  stfs      f0, 0x28(r5)
	  lwz       r4, 0x30(r30)
	  lwzx      r5, r4, r6
	  subi      r6, r6, 0x4
	  lwz       r4, 0x0(r5)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x14(r4)
	  stfs      f0, 0x18(r5)
	  lwz       r4, 0x0(r5)
	  lfs       f0, 0x18(r4)
	  stfs      f0, 0x1C(r5)
	  lfs       f0, 0x1C(r4)
	  stfs      f0, 0x20(r5)
	  lfs       f0, 0x20(r4)
	  stfs      f0, 0x24(r5)
	  lwz       r4, 0x0(r5)
	  lfs       f0, 0x24(r4)
	  stfs      f0, 0x28(r5)
	  bdnz+     .loc_0xF4
	  andi.     r3, r3, 0x1
	  beq-      .loc_0x1F8

	.loc_0x1A0:
	  mtctr     r3

	.loc_0x1A4:
	  lwz       r4, 0x30(r30)
	  lwzx      r5, r4, r6
	  subi      r6, r6, 0x4
	  lwz       r4, 0x0(r5)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x14(r4)
	  stfs      f0, 0x18(r5)
	  lwz       r4, 0x0(r5)
	  lfs       f0, 0x18(r4)
	  stfs      f0, 0x1C(r5)
	  lfs       f0, 0x1C(r4)
	  stfs      f0, 0x20(r5)
	  lfs       f0, 0x20(r4)
	  stfs      f0, 0x24(r5)
	  lwz       r4, 0x0(r5)
	  lfs       f0, 0x24(r4)
	  stfs      f0, 0x28(r5)
	  bdnz+     .loc_0x1A4

	.loc_0x1F8:
	  lwz       r3, 0xEC(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x22C
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xF4(r29)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x22C
	  li        r3, 0x1
	  b         .loc_0x548

	.loc_0x22C:
	  mr        r3, r30
	  mr        r4, r28
	  bl        0x10AC
	  lbz       r3, 0x41(r30)
	  subi      r27, r3, 0x1
	  rlwinm    r31,r27,2,0,29
	  b         .loc_0x264

	.loc_0x248:
	  lwz       r4, 0x0(r30)
	  mr        r3, r28
	  lwzx      r12, r4, r31
	  mtctr     r12
	  bctrl
	  subi      r31, r31, 0x4
	  subi      r27, r27, 0x1

	.loc_0x264:
	  cmpwi     r27, 0
	  bge+      .loc_0x248
	  lbz       r3, 0x3E(r30)
	  subi      r27, r3, 0x1
	  rlwinm    r31,r27,2,0,29
	  b         .loc_0x2A4

	.loc_0x27C:
	  lwz       r3, 0x30(r30)
	  mr        r4, r28
	  lwzx      r5, r3, r31
	  lwz       r3, 0x4(r5)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  subi      r31, r31, 0x4
	  subi      r27, r27, 0x1

	.loc_0x2A4:
	  cmpwi     r27, 0
	  bge+      .loc_0x27C
	  lwz       r0, 0xF4(r29)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x2C4
	  lwz       r3, 0x2C(r30)
	  mr        r4, r28
	  bl        -0x73C0

	.loc_0x2C4:
	  lwz       r3, 0xEC(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x2F8
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xF4(r29)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x2F8
	  li        r3, 0x1
	  b         .loc_0x548

	.loc_0x2F8:
	  lwz       r30, 0xC8(r29)
	  b         .loc_0x410

	.loc_0x300:
	  lwz       r31, 0x4(r30)
	  mr        r4, r28
	  addi      r3, r30, 0x8
	  bl        -0x1ECC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x40C
	  lwz       r3, 0x4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x350
	  lwz       r4, 0x0(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x350
	  stw       r3, 0x4(r4)
	  lwz       r0, 0x0(r30)
	  lwz       r3, 0x4(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0xD0(r29)
	  subi      r0, r3, 0x1
	  stw       r0, 0xD0(r29)
	  b         .loc_0x3BC

	.loc_0x350:
	  cmplwi    r3, 0
	  beq-      .loc_0x378
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  lwz       r0, 0x4(r30)
	  stw       r0, 0xC8(r29)
	  lwz       r3, 0xD0(r29)
	  subi      r0, r3, 0x1
	  stw       r0, 0xD0(r29)
	  b         .loc_0x3BC

	.loc_0x378:
	  lwz       r3, 0x0(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x3A4
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  lwz       r0, 0x0(r30)
	  stw       r0, 0xCC(r29)
	  lwz       r3, 0xD0(r29)
	  subi      r0, r3, 0x1
	  stw       r0, 0xD0(r29)
	  b         .loc_0x3BC

	.loc_0x3A4:
	  li        r0, 0
	  stw       r0, 0xCC(r29)
	  stw       r0, 0xC8(r29)
	  lwz       r3, 0xD0(r29)
	  subi      r0, r3, 0x1
	  stw       r0, 0xD0(r29)

	.loc_0x3BC:
	  lwz       r4, 0xE0(r29)
	  lwz       r0, 0x0(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x3EC
	  li        r0, 0
	  stw       r0, 0x0(r30)
	  lwz       r0, 0x0(r4)
	  stw       r0, 0x4(r30)
	  lwz       r3, 0x0(r4)
	  stw       r30, 0x0(r3)
	  stw       r30, 0x0(r4)
	  b         .loc_0x400

	.loc_0x3EC:
	  stw       r30, 0x4(r4)
	  li        r0, 0
	  stw       r30, 0x0(r4)
	  stw       r0, 0x0(r30)
	  stw       r0, 0x4(r30)

	.loc_0x400:
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)

	.loc_0x40C:
	  mr        r30, r31

	.loc_0x410:
	  cmplwi    r30, 0
	  bne+      .loc_0x300
	  lwz       r30, 0xD4(r29)
	  b         .loc_0x530

	.loc_0x420:
	  lwz       r31, 0x4(r30)
	  mr        r4, r28
	  addi      r3, r30, 0x8
	  bl        -0x1D40
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x52C
	  lwz       r3, 0x4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x470
	  lwz       r4, 0x0(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x470
	  stw       r3, 0x4(r4)
	  lwz       r0, 0x0(r30)
	  lwz       r3, 0x4(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0xDC(r29)
	  subi      r0, r3, 0x1
	  stw       r0, 0xDC(r29)
	  b         .loc_0x4DC

	.loc_0x470:
	  cmplwi    r3, 0
	  beq-      .loc_0x498
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  lwz       r0, 0x4(r30)
	  stw       r0, 0xD4(r29)
	  lwz       r3, 0xDC(r29)
	  subi      r0, r3, 0x1
	  stw       r0, 0xDC(r29)
	  b         .loc_0x4DC

	.loc_0x498:
	  lwz       r3, 0x0(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C4
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  lwz       r0, 0x0(r30)
	  stw       r0, 0xD8(r29)
	  lwz       r3, 0xDC(r29)
	  subi      r0, r3, 0x1
	  stw       r0, 0xDC(r29)
	  b         .loc_0x4DC

	.loc_0x4C4:
	  li        r0, 0
	  stw       r0, 0xD8(r29)
	  stw       r0, 0xD4(r29)
	  lwz       r3, 0xDC(r29)
	  subi      r0, r3, 0x1
	  stw       r0, 0xDC(r29)

	.loc_0x4DC:
	  lwz       r4, 0xE0(r29)
	  lwz       r0, 0x0(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x50C
	  li        r0, 0
	  stw       r0, 0x0(r30)
	  lwz       r0, 0x0(r4)
	  stw       r0, 0x4(r30)
	  lwz       r3, 0x0(r4)
	  stw       r30, 0x0(r3)
	  stw       r30, 0x0(r4)
	  b         .loc_0x520

	.loc_0x50C:
	  stw       r30, 0x4(r4)
	  li        r0, 0
	  stw       r30, 0x0(r4)
	  stw       r0, 0x0(r30)
	  stw       r0, 0x4(r30)

	.loc_0x520:
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)

	.loc_0x52C:
	  mr        r30, r31

	.loc_0x530:
	  cmplwi    r30, 0
	  bne+      .loc_0x420
	  lwz       r3, 0x100(r29)
	  addi      r0, r3, 0x1
	  stw       r0, 0x100(r29)

	.loc_0x544:
	  li        r3, 0

	.loc_0x548:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800970F8
 * Size:	0000F0
 */
void JPAResource::draw(JPAEmitterWorkData*, JPABaseEmitter*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  stw       r30, 0x0(r4)
	  stw       r28, 0x4(r4)
	  stb       r0, 0x216(r4)
	  bl        0xF28
	  lwz       r3, 0x1C(r28)
	  mr        r4, r29
	  bl        -0x8438
	  li        r31, 0x1
	  b         .loc_0xC4

	.loc_0x50:
	  lbz       r3, 0x216(r29)
	  addi      r0, r3, 0x1
	  stb       r0, 0x216(r29)
	  lwz       r3, 0x1C(r28)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,9,9
	  beq-      .loc_0x88
	  lwz       r0, 0x24(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  mr        r3, r28
	  mr        r4, r29
	  bl        0x3A0

	.loc_0x88:
	  mr        r3, r28
	  mr        r4, r29
	  bl        .loc_0xF0
	  lwz       r3, 0x1C(r28)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,9,9
	  bne-      .loc_0xC0
	  lwz       r0, 0x24(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  mr        r3, r28
	  mr        r4, r29
	  bl        0x368

	.loc_0xC0:
	  addi      r31, r31, 0x1

	.loc_0xC4:
	  lbz       r0, 0x110(r30)
	  cmpw      r31, r0
	  ble+      .loc_0x50
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xF0:
	*/
}

/*
 * --INFO--
 * Address:	800971E8
 * Size:	000334
 */
void JPAResource::drawP(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0xF4(r3)
	  rlwinm    r0,r0,0,25,23
	  stw       r0, 0xF4(r3)
	  lwz       r3, 0x1C(r30)
	  lwz       r4, 0x0(r4)
	  lwz       r3, 0x0(r3)
	  lfs       f1, 0xB0(r4)
	  lfs       f0, 0x10(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x144(r31)
	  lwz       r3, 0x1C(r30)
	  lwz       r4, 0x0(r31)
	  lwz       r3, 0x0(r3)
	  lfs       f1, 0xB4(r4)
	  lfs       f0, 0x14(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x148(r31)
	  lwz       r3, 0x1C(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,28,31
	  bne-      .loc_0x88
	  lfs       f1, 0x144(r31)
	  lfs       f0, -0x7708(r2)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x144(r31)
	  b         .loc_0xB0

	.loc_0x88:
	  cmplwi    r0, 0x1
	  bne-      .loc_0xB0
	  lfs       f2, 0x144(r31)
	  lfs       f1, -0x7708(r2)
	  lfs       f0, -0x7704(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x144(r31)
	  lfs       f1, 0x148(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x148(r31)

	.loc_0xB0:
	  lwz       r3, 0x20(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x120
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x8(r3)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x120
	  lis       r0, 0x4330
	  rlwinm    r3,r3,20,30,31
	  stw       r3, 0xC(r1)
	  lfd       f2, -0x76F8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x7700(r2)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fsubs     f0, f0, f1
	  stfs      f0, 0x14C(r31)
	  lwz       r3, 0x20(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,18,30,31
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fsubs     f0, f0, f1
	  stfs      f0, 0x150(r31)
	  b         .loc_0x12C

	.loc_0x120:
	  lfs       f0, -0x76FC(r2)
	  stfs      f0, 0x150(r31)
	  stfs      f0, 0x14C(r31)

	.loc_0x12C:
	  lwz       r3, 0x1C(r30)
	  li        r4, 0x1
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,28,29,31
	  stw       r0, 0x200(r31)
	  lwz       r3, 0x1C(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,25,29,31
	  stw       r0, 0x204(r31)
	  lwz       r3, 0x1C(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,28,31
	  cmplwi    r0, 0x4
	  beq-      .loc_0x17C
	  cmplwi    r0, 0x8
	  beq-      .loc_0x17C
	  li        r4, 0

	.loc_0x17C:
	  rlwinm    r0,r4,0,24,31
	  stw       r0, 0x20C(r31)
	  lwz       r0, 0x20C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x198
	  li        r0, 0x2
	  b         .loc_0x1A8

	.loc_0x198:
	  lwz       r3, 0x1C(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,22,31,31

	.loc_0x1A8:
	  stw       r0, 0x208(r31)
	  lwz       r3, 0x1C(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x8(r3)
	  rlwinm.   r0,r3,0,11,11
	  beq-      .loc_0x1CC
	  rlwinm    r3,r3,8,31,31
	  addi      r0, r3, 0x1
	  b         .loc_0x1D0

	.loc_0x1CC:
	  li        r0, 0

	.loc_0x1D0:
	  stw       r0, 0x210(r31)
	  mr        r3, r30
	  lwz       r4, 0x0(r31)
	  addi      r0, r4, 0xC8
	  stw       r0, 0x1E4(r31)
	  bl        0x440
	  lbz       r3, 0x42(r30)
	  subi      r28, r3, 0x1
	  rlwinm    r29,r28,2,0,29
	  b         .loc_0x214

	.loc_0x1F8:
	  lwz       r4, 0x4(r30)
	  mr        r3, r31
	  lwzx      r12, r4, r29
	  mtctr     r12
	  bctrl
	  subi      r29, r29, 0x4
	  subi      r28, r28, 0x1

	.loc_0x214:
	  cmpwi     r28, 0
	  bge+      .loc_0x1F8
	  lwz       r3, 0x1C(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,10,10
	  beq-      .loc_0x294
	  lwz       r3, 0x0(r31)
	  lwz       r28, 0xCC(r3)
	  b         .loc_0x288

	.loc_0x23C:
	  stw       r28, 0x1E8(r31)
	  lwz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x284
	  lbz       r3, 0x45(r30)
	  subi      r27, r3, 0x1
	  rlwinm    r29,r27,2,0,29
	  b         .loc_0x27C

	.loc_0x25C:
	  lwz       r5, 0x10(r30)
	  mr        r3, r31
	  addi      r4, r28, 0x8
	  lwzx      r12, r5, r29
	  mtctr     r12
	  bctrl
	  subi      r29, r29, 0x4
	  subi      r27, r27, 0x1

	.loc_0x27C:
	  cmpwi     r27, 0
	  bge+      .loc_0x25C

	.loc_0x284:
	  lwz       r28, 0x0(r28)

	.loc_0x288:
	  cmplwi    r28, 0
	  bne+      .loc_0x23C
	  b         .loc_0x2F4

	.loc_0x294:
	  lwz       r3, 0x0(r31)
	  lwz       r27, 0xC8(r3)
	  b         .loc_0x2EC

	.loc_0x2A0:
	  stw       r27, 0x1E8(r31)
	  lwz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x2E8
	  lbz       r3, 0x45(r30)
	  subi      r28, r3, 0x1
	  rlwinm    r29,r28,2,0,29
	  b         .loc_0x2E0

	.loc_0x2C0:
	  lwz       r5, 0x10(r30)
	  mr        r3, r31
	  addi      r4, r27, 0x8
	  lwzx      r12, r5, r29
	  mtctr     r12
	  bctrl
	  subi      r29, r29, 0x4
	  subi      r28, r28, 0x1

	.loc_0x2E0:
	  cmpwi     r28, 0
	  bge+      .loc_0x2C0

	.loc_0x2E8:
	  lwz       r27, 0x4(r27)

	.loc_0x2EC:
	  cmplwi    r27, 0
	  bne+      .loc_0x2A0

	.loc_0x2F4:
	  li        r3, 0x1
	  li        r4, 0
	  bl        0x4DAF4
	  lwz       r4, 0x0(r31)
	  lwz       r3, 0xEC(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x320
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x320:
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009751C
 * Size:	0002F0
 */
void JPAResource::drawC(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0xF4(r3)
	  ori       r0, r0, 0x80
	  stw       r0, 0xF4(r3)
	  lwz       r3, 0x24(r30)
	  lwz       r4, 0x0(r3)
	  lwz       r0, 0x8(r4)
	  rlwinm.   r0,r0,0,15,15
	  beq-      .loc_0x78
	  lwz       r3, 0x1C(r30)
	  lwz       r4, 0x0(r31)
	  lwz       r3, 0x0(r3)
	  lfs       f1, 0xB0(r4)
	  lfs       f0, 0x10(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x144(r31)
	  lwz       r3, 0x1C(r30)
	  lwz       r4, 0x0(r31)
	  lwz       r3, 0x0(r3)
	  lfs       f1, 0xB4(r4)
	  lfs       f0, 0x14(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x148(r31)
	  b         .loc_0xA8

	.loc_0x78:
	  lwz       r3, 0x0(r31)
	  lfs       f0, 0x20(r4)
	  lfs       f1, 0xB0(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x144(r31)
	  lwz       r3, 0x24(r30)
	  lwz       r4, 0x0(r31)
	  lwz       r3, 0x0(r3)
	  lfs       f1, 0xB4(r4)
	  lfs       f0, 0x24(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x148(r31)

	.loc_0xA8:
	  lwz       r3, 0x24(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,28,31
	  bne-      .loc_0xD0
	  lfs       f1, 0x144(r31)
	  lfs       f0, -0x7708(r2)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x144(r31)
	  b         .loc_0xF8

	.loc_0xD0:
	  cmplwi    r0, 0x1
	  bne-      .loc_0xF8
	  lfs       f2, 0x144(r31)
	  lfs       f1, -0x7708(r2)
	  lfs       f0, -0x7704(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x144(r31)
	  lfs       f1, 0x148(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x148(r31)

	.loc_0xF8:
	  lfs       f0, -0x76FC(r2)
	  li        r4, 0x1
	  stfs      f0, 0x150(r31)
	  stfs      f0, 0x14C(r31)
	  lwz       r3, 0x24(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,28,29,31
	  stw       r0, 0x200(r31)
	  lwz       r3, 0x24(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,25,29,31
	  stw       r0, 0x204(r31)
	  lwz       r3, 0x24(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,28,31
	  cmplwi    r0, 0x4
	  beq-      .loc_0x154
	  cmplwi    r0, 0x8
	  beq-      .loc_0x154
	  li        r4, 0

	.loc_0x154:
	  rlwinm    r0,r4,0,24,31
	  stw       r0, 0x20C(r31)
	  lwz       r0, 0x20C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x170
	  li        r0, 0x2
	  b         .loc_0x180

	.loc_0x170:
	  lwz       r3, 0x24(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,22,31,31

	.loc_0x180:
	  stw       r0, 0x208(r31)
	  li        r0, 0
	  mr        r3, r30
	  mr        r4, r31
	  stw       r0, 0x210(r31)
	  lwz       r5, 0x0(r31)
	  addi      r0, r5, 0xD4
	  stw       r0, 0x1E4(r31)
	  bl        0x3C8
	  lbz       r3, 0x43(r30)
	  subi      r28, r3, 0x1
	  rlwinm    r29,r28,2,0,29
	  b         .loc_0x1D0

	.loc_0x1B4:
	  lwz       r4, 0x8(r30)
	  mr        r3, r31
	  lwzx      r12, r4, r29
	  mtctr     r12
	  bctrl
	  subi      r29, r29, 0x4
	  subi      r28, r28, 0x1

	.loc_0x1D0:
	  cmpwi     r28, 0
	  bge+      .loc_0x1B4
	  lwz       r3, 0x1C(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,10,10
	  beq-      .loc_0x250
	  lwz       r3, 0x0(r31)
	  lwz       r28, 0xD8(r3)
	  b         .loc_0x244

	.loc_0x1F8:
	  stw       r28, 0x1E8(r31)
	  lwz       r0, 0x18(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x240
	  lbz       r3, 0x47(r30)
	  subi      r27, r3, 0x1
	  rlwinm    r29,r27,2,0,29
	  b         .loc_0x238

	.loc_0x218:
	  lwz       r5, 0x18(r30)
	  mr        r3, r31
	  addi      r4, r28, 0x8
	  lwzx      r12, r5, r29
	  mtctr     r12
	  bctrl
	  subi      r29, r29, 0x4
	  subi      r27, r27, 0x1

	.loc_0x238:
	  cmpwi     r27, 0
	  bge+      .loc_0x218

	.loc_0x240:
	  lwz       r28, 0x0(r28)

	.loc_0x244:
	  cmplwi    r28, 0
	  bne+      .loc_0x1F8
	  b         .loc_0x2B0

	.loc_0x250:
	  lwz       r3, 0x0(r31)
	  lwz       r27, 0xD4(r3)
	  b         .loc_0x2A8

	.loc_0x25C:
	  stw       r27, 0x1E8(r31)
	  lwz       r0, 0x18(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x2A4
	  lbz       r3, 0x47(r30)
	  subi      r28, r3, 0x1
	  rlwinm    r29,r28,2,0,29
	  b         .loc_0x29C

	.loc_0x27C:
	  lwz       r5, 0x18(r30)
	  mr        r3, r31
	  addi      r4, r27, 0x8
	  lwzx      r12, r5, r29
	  mtctr     r12
	  bctrl
	  subi      r29, r29, 0x4
	  subi      r28, r28, 0x1

	.loc_0x29C:
	  cmpwi     r28, 0
	  bge+      .loc_0x27C

	.loc_0x2A4:
	  lwz       r27, 0x4(r27)

	.loc_0x2A8:
	  cmplwi    r27, 0
	  bne+      .loc_0x25C

	.loc_0x2B0:
	  li        r3, 0x1
	  li        r4, 0
	  bl        0x4D804
	  lwz       r4, 0x0(r31)
	  lwz       r3, 0xEC(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x2DC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2DC:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009780C
 * Size:	000278
 */
void JPAResource::setPTev()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  li        r0, 0x1
	  stmw      r26, 0x18(r1)
	  mr        r26, r3
	  li        r30, 0x1
	  li        r29, 0x1
	  li        r28, 0x1
	  li        r27, 0
	  lwz       r3, 0x1C(r3)
	  lwz       r3, 0x0(r3)
	  lwz       r31, 0x8(r3)
	  rlwinm    r3,r31,0,28,31
	  cmplwi    r3, 0x3
	  beq-      .loc_0x4C
	  cmplwi    r3, 0x7
	  beq-      .loc_0x4C
	  li        r0, 0

	.loc_0x4C:
	  rlwinm    r4,r0,0,24,31
	  lwz       r5, 0x20(r26)
	  neg       r3, r4
	  rlwinm    r0,r31,22,31,31
	  or        r3, r3, r4
	  cmplwi    r5, 0
	  srawi     r3, r3, 0x1F
	  and       r4, r0, r3
	  beq-      .loc_0x90
	  lwz       r3, 0x0(r5)
	  lwz       r3, 0x8(r3)
	  rlwinm    r0,r3,18,30,31
	  rlwinm    r3,r3,20,30,31
	  mulli     r0, r0, 0x3
	  add       r0, r3, r0
	  mulli     r6, r0, 0xC
	  b         .loc_0x94

	.loc_0x90:
	  li        r6, 0x30

	.loc_0x94:
	  mulli     r5, r4, 0x6C
	  lis       r4, 0x804A
	  li        r3, 0x9
	  addi      r0, r4, 0x3380
	  add       r4, r6, r5
	  li        r5, 0x3
	  add       r4, r4, r0
	  bl        0x4D3C4
	  rlwinm    r3,r31,7,31,31
	  rlwinm    r0,r31,7,30,30
	  add       r0, r3, r0
	  li        r5, 0x2
	  lis       r3, 0x804A
	  rlwinm    r4,r0,3,0,28
	  addi      r0, r3, 0x34E0
	  li        r3, 0xD
	  add       r4, r0, r4
	  bl        0x4D39C
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0xFF
	  bl        0x51124
	  lwz       r3, 0x28(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x218
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x180
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x2
	  bl        0x50944
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  bl        0x507F0
	  lwz       r4, 0x28(r26)
	  li        r3, 0x1
	  lwz       r4, 0x0(r4)
	  lbz       r5, 0x24(r4)
	  addi      r4, r4, 0xC
	  bl        0x50660
	  li        r0, 0
	  li        r3, 0
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x7
	  stw       r0, 0xC(r1)
	  li        r7, 0x1
	  li        r8, 0
	  li        r9, 0
	  li        r10, 0
	  bl        0x505C4
	  li        r30, 0x2
	  li        r27, 0x1
	  li        r28, 0x2

	.loc_0x180:
	  lwz       r3, 0x28(r26)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x218
	  mr        r4, r30
	  li        r3, 0x1
	  li        r5, 0x3
	  li        r6, 0xFF
	  bl        0x5106C
	  li        r3, 0x1
	  li        r4, 0xF
	  li        r5, 0x8
	  li        r6, 0
	  li        r7, 0xF
	  bl        0x50B40
	  li        r3, 0x1
	  li        r4, 0x7
	  li        r5, 0x4
	  li        r6, 0
	  li        r7, 0x7
	  bl        0x50B6C
	  li        r3, 0x1
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0x50B94
	  li        r3, 0x1
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0x50BE0
	  li        r29, 0x2
	  addi      r28, r28, 0x1

	.loc_0x218:
	  mr        r3, r29
	  bl        0x51190
	  mr        r3, r27
	  bl        0x50924
	  lwz       r3, 0x1C(r26)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,8,8
	  beq-      .loc_0x254
	  li        r3, 0x1
	  li        r4, 0x8
	  bl        0x4D588
	  li        r3, 0
	  bl        0x51E80
	  b         .loc_0x25C

	.loc_0x254:
	  li        r3, 0x1
	  bl        0x51E74

	.loc_0x25C:
	  mr        r3, r28
	  bl        0x4D530
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80097A84
 * Size:	000164
 */
void JPAResource::setCTev(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x24(r3)
	  lwz       r3, 0x0(r3)
	  lwz       r4, 0x8(r3)
	  rlwinm    r3,r4,0,28,31
	  cmplwi    r3, 0x3
	  beq-      .loc_0x44
	  cmplwi    r3, 0x7
	  beq-      .loc_0x44
	  li        r0, 0

	.loc_0x44:
	  rlwinm    r5,r0,0,24,31
	  lis       r3, 0x804A
	  neg       r0, r5
	  rlwinm    r4,r4,22,31,31
	  or        r5, r0, r5
	  addi      r0, r3, 0x3380
	  srawi     r5, r5, 0x1F
	  li        r3, 0x9
	  and       r4, r4, r5
	  li        r5, 0x3
	  mulli     r4, r4, 0x6C
	  add       r4, r4, r0
	  addi      r4, r4, 0x30
	  bl        0x4D184
	  lis       r4, 0x804A
	  li        r3, 0xD
	  addi      r4, r4, 0x34E0
	  li        r5, 0x2
	  bl        0x4D170
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0xFF
	  bl        0x50EF8
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x4
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0x4D1DC
	  li        r3, 0
	  bl        0x50830
	  li        r3, 0x1
	  bl        0x51068
	  li        r3, 0
	  bl        0x507FC
	  lwz       r3, 0x24(r30)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,11,11
	  beq-      .loc_0x104
	  li        r3, 0x1
	  li        r4, 0x8
	  bl        0x4D460
	  li        r3, 0
	  bl        0x51D58
	  b         .loc_0x10C

	.loc_0x104:
	  li        r3, 0x1
	  bl        0x51D4C

	.loc_0x10C:
	  li        r3, 0x1
	  bl        0x4D408
	  lwz       r3, 0x24(r30)
	  li        r4, 0x1
	  lwz       r5, 0x4(r31)
	  lwz       r3, 0x0(r3)
	  lwz       r6, 0x8(r31)
	  lbz       r0, 0x45(r3)
	  lwz       r3, 0x38(r5)
	  rlwinm    r0,r0,1,0,30
	  lwz       r5, 0x8(r6)
	  lhzx      r0, r3, r0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r5, r0
	  addi      r3, r3, 0x4
	  bl        -0x6459C
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
 * Address:	80097BE8
 * Size:	000074
 */
void JPAResource::calc_p(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  lbz       r3, 0x44(r27)
	  subi      r30, r3, 0x1
	  rlwinm    r31,r30,2,0,29
	  b         .loc_0x58

	.loc_0x38:
	  lwz       r5, 0xC(r27)
	  mr        r3, r28
	  mr        r4, r29
	  lwzx      r12, r5, r31
	  mtctr     r12
	  bctrl
	  subi      r31, r31, 0x4
	  subi      r30, r30, 0x1

	.loc_0x58:
	  cmpwi     r30, 0
	  bge+      .loc_0x38

	.loc_0x60:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80097C5C
 * Size:	000074
 */
void JPAResource::calc_c(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  lwz       r0, 0x14(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  lbz       r3, 0x46(r27)
	  subi      r30, r3, 0x1
	  rlwinm    r31,r30,2,0,29
	  b         .loc_0x58

	.loc_0x38:
	  lwz       r5, 0x14(r27)
	  mr        r3, r28
	  mr        r4, r29
	  lwzx      r12, r5, r31
	  mtctr     r12
	  bctrl
	  subi      r31, r31, 0x4
	  subi      r30, r30, 0x1

	.loc_0x58:
	  cmpwi     r30, 0
	  bge+      .loc_0x38

	.loc_0x60:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80097CD0
 * Size:	000074
 */
void JPAResource::calcField(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  lbz       r3, 0x3E(r3)
	  subi      r30, r3, 0x1
	  rlwinm    r31,r30,2,0,29
	  b         .loc_0x58

	.loc_0x2C:
	  lwz       r3, 0x30(r27)
	  mr        r4, r28
	  mr        r6, r29
	  lwzx      r5, r3, r31
	  lwz       r3, 0x4(r5)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  subi      r31, r31, 0x4
	  subi      r30, r30, 0x1

	.loc_0x58:
	  cmpwi     r30, 0
	  bge+      .loc_0x2C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80097D44
 * Size:	000138
 */
void JPAResource::calcKey(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stmw      r27, 0x1C(r1)
	  mr        r27, r3
	  lfd       f31, -0x76F8(r2)
	  lbz       r3, 0x3F(r3)
	  mr        r28, r4
	  lis       r31, 0x4330
	  subi      r29, r3, 0x1
	  rlwinm    r30,r29,2,0,29
	  b         .loc_0x114

	.loc_0x38:
	  lwz       r3, 0x0(r28)
	  lwz       r4, 0x34(r27)
	  lwz       r0, 0x100(r3)
	  stw       r31, 0x8(r1)
	  lwzx      r3, r4, r30
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f31
	  bl        -0x434C
	  lwz       r3, 0x34(r27)
	  lwzx      r3, r3, r30
	  lwz       r3, 0x0(r3)
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0xA
	  bgt-      .loc_0x10C
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x3558
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lwz       r3, 0x0(r28)
	  stfs      f1, 0x28(r3)
	  b         .loc_0x10C
	  fctiwz    f0, f1
	  lwz       r3, 0x0(r28)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  sth       r0, 0x54(r3)
	  b         .loc_0x10C
	  lwz       r3, 0x0(r28)
	  stfs      f1, 0x30(r3)
	  b         .loc_0x10C
	  fctiwz    f0, f1
	  lwz       r3, 0x0(r28)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  sth       r0, 0x52(r3)
	  b         .loc_0x10C
	  lwz       r3, 0x0(r28)
	  stfs      f1, 0x34(r3)
	  b         .loc_0x10C
	  lwz       r3, 0x0(r28)
	  stfs      f1, 0x38(r3)
	  b         .loc_0x10C
	  lwz       r3, 0x0(r28)
	  stfs      f1, 0x3C(r3)
	  b         .loc_0x10C
	  lwz       r3, 0x0(r28)
	  stfs      f1, 0x40(r3)
	  b         .loc_0x10C
	  lwz       r3, 0x0(r28)
	  stfs      f1, 0xFC(r3)

	.loc_0x10C:
	  subi      r30, r30, 0x4
	  subi      r29, r29, 0x1

	.loc_0x114:
	  cmpwi     r29, 0
	  bge+      .loc_0x38
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80097E7C
 * Size:	0001DC
 */
void JPAResource::calcWorkData_c(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  lfd       f1, -0x76F8(r2)
	  stw       r0, 0xB4(r1)
	  lis       r0, 0x4330
	  stw       r31, 0xAC(r1)
	  mr        r31, r4
	  lwz       r5, 0x0(r4)
	  li        r4, 0
	  stw       r0, 0x98(r1)
	  li        r0, 0x1
	  lhz       r5, 0x54(r5)
	  stw       r5, 0x9C(r1)
	  lfd       f0, 0x98(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x34(r31)
	  lwz       r5, 0x0(r31)
	  lfs       f0, 0x30(r5)
	  stfs      f0, 0x38(r31)
	  lwz       r5, 0x0(r31)
	  lfs       f0, 0x2C(r5)
	  stfs      f0, 0x3C(r31)
	  stw       r4, 0x1F4(r31)
	  stw       r4, 0x1EC(r31)
	  stw       r0, 0x1F0(r31)
	  lwz       r4, 0x2C(r3)
	  addi      r3, r1, 0x68
	  lwz       r4, 0x0(r4)
	  lhz       r0, 0x76(r4)
	  rlwinm    r4,r0,1,0,30
	  addi      r0, r4, 0x1
	  stw       r0, 0x1F8(r31)
	  lwz       r4, 0x0(r31)
	  lfs       f1, 0x0(r4)
	  lfs       f2, 0x4(r4)
	  lfs       f3, 0x8(r4)
	  bl        0x528C8
	  lwz       r5, 0x0(r31)
	  addi      r6, r1, 0x38
	  lha       r4, 0x4C(r5)
	  lha       r3, 0x4E(r5)
	  lha       r0, 0x50(r5)
	  mulli     r5, r4, 0xB6
	  mulli     r4, r3, 0xB6
	  extsh     r3, r5
	  mulli     r0, r0, 0xB6
	  extsh     r4, r4
	  extsh     r5, r0
	  bl        -0x42E4
	  lwz       r4, 0x0(r31)
	  addi      r3, r1, 0x8
	  lfs       f1, 0x98(r4)
	  lfs       f2, 0x9C(r4)
	  lfs       f3, 0xA0(r4)
	  bl        0x52880
	  lwz       r3, 0x0(r31)
	  addi      r4, r1, 0x8
	  mr        r5, r4
	  addi      r3, r3, 0x68
	  bl        0x52398
	  lwz       r5, 0x0(r31)
	  addi      r4, r31, 0x78
	  lfs       f0, 0xA4(r5)
	  addi      r3, r5, 0x68
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0xA8(r5)
	  stfs      f0, 0x24(r1)
	  lfs       f0, 0xAC(r5)
	  stfs      f0, 0x34(r1)
	  bl        0x5233C
	  addi      r3, r31, 0x78
	  addi      r4, r1, 0x38
	  addi      r5, r31, 0xA8
	  bl        0x52360
	  addi      r3, r31, 0xA8
	  addi      r4, r1, 0x68
	  addi      r5, r31, 0xD8
	  bl        0x52350
	  lwz       r3, 0x0(r31)
	  addi      r4, r31, 0x48
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x108(r31)
	  lfs       f0, 0x10(r3)
	  stfs      f0, 0x10C(r31)
	  lfs       f0, 0x14(r3)
	  stfs      f0, 0x110(r31)
	  lwz       r3, 0x0(r31)
	  lfs       f1, 0x98(r3)
	  lfs       f0, 0x0(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x114(r31)
	  lfs       f1, 0x9C(r3)
	  lfs       f0, 0x4(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x118(r31)
	  lfs       f1, 0xA0(r3)
	  lfs       f0, 0x8(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x11C(r31)
	  lwz       r3, 0x0(r31)
	  addi      r3, r3, 0x18
	  bl        -0x452C
	  lwz       r4, 0x0(r31)
	  addi      r3, r1, 0x8
	  addi      r5, r31, 0x138
	  lfs       f0, 0x98(r4)
	  stfs      f0, 0x12C(r31)
	  lfs       f0, 0x9C(r4)
	  stfs      f0, 0x130(r31)
	  lfs       f0, 0xA0(r4)
	  stfs      f0, 0x134(r31)
	  lwz       r4, 0x0(r31)
	  addi      r4, r4, 0xC
	  bl        0x52B98
	  lwz       r0, 0xB4(r1)
	  lwz       r31, 0xAC(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098058
 * Size:	000080
 */
void JPAResource::calcWorkData_d(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  addi      r6, r1, 0x8
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  lwz       r5, 0x0(r4)
	  lha       r0, 0x50(r5)
	  lha       r4, 0x4C(r5)
	  lha       r3, 0x4E(r5)
	  mulli     r0, r0, 0xB6
	  mulli     r5, r4, 0xB6
	  mulli     r4, r3, 0xB6
	  extsh     r3, r5
	  extsh     r5, r0
	  extsh     r4, r4
	  bl        -0x4440
	  lwz       r3, 0x0(r31)
	  addi      r4, r1, 0x8
	  addi      r5, r31, 0xA8
	  addi      r3, r3, 0x68
	  bl        0x52254
	  lwz       r4, 0x0(r31)
	  addi      r3, r31, 0xA8
	  addi      r5, r31, 0x120
	  addi      r4, r4, 0x18
	  bl        0x52B6C
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}