

/*
 * --INFO--
 * Address:	8001FE48
 * Size:	000080
 */
void JKRExpHeap::createRoot(int, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  li        r4, 0
	  lwz       r0, -0x77D0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x60
	  mr        r5, r3
	  addi      r3, r1, 0xC
	  addi      r4, r1, 0x8
	  bl        0x3674
	  lwz       r3, 0xC(r1)
	  lwz       r5, 0x8(r1)
	  cmplwi    r3, 0
	  addi      r4, r3, 0x90
	  subi      r5, r5, 0x90
	  beq-      .loc_0x58
	  mr        r7, r31
	  li        r6, 0
	  bl        0x194

	.loc_0x58:
	  mr        r4, r3
	  stw       r3, -0x77D0(r13)

	.loc_0x60:
	  li        r0, 0x1
	  mr        r3, r4
	  stb       r0, 0x6E(r4)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001FEC8
 * Size:	0000E4
 */
void JKRExpHeap::create(unsigned long, JKRHeap*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr.       r28, r4
	  bne-      .loc_0x2C
	  lwz       r28, -0x77D0(r13)

	.loc_0x2C:
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x44
	  mr        r3, r28
	  li        r4, 0x10
	  bl        0x396C

	.loc_0x44:
	  rlwinm    r31,r3,0,0,27
	  cmplwi    r31, 0xA0
	  bge-      .loc_0x58
	  li        r3, 0
	  b         .loc_0xC4

	.loc_0x58:
	  mr        r3, r31
	  mr        r5, r28
	  li        r4, 0x10
	  bl        0x36B4
	  mr        r0, r3
	  mr.       r30, r0
	  addi      r4, r30, 0x90
	  bne-      .loc_0x80
	  li        r3, 0
	  b         .loc_0xC4

	.loc_0x80:
	  mr        r5, r30
	  beq-      .loc_0x9C
	  mr        r6, r28
	  mr        r7, r29
	  subi      r5, r31, 0x90
	  bl        0xD4
	  mr        r5, r3

	.loc_0x9C:
	  cmplwi    r5, 0
	  bne-      .loc_0xB8
	  mr        r3, r30
	  li        r4, 0
	  bl        0x36F8
	  li        r3, 0
	  b         .loc_0xC4

	.loc_0xB8:
	  li        r0, 0
	  mr        r3, r5
	  stb       r0, 0x6E(r5)

	.loc_0xC4:
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
 * Address:	8001FFAC
 * Size:	000084
 */
void JKRExpHeap::do_destroy()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r0, 0x6E(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  lwz       r4, 0x50(r30)
	  lwz       r31, 0xC(r4)
	  cmplwi    r31, 0
	  beq-      .loc_0x6C
	  lwz       r12, 0x0(r3)
	  li        r4, -0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x3670
	  b         .loc_0x6C

	.loc_0x58:
	  lwz       r12, 0x0(r3)
	  li        r4, -0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6C:
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
 * Address:	80020030
 * Size:	000098
 */
void JKRExpHeap::JKRExpHeap(void*, unsigned long, JKRHeap*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        0x3260
	  lis       r4, 0x804A
	  li        r3, 0
	  subi      r4, r4, 0x220
	  li        r0, 0xFF
	  stw       r4, 0x0(r29)
	  subi      r6, r31, 0x10
	  li        r4, 0
	  li        r5, 0
	  stb       r3, 0x6C(r29)
	  li        r7, 0
	  li        r8, 0
	  stb       r0, 0x6D(r29)
	  stw       r30, 0x78(r29)
	  lwz       r0, 0x78(r29)
	  stw       r0, 0x7C(r29)
	  lwz       r3, 0x78(r29)
	  bl        0x16BC
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x80(r29)
	  stw       r0, 0x84(r29)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800200C8
 * Size:	000068
 */
void JKRExpHeap::~JKRExpHeap()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x4C
	  lis       r4, 0x804A
	  subi      r0, r4, 0x220
	  stw       r0, 0x0(r30)
	  bl        0x3C80
	  mr        r3, r30
	  li        r4, 0
	  bl        0x32D8
	  extsh.    r0, r31
	  ble-      .loc_0x4C
	  mr        r3, r30
	  bl        0x3FA4

	.loc_0x4C:
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
 * Address:	80020130
 * Size:	00011C
 */
void JKRExpHeap::do_alloc(unsigned long, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  addi      r3, r28, 0x18
	  bl        0xCFA0C
	  cmplwi    r29, 0x4
	  bge-      .loc_0x3C
	  li        r29, 0x4

	.loc_0x3C:
	  cmpwi     r30, 0
	  blt-      .loc_0x78
	  cmpwi     r30, 0x4
	  bgt-      .loc_0x60
	  mr        r3, r28
	  mr        r4, r29
	  bl        0x31C
	  mr        r31, r3
	  b         .loc_0xA8

	.loc_0x60:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        .loc_0x11C
	  mr        r31, r3
	  b         .loc_0xA8

	.loc_0x78:
	  neg       r5, r30
	  cmpwi     r5, 0x4
	  bgt-      .loc_0x98
	  mr        r3, r28
	  mr        r4, r29
	  bl        0x520
	  mr        r31, r3
	  b         .loc_0xA8

	.loc_0x98:
	  mr        r3, r28
	  mr        r4, r29
	  bl        0x3B4
	  mr        r31, r3

	.loc_0xA8:
	  cmplwi    r31, 0
	  bne-      .loc_0xF0
	  lis       r3, 0x8047
	  mr        r4, r29
	  addi      r3, r3, 0x36E8
	  crclr     6, 0x6
	  bl        0x91DC
	  lbz       r0, 0x68(r28)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xF0
	  lwz       r12, -0x77CC(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0xF0
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  mtctr     r12
	  bctrl

	.loc_0xF0:
	  addi      r3, r28, 0x18
	  bl        0xCFA20
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x11C:
	*/
}

/*
 * --INFO--
 * Address:	8002024C
 * Size:	000254
 */
void JKRExpHeap::allocFromHead(unsigned long, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  li        r7, -0x1
	  stw       r0, 0x34(r1)
	  addi      r0, r4, 0x3
	  stmw      r25, 0x14(r1)
	  mr        r29, r3
	  subi      r3, r5, 0x1
	  rlwinm    r30,r0,0,0,29
	  not       r4, r3
	  li        r28, 0
	  li        r31, 0
	  lwz       r8, 0x78(r29)
	  b         .loc_0x84

	.loc_0x38:
	  addi      r5, r8, 0x10
	  lwz       r6, 0x4(r8)
	  add       r0, r3, r5
	  and       r0, r4, r0
	  sub       r5, r0, r5
	  add       r0, r30, r5
	  cmplw     r6, r0
	  blt-      .loc_0x80
	  cmplw     r7, r6
	  ble-      .loc_0x80
	  lbz       r0, 0x6C(r29)
	  mr        r7, r6
	  mr        r31, r8
	  mr        r28, r5
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  cmplw     r6, r30
	  beq-      .loc_0x8C

	.loc_0x80:
	  lwz       r8, 0xC(r8)

	.loc_0x84:
	  cmplwi    r8, 0
	  bne+      .loc_0x38

	.loc_0x8C:
	  cmplwi    r31, 0
	  stw       r7, -0x77F8(r13)
	  stw       r28, -0x77F4(r13)
	  stw       r31, -0x77F0(r13)
	  beq-      .loc_0x23C
	  cmplwi    r28, 0x10
	  blt-      .loc_0x164
	  lwz       r26, 0x8(r31)
	  mr        r3, r31
	  lwz       r25, 0xC(r31)
	  subi      r4, r28, 0x10
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  bl        0x1460
	  mr.       r27, r3
	  beq-      .loc_0xF4
	  lbz       r5, 0x6D(r29)
	  mr        r4, r30
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  bl        0x1440
	  mr        r6, r3
	  b         .loc_0xF8

	.loc_0xF4:
	  li        r6, 0

	.loc_0xF8:
	  cmplwi    r6, 0
	  mr        r28, r6
	  beq-      .loc_0x118
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r26
	  bl        0xAF0
	  b         .loc_0x12C

	.loc_0x118:
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r26
	  mr        r6, r25
	  bl        0xAD8

	.loc_0x12C:
	  cmplwi    r28, 0
	  beq-      .loc_0x148
	  mr        r3, r29
	  mr        r4, r28
	  mr        r5, r31
	  mr        r6, r25
	  bl        0xABC

	.loc_0x148:
	  mr        r3, r29
	  mr        r4, r27
	  bl        0xA18
	  stw       r28, -0x77EC(r13)
	  addi      r3, r27, 0x10
	  stw       r27, -0x77E8(r13)
	  b         .loc_0x240

	.loc_0x164:
	  cmplwi    r28, 0
	  beq-      .loc_0x1D8
	  lwz       r25, 0x8(r31)
	  mr        r3, r29
	  lwz       r26, 0xC(r31)
	  mr        r4, r31
	  bl        0xAD0
	  lwz       r0, 0x4(r31)
	  add       r31, r31, r28
	  mr        r3, r31
	  mr        r4, r30
	  sub       r0, r0, r28
	  rlwinm    r6,r28,0,24,31
	  stw       r0, 0x4(r31)
	  li        r7, 0
	  li        r8, 0
	  lbz       r5, 0x6D(r29)
	  bl        0x1380
	  mr.       r4, r3
	  beq-      .loc_0x1C4
	  mr        r3, r29
	  mr        r5, r25
	  mr        r6, r26
	  bl        0xA40

	.loc_0x1C4:
	  mr        r3, r29
	  mr        r4, r31
	  bl        0x99C
	  addi      r3, r31, 0x10
	  b         .loc_0x240

	.loc_0x1D8:
	  lwz       r25, 0x8(r31)
	  mr        r3, r31
	  lwz       r26, 0xC(r31)
	  mr        r4, r30
	  lbz       r5, 0x6D(r29)
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  bl        0x1330
	  mr        r30, r3
	  mr        r3, r29
	  mr        r4, r31
	  bl        0xA44
	  cmplwi    r30, 0
	  beq-      .loc_0x228
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r25
	  mr        r6, r26
	  bl        0x9DC

	.loc_0x228:
	  mr        r3, r29
	  mr        r4, r31
	  bl        0x938
	  addi      r3, r31, 0x10
	  b         .loc_0x240

	.loc_0x23C:
	  li        r3, 0

	.loc_0x240:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800204A0
 * Size:	0000E4
 */
void JKRExpHeap::allocFromHead(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, -0x1
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x3
	  rlwinm    r4,r0,0,0,29
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r6, 0x78(r3)
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r3, 0x4(r6)
	  cmplw     r3, r4
	  blt-      .loc_0x60
	  cmplw     r5, r3
	  ble-      .loc_0x60
	  lbz       r0, 0x6C(r30)
	  mr        r5, r3
	  mr        r31, r6
	  cmplwi    r0, 0
	  bne-      .loc_0x6C
	  cmplw     r3, r4
	  beq-      .loc_0x6C

	.loc_0x60:
	  lwz       r6, 0xC(r6)

	.loc_0x64:
	  cmplwi    r6, 0
	  bne+      .loc_0x30

	.loc_0x6C:
	  cmplwi    r31, 0
	  beq-      .loc_0xC8
	  lbz       r5, 0x6D(r30)
	  mr        r3, r31
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  bl        0x124C
	  mr.       r4, r3
	  beq-      .loc_0xA8
	  lwz       r5, 0x8(r31)
	  mr        r3, r30
	  lwz       r6, 0xC(r31)
	  bl        0x90C
	  b         .loc_0xB4

	.loc_0xA8:
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x948

	.loc_0xB4:
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x858
	  addi      r3, r31, 0x10
	  b         .loc_0xCC

	.loc_0xC8:
	  li        r3, 0

	.loc_0xCC:
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
 * Address:	80020584
 * Size:	000158
 */
void JKRExpHeap::allocFromTail(unsigned long, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  subi      r0, r5, 0x1
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  li        r31, 0
	  li        r30, 0
	  li        r29, 0
	  lwz       r8, 0x7C(r3)
	  not       r3, r0
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r6, 0x4(r8)
	  add       r5, r8, r6
	  addi      r5, r5, 0x10
	  sub       r0, r5, r4
	  and       r7, r3, r0
	  sub       r28, r5, r7
	  cmplw     r6, r28
	  blt-      .loc_0x60
	  mr        r30, r8
	  sub       r31, r6, r28
	  subi      r29, r7, 0x10
	  b         .loc_0x6C

	.loc_0x60:
	  lwz       r8, 0x8(r8)

	.loc_0x64:
	  cmplwi    r8, 0
	  bne+      .loc_0x30

	.loc_0x6C:
	  cmplwi    r30, 0
	  beq-      .loc_0x140
	  cmplwi    r31, 0x10
	  blt-      .loc_0xBC
	  lbz       r7, 0x6D(r27)
	  mr        r3, r29
	  mr        r6, r28
	  li        r4, 0
	  li        r5, 0
	  li        r8, 0x80
	  bl        0x113C
	  lwz       r0, 0x4(r30)
	  mr        r3, r27
	  mr        r4, r29
	  sub       r5, r0, r28
	  subi      r0, r5, 0x10
	  stw       r0, 0x4(r30)
	  bl        0x780
	  addi      r3, r29, 0x10
	  b         .loc_0x144

	.loc_0xBC:
	  cmplwi    r31, 0
	  beq-      .loc_0x104
	  mr        r3, r27
	  mr        r4, r30
	  bl        0x848
	  ori       r0, r31, 0x80
	  lbz       r7, 0x6D(r27)
	  mr        r3, r29
	  mr        r6, r28
	  rlwinm    r8,r0,0,24,31
	  li        r4, 0
	  li        r5, 0
	  bl        0x10E4
	  mr        r3, r27
	  mr        r4, r29
	  bl        0x738
	  addi      r3, r29, 0x10
	  b         .loc_0x144

	.loc_0x104:
	  mr        r3, r27
	  mr        r4, r30
	  bl        0x808
	  lbz       r7, 0x6D(r27)
	  mr        r3, r29
	  mr        r6, r28
	  li        r4, 0
	  li        r5, 0
	  li        r8, 0x80
	  bl        0x10A8
	  mr        r3, r27
	  mr        r4, r29
	  bl        0x6FC
	  addi      r3, r29, 0x10
	  b         .loc_0x144

	.loc_0x140:
	  li        r3, 0

	.loc_0x144:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800206DC
 * Size:	0000E0
 */
void JKRExpHeap::allocFromTail(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0x3
	  rlwinm    r4,r0,0,0,29
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x7C(r3)
	  b         .loc_0x48

	.loc_0x30:
	  lwz       r0, 0x4(r3)
	  cmplw     r0, r4
	  blt-      .loc_0x44
	  mr        r31, r3
	  b         .loc_0x50

	.loc_0x44:
	  lwz       r3, 0x8(r3)

	.loc_0x48:
	  cmplwi    r3, 0
	  bne+      .loc_0x30

	.loc_0x50:
	  cmplwi    r31, 0
	  beq-      .loc_0xC0
	  lbz       r7, 0x6D(r29)
	  mr        r3, r31
	  li        r5, 0
	  li        r6, 0
	  li        r8, 0
	  bl        0x1070
	  mr.       r30, r3
	  beq-      .loc_0x80
	  mr        r4, r31
	  b         .loc_0x94

	.loc_0x80:
	  mr        r3, r29
	  mr        r4, r31
	  bl        0x734
	  mr        r30, r31
	  li        r4, 0

	.loc_0x94:
	  cmplwi    r4, 0
	  beq-      .loc_0xAC
	  lwz       r5, 0x8(r31)
	  mr        r3, r29
	  lwz       r6, 0xC(r31)
	  bl        0x6C8

	.loc_0xAC:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x624
	  addi      r3, r30, 0x10
	  b         .loc_0xC4

	.loc_0xC0:
	  li        r3, 0

	.loc_0xC4:
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
 * Address:	800207BC
 * Size:	000074
 */
void JKRExpHeap::do_free(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x18
	  bl        0xCF38C
	  lwz       r0, 0x30(r30)
	  cmplw     r0, r31
	  bgt-      .loc_0x54
	  lwz       r0, 0x34(r30)
	  cmplw     r31, r0
	  bgt-      .loc_0x54
	  mr        r3, r31
	  bl        0x1074
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  mr        r4, r30
	  bl        0x1004

	.loc_0x54:
	  addi      r3, r30, 0x18
	  bl        0xCF430
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
 * Address:	80020830
 * Size:	000094
 */
void JKRExpHeap::freeGroup(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  addi      r3, r27, 0x18
	  bl        0xCF31C
	  lwz       r30, 0x80(r27)
	  rlwinm    r31,r28,0,24,31
	  li        r29, 0
	  b         .loc_0x6C

	.loc_0x30:
	  lbz       r0, 0x3(r30)
	  cmplw     r0, r31
	  bne-      .loc_0x68
	  lwz       r5, 0x4(r30)
	  mr        r3, r27
	  addi      r4, r30, 0x10
	  bl        0x33B0
	  lwz       r28, 0xC(r30)
	  mr        r3, r30
	  mr        r4, r27
	  bl        0xF88
	  mr        r30, r28
	  addi      r29, r29, 0x1
	  b         .loc_0x6C

	.loc_0x68:
	  lwz       r30, 0xC(r30)

	.loc_0x6C:
	  cmplwi    r30, 0
	  bne+      .loc_0x30
	  addi      r3, r27, 0x18
	  bl        0xCF39C
	  mr        r3, r29
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800208C4
 * Size:	00007C
 */
void JKRExpHeap::do_freeAll()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x18
	  bl        0xCF28C
	  mr        r3, r31
	  bl        0x2DFC
	  lwz       r0, 0x30(r31)
	  li        r4, 0
	  li        r5, 0
	  li        r7, 0
	  stw       r0, 0x78(r31)
	  li        r8, 0
	  lwz       r0, 0x78(r31)
	  stw       r0, 0x7C(r31)
	  lwz       r6, 0x38(r31)
	  lwz       r3, 0x78(r31)
	  subi      r6, r6, 0x10
	  bl        0xE40
	  li        r0, 0
	  addi      r3, r31, 0x18
	  stw       r0, 0x80(r31)
	  stw       r0, 0x84(r31)
	  bl        0xCF31C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80020940
 * Size:	000090
 */
void JKRExpHeap::do_freeTail()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r3, r29, 0x18
	  bl        0xCF208
	  lwz       r31, 0x80(r29)
	  b         .loc_0x64

	.loc_0x2C:
	  lbz       r0, 0x2(r31)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x60
	  lwz       r5, 0x4(r31)
	  mr        r3, r29
	  addi      r4, r31, 0x10
	  bl        0x32A4
	  lwz       r30, 0xC(r31)
	  mr        r3, r31
	  mr        r4, r29
	  bl        0xE7C
	  mr        r31, r30
	  b         .loc_0x64

	.loc_0x60:
	  lwz       r31, 0xC(r31)

	.loc_0x64:
	  cmplwi    r31, 0
	  bne+      .loc_0x2C
	  addi      r3, r29, 0x18
	  bl        0xCF294
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
 * Address:	800209D0
 * Size:	000004
 */
void JKRExpHeap::do_fillFreeArea()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800209D4
 * Size:	000058
 */
void JKRExpHeap::do_changeGroupID(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r3, r29, 0x18
	  bl        0xCF170
	  lbz       r31, 0x6D(r29)
	  addi      r3, r29, 0x18
	  stb       r30, 0x6D(r29)
	  bl        0xCF23C
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	80020A2C
 * Size:	0001BC
 */
void JKRExpHeap::do_resize(void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r3, r29, 0x18
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  bl        0xCF110
	  mr        r3, r28
	  bl        0xE10
	  mr.       r31, r3
	  beq-      .loc_0x58
	  lwz       r0, 0x30(r29)
	  cmplw     r28, r0
	  blt-      .loc_0x58
	  lwz       r0, 0x34(r29)
	  cmplw     r0, r28
	  bge-      .loc_0x68

	.loc_0x58:
	  addi      r3, r29, 0x18
	  bl        0xCF1BC
	  li        r3, -0x1
	  b         .loc_0x19C

	.loc_0x68:
	  addi      r0, r30, 0x3
	  lwz       r4, 0x4(r31)
	  rlwinm    r30,r0,0,0,29
	  cmplw     r30, r4
	  bne-      .loc_0x8C
	  addi      r3, r29, 0x18
	  bl        0xCF198
	  mr        r3, r30
	  b         .loc_0x19C

	.loc_0x8C:
	  ble-      .loc_0x15C
	  addi      r0, r31, 0x10
	  lwz       r3, 0x78(r29)
	  add       r0, r0, r4
	  li        r28, 0
	  b         .loc_0xB8

	.loc_0xA4:
	  cmplw     r3, r0
	  bne-      .loc_0xB4
	  mr        r28, r3
	  b         .loc_0xC0

	.loc_0xB4:
	  lwz       r3, 0xC(r3)

	.loc_0xB8:
	  cmplwi    r3, 0
	  bne+      .loc_0xA4

	.loc_0xC0:
	  cmplwi    r28, 0
	  bne-      .loc_0xD8
	  addi      r3, r29, 0x18
	  bl        0xCF14C
	  li        r3, -0x1
	  b         .loc_0x19C

	.loc_0xD8:
	  lwz       r0, 0x4(r28)
	  add       r3, r4, r0
	  addi      r0, r3, 0x10
	  cmplw     r30, r0
	  ble-      .loc_0xFC
	  addi      r3, r29, 0x18
	  bl        0xCF128
	  li        r3, -0x1
	  b         .loc_0x19C

	.loc_0xFC:
	  mr        r3, r29
	  mr        r4, r28
	  bl        0x368
	  lwz       r3, 0x4(r31)
	  lwz       r0, 0x4(r28)
	  add       r3, r0, r3
	  addi      r0, r3, 0x10
	  stw       r0, 0x4(r31)
	  lwz       r0, 0x4(r31)
	  sub       r0, r0, r30
	  cmplwi    r0, 0x10
	  ble-      .loc_0x190
	  lbz       r5, 0x3(r31)
	  mr        r3, r31
	  lbz       r6, 0x2(r31)
	  mr        r4, r30
	  li        r7, 0
	  li        r8, 0
	  bl        0xC04
	  mr.       r4, r3
	  beq-      .loc_0x190
	  mr        r3, r29
	  bl        0x34C
	  b         .loc_0x190

	.loc_0x15C:
	  sub       r0, r4, r30
	  cmplwi    r0, 0x10
	  ble-      .loc_0x190
	  lbz       r5, 0x3(r31)
	  mr        r4, r30
	  lbz       r6, 0x2(r31)
	  li        r7, 0
	  li        r8, 0
	  bl        0xBCC
	  mr.       r4, r3
	  beq-      .loc_0x190
	  mr        r3, r29
	  bl        0x314

	.loc_0x190:
	  addi      r3, r29, 0x18
	  bl        0xCF084
	  lwz       r3, 0x4(r31)

	.loc_0x19C:
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
 * Address:	80020BE8
 * Size:	000088
 */
void JKRExpHeap::do_getSize(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r3, r29, 0x18
	  bl        0xCEF5C
	  mr        r3, r30
	  bl        0xC5C
	  mr.       r31, r3
	  beq-      .loc_0x50
	  lwz       r0, 0x30(r29)
	  cmplw     r30, r0
	  blt-      .loc_0x50
	  lwz       r0, 0x34(r29)
	  cmplw     r0, r30
	  bge-      .loc_0x60

	.loc_0x50:
	  addi      r3, r29, 0x18
	  bl        0xCF008
	  li        r3, -0x1
	  b         .loc_0x6C

	.loc_0x60:
	  addi      r3, r29, 0x18
	  bl        0xCEFF8
	  lwz       r3, 0x4(r31)

	.loc_0x6C:
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
 * Address:	80020C70
 * Size:	00006C
 */
void JKRExpHeap::do_getFreeSize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x18
	  bl        0xCEEDC
	  lwz       r3, 0x78(r30)
	  li        r31, 0
	  b         .loc_0x40

	.loc_0x2C:
	  lwz       r0, 0x4(r3)
	  cmpw      r31, r0
	  bge-      .loc_0x3C
	  mr        r31, r0

	.loc_0x3C:
	  lwz       r3, 0xC(r3)

	.loc_0x40:
	  cmplwi    r3, 0
	  bne+      .loc_0x2C
	  addi      r3, r30, 0x18
	  bl        0xCEF88
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80020CDC
 * Size:	000074
 */
void JKRExpHeap::do_getMaxFreeBlock()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x18
	  bl        0xCEE70
	  lwz       r4, 0x78(r30)
	  li        r3, 0
	  li        r31, 0
	  b         .loc_0x48

	.loc_0x30:
	  lwz       r0, 0x4(r4)
	  cmpw      r3, r0
	  bge-      .loc_0x44
	  mr        r3, r0
	  mr        r31, r4

	.loc_0x44:
	  lwz       r4, 0xC(r4)

	.loc_0x48:
	  cmplwi    r4, 0
	  bne+      .loc_0x30
	  addi      r3, r30, 0x18
	  bl        0xCEF14
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80020D50
 * Size:	000064
 */
void JKRExpHeap::do_getTotalFreeSize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x18
	  bl        0xCEDF8
	  lwz       r3, 0x78(r30)
	  b         .loc_0x38

	.loc_0x2C:
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0xC(r3)
	  add       r31, r31, r0

	.loc_0x38:
	  cmplwi    r3, 0
	  bne+      .loc_0x2C
	  addi      r3, r30, 0x18
	  bl        0xCEEB0
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80020DB4
 * Size:	000098
 */
void JKRExpHeap::appendUsedList(JKRExpHeap::CMemBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x3C
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r3, r3, 0x3710
	  li        r4, 0x61F
	  addi      r5, r5, 0x3720
	  crclr     6, 0x6
	  bl        0xCC980

	.loc_0x3C:
	  lwz       r3, 0x84(r30)
	  li        r0, 0x484D
	  cmplwi    r3, 0
	  sth       r0, 0x0(r31)
	  beq-      .loc_0x5C
	  stw       r31, 0xC(r3)
	  stw       r3, 0x8(r31)
	  b         .loc_0x64

	.loc_0x5C:
	  li        r0, 0
	  stw       r0, 0x8(r31)

	.loc_0x64:
	  stw       r31, 0x84(r30)
	  lwz       r0, 0x80(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x78
	  stw       r31, 0x80(r30)

	.loc_0x78:
	  li        r0, 0
	  stw       r0, 0xC(r31)
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
 * Address:	80020E4C
 * Size:	00004C
 */
void JKRExpHeap::setFreeBlock(JKRExpHeap::CMemBlock*, JKRExpHeap::CMemBlock*,
                              JKRExpHeap::CMemBlock*)
{
	/*
	.loc_0x0:
	  cmplwi    r5, 0
	  bne-      .loc_0x18
	  stw       r4, 0x78(r3)
	  li        r0, 0
	  stw       r0, 0x8(r4)
	  b         .loc_0x20

	.loc_0x18:
	  stw       r4, 0xC(r5)
	  stw       r5, 0x8(r4)

	.loc_0x20:
	  cmplwi    r6, 0
	  bne-      .loc_0x38
	  stw       r4, 0x7C(r3)
	  li        r0, 0
	  stw       r0, 0xC(r4)
	  b         .loc_0x40

	.loc_0x38:
	  stw       r4, 0x8(r6)
	  stw       r6, 0xC(r4)

	.loc_0x40:
	  li        r0, 0
	  sth       r0, 0x0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80020E98
 * Size:	000034
 */
void JKRExpHeap::removeFreeBlock(JKRExpHeap::CMemBlock*)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x8(r4)
	  lwz       r4, 0xC(r4)
	  cmplwi    r5, 0
	  bne-      .loc_0x18
	  stw       r4, 0x78(r3)
	  b         .loc_0x1C

	.loc_0x18:
	  stw       r4, 0xC(r5)

	.loc_0x1C:
	  cmplwi    r4, 0
	  bne-      .loc_0x2C
	  stw       r5, 0x7C(r3)
	  blr

	.loc_0x2C:
	  stw       r5, 0x8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80020ECC
 * Size:	0001E4
 */
void JKRExpHeap::recycleFreeBlock(JKRExpHeap::CMemBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  lwz       r6, 0x4(r4)
	  sth       r5, 0x0(r4)
	  add       r7, r4, r6
	  lbz       r0, 0x2(r4)
	  rlwinm.   r0,r0,0,25,31
	  beq-      .loc_0x54
	  sub       r30, r4, r0
	  add       r6, r6, r0
	  stb       r5, 0x3(r30)
	  add       r7, r30, r6
	  stb       r5, 0x2(r30)
	  stw       r6, 0x4(r30)

	.loc_0x54:
	  lwz       r3, 0x78(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x9C
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  li        r7, 0
	  li        r8, 0
	  bl        0x814
	  stw       r30, 0x78(r31)
	  li        r0, 0
	  stw       r30, 0x7C(r31)
	  stw       r30, 0x78(r31)
	  stw       r0, 0x8(r30)
	  stw       r30, 0x7C(r31)
	  stw       r0, 0xC(r30)
	  sth       r0, 0x0(r30)
	  b         .loc_0x1C8

	.loc_0x9C:
	  cmplw     r3, r7
	  blt-      .loc_0x100
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  li        r7, 0
	  li        r8, 0
	  bl        0x7D0
	  lwz       r3, 0x78(r31)
	  li        r0, 0
	  stw       r30, 0x78(r31)
	  cmplwi    r3, 0
	  stw       r0, 0x8(r30)
	  bne-      .loc_0xE0
	  stw       r30, 0x7C(r31)
	  stw       r0, 0xC(r30)
	  b         .loc_0xE8

	.loc_0xE0:
	  stw       r30, 0x8(r3)
	  stw       r3, 0xC(r30)

	.loc_0xE8:
	  li        r0, 0
	  mr        r3, r31
	  sth       r0, 0x0(r30)
	  mr        r4, r30
	  bl        .loc_0x1E4
	  b         .loc_0x1C8

	.loc_0x100:
	  lwz       r0, 0x7C(r31)
	  cmplw     r0, r30
	  bgt-      .loc_0x168
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  li        r7, 0
	  li        r8, 0
	  bl        0x768
	  lwz       r3, 0x7C(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x140
	  stw       r30, 0x78(r31)
	  li        r0, 0
	  stw       r0, 0x8(r30)
	  b         .loc_0x148

	.loc_0x140:
	  stw       r30, 0xC(r3)
	  stw       r3, 0x8(r30)

	.loc_0x148:
	  stw       r30, 0x7C(r31)
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0xC(r30)
	  sth       r0, 0x0(r30)
	  lwz       r4, 0x8(r30)
	  bl        .loc_0x1E4
	  b         .loc_0x1C8

	.loc_0x168:
	  mr        r29, r3
	  b         .loc_0x1C0

	.loc_0x170:
	  cmplw     r29, r30
	  bge-      .loc_0x1BC
	  lwz       r0, 0xC(r29)
	  cmplw     r30, r0
	  bge-      .loc_0x1BC
	  stw       r0, 0xC(r30)
	  li        r0, 0
	  mr        r3, r31
	  mr        r4, r30
	  stw       r29, 0x8(r30)
	  stw       r30, 0xC(r29)
	  lwz       r5, 0xC(r30)
	  stw       r30, 0x8(r5)
	  stb       r0, 0x3(r30)
	  bl        .loc_0x1E4
	  mr        r3, r31
	  mr        r4, r29
	  bl        .loc_0x1E4
	  b         .loc_0x1C8

	.loc_0x1BC:
	  lwz       r29, 0xC(r29)

	.loc_0x1C0:
	  cmplwi    r29, 0
	  bne+      .loc_0x170

	.loc_0x1C8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x1E4:
	*/
}

/*
 * --INFO--
 * Address:	800210B0
 * Size:	000104
 */
void JKRExpHeap::joinTwoBlocks(JKRExpHeap::CMemBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8047
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r30, r3
	  mr        r31, r4
	  addi      r29, r5, 0x36E8
	  lwz       r27, 0xC(r4)
	  lwz       r3, 0x4(r4)
	  lbz       r0, 0x2(r27)
	  add       r28, r31, r3
	  rlwinm    r0,r0,0,25,31
	  sub       r26, r27, r0
	  addi      r28, r28, 0x10
	  cmplw     r28, r26
	  ble-      .loc_0x78
	  addi      r3, r29, 0x54
	  crclr     6, 0x6
	  bl        0x82D0
	  lwz       r3, -0x77D4(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r29, 0x28
	  addi      r5, r29, 0x78
	  li        r4, 0x71B
	  crclr     6, 0x6
	  bl        0xCC648

	.loc_0x78:
	  cmplw     r28, r26
	  bne-      .loc_0xF0
	  lbz       r0, 0x2(r27)
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r0,0,25,31
	  lwz       r4, 0x4(r31)
	  add       r0, r3, r0
	  add       r3, r0, r4
	  addi      r0, r3, 0x10
	  stw       r0, 0x4(r31)
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0xC(r27)
	  cmplwi    r3, 0
	  bne-      .loc_0xC0
	  stw       r31, 0x78(r30)
	  li        r0, 0
	  stw       r0, 0x8(r31)
	  b         .loc_0xC8

	.loc_0xC0:
	  stw       r31, 0xC(r3)
	  stw       r3, 0x8(r31)

	.loc_0xC8:
	  cmplwi    r4, 0
	  bne-      .loc_0xE0
	  stw       r31, 0x7C(r30)
	  li        r0, 0
	  stw       r0, 0xC(r31)
	  b         .loc_0xE8

	.loc_0xE0:
	  stw       r31, 0x8(r4)
	  stw       r4, 0xC(r31)

	.loc_0xE8:
	  li        r0, 0
	  sth       r0, 0x0(r31)

	.loc_0xF0:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800211B4
 * Size:	0001E0
 */
void JKRExpHeap::check()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r3
	  lis       r3, 0x8047
	  addi      r31, r3, 0x36E8
	  addi      r3, r28, 0x18
	  bl        0xCE994
	  lwz       r27, 0x80(r28)
	  li        r30, 0
	  li        r29, 0x1
	  b         .loc_0xF0

	.loc_0x34:
	  lhz       r0, 0x0(r27)
	  cmplwi    r0, 0x484D
	  beq-      .loc_0x5C
	  rlwinm    r6,r0,0,24,31
	  rlwinm    r5,r0,24,24,31
	  mr        r4, r27
	  addi      r3, r31, 0x88
	  li        r29, 0
	  crclr     6, 0x6
	  bl        0x81C0

	.loc_0x5C:
	  lwz       r5, 0xC(r27)
	  cmplwi    r5, 0
	  beq-      .loc_0xB4
	  lhz       r0, 0x0(r5)
	  cmplwi    r0, 0x484D
	  beq-      .loc_0x8C
	  mr        r4, r27
	  addi      r3, r31, 0xB4
	  li        r29, 0
	  crclr     6, 0x6
	  bl        0x8194
	  b         .loc_0xF8

	.loc_0x8C:
	  lwz       r0, 0x8(r5)
	  cmplw     r0, r27
	  beq-      .loc_0xD4
	  mr        r4, r5
	  mr        r5, r0
	  addi      r3, r31, 0xE4
	  li        r29, 0
	  crclr     6, 0x6
	  bl        0x816C
	  b         .loc_0xD4

	.loc_0xB4:
	  lwz       r5, 0x84(r28)
	  cmplw     r5, r27
	  beq-      .loc_0xD4
	  mr        r4, r27
	  addi      r3, r31, 0x110
	  li        r29, 0
	  crclr     6, 0x6
	  bl        0x8148

	.loc_0xD4:
	  lbz       r0, 0x2(r27)
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r0,0,25,31
	  lwz       r27, 0xC(r27)
	  add       r0, r3, r0
	  add       r30, r0, r30
	  addi      r30, r30, 0x10

	.loc_0xF0:
	  cmplwi    r27, 0
	  bne+      .loc_0x34

	.loc_0xF8:
	  lwz       r27, 0x78(r28)
	  b         .loc_0x188

	.loc_0x100:
	  lwz       r4, 0xC(r27)
	  lwz       r0, 0x4(r27)
	  cmplwi    r4, 0
	  add       r30, r0, r30
	  addi      r30, r30, 0x10
	  beq-      .loc_0x164
	  lwz       r5, 0x8(r4)
	  cmplw     r5, r27
	  beq-      .loc_0x134
	  addi      r3, r31, 0xE4
	  li        r29, 0
	  crclr     6, 0x6
	  bl        0x80E8

	.loc_0x134:
	  lwz       r5, 0x4(r27)
	  lwz       r0, 0xC(r27)
	  addi      r3, r5, 0x10
	  add       r3, r27, r3
	  cmplw     r3, r0
	  ble-      .loc_0x184
	  mr        r4, r27
	  addi      r3, r31, 0x13C
	  li        r29, 0
	  crclr     6, 0x6
	  bl        0x80BC
	  b         .loc_0x184

	.loc_0x164:
	  lwz       r5, 0x7C(r28)
	  cmplw     r5, r27
	  beq-      .loc_0x184
	  mr        r4, r27
	  addi      r3, r31, 0x110
	  li        r29, 0
	  crclr     6, 0x6
	  bl        0x8098

	.loc_0x184:
	  lwz       r27, 0xC(r27)

	.loc_0x188:
	  cmplwi    r27, 0
	  bne+      .loc_0x100
	  lwz       r4, 0x38(r28)
	  cmplw     r30, r4
	  beq-      .loc_0x1B0
	  mr        r5, r30
	  addi      r3, r31, 0x164
	  li        r29, 0
	  crclr     6, 0x6
	  bl        0x806C

	.loc_0x1B0:
	  rlwinm.   r0,r29,0,24,31
	  bne-      .loc_0x1C0
	  addi      r3, r31, 0x194
	  bl        0x8138

	.loc_0x1C0:
	  addi      r3, r28, 0x18
	  bl        0xCE8CC
	  mr        r3, r29
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80021394
 * Size:	0001C8
 */
void JKRExpHeap::dump()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r25, 0x24(r1)
	  mr        r26, r3
	  lis       r3, 0x8047
	  addi      r31, r3, 0x36E8
	  addi      r3, r26, 0x18
	  bl        0xCE7B4
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  addi      r3, r31, 0x1BC
	  mr        r30, r0
	  li        r29, 0
	  li        r28, 0
	  li        r27, 0
	  bl        0x7FBC
	  addi      r3, r31, 0x1F4
	  bl        0x7FB4
	  lwz       r0, 0x80(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x70
	  subi      r3, r2, 0x7E70
	  bl        0x7FA0

	.loc_0x70:
	  lwz       r25, 0x80(r26)
	  b         .loc_0xF0

	.loc_0x78:
	  lhz       r0, 0x0(r25)
	  cmplwi    r0, 0x484D
	  beq-      .loc_0x98
	  mr        r4, r25
	  addi      r3, r31, 0x204
	  crclr     6, 0x6
	  bl        0x7EA0
	  b         .loc_0xF8

	.loc_0x98:
	  lbz       r6, 0x2(r25)
	  addi      r5, r25, 0x10
	  addi      r3, r31, 0x240
	  subi      r4, r2, 0x7E60
	  rlwinm.   r0,r6,0,24,24
	  rlwinm    r8,r6,0,25,31
	  beq-      .loc_0xB8
	  subi      r4, r2, 0x7E68

	.loc_0xB8:
	  lwz       r6, 0x4(r25)
	  lbz       r7, 0x3(r25)
	  lwz       r9, 0x8(r25)
	  lwz       r10, 0xC(r25)
	  crclr     6, 0x6
	  bl        0x7E64
	  lbz       r0, 0x2(r25)
	  addi      r28, r28, 0x1
	  lwz       r3, 0x4(r25)
	  rlwinm    r0,r0,0,25,31
	  lwz       r25, 0xC(r25)
	  add       r0, r3, r0
	  add       r29, r0, r29
	  addi      r29, r29, 0x10

	.loc_0xF0:
	  cmplwi    r25, 0
	  bne+      .loc_0x78

	.loc_0xF8:
	  addi      r3, r31, 0x268
	  bl        0x7F10
	  lwz       r0, 0x78(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  subi      r3, r2, 0x7E70
	  bl        0x7EFC

	.loc_0x114:
	  lwz       r25, 0x78(r26)
	  b         .loc_0x150

	.loc_0x11C:
	  lbz       r0, 0x2(r25)
	  addi      r3, r31, 0x240
	  lwz       r6, 0x4(r25)
	  addi      r5, r25, 0x10
	  lbz       r7, 0x3(r25)
	  rlwinm    r8,r0,0,25,31
	  lwz       r9, 0x8(r25)
	  subi      r4, r2, 0x7E58
	  lwz       r10, 0xC(r25)
	  crclr     6, 0x6
	  bl        0x7DEC
	  lwz       r25, 0xC(r25)
	  addi      r27, r27, 0x1

	.loc_0x150:
	  cmplwi    r25, 0
	  bne+      .loc_0x11C
	  lis       r0, 0x4330
	  lwz       r5, 0x38(r26)
	  stw       r29, 0xC(r1)
	  mr        r4, r29
	  lfd       f2, -0x7E48(r2)
	  mr        r6, r28
	  stw       r0, 0x8(r1)
	  mr        r7, r27
	  lfs       f3, -0x7E50(r2)
	  addi      r3, r31, 0x278
	  lfd       f0, 0x8(r1)
	  stw       r5, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  fmuls     f1, f3, f0
	  crset     6, 0x6
	  bl        0x7D8C
	  addi      r3, r26, 0x18
	  bl        0xCE704
	  mr        r3, r30
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002155C
 * Size:	0001F8
 */
void JKRExpHeap::dump_sort()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r25, 0x24(r1)
	  mr        r26, r3
	  lis       r3, 0x8047
	  addi      r31, r3, 0x36E8
	  addi      r3, r26, 0x18
	  bl        0xCE5EC
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  addi      r3, r31, 0x1BC
	  mr        r30, r0
	  li        r29, 0
	  li        r28, 0
	  li        r27, 0
	  bl        0x7DF4
	  addi      r3, r31, 0x1F4
	  bl        0x7DEC
	  lwz       r0, 0x80(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x74
	  subi      r3, r2, 0x7E70
	  bl        0x7DD8
	  b         .loc_0x128

	.loc_0x74:
	  li        r4, 0

	.loc_0x78:
	  lwz       r3, 0x80(r26)
	  li        r25, -0x1
	  b         .loc_0x9C

	.loc_0x84:
	  cmplw     r4, r3
	  bge-      .loc_0x98
	  cmplw     r3, r25
	  bge-      .loc_0x98
	  mr        r25, r3

	.loc_0x98:
	  lwz       r3, 0xC(r3)

	.loc_0x9C:
	  cmplwi    r3, 0
	  bne+      .loc_0x84
	  addis     r0, r25, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x128
	  lhz       r0, 0x0(r25)
	  cmplwi    r0, 0x484D
	  beq-      .loc_0xCC
	  addi      r3, r31, 0x204
	  crclr     6, 0x6
	  bl        0x7CA4
	  b         .loc_0x128

	.loc_0xCC:
	  lbz       r6, 0x2(r25)
	  addi      r5, r25, 0x10
	  addi      r3, r31, 0x240
	  subi      r4, r2, 0x7E60
	  rlwinm.   r0,r6,0,24,24
	  rlwinm    r8,r6,0,25,31
	  beq-      .loc_0xEC
	  subi      r4, r2, 0x7E68

	.loc_0xEC:
	  lwz       r6, 0x4(r25)
	  lbz       r7, 0x3(r25)
	  lwz       r9, 0x8(r25)
	  lwz       r10, 0xC(r25)
	  crclr     6, 0x6
	  bl        0x7C68
	  lbz       r0, 0x2(r25)
	  mr        r4, r25
	  lwz       r3, 0x4(r25)
	  addi      r28, r28, 0x1
	  rlwinm    r0,r0,0,25,31
	  add       r0, r3, r0
	  add       r29, r0, r29
	  addi      r29, r29, 0x10
	  b         .loc_0x78

	.loc_0x128:
	  addi      r3, r31, 0x268
	  bl        0x7D18
	  lwz       r0, 0x78(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x144
	  subi      r3, r2, 0x7E70
	  bl        0x7D04

	.loc_0x144:
	  lwz       r25, 0x78(r26)
	  b         .loc_0x180

	.loc_0x14C:
	  lbz       r0, 0x2(r25)
	  addi      r3, r31, 0x240
	  lwz       r6, 0x4(r25)
	  addi      r5, r25, 0x10
	  lbz       r7, 0x3(r25)
	  rlwinm    r8,r0,0,25,31
	  lwz       r9, 0x8(r25)
	  subi      r4, r2, 0x7E58
	  lwz       r10, 0xC(r25)
	  crclr     6, 0x6
	  bl        0x7BF4
	  lwz       r25, 0xC(r25)
	  addi      r27, r27, 0x1

	.loc_0x180:
	  cmplwi    r25, 0
	  bne+      .loc_0x14C
	  lis       r0, 0x4330
	  lwz       r5, 0x38(r26)
	  stw       r29, 0xC(r1)
	  mr        r4, r29
	  lfd       f2, -0x7E48(r2)
	  mr        r6, r28
	  stw       r0, 0x8(r1)
	  mr        r7, r27
	  lfs       f3, -0x7E50(r2)
	  addi      r3, r31, 0x278
	  lfd       f0, 0x8(r1)
	  stw       r5, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  fmuls     f1, f3, f0
	  crset     6, 0x6
	  bl        0x7B94
	  addi      r3, r26, 0x18
	  bl        0xCE50C
	  mr        r3, r30
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80021754
 * Size:	000020
 */
void JKRExpHeap::CMemBlock::initiate(JKRExpHeap::CMemBlock*,
                                     JKRExpHeap::CMemBlock*, unsigned long,
                                     unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  li        r0, 0x484D
	  sth       r0, 0x0(r3)
	  stb       r8, 0x2(r3)
	  stb       r7, 0x3(r3)
	  stw       r6, 0x4(r3)
	  stw       r4, 0x8(r3)
	  stw       r5, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80021774
 * Size:	000044
 */
void JKRExpHeap::CMemBlock::allocFore(unsigned long, unsigned char,
                                      unsigned char, unsigned char,
                                      unsigned char)
{
	/*
	.loc_0x0:
	  stb       r5, 0x3(r3)
	  addi      r5, r4, 0x10
	  li        r9, 0
	  stb       r6, 0x2(r3)
	  lwz       r0, 0x4(r3)
	  cmplw     r0, r5
	  blt-      .loc_0x3C
	  add       r9, r4, r3
	  stb       r7, 0x13(r9)
	  stb       r8, 0x12(r9)
	  lwz       r0, 0x4(r3)
	  sub       r0, r0, r5
	  stw       r0, 0x14(r9)
	  addi      r9, r9, 0x10
	  stw       r4, 0x4(r3)

	.loc_0x3C:
	  mr        r3, r9
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800217B8
 * Size:	000058
 */
void JKRExpHeap::CMemBlock::allocBack(unsigned long, unsigned char,
                                      unsigned char, unsigned char,
                                      unsigned char)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x4(r3)
	  addi      r10, r4, 0x10
	  li        r9, 0
	  cmplw     r0, r10
	  blt-      .loc_0x44
	  add       r9, r3, r0
	  ori       r0, r8, 0x80
	  sub       r9, r9, r4
	  stb       r7, 0x3(r9)
	  stb       r0, 0x2(r9)
	  stw       r4, 0x4(r9)
	  stb       r5, 0x3(r3)
	  stb       r6, 0x2(r3)
	  lwz       r0, 0x4(r3)
	  sub       r0, r0, r10
	  stw       r0, 0x4(r3)
	  b         .loc_0x50

	.loc_0x44:
	  stb       r7, 0x3(r3)
	  li        r0, 0x80
	  stb       r0, 0x2(r3)

	.loc_0x50:
	  mr        r3, r9
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80021810
 * Size:	000060
 */
void JKRExpHeap::CMemBlock::free(JKRExpHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x8(r3)
	  lwz       r3, 0xC(r3)
	  cmplwi    r5, 0
	  bne-      .loc_0x28
	  stw       r3, 0x80(r4)
	  b         .loc_0x2C

	.loc_0x28:
	  stw       r3, 0xC(r5)

	.loc_0x2C:
	  cmplwi    r3, 0
	  bne-      .loc_0x3C
	  stw       r5, 0x84(r4)
	  b         .loc_0x40

	.loc_0x3C:
	  stw       r5, 0x8(r3)

	.loc_0x40:
	  mr        r3, r4
	  mr        r4, r6
	  bl        -0x98C
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80021870
 * Size:	00001C
 */
void JKRExpHeap::CMemBlock::getHeapBlock(void*)
{
	/*
	.loc_0x0:
	  cmplwi    r3, 0
	  beq-      .loc_0x14
	  lhzu      r0, -0x10(r3)
	  cmplwi    r0, 0x484D
	  beqlr-

	.loc_0x14:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002188C
 * Size:	0000F4
 */
void JKRExpHeap::state_register(JKRHeap::TState*, unsigned long) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  cmplwi    r30, 0xFF
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  stw       r30, 0x14(r4)
	  bgt-      .loc_0x80
	  addi      r3, r28, 0x18
	  bl        0xCE2A4
	  lwz       r4, 0x80(r28)
	  rlwinm    r3,r30,0,24,31
	  li        r31, 0
	  b         .loc_0x68

	.loc_0x4C:
	  lbz       r0, 0x3(r4)
	  cmplw     r0, r3
	  bne-      .loc_0x64
	  lwz       r0, 0x4(r4)
	  add       r31, r0, r31
	  addi      r31, r31, 0x10

	.loc_0x64:
	  lwz       r4, 0xC(r4)

	.loc_0x68:
	  cmplwi    r4, 0
	  bne+      .loc_0x4C
	  addi      r3, r28, 0x18
	  bl        0xCE344
	  stw       r31, 0x0(r29)
	  b         .loc_0x90

	.loc_0x80:
	  bl        0x1ED4
	  lwz       r0, 0x38(r28)
	  sub       r0, r0, r3
	  stw       r0, 0x0(r29)

	.loc_0x90:
	  lwz       r4, 0x80(r28)
	  li        r3, 0
	  b         .loc_0xC8

	.loc_0x9C:
	  cmplwi    r30, 0xFF
	  bgt-      .loc_0xBC
	  lbz       r0, 0x3(r4)
	  cmplw     r0, r30
	  bne-      .loc_0xC4
	  mulli     r0, r4, 0x3
	  add       r3, r3, r0
	  b         .loc_0xC4

	.loc_0xBC:
	  mulli     r0, r4, 0x3
	  add       r3, r3, r0

	.loc_0xC4:
	  lwz       r4, 0xC(r4)

	.loc_0xC8:
	  cmplwi    r4, 0
	  bne+      .loc_0x9C
	  stw       r3, 0x4(r29)
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
 * Address:	80021980
 * Size:	000030
 */
void JKRExpHeap::state_compare(const JKRHeap::TState&,
                               const JKRHeap::TState&) const
{
	/*
	.loc_0x0:
	  lwz       r6, 0x4(r4)
	  li        r3, 0x1
	  lwz       r0, 0x4(r5)
	  cmplw     r6, r0
	  beq-      .loc_0x18
	  li        r3, 0

	.loc_0x18:
	  lwz       r4, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  cmplw     r4, r0
	  beqlr-
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800219B0
 * Size:	00000C
 */
void JKRExpHeap::getHeapType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x4558
	  addi      r3, r3, 0x5048
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800219BC
 * Size:	000008
 */
void JKRExpHeap::do_getCurrentGroupId()
{
	/*
	.loc_0x0:
	  lbz       r3, 0x6D(r3)
	  blr
	*/
}
