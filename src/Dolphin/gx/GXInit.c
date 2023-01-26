

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void IsWriteGatherBufferEmpty(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void EnableWriteGatherPipe(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void DisableWriteGatherPipe(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E2680
 * Size:	0000FC
 */
void __GXDefaultTexRegionCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r30, r4
	  mr        r3, r29
	  bl        0x4ED0
	  mr        r31, r3
	  mr        r3, r29
	  bl        0x4ECC
	  srawi     r4, r30, 0x3
	  addze     r4, r4
	  rlwinm    r4,r4,3,0,28
	  cmpwi     r31, 0x7
	  subc      r4, r30, r4
	  beq-      .loc_0xB0
	  bge-      .loc_0x5C
	  cmpwi     r31, 0x6
	  bge-      .loc_0x68
	  b         .loc_0xB0

	.loc_0x5C:
	  cmpwi     r31, 0xB
	  bge-      .loc_0xB0
	  b         .loc_0x9C

	.loc_0x68:
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  rlwinm    r3,r4,4,0,27
	  lwz       r0, -0x6D70(r2)
	  addi      r3, r3, 0x308
	  add       r3, r0, r3
	  b         .loc_0xE0

	.loc_0x88:
	  rlwinm    r3,r4,4,0,27
	  lwz       r0, -0x6D70(r2)
	  addi      r3, r3, 0x288
	  add       r3, r0, r3
	  b         .loc_0xE0

	.loc_0x9C:
	  rlwinm    r3,r4,4,0,27
	  lwz       r0, -0x6D70(r2)
	  addi      r3, r3, 0x208
	  add       r3, r0, r3
	  b         .loc_0xE0

	.loc_0xB0:
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0
	  beq-      .loc_0xD0
	  rlwinm    r3,r4,4,0,27
	  lwz       r0, -0x6D70(r2)
	  addi      r3, r3, 0x288
	  add       r3, r0, r3
	  b         .loc_0xE0

	.loc_0xD0:
	  rlwinm    r3,r4,4,0,27
	  lwz       r0, -0x6D70(r2)
	  addi      r3, r3, 0x208
	  add       r3, r0, r3

	.loc_0xE0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E277C
 * Size:	000024
 */
void __GXDefaultTlutRegionCallback(void)
{
	/*
	.loc_0x0:
	  cmplwi    r3, 0x14
	  blt-      .loc_0x10
	  li        r3, 0
	  b         .loc_0x20

	.loc_0x10:
	  rlwinm    r3,r3,4,0,27
	  lwz       r0, -0x6D70(r2)
	  addi      r3, r3, 0x388
	  add       r3, r0, r3

	.loc_0x20:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E27A0
 * Size:	000190
 */
void __GXShutdown(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  cmpwi     r3, 0
	  bne-      .loc_0x110
	  lwz       r0, -0x7130(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x78
	  lwz       r3, -0x7144(r13)
	  addi      r6, r3, 0x4E
	  lhz       r4, 0x0(r6)
	  addi      r5, r3, 0x50
	  b         .loc_0x38

	.loc_0x38:
	  b         .loc_0x3C

	.loc_0x3C:
	  mr        r0, r4
	  lhz       r4, 0x0(r6)
	  lhz       r3, 0x0(r5)
	  cmplw     r4, r0
	  bne+      .loc_0x3C
	  rlwinm    r0,r4,16,0,15
	  or        r0, r0, r3
	  stw       r0, -0x7140(r13)
	  bl        0x10394
	  stw       r4, -0x7134(r13)
	  li        r0, 0x1
	  stw       r3, -0x7138(r13)
	  li        r3, 0
	  stw       r0, -0x7130(r13)
	  b         .loc_0x17C

	.loc_0x78:
	  bl        0x10378
	  lwz       r5, -0x7144(r13)
	  addi      r6, r5, 0x4E
	  lhz       r7, 0x0(r6)
	  addi      r5, r5, 0x50
	  b         .loc_0x90

	.loc_0x90:
	  b         .loc_0x94

	.loc_0x94:
	  mr        r0, r7
	  lhz       r7, 0x0(r6)
	  lhz       r10, 0x0(r5)
	  cmplw     r7, r0
	  bne+      .loc_0x94
	  lwz       r6, -0x7134(r13)
	  li        r0, 0
	  lwz       r5, -0x7138(r13)
	  rlwinm    r9,r7,16,0,15
	  subc      r8, r4, r6
	  subfe     r5, r5, r3
	  li        r7, 0xA
	  xoris     r6, r5, 0x8000
	  xoris     r5, r0, 0x8000
	  subc      r0, r8, r7
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg       r5, r5
	  cmpwi     r5, 0
	  or        r5, r9, r10
	  beq-      .loc_0xF0
	  li        r3, 0
	  b         .loc_0x17C

	.loc_0xF0:
	  lwz       r0, -0x7140(r13)
	  cmplw     r5, r0
	  beq-      .loc_0x178
	  stw       r4, -0x7134(r13)
	  stw       r3, -0x7138(r13)
	  li        r3, 0
	  stw       r5, -0x7140(r13)
	  b         .loc_0x17C

	.loc_0x110:
	  li        r3, 0
	  bl        0x1754
	  li        r3, 0
	  bl        0x2E48
	  li        r3, 0
	  bl        0x2F0C
	  li        r31, 0
	  lis       r3, 0xCC01
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  bl        -0xE360
	  lwz       r3, -0x714C(r13)
	  li        r4, 0x3
	  li        r0, 0x1
	  sth       r31, 0x2(r3)
	  lwz       r3, -0x714C(r13)
	  sth       r4, 0x4(r3)
	  lwz       r3, -0x6D70(r2)
	  stb       r0, 0x5AA(r3)
	  bl        0x27B4

	.loc_0x178:
	  li        r3, 0x1

	.loc_0x17C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E2930
 * Size:	000798
 */
void GXInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x40(r1)
	  stmw      r25, 0x24(r1)
	  mr        r26, r3
	  mr        r25, r4
	  lis       r4, 0x804F
	  lwz       r3, -0x7D18(r13)
	  addi      r30, r4, 0x5FE8
	  bl        0x9134
	  lwz       r5, -0x6D70(r2)
	  li        r0, 0
	  li        r28, 0x1
	  stb       r0, 0x5A8(r5)
	  li        r3, 0x1
	  li        r4, 0
	  stb       r28, 0x5A9(r5)
	  stb       r28, 0x5AA(r5)
	  stw       r0, 0x594(r5)
	  stw       r0, 0x598(r5)
	  bl        0x2658
	  lis       r4, 0xCC00
	  addi      r5, r4, 0x3000
	  stw       r4, -0x714C(r13)
	  addi      r3, r4, 0x1000
	  addi      r0, r4, 0x4000
	  stw       r5, -0x7150(r13)
	  stw       r3, -0x7148(r13)
	  stw       r0, -0x7144(r13)
	  bl        0x16A8
	  mr        r3, r30
	  mr        r4, r26
	  mr        r5, r25
	  bl        0x1180
	  mr        r3, r30
	  bl        0x1260
	  mr        r3, r30
	  bl        0x1380
	  lwz       r0, -0x712C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xB4
	  lis       r3, 0x804B
	  subi      r3, r3, 0x7D74
	  bl        0xD8C8
	  stw       r28, -0x712C(r13)

	.loc_0xB4:
	  bl        0x2EB0
	  bl        -0xE3C4
	  lis       r4, 0xC01
	  mr        r28, r3
	  subi      r3, r4, 0x8000
	  bl        -0xE3C4
	  oris      r3, r28, 0x4000
	  bl        -0xE3D4
	  lwz       r6, -0x6D70(r2)
	  li        r29, 0
	  li        r3, 0
	  stw       r29, 0x204(r6)
	  rlwinm    r7,r3,1,0,30
	  li        r5, 0xFF
	  lwz       r0, 0x204(r6)
	  rlwimi    r0,r29,24,0,7
	  li        r4, 0xF
	  stw       r0, 0x204(r6)
	  li        r0, 0x22
	  addi      r31, r7, 0xC0
	  stw       r5, 0x124(r6)
	  addi      r27, r7, 0xC1
	  lwz       r5, 0x124(r6)
	  rlwimi    r5,r4,24,0,7
	  stw       r5, 0x124(r6)
	  stw       r29, 0x7C(r6)
	  lwz       r4, 0x7C(r6)
	  rlwimi    r4,r0,24,0,7
	  stw       r4, 0x7C(r6)
	  b         .loc_0x12C

	.loc_0x12C:
	  li        r0, 0x8
	  mtctr     r0
	  b         .loc_0x138

	.loc_0x138:
	  b         .loc_0x13C

	.loc_0x13C:
	  lwz       r12, -0x6D70(r2)
	  rlwinm    r26,r3,31,1,31
	  addi      r11, r29, 0x130
	  li        r28, 0
	  stwx      r28, r12, r11
	  addi      r10, r29, 0x170
	  rlwinm    r25,r26,2,0,29
	  stwx      r28, r12, r10
	  addi      r9, r25, 0x100
	  addi      r7, r29, 0x554
	  stwx      r28, r12, r9
	  li        r8, 0xFF
	  addi      r6, r25, 0x1B0
	  stwx      r8, r12, r7
	  addi      r29, r29, 0x4
	  addi      r4, r26, 0xF6
	  lwzx      r5, r12, r11
	  rlwimi    r5,r31,24,0,7
	  addi      r0, r26, 0x28
	  stwx      r5, r12, r11
	  addi      r3, r3, 0x1
	  rlwinm    r26,r3,31,1,31
	  lwzx      r5, r12, r10
	  rlwimi    r5,r27,24,0,7
	  addi      r11, r29, 0x130
	  stwx      r5, r12, r10
	  addi      r10, r29, 0x170
	  addi      r7, r29, 0x554
	  lwzx      r5, r12, r6
	  rlwimi    r5,r4,24,0,7
	  rlwinm    r25,r26,2,0,29
	  stwx      r5, r12, r6
	  addi      r31, r31, 0x2
	  addi      r27, r27, 0x2
	  lwzx      r4, r12, r9
	  rlwimi    r4,r0,24,0,7
	  addi      r6, r25, 0x1B0
	  stwx      r4, r12, r9
	  addi      r9, r25, 0x100
	  addi      r4, r26, 0xF6
	  stwx      r28, r12, r11
	  addi      r0, r26, 0x28
	  addi      r29, r29, 0x4
	  stwx      r28, r12, r10
	  addi      r3, r3, 0x1
	  stwx      r28, r12, r9
	  stwx      r8, r12, r7
	  lwzx      r5, r12, r11
	  rlwimi    r5,r31,24,0,7
	  addi      r31, r31, 0x2
	  stwx      r5, r12, r11
	  lwzx      r5, r12, r10
	  rlwimi    r5,r27,24,0,7
	  addi      r27, r27, 0x2
	  stwx      r5, r12, r10
	  lwzx      r5, r12, r6
	  rlwimi    r5,r4,24,0,7
	  stwx      r5, r12, r6
	  lwzx      r4, r12, r9
	  rlwimi    r4,r0,24,0,7
	  stwx      r4, r12, r9
	  bdnz+     .loc_0x13C
	  stw       r28, 0x120(r12)
	  rlwinm    r4,r28,1,0,30
	  li        r0, 0x27
	  lwz       r3, 0x120(r12)
	  rlwimi    r3,r0,24,0,7
	  mr        r5, r28
	  stw       r3, 0x120(r12)
	  addi      r6, r4, 0x30
	  addi      r7, r4, 0x31
	  b         .loc_0x25C

	.loc_0x25C:
	  li        r0, 0x2
	  mtctr     r0
	  b         .loc_0x268

	.loc_0x268:
	  b         .loc_0x26C

	.loc_0x26C:
	  lwz       r8, -0x6D70(r2)
	  addi      r4, r5, 0xB8
	  addi      r3, r5, 0xD8
	  stwx      r28, r8, r4
	  addi      r5, r5, 0x4
	  stwx      r28, r8, r3
	  lwzx      r0, r8, r4
	  rlwimi    r0,r6,24,0,7
	  addi      r6, r6, 0x2
	  stwx      r0, r8, r4
	  addi      r4, r5, 0xB8
	  lwzx      r0, r8, r3
	  rlwimi    r0,r7,24,0,7
	  addi      r7, r7, 0x2
	  stwx      r0, r8, r3
	  addi      r3, r5, 0xD8
	  addi      r5, r5, 0x4
	  stwx      r28, r8, r4
	  stwx      r28, r8, r3
	  lwzx      r0, r8, r4
	  rlwimi    r0,r6,24,0,7
	  addi      r6, r6, 0x2
	  stwx      r0, r8, r4
	  addi      r4, r5, 0xB8
	  lwzx      r0, r8, r3
	  rlwimi    r0,r7,24,0,7
	  addi      r7, r7, 0x2
	  stwx      r0, r8, r3
	  addi      r3, r5, 0xD8
	  addi      r5, r5, 0x4
	  stwx      r28, r8, r4
	  stwx      r28, r8, r3
	  lwzx      r0, r8, r4
	  rlwimi    r0,r6,24,0,7
	  addi      r6, r6, 0x2
	  stwx      r0, r8, r4
	  addi      r4, r5, 0xB8
	  lwzx      r0, r8, r3
	  rlwimi    r0,r7,24,0,7
	  addi      r7, r7, 0x2
	  stwx      r0, r8, r3
	  addi      r3, r5, 0xD8
	  addi      r5, r5, 0x4
	  stwx      r28, r8, r4
	  stwx      r28, r8, r3
	  lwzx      r0, r8, r4
	  rlwimi    r0,r6,24,0,7
	  addi      r6, r6, 0x2
	  stwx      r0, r8, r4
	  lwzx      r0, r8, r3
	  rlwimi    r0,r7,24,0,7
	  addi      r7, r7, 0x2
	  stwx      r0, r8, r3
	  bdnz+     .loc_0x26C
	  lwz       r3, 0xF8(r8)
	  li        r0, 0x20
	  rlwimi    r3,r0,24,0,7
	  stw       r3, 0xF8(r8)
	  lis       r3, 0x1062
	  li        r0, 0x21
	  lwz       r4, 0xFC(r8)
	  rlwimi    r4,r0,24,0,7
	  li        r0, 0x41
	  stw       r4, 0xFC(r8)
	  li        r6, 0x42
	  li        r5, 0x40
	  lwz       r4, 0x1D0(r8)
	  rlwimi    r4,r0,24,0,7
	  li        r0, 0x43
	  stw       r4, 0x1D0(r8)
	  li        r29, 0
	  lis       r4, 0x8000
	  lwz       r7, 0x1D4(r8)
	  rlwimi    r7,r6,24,0,7
	  addi      r3, r3, 0x4DD3
	  stw       r7, 0x1D4(r8)
	  lwz       r6, 0x1D8(r8)
	  rlwimi    r6,r5,24,0,7
	  stw       r6, 0x1D8(r8)
	  lwz       r5, 0x1DC(r8)
	  rlwimi    r5,r0,24,0,7
	  stw       r5, 0x1DC(r8)
	  lwz       r0, 0x1FC(r8)
	  rlwimi    r0,r29,7,23,24
	  stw       r0, 0x1FC(r8)
	  lfs       f0, -0x6D6C(r2)
	  stfs      f0, 0x510(r8)
	  lfs       f0, -0x6D68(r2)
	  stfs      f0, 0x50C(r8)
	  stw       r29, 0x5AC(r8)
	  stb       r29, 0x5AB(r8)
	  lwz       r0, 0xF8(r4)
	  mulhwu    r0, r3, r0
	  rlwinm    r25,r0,27,5,31
	  bl        0x5744
	  rlwinm    r0,r25,21,11,31
	  oris      r0, r0, 0x6900
	  li        r28, 0x61
	  lis       r31, 0xCC01
	  stb       r28, -0x8000(r31)
	  ori       r0, r0, 0x400
	  stw       r0, -0x8000(r31)
	  bl        0x5724
	  lis       r3, 0x3E10
	  stb       r28, -0x8000(r31)
	  subi      r0, r3, 0x7C1F
	  mulhwu    r0, r0, r25
	  rlwinm    r0,r0,22,10,31
	  oris      r0, r0, 0x4600
	  ori       r0, r0, 0x200
	  stw       r0, -0x8000(r31)
	  rlwinm    r9,r29,2,0,29
	  b         .loc_0x430

	.loc_0x430:
	  li        r0, 0x2
	  mtctr     r0
	  li        r6, 0x1
	  li        r4, 0x8
	  b         .loc_0x444

	.loc_0x444:
	  b         .loc_0x448

	.loc_0x448:
	  lwz       r8, -0x6D70(r2)
	  addi      r7, r9, 0x1C
	  addi      r5, r9, 0x3C
	  lwzx      r0, r8, r7
	  rlwimi    r0,r6,30,1,1
	  ori       r3, r29, 0x80
	  stwx      r0, r8, r7
	  addi      r9, r9, 0x4
	  addi      r7, r9, 0x1C
	  lwzx      r0, r8, r5
	  rlwimi    r0,r6,31,0,0
	  addi      r29, r29, 0x1
	  stwx      r0, r8, r5
	  stb       r4, -0x8000(r31)
	  stb       r3, -0x8000(r31)
	  ori       r3, r29, 0x80
	  addi      r29, r29, 0x1
	  lwzx      r0, r8, r5
	  addi      r5, r9, 0x3C
	  addi      r9, r9, 0x4
	  stw       r0, -0x8000(r31)
	  lwzx      r0, r8, r7
	  rlwimi    r0,r6,30,1,1
	  stwx      r0, r8, r7
	  addi      r7, r9, 0x1C
	  lwzx      r0, r8, r5
	  rlwimi    r0,r6,31,0,0
	  stwx      r0, r8, r5
	  stb       r4, -0x8000(r31)
	  stb       r3, -0x8000(r31)
	  ori       r3, r29, 0x80
	  addi      r29, r29, 0x1
	  lwzx      r0, r8, r5
	  addi      r5, r9, 0x3C
	  addi      r9, r9, 0x4
	  stw       r0, -0x8000(r31)
	  lwzx      r0, r8, r7
	  rlwimi    r0,r6,30,1,1
	  stwx      r0, r8, r7
	  addi      r7, r9, 0x1C
	  lwzx      r0, r8, r5
	  rlwimi    r0,r6,31,0,0
	  stwx      r0, r8, r5
	  stb       r4, -0x8000(r31)
	  stb       r3, -0x8000(r31)
	  ori       r3, r29, 0x80
	  addi      r29, r29, 0x1
	  lwzx      r0, r8, r5
	  addi      r5, r9, 0x3C
	  addi      r9, r9, 0x4
	  stw       r0, -0x8000(r31)
	  lwzx      r0, r8, r7
	  rlwimi    r0,r6,30,1,1
	  stwx      r0, r8, r7
	  lwzx      r0, r8, r5
	  rlwimi    r0,r6,31,0,0
	  stwx      r0, r8, r5
	  stb       r4, -0x8000(r31)
	  stb       r3, -0x8000(r31)
	  lwzx      r0, r8, r5
	  stw       r0, -0x8000(r31)
	  bdnz+     .loc_0x448
	  li        r5, 0x1
	  li        r0, 0
	  rlwimi    r0,r5,0,31,31
	  mr        r8, r0
	  li        r0, 0
	  rlwimi    r0,r5,0,31,31
	  mr        r9, r0
	  rlwimi    r8,r5,1,30,30
	  rlwimi    r8,r5,2,29,29
	  rlwimi    r8,r5,3,28,28
	  rlwimi    r8,r5,4,27,27
	  li        r10, 0
	  li        r7, 0x10
	  lis       r6, 0xCC01
	  rlwimi    r9,r5,1,30,30
	  stb       r7, -0x8000(r6)
	  li        r0, 0x1000
	  stw       r0, -0x8000(r6)
	  rlwimi    r8,r5,5,26,26
	  rlwimi    r9,r5,2,29,29
	  stw       r8, -0x8000(r6)
	  li        r31, 0
	  li        r4, 0x1012
	  stb       r7, -0x8000(r6)
	  rlwimi    r10,r5,0,31,31
	  rlwimi    r9,r5,3,28,28
	  stw       r4, -0x8000(r6)
	  li        r0, 0x58
	  li        r5, 0x61
	  stw       r10, -0x8000(r6)
	  lis       r3, 0x804B
	  rlwimi    r9,r0,24,0,7
	  stb       r5, -0x8000(r6)
	  rlwinm    r4,r31,2,0,29
	  subi      r0, r3, 0x7E34
	  stw       r9, -0x8000(r6)
	  add       r27, r0, r4
	  rlwinm    r28,r31,4,0,27
	  b         .loc_0x5DC

	.loc_0x5DC:
	  b         .loc_0x5E0

	.loc_0x5E0:
	  b         .loc_0x5E4

	.loc_0x5E4:
	  lwz       r0, -0x6D70(r2)
	  addi      r3, r28, 0x208
	  lwz       r5, 0x0(r27)
	  li        r4, 0
	  lwz       r7, 0x20(r27)
	  add       r3, r0, r3
	  li        r6, 0
	  li        r8, 0
	  bl        0x4900
	  lwz       r0, -0x6D70(r2)
	  addi      r3, r28, 0x288
	  lwz       r5, 0x40(r27)
	  li        r4, 0
	  lwz       r7, 0x60(r27)
	  add       r3, r0, r3
	  li        r6, 0
	  li        r8, 0
	  bl        0x48DC
	  lwz       r0, -0x6D70(r2)
	  addi      r3, r28, 0x308
	  lwz       r5, 0x80(r27)
	  li        r4, 0x1
	  lwz       r7, 0xA0(r27)
	  add       r3, r0, r3
	  li        r6, 0
	  li        r8, 0
	  bl        0x48B8
	  addi      r27, r27, 0x4
	  addi      r28, r28, 0x10
	  addi      r31, r31, 0x1
	  cmplwi    r31, 0x8
	  blt+      .loc_0x5E4
	  li        r25, 0
	  rlwinm    r3,r25,13,0,18
	  addis     r27, r3, 0xC
	  rlwinm    r28,r25,4,0,27
	  b         .loc_0x678

	.loc_0x678:
	  b         .loc_0x67C

	.loc_0x67C:
	  b         .loc_0x680

	.loc_0x680:
	  lwz       r0, -0x6D70(r2)
	  addi      r3, r28, 0x388
	  mr        r4, r27
	  add       r3, r0, r3
	  li        r5, 0x10
	  bl        0x4964
	  addi      r27, r27, 0x2000
	  addi      r28, r28, 0x10
	  addi      r25, r25, 0x1
	  cmplwi    r25, 0x10
	  blt+      .loc_0x680
	  li        r25, 0
	  rlwinm    r3,r25,15,0,16
	  addis     r27, r3, 0xE
	  b         .loc_0x6BC

	.loc_0x6BC:
	  b         .loc_0x6C0

	.loc_0x6C0:
	  b         .loc_0x6C4

	.loc_0x6C4:
	  addi      r0, r25, 0x10
	  lwz       r5, -0x6D70(r2)
	  rlwinm    r3,r0,4,0,27
	  addi      r3, r3, 0x388
	  mr        r4, r27
	  add       r3, r5, r3
	  li        r5, 0x40
	  bl        0x4918
	  addis     r27, r27, 0x1
	  subi      r27, r27, 0x8000
	  addi      r25, r25, 0x1
	  cmplwi    r25, 0x4
	  blt+      .loc_0x6C4
	  lwz       r3, -0x714C(r13)
	  li        r12, 0
	  li        r0, 0x8
	  sth       r12, 0x6(r3)
	  lis       r10, 0xCC01
	  li        r9, 0x20
	  lwz       r11, -0x6D70(r2)
	  li        r8, 0x10
	  li        r7, 0x1006
	  lwz       r3, 0x5A4(r11)
	  rlwimi    r3,r12,4,24,27
	  li        r6, 0x61
	  stw       r3, 0x5A4(r11)
	  lis       r5, 0x2300
	  lis       r4, 0x2400
	  stb       r0, -0x8000(r10)
	  lis       r0, 0x6700
	  li        r3, 0
	  stb       r9, -0x8000(r10)
	  lwz       r9, 0x5A4(r11)
	  stw       r9, -0x8000(r10)
	  stb       r8, -0x8000(r10)
	  stw       r7, -0x8000(r10)
	  stw       r12, -0x8000(r10)
	  stb       r6, -0x8000(r10)
	  stw       r5, -0x8000(r10)
	  stb       r6, -0x8000(r10)
	  stw       r4, -0x8000(r10)
	  stb       r6, -0x8000(r10)
	  stw       r0, -0x8000(r10)
	  bl        0x5388
	  li        r3, 0x2
	  bl        0x4B44
	  bl        .loc_0x798
	  mr        r3, r30
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr

	.loc_0x798:
	*/
}

/*
 * --INFO--
 * Address:	800E30C8
 * Size:	000938
 */
void __GXInitGX(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0xA0(r1)
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  stw       r29, 0x94(r1)
	  lwz       r4, -0x6D64(r2)
	  lis       r5, 0x804B
	  lwz       r3, -0x6D60(r2)
	  subi      r31, r5, 0x7FA0
	  lwz       r0, -0x6D5C(r2)
	  stw       r4, 0x28(r1)
	  stw       r3, 0x24(r1)
	  stw       r0, 0x20(r1)
	  bl        -0x10DDC
	  cmpwi     r3, 0x2
	  beq-      .loc_0x94
	  bge-      .loc_0x58
	  cmpwi     r3, 0
	  beq-      .loc_0x64
	  bge-      .loc_0x74
	  b         .loc_0xA4

	.loc_0x58:
	  cmpwi     r3, 0x5
	  beq-      .loc_0x84
	  b         .loc_0xA4

	.loc_0x64:
	  lis       r3, 0x804B
	  subi      r0, r3, 0x7C00
	  mr        r30, r0
	  b         .loc_0xB0

	.loc_0x74:
	  lis       r3, 0x804B
	  subi      r0, r3, 0x7B4C
	  mr        r30, r0
	  b         .loc_0xB0

	.loc_0x84:
	  lis       r3, 0x804B
	  subi      r0, r3, 0x7B10
	  mr        r30, r0
	  b         .loc_0xB0

	.loc_0x94:
	  lis       r3, 0x804B
	  subi      r0, r3, 0x7B88
	  mr        r30, r0
	  b         .loc_0xB0

	.loc_0xA4:
	  lis       r3, 0x804B
	  subi      r0, r3, 0x7C00
	  mr        r30, r0

	.loc_0xB0:
	  lwz       r0, 0x28(r1)
	  lis       r4, 0x100
	  addi      r3, r1, 0x1C
	  stw       r0, 0x1C(r1)
	  subi      r4, r4, 0x1
	  bl        0x3124
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x4
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0x1B74
	  li        r3, 0x1
	  li        r4, 0x1
	  li        r5, 0x5
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0x1B58
	  li        r3, 0x2
	  li        r4, 0x1
	  li        r5, 0x6
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0x1B3C
	  li        r3, 0x3
	  li        r4, 0x1
	  li        r5, 0x7
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0x1B20
	  li        r3, 0x4
	  li        r4, 0x1
	  li        r5, 0x8
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0x1B04
	  li        r3, 0x5
	  li        r4, 0x1
	  li        r5, 0x9
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0x1AE8
	  li        r3, 0x6
	  li        r4, 0x1
	  li        r5, 0xA
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0x1ACC
	  li        r3, 0x7
	  li        r4, 0x1
	  li        r5, 0xB
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0x1AB0
	  li        r3, 0x1
	  bl        0x1D28
	  bl        0x1458
	  bl        0x1A90
	  li        r29, 0x9
	  b         .loc_0x1C0

	.loc_0x1C0:
	  b         .loc_0x1C4

	.loc_0x1C4:
	  b         .loc_0x1C8

	.loc_0x1C8:
	  lwz       r4, -0x6D70(r2)
	  mr        r3, r29
	  li        r5, 0
	  bl        0x19E4
	  addi      r29, r29, 0x1
	  cmplwi    r29, 0x18
	  ble+      .loc_0x1C8
	  li        r29, 0
	  b         .loc_0x1EC

	.loc_0x1EC:
	  b         .loc_0x1F0

	.loc_0x1F0:
	  b         .loc_0x1F4

	.loc_0x1F4:
	  mr        r3, r29
	  addi      r4, r31, 0x80
	  bl        0x16A0
	  addi      r29, r29, 0x1
	  cmplwi    r29, 0x8
	  blt+      .loc_0x1F4
	  li        r3, 0x6
	  li        r4, 0
	  bl        0x2804
	  li        r3, 0x6
	  li        r4, 0
	  bl        0x2838
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  bl        0x2868
	  li        r3, 0x1
	  li        r4, 0
	  li        r5, 0
	  bl        0x2858
	  li        r3, 0x2
	  li        r4, 0
	  li        r5, 0
	  bl        0x2848
	  li        r3, 0x3
	  li        r4, 0
	  li        r5, 0
	  bl        0x2838
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  bl        0x2828
	  li        r3, 0x5
	  li        r4, 0
	  li        r5, 0
	  bl        0x2818
	  li        r3, 0x6
	  li        r4, 0
	  li        r5, 0
	  bl        0x2808
	  li        r3, 0x7
	  li        r4, 0
	  li        r5, 0
	  bl        0x27F8
	  lfs       f1, -0x6D58(r2)
	  addi      r3, r1, 0x2C
	  lfs       f0, -0x6D68(r2)
	  li        r4, 0
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  stfs      f0, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  bl        0x61CC
	  addi      r3, r1, 0x2C
	  li        r4, 0
	  bl        0x6210
	  li        r3, 0
	  bl        0x6258
	  addi      r3, r1, 0x2C
	  li        r4, 0x3C
	  li        r5, 0
	  bl        0x627C
	  addi      r3, r1, 0x2C
	  li        r4, 0x7D
	  li        r5, 0
	  bl        0x626C
	  lhz       r4, 0x4(r30)
	  lis       r3, 0x4330
	  lhz       r0, 0x8(r30)
	  stw       r4, 0x8C(r1)
	  lfs       f1, -0x6D68(r2)
	  stw       r0, 0x84(r1)
	  lfd       f4, -0x6D50(r2)
	  fmr       f2, f1
	  stw       r3, 0x88(r1)
	  fmr       f5, f1
	  lfs       f6, -0x6D58(r2)
	  stw       r3, 0x80(r1)
	  lfd       f3, 0x88(r1)
	  lfd       f0, 0x80(r1)
	  fsubs     f3, f3, f4
	  fsubs     f4, f0, f4
	  bl        0x636C
	  addi      r3, r31, 0x150
	  bl        0x60C0
	  li        r3, 0
	  bl        0x27B8
	  li        r3, 0x2
	  bl        0x276C
	  li        r3, 0
	  bl        0x6494
	  lhz       r5, 0x4(r30)
	  li        r3, 0
	  lhz       r6, 0x6(r30)
	  li        r4, 0
	  bl        0x6380
	  li        r3, 0
	  li        r4, 0
	  bl        0x6434
	  li        r3, 0
	  bl        0x39F8
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0x3A14
	  lwz       r0, 0x24(r1)
	  addi      r4, r1, 0x18
	  li        r3, 0x4
	  stw       r0, 0x18(r1)
	  bl        0x37E4
	  lwz       r0, 0x20(r1)
	  addi      r4, r1, 0x14
	  li        r3, 0x4
	  stw       r0, 0x14(r1)
	  bl        0x38C0
	  li        r3, 0x5
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0x39CC
	  lwz       r0, 0x24(r1)
	  addi      r4, r1, 0x10
	  li        r3, 0x5
	  stw       r0, 0x10(r1)
	  bl        0x379C
	  lwz       r0, 0x20(r1)
	  addi      r4, r1, 0xC
	  li        r3, 0x5
	  stw       r0, 0xC(r1)
	  bl        0x3878
	  bl        0x4460
	  lis       r3, 0x800E
	  addi      r3, r3, 0x2680
	  bl        0x449C
	  lis       r3, 0x800E
	  addi      r3, r3, 0x277C
	  bl        0x44A4
	  addi      r3, r1, 0x5C
	  addi      r4, r31, 0x60
	  li        r5, 0x4
	  li        r6, 0x4
	  li        r7, 0x3
	  li        r8, 0
	  li        r9, 0
	  li        r10, 0
	  bl        0x3C40
	  addi      r3, r1, 0x5C
	  li        r4, 0
	  bl        0x41C8
	  addi      r3, r1, 0x5C
	  li        r4, 0x1
	  bl        0x41BC
	  addi      r3, r1, 0x5C
	  li        r4, 0x2
	  bl        0x41B0
	  addi      r3, r1, 0x5C
	  li        r4, 0x3
	  bl        0x41A4
	  addi      r3, r1, 0x5C
	  li        r4, 0x4
	  bl        0x4198
	  addi      r3, r1, 0x5C
	  li        r4, 0x5
	  bl        0x418C
	  addi      r3, r1, 0x5C
	  li        r4, 0x6
	  bl        0x4180
	  addi      r3, r1, 0x5C
	  li        r4, 0x7
	  bl        0x4174
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  bl        0x546C
	  li        r3, 0x1
	  li        r4, 0x1
	  li        r5, 0x1
	  li        r6, 0x4
	  bl        0x5458
	  li        r3, 0x2
	  li        r4, 0x2
	  li        r5, 0x2
	  li        r6, 0x4
	  bl        0x5444
	  li        r3, 0x3
	  li        r4, 0x3
	  li        r5, 0x3
	  li        r6, 0x4
	  bl        0x5430
	  li        r3, 0x4
	  li        r4, 0x4
	  li        r5, 0x4
	  li        r6, 0x4
	  bl        0x541C
	  li        r3, 0x5
	  li        r4, 0x5
	  li        r5, 0x5
	  li        r6, 0x4
	  bl        0x5408
	  li        r3, 0x6
	  li        r4, 0x6
	  li        r5, 0x6
	  li        r6, 0x4
	  bl        0x53F4
	  li        r3, 0x7
	  li        r4, 0x7
	  li        r5, 0x7
	  li        r6, 0x4
	  bl        0x53E0
	  li        r3, 0x8
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0xFF
	  bl        0x53CC
	  li        r3, 0x9
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0xFF
	  bl        0x53B8
	  li        r3, 0xA
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0xFF
	  bl        0x53A4
	  li        r3, 0xB
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0xFF
	  bl        0x5390
	  li        r3, 0xC
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0xFF
	  bl        0x537C
	  li        r3, 0xD
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0xFF
	  bl        0x5368
	  li        r3, 0xE
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0xFF
	  bl        0x5354
	  li        r3, 0xF
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0xFF
	  bl        0x5340
	  li        r3, 0x1
	  bl        0x54D4
	  li        r3, 0
	  li        r4, 0x3
	  bl        0x4D8C
	  li        r3, 0x7
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x7
	  li        r7, 0
	  bl        0x5244
	  li        r3, 0
	  li        r4, 0x11
	  li        r5, 0
	  bl        0x5278
	  li        r31, 0
	  b         .loc_0x65C

	.loc_0x65C:
	  b         .loc_0x660

	.loc_0x660:
	  b         .loc_0x664

	.loc_0x664:
	  mr        r3, r31
	  li        r4, 0x6
	  bl        0x5098
	  mr        r3, r31
	  li        r4, 0
	  bl        0x50E8
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        0x5134
	  addi      r31, r31, 0x1
	  cmplwi    r31, 0x10
	  blt+      .loc_0x664
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0x3
	  bl        0x5158
	  li        r3, 0x1
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x3
	  bl        0x5140
	  li        r3, 0x2
	  li        r4, 0x1
	  li        r5, 0x1
	  li        r6, 0x1
	  li        r7, 0x3
	  bl        0x5128
	  li        r3, 0x3
	  li        r4, 0x2
	  li        r5, 0x2
	  li        r6, 0x2
	  li        r7, 0x3
	  bl        0x5110
	  li        r31, 0
	  b         .loc_0x700

	.loc_0x700:
	  b         .loc_0x704

	.loc_0x704:
	  b         .loc_0x708

	.loc_0x708:
	  mr        r3, r31
	  bl        0x4BA4
	  addi      r31, r31, 0x1
	  cmplwi    r31, 0x10
	  blt+      .loc_0x708
	  li        r3, 0
	  bl        0x4B6C
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  bl        0x492C
	  li        r3, 0x1
	  li        r4, 0
	  li        r5, 0
	  bl        0x491C
	  li        r3, 0x2
	  li        r4, 0
	  li        r5, 0
	  bl        0x490C
	  li        r3, 0x3
	  li        r4, 0
	  li        r5, 0
	  bl        0x48FC
	  lfs       f2, -0x6D58(r2)
	  addi      r4, r1, 0x8
	  lwz       r0, 0x24(r1)
	  li        r3, 0
	  fmr       f4, f2
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x6D68(r2)
	  lfs       f3, -0x6D54(r2)
	  bl        0x5394
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  bl        0x5758
	  li        r3, 0
	  li        r4, 0x4
	  li        r5, 0x5
	  li        r6, 0
	  bl        0x5868
	  li        r3, 0x1
	  bl        0x58B4
	  li        r3, 0x1
	  bl        0x58D8
	  li        r3, 0x1
	  li        r4, 0x3
	  li        r5, 0x1
	  bl        0x58F4
	  li        r3, 0x1
	  bl        0x5920
	  li        r3, 0x1
	  bl        0x5A20
	  li        r3, 0
	  li        r4, 0
	  bl        0x5A40
	  li        r3, 0
	  li        r4, 0
	  bl        0x5934
	  li        r3, 0x1
	  li        r4, 0x1
	  bl        0x5A64
	  lhz       r0, 0x8(r30)
	  lhz       r3, 0x10(r30)
	  rlwinm    r0,r0,1,0,30
	  cmpw      r3, r0
	  bne-      .loc_0x81C
	  li        r4, 0x1
	  b         .loc_0x820

	.loc_0x81C:
	  li        r4, 0

	.loc_0x820:
	  lbz       r3, 0x18(r30)
	  bl        0x5A74
	  lhz       r5, 0x4(r30)
	  li        r3, 0
	  lhz       r6, 0x6(r30)
	  li        r4, 0
	  bl        0x2344
	  lhz       r3, 0x4(r30)
	  lhz       r4, 0x6(r30)
	  bl        0x2430
	  lhz       r4, 0x8(r30)
	  lis       r3, 0x4330
	  lhz       r0, 0x6(r30)
	  stw       r4, 0x84(r1)
	  lfd       f2, -0x6D50(r2)
	  stw       r0, 0x8C(r1)
	  stw       r3, 0x80(r1)
	  stw       r3, 0x88(r1)
	  lfd       f1, 0x80(r1)
	  lfd       f0, 0x88(r1)
	  fsubs     f1, f1, f2
	  fsubs     f0, f0, f2
	  fdivs     f1, f1, f0
	  bl        0x28A0
	  li        r3, 0x3
	  bl        0x2578
	  lbz       r3, 0x19(r30)
	  addi      r4, r30, 0x1A
	  addi      r6, r30, 0x32
	  li        r5, 0x1
	  bl        0x29C8
	  li        r3, 0
	  bl        0x2BC8
	  li        r3, 0
	  bl        0x2530
	  bl        0x2EC4
	  li        r3, 0x1
	  bl        0x1D14
	  li        r3, 0x1
	  bl        0x1C90
	  li        r3, 0
	  bl        0x1D40
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0xF
	  bl        0x1C8C
	  li        r3, 0x7
	  li        r4, 0
	  bl        0x1C34
	  li        r3, 0x1
	  bl        0x1C40
	  li        r3, 0
	  li        r4, 0
	  bl        0x1CE8
	  li        r3, 0x1
	  li        r4, 0x7
	  li        r5, 0x1
	  bl        0x1D14
	  li        r3, 0x23
	  li        r4, 0x16
	  bl        0x5FA8
	  bl        0x67EC
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  addi      r1, r1, 0xA0
	  mtlr      r0
	  blr
	*/
}
