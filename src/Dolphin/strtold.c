

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void atof(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void strtod(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void strtold(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800CA92C
 * Size:	00100C
 */
void __strtold(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  lis       r8, 0x8048
	  stw       r0, 0xB4(r1)
	  li        r0, 0
	  stmw      r14, 0x68(r1)
	  subi      r23, r8, 0x5F00
	  mr        r16, r4
	  lis       r4, 0x804A
	  addi      r14, r4, 0x6EF0
	  mr        r17, r5
	  mr        r18, r7
	  stw       r6, 0xC(r1)
	  mr        r12, r16
	  addi      r26, r1, 0x18
	  stw       r3, 0x8(r1)
	  mr        r3, r17
	  li        r15, 0x1
	  li        r31, 0
	  li        r29, 0
	  li        r28, 0
	  li        r27, 0
	  li        r24, 0
	  lwz       r22, 0x0(r23)
	  lwz       r20, 0x4(r23)
	  lwz       r21, 0x8(r23)
	  lwz       r4, 0xC(r23)
	  lwz       r5, 0x10(r23)
	  lwz       r19, 0x14(r23)
	  lwz       r11, 0x18(r23)
	  lwz       r10, 0x1C(r23)
	  lwz       r9, 0x20(r23)
	  lwz       r8, 0x24(r23)
	  lhz       r7, 0x28(r23)
	  li        r23, 0
	  stw       r22, 0x2C(r1)
	  li        r22, 0
	  lwz       r6, 0x0(r14)
	  li        r14, 0
	  stw       r20, 0x30(r1)
	  li        r20, 0
	  stw       r4, 0x38(r1)
	  li        r4, 0
	  stw       r5, 0x3C(r1)
	  li        r5, 0
	  stw       r20, 0x60(r1)
	  li        r20, 0
	  stw       r20, 0x5C(r1)
	  li        r20, 0
	  stw       r21, 0x34(r1)
	  stw       r19, 0x40(r1)
	  stw       r11, 0x44(r1)
	  stw       r10, 0x48(r1)
	  stw       r9, 0x4C(r1)
	  stw       r8, 0x50(r1)
	  sth       r7, 0x54(r1)
	  lbz       r21, 0x0(r6)
	  stw       r20, 0x58(r1)
	  stw       r0, 0x0(r18)
	  mtctr     r12
	  li        r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x100:
	  cmpwi     r15, 0x80
	  beq-      .loc_0x780
	  bge-      .loc_0x164
	  cmpwi     r15, 0x8
	  beq-      .loc_0x5E8
	  bge-      .loc_0x140
	  cmpwi     r15, 0x3
	  beq-      .loc_0xD44
	  bge-      .loc_0x134
	  cmpwi     r15, 0x1
	  beq-      .loc_0x1B4
	  bge-      .loc_0x4F4
	  b         .loc_0xD44

	.loc_0x134:
	  cmpwi     r15, 0x5
	  bge-      .loc_0xD44
	  b         .loc_0x5B4

	.loc_0x140:
	  cmpwi     r15, 0x20
	  beq-      .loc_0x6AC
	  bge-      .loc_0x158
	  cmpwi     r15, 0x10
	  beq-      .loc_0x684
	  b         .loc_0xD44

	.loc_0x158:
	  cmpwi     r15, 0x40
	  beq-      .loc_0x728
	  b         .loc_0xD44

	.loc_0x164:
	  cmpwi     r15, 0x2000
	  beq-      .loc_0x3B0
	  bge-      .loc_0x194
	  cmpwi     r15, 0x200
	  beq-      .loc_0x83C
	  bge-      .loc_0x188
	  cmpwi     r15, 0x100
	  beq-      .loc_0x7E4
	  b         .loc_0xD44

	.loc_0x188:
	  cmpwi     r15, 0x400
	  beq-      .loc_0x870
	  b         .loc_0xD44

	.loc_0x194:
	  lis       r3, 0x1
	  subi      r0, r3, 0x8000
	  cmpw      r15, r0
	  beq-      .loc_0x8D0
	  bge-      .loc_0xD44
	  cmpwi     r15, 0x4000
	  beq-      .loc_0x2D0
	  b         .loc_0xD44

	.loc_0x1B4:
	  lis       r3, 0x804A
	  rlwinm    r5,r4,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r5
	  rlwinm.   r0,r0,0,29,30
	  beq-      .loc_0x1F0
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r29, r29, 0x1
	  b         .loc_0xD44

	.loc_0x1F0:
	  cmpwi     r4, -0x1
	  bne-      .loc_0x200
	  li        r0, -0x1
	  b         .loc_0x20C

	.loc_0x200:
	  lis       r3, 0x804A
	  addi      r3, r3, 0x6DF0
	  lbzx      r0, r3, r5

	.loc_0x20C:
	  cmpwi     r0, 0x49
	  beq-      .loc_0x278
	  bge-      .loc_0x23C
	  cmpwi     r0, 0x2C
	  beq-      .loc_0x2C8
	  bge-      .loc_0x230
	  cmpwi     r0, 0x2B
	  bge-      .loc_0x24C
	  b         .loc_0x2C8

	.loc_0x230:
	  cmpwi     r0, 0x2E
	  bge-      .loc_0x2C8
	  b         .loc_0x248

	.loc_0x23C:
	  cmpwi     r0, 0x4E
	  beq-      .loc_0x2A0
	  b         .loc_0x2C8

	.loc_0x248:
	  li        r14, 0x1

	.loc_0x24C:
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  li        r0, 0x1
	  mr        r4, r3
	  stw       r0, 0x5C(r1)
	  b         .loc_0xD44

	.loc_0x278:
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  li        r15, 0x4000
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x2A0:
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  li        r15, 0x2000
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x2C8:
	  li        r15, 0x2
	  b         .loc_0xD44

	.loc_0x2D0:
	  lis       r3, 0x8048
	  addi      r15, r1, 0x21
	  subi      r6, r3, 0x5ED4
	  li        r19, 0x1
	  lwz       r5, 0x0(r6)
	  lwz       r3, 0x4(r6)
	  lbz       r0, 0x8(r6)
	  stw       r5, 0x20(r1)
	  stw       r3, 0x24(r1)
	  stb       r0, 0x28(r1)
	  b         .loc_0x324

	.loc_0x2FC:
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r15, r15, 0x1
	  addi      r19, r19, 0x1
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3

	.loc_0x324:
	  cmpwi     r19, 0x8
	  bge-      .loc_0x35C
	  lbz       r0, 0x0(r15)
	  cmpwi     r4, -0x1
	  extsb     r5, r0
	  bne-      .loc_0x344
	  li        r0, -0x1
	  b         .loc_0x354

	.loc_0x344:
	  lis       r3, 0x804A
	  rlwinm    r0,r4,0,24,31
	  addi      r3, r3, 0x6DF0
	  lbzx      r0, r3, r0

	.loc_0x354:
	  cmpw      r5, r0
	  beq+      .loc_0x2FC

	.loc_0x35C:
	  cmpwi     r19, 0x3
	  beq-      .loc_0x36C
	  cmpwi     r19, 0x8
	  bne-      .loc_0x3A8

	.loc_0x36C:
	  cmpwi     r14, 0
	  beq-      .loc_0x384
	  lis       r3, 0x8051
	  lfs       f0, 0x48B4(r3)
	  fneg      f1, f0
	  b         .loc_0x38C

	.loc_0x384:
	  lis       r3, 0x8051
	  lfs       f1, 0x48B4(r3)

	.loc_0x38C:
	  lwz       r0, 0x5C(r1)
	  lwz       r3, 0xC(r1)
	  add       r0, r19, r0
	  stfd      f1, 0x18(r1)
	  add       r0, r29, r0
	  stw       r0, 0x0(r3)
	  b         .loc_0xFF8

	.loc_0x3A8:
	  li        r15, 0x1000
	  b         .loc_0xD44

	.loc_0x3B0:
	  lwz       r3, -0x7288(r2)
	  addi      r15, r1, 0x11
	  lbz       r0, -0x7284(r2)
	  li        r20, 0x1
	  stw       r3, 0x10(r1)
	  li        r19, 0
	  stb       r0, 0x14(r1)
	  b         .loc_0x3F8

	.loc_0x3D0:
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r15, r15, 0x1
	  addi      r20, r20, 0x1
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3

	.loc_0x3F8:
	  cmpwi     r20, 0x4
	  bge-      .loc_0x430
	  lbz       r0, 0x0(r15)
	  cmpwi     r4, -0x1
	  extsb     r5, r0
	  bne-      .loc_0x418
	  li        r0, -0x1
	  b         .loc_0x428

	.loc_0x418:
	  lis       r3, 0x804A
	  rlwinm    r0,r4,0,24,31
	  addi      r3, r3, 0x6DF0
	  lbzx      r0, r3, r0

	.loc_0x428:
	  cmpw      r5, r0
	  beq+      .loc_0x3D0

	.loc_0x430:
	  cmpwi     r20, 0x3
	  beq-      .loc_0x440
	  cmpwi     r20, 0x4
	  bne-      .loc_0x4EC

	.loc_0x440:
	  cmpwi     r20, 0x4
	  bne-      .loc_0x4AC
	  lis       r3, 0x804A
	  addi      r15, r3, 0x6BF0
	  b         .loc_0x478

	.loc_0x454:
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r19, r19, 0x1
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3

	.loc_0x478:
	  cmpwi     r19, 0x20
	  bge-      .loc_0x498
	  rlwinm    r0,r4,0,24,31
	  lbzx      r3, r15, r0
	  rlwinm.   r0,r3,0,27,27
	  bne+      .loc_0x454
	  rlwinm.   r0,r3,0,24,25
	  bne+      .loc_0x454

	.loc_0x498:
	  cmpwi     r4, 0x29
	  beq-      .loc_0x4A8
	  li        r15, 0x1000
	  b         .loc_0xD44

	.loc_0x4A8:
	  addi      r19, r19, 0x1

	.loc_0x4AC:
	  cmpwi     r14, 0
	  beq-      .loc_0x4C4
	  lis       r3, 0x8051
	  lfs       f0, 0x48B0(r3)
	  fneg      f1, f0
	  b         .loc_0x4CC

	.loc_0x4C4:
	  lis       r3, 0x8051
	  lfs       f1, 0x48B0(r3)

	.loc_0x4CC:
	  lwz       r0, 0x5C(r1)
	  add       r3, r20, r19
	  stfd      f1, 0x18(r1)
	  add       r0, r3, r0
	  lwz       r3, 0xC(r1)
	  add       r0, r29, r0
	  stw       r0, 0x0(r3)
	  b         .loc_0xFF8

	.loc_0x4EC:
	  li        r15, 0x1000
	  b         .loc_0xD44

	.loc_0x4F4:
	  cmpw      r4, r21
	  bne-      .loc_0x524
	  mr        r12, r16
	  mr        r3, r17
	  li        r15, 0x10
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x524:
	  lis       r3, 0x804A
	  rlwinm    r0,r4,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x544
	  li        r15, 0x1000
	  b         .loc_0xD44

	.loc_0x544:
	  cmpwi     r4, 0x30
	  bne-      .loc_0x5AC
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  cmpwi     r3, -0x1
	  mr        r4, r3
	  bne-      .loc_0x57C
	  li        r0, -0x1
	  b         .loc_0x58C

	.loc_0x57C:
	  lis       r5, 0x804A
	  rlwinm    r0,r3,0,24,31
	  addi      r3, r5, 0x6DF0
	  lbzx      r0, r3, r0

	.loc_0x58C:
	  cmpwi     r0, 0x58
	  bne-      .loc_0x5A4
	  lis       r3, 0x1
	  li        r31, 0x1
	  subi      r15, r3, 0x8000
	  b         .loc_0xD44

	.loc_0x5A4:
	  li        r15, 0x4
	  b         .loc_0xD44

	.loc_0x5AC:
	  li        r15, 0x8
	  b         .loc_0xD44

	.loc_0x5B4:
	  cmpwi     r4, 0x30
	  bne-      .loc_0x5E0
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x5E0:
	  li        r15, 0x8
	  b         .loc_0xD44

	.loc_0x5E8:
	  lis       r3, 0x804A
	  rlwinm    r0,r4,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x638
	  cmpw      r4, r21
	  bne-      .loc_0x630
	  mr        r12, r16
	  mr        r3, r17
	  li        r15, 0x20
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x630:
	  li        r15, 0x40
	  b         .loc_0xD44

	.loc_0x638:
	  lbz       r5, 0x30(r1)
	  cmplwi    r5, 0x14
	  bge-      .loc_0x65C
	  addi      r0, r5, 0x1
	  addi      r3, r1, 0x2C
	  stb       r0, 0x30(r1)
	  addi      r0, r5, 0x5
	  stbx      r4, r3, r0
	  b         .loc_0x660

	.loc_0x65C:
	  addi      r27, r27, 0x1

	.loc_0x660:
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x684:
	  lis       r3, 0x804A
	  rlwinm    r0,r4,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x6A4
	  li        r15, 0x1000
	  b         .loc_0xD44

	.loc_0x6A4:
	  li        r15, 0x20
	  b         .loc_0xD44

	.loc_0x6AC:
	  lis       r3, 0x804A
	  rlwinm    r0,r4,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x6CC
	  li        r15, 0x40
	  b         .loc_0xD44

	.loc_0x6CC:
	  lbz       r0, 0x30(r1)
	  cmplwi    r0, 0x14
	  bge-      .loc_0x704
	  cmpwi     r4, 0x30
	  bne-      .loc_0x6E8
	  cmplwi    r0, 0
	  beq-      .loc_0x700

	.loc_0x6E8:
	  lbz       r6, 0x30(r1)
	  addi      r3, r1, 0x2C
	  addi      r5, r6, 0x1
	  addi      r0, r6, 0x5
	  stb       r5, 0x30(r1)
	  stbx      r4, r3, r0

	.loc_0x700:
	  subi      r27, r27, 0x1

	.loc_0x704:
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x728:
	  cmpwi     r4, -0x1
	  bne-      .loc_0x738
	  li        r0, -0x1
	  b         .loc_0x748

	.loc_0x738:
	  lis       r3, 0x804A
	  rlwinm    r0,r4,0,24,31
	  addi      r3, r3, 0x6DF0
	  lbzx      r0, r3, r0

	.loc_0x748:
	  cmpwi     r0, 0x45
	  bne-      .loc_0x778
	  mr        r12, r16
	  mr        r3, r17
	  li        r15, 0x80
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x778:
	  li        r15, 0x800
	  b         .loc_0xD44

	.loc_0x780:
	  cmpwi     r4, 0x2B
	  bne-      .loc_0x7AC
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0x7DC

	.loc_0x7AC:
	  cmpwi     r4, 0x2D
	  bne-      .loc_0x7DC
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  li        r0, 0x1
	  mr        r4, r3
	  stw       r0, 0x60(r1)

	.loc_0x7DC:
	  li        r15, 0x100
	  b         .loc_0xD44

	.loc_0x7E4:
	  lis       r3, 0x804A
	  rlwinm    r0,r4,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x804
	  li        r15, 0x1000
	  b         .loc_0xD44

	.loc_0x804:
	  cmpwi     r4, 0x30
	  bne-      .loc_0x834
	  mr        r12, r16
	  mr        r3, r17
	  li        r15, 0x200
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x834:
	  li        r15, 0x400
	  b         .loc_0xD44

	.loc_0x83C:
	  cmpwi     r4, 0x30
	  bne-      .loc_0x868
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x868:
	  li        r15, 0x400
	  b         .loc_0xD44

	.loc_0x870:
	  lis       r3, 0x804A
	  rlwinm    r0,r4,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x890
	  li        r15, 0x800
	  b         .loc_0xD44

	.loc_0x890:
	  mulli     r0, r28, 0xA
	  add       r28, r4, r0
	  subi      r28, r28, 0x30
	  cmpwi     r28, 0x7FFF
	  ble-      .loc_0x8AC
	  li        r0, 0x1
	  stw       r0, 0x0(r18)

	.loc_0x8AC:
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x8D0:
	  cmpwi     r31, 0x10
	  beq-      .loc_0xBC8
	  bge-      .loc_0x90C
	  cmpwi     r31, 0x4
	  beq-      .loc_0x9B4
	  bge-      .loc_0x900
	  cmpwi     r31, 0x2
	  beq-      .loc_0x980
	  bge-      .loc_0xD44
	  cmpwi     r31, 0x1
	  bge-      .loc_0x930
	  b         .loc_0xD44

	.loc_0x900:
	  cmpwi     r31, 0x8
	  beq-      .loc_0xAD8
	  b         .loc_0xD44

	.loc_0x90C:
	  cmpwi     r31, 0x40
	  beq-      .loc_0xC84
	  bge-      .loc_0x924
	  cmpwi     r31, 0x20
	  beq-      .loc_0xC24
	  b         .loc_0xD44

	.loc_0x924:
	  cmpwi     r31, 0x100
	  beq-      .loc_0xCE0
	  b         .loc_0xD44

	.loc_0x930:
	  li        r0, 0
	  mr        r12, r16
	  mr        r3, r17
	  stb       r0, 0x18(r1)
	  li        r25, 0x2
	  li        r31, 0x2
	  stb       r0, 0x19(r1)
	  li        r4, 0
	  li        r5, 0
	  stb       r0, 0x1A(r1)
	  stb       r0, 0x1B(r1)
	  stb       r0, 0x1C(r1)
	  stb       r0, 0x1D(r1)
	  stb       r0, 0x1E(r1)
	  stb       r0, 0x1F(r1)
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x980:
	  cmpwi     r4, 0x30
	  bne-      .loc_0x9AC
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x9AC:
	  li        r31, 0x4
	  b         .loc_0xD44

	.loc_0x9B4:
	  lis       r3, 0x804A
	  rlwinm    r5,r4,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r5
	  rlwinm.   r0,r0,0,26,26
	  bne-      .loc_0xA04
	  cmpw      r4, r21
	  bne-      .loc_0x9FC
	  mr        r12, r16
	  mr        r3, r17
	  li        r31, 0x8
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0x9FC:
	  li        r31, 0x10
	  b         .loc_0xD44

	.loc_0xA04:
	  cmpwi     r25, 0x11
	  bge-      .loc_0xAB4
	  rlwinm    r0,r25,1,31,31
	  cmpwi     r4, -0x1
	  add       r0, r0, r25
	  addi      r23, r23, 0x1
	  srawi     r0, r0, 0x1
	  lbzx      r6, r26, r0
	  bne-      .loc_0xA30
	  li        r3, -0x1
	  b         .loc_0xA3C

	.loc_0xA30:
	  lis       r3, 0x804A
	  addi      r3, r3, 0x6DF0
	  lbzx      r3, r3, r5

	.loc_0xA3C:
	  cmpwi     r3, 0x41
	  blt-      .loc_0xA4C
	  subi      r5, r3, 0x37
	  b         .loc_0xA50

	.loc_0xA4C:
	  subi      r5, r3, 0x30

	.loc_0xA50:
	  rlwinm    r4,r25,1,31,31
	  rlwinm    r0,r25,0,31,31
	  xor       r3, r0, r4
	  rlwinm    r0,r5,4,20,27
	  sub.      r3, r3, r4
	  rlwinm    r3,r5,0,24,31
	  or        r0, r6, r0
	  rlwinm    r5,r0,0,24,31
	  beq-      .loc_0xA7C
	  or        r0, r6, r3
	  rlwinm    r5,r0,0,24,31

	.loc_0xA7C:
	  rlwinm    r0,r25,1,31,31
	  mr        r12, r16
	  add       r0, r0, r25
	  mr        r3, r17
	  srawi     r0, r0, 0x1
	  li        r4, 0
	  stbx      r5, r26, r0
	  li        r5, 0
	  mtctr     r12
	  addi      r25, r25, 0x1
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0xAB4:
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0xAD8:
	  lis       r3, 0x804A
	  rlwinm    r5,r4,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r5
	  rlwinm.   r0,r0,0,26,26
	  bne-      .loc_0xAF8
	  li        r31, 0x10
	  b         .loc_0xD44

	.loc_0xAF8:
	  cmpwi     r25, 0x11
	  bge-      .loc_0xBA4
	  rlwinm    r0,r25,1,31,31
	  cmpwi     r4, -0x1
	  add       r0, r0, r25
	  srawi     r0, r0, 0x1
	  lbzx      r6, r26, r0
	  bne-      .loc_0xB20
	  li        r3, -0x1
	  b         .loc_0xB2C

	.loc_0xB20:
	  lis       r3, 0x804A
	  addi      r3, r3, 0x6DF0
	  lbzx      r3, r3, r5

	.loc_0xB2C:
	  cmpwi     r3, 0x41
	  blt-      .loc_0xB3C
	  subi      r5, r3, 0x37
	  b         .loc_0xB40

	.loc_0xB3C:
	  subi      r5, r3, 0x30

	.loc_0xB40:
	  rlwinm    r4,r25,1,31,31
	  rlwinm    r0,r25,0,31,31
	  xor       r3, r0, r4
	  rlwinm    r0,r5,4,20,27
	  sub.      r3, r3, r4
	  rlwinm    r3,r5,0,24,31
	  or        r0, r6, r0
	  rlwinm    r5,r0,0,24,31
	  beq-      .loc_0xB6C
	  or        r0, r6, r3
	  rlwinm    r5,r0,0,24,31

	.loc_0xB6C:
	  rlwinm    r0,r25,1,31,31
	  mr        r12, r16
	  add       r0, r0, r25
	  mr        r3, r17
	  srawi     r0, r0, 0x1
	  li        r4, 0
	  stbx      r5, r26, r0
	  li        r5, 0
	  mtctr     r12
	  addi      r25, r25, 0x1
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0xBA4:
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0xBC8:
	  cmpwi     r4, -0x1
	  bne-      .loc_0xBD8
	  li        r0, -0x1
	  b         .loc_0xBE8

	.loc_0xBD8:
	  lis       r3, 0x804A
	  rlwinm    r0,r4,0,24,31
	  addi      r3, r3, 0x6DF0
	  lbzx      r0, r3, r0

	.loc_0xBE8:
	  cmpwi     r0, 0x50
	  bne-      .loc_0xC1C
	  mr        r12, r16
	  mr        r3, r17
	  li        r31, 0x20
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r24, r24, 0x1
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0xC1C:
	  li        r15, 0x800
	  b         .loc_0xD44

	.loc_0xC24:
	  cmpwi     r4, 0x2D
	  addi      r24, r24, 0x1
	  bne-      .loc_0xC3C
	  li        r0, 0x1
	  stw       r0, 0x58(r1)
	  b         .loc_0xC5C

	.loc_0xC3C:
	  cmpwi     r4, 0x2B
	  beq-      .loc_0xC5C
	  mr        r12, r16
	  mr        r3, r17
	  li        r5, 0x1
	  mtctr     r12
	  bctrl
	  subi      r24, r24, 0x1

	.loc_0xC5C:
	  mr        r12, r16
	  mr        r3, r17
	  li        r31, 0x40
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0xC84:
	  lis       r3, 0x804A
	  rlwinm    r0,r4,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0xCA4
	  li        r15, 0x1000
	  b         .loc_0xD44

	.loc_0xCA4:
	  cmpwi     r4, 0x30
	  bne-      .loc_0xCD8
	  mr        r12, r16
	  mr        r3, r17
	  li        r31, 0x80
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r24, r24, 0x1
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3
	  b         .loc_0xD44

	.loc_0xCD8:
	  li        r31, 0x100
	  b         .loc_0xD44

	.loc_0xCE0:
	  lis       r3, 0x804A
	  rlwinm    r0,r4,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0xD00
	  li        r15, 0x800
	  b         .loc_0xD44

	.loc_0xD00:
	  mulli     r0, r22, 0xA
	  cmpwi     r28, 0x7FFF
	  add       r3, r4, r0
	  subi      r0, r3, 0x30
	  extsh     r22, r0
	  ble-      .loc_0xD20
	  li        r0, 0x1
	  stw       r0, 0x0(r18)

	.loc_0xD20:
	  mr        r12, r16
	  mr        r3, r17
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r24, r24, 0x1
	  addi      r30, r30, 0x1
	  bctrl
	  mr        r4, r3

	.loc_0xD44:
	  lwz       r0, 0x8(r1)
	  cmpw      r30, r0
	  bgt-      .loc_0xD60
	  cmpwi     r4, -0x1
	  beq-      .loc_0xD60
	  rlwinm.   r0,r15,0,19,20
	  beq+      .loc_0x100

	.loc_0xD60:
	  andi.     r15, r15, 0xE2C
	  bne-      .loc_0xD78
	  lwz       r3, 0xC(r1)
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  b         .loc_0xD88

	.loc_0xD78:
	  add       r3, r30, r29
	  subi      r0, r3, 0x1
	  lwz       r3, 0xC(r1)
	  stw       r0, 0x0(r3)

	.loc_0xD88:
	  mr        r12, r16
	  mr        r3, r17
	  li        r5, 0x1
	  mtctr     r12
	  bctrl
	  cmpwi     r31, 0
	  bne-      .loc_0xEE8
	  lwz       r0, 0x60(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0xDB4
	  neg       r28, r28

	.loc_0xDB4:
	  lbz       r3, 0x30(r1)
	  addi      r0, r1, 0x2C
	  addi      r4, r3, 0x5
	  add       r4, r0, r4
	  b         .loc_0xDCC

	.loc_0xDC8:
	  addi      r27, r27, 0x1

	.loc_0xDCC:
	  cmpwi     r3, 0
	  subi      r3, r3, 0x1
	  beq-      .loc_0xDE4
	  lbzu      r0, -0x1(r4)
	  cmplwi    r0, 0x30
	  beq+      .loc_0xDC8

	.loc_0xDE4:
	  addi      r0, r3, 0x1
	  rlwinm.   r4,r0,0,24,31
	  stb       r0, 0x30(r1)
	  bne-      .loc_0xE08
	  addi      r0, r4, 0x1
	  addi      r3, r1, 0x31
	  stb       r0, 0x30(r1)
	  li        r0, 0x30
	  stbx      r0, r3, r4

	.loc_0xE08:
	  add       r28, r28, r27
	  cmpwi     r28, -0x8000
	  blt-      .loc_0xE1C
	  cmpwi     r28, 0x7FFF
	  ble-      .loc_0xE24

	.loc_0xE1C:
	  li        r0, 0x1
	  stw       r0, 0x0(r18)

	.loc_0xE24:
	  lwz       r0, 0x0(r18)
	  cmpwi     r0, 0
	  beq-      .loc_0xE68
	  lwz       r0, 0x60(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0xE44
	  lfd       f1, -0x7280(r2)
	  b         .loc_0xFF8

	.loc_0xE44:
	  cmpwi     r14, 0
	  beq-      .loc_0xE5C
	  lis       r3, 0x8051
	  lfd       f0, 0x48C0(r3)
	  fneg      f1, f0
	  b         .loc_0xFF8

	.loc_0xE5C:
	  lis       r3, 0x8051
	  lfd       f1, 0x48C0(r3)
	  b         .loc_0xFF8

	.loc_0xE68:
	  sth       r28, 0x2E(r1)
	  addi      r3, r1, 0x2C
	  bl        -0x8C80
	  lfd       f0, -0x7280(r2)
	  stfd      f1, 0x18(r1)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xEA0
	  lis       r3, 0x8051
	  lfd       f0, 0x48C8(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xEA0
	  li        r0, 0x1
	  stw       r0, 0x0(r18)
	  b         .loc_0xEC4

	.loc_0xEA0:
	  lis       r3, 0x8051
	  lfd       f0, 0x48D0(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xEC4
	  li        r0, 0x1
	  lis       r3, 0x8051
	  stw       r0, 0x0(r18)
	  lfd       f0, 0x48C0(r3)
	  stfd      f0, 0x18(r1)

	.loc_0xEC4:
	  cmpwi     r14, 0
	  beq-      .loc_0xEE0
	  cmpwi     r15, 0
	  beq-      .loc_0xEE0
	  lfd       f0, 0x18(r1)
	  fneg      f0, f0
	  stfd      f0, 0x18(r1)

	.loc_0xEE0:
	  lfd       f1, 0x18(r1)
	  b         .loc_0xFF8

	.loc_0xEE8:
	  lfd       f1, 0x18(r1)
	  lfd       f0, -0x7278(r2)
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0xFEC
	  lwz       r0, 0x58(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0xF30
	  neg       r0, r22
	  extsh     r22, r0
	  b         .loc_0xF30

	.loc_0xF10:
	  lwz       r4, 0x18(r1)
	  addi      r22, r22, 0x1
	  lwz       r3, 0x1C(r1)
	  rlwinm    r0,r4,31,1,31
	  rlwinm    r3,r3,31,0,31
	  stw       r0, 0x18(r1)
	  rlwimi    r3,r4,31,0,0
	  stw       r3, 0x1C(r1)

	.loc_0xF30:
	  lha       r3, 0x18(r1)
	  rlwinm    r0,r3,0,24,27
	  cmpwi     r0, 0x10
	  bne+      .loc_0xF10
	  subi      r0, r23, 0x1
	  rlwinm    r4,r3,0,28,31
	  rlwinm    r5,r0,2,0,29
	  lwz       r0, 0x5C(r1)
	  sth       r4, 0x18(r1)
	  add       r3, r0, r25
	  add       r0, r22, r5
	  extsh     r22, r0
	  lfd       f1, -0x7280(r2)
	  addi      r0, r3, 0x1
	  addi      r3, r22, 0x3FF
	  rlwimi    r4,r3,4,0,27
	  add       r0, r0, r24
	  sth       r4, 0x18(r1)
	  add       r0, r29, r0
	  lwz       r3, 0xC(r1)
	  lfd       f2, 0x18(r1)
	  stw       r0, 0x0(r3)
	  fcmpu     cr0, f1, f2
	  beq-      .loc_0xFB0
	  lis       r3, 0x8051
	  lfd       f0, 0x48C8(r3)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xFB0
	  li        r0, 0x1
	  stfd      f1, 0x18(r1)
	  stw       r0, 0x0(r18)
	  b         .loc_0xFD4

	.loc_0xFB0:
	  lis       r3, 0x8051
	  lfd       f0, 0x48D0(r3)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xFD4
	  li        r0, 0x1
	  lis       r3, 0x8051
	  stw       r0, 0x0(r18)
	  lfd       f0, 0x48C0(r3)
	  stfd      f0, 0x18(r1)

	.loc_0xFD4:
	  cmpwi     r14, 0
	  beq-      .loc_0xFF4
	  lha       r0, 0x18(r1)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x18(r1)
	  b         .loc_0xFF4

	.loc_0xFEC:
	  lfd       f0, -0x7280(r2)
	  stfd      f0, 0x18(r1)

	.loc_0xFF4:
	  lfd       f1, 0x18(r1)

	.loc_0xFF8:
	  lmw       r14, 0x68(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}
