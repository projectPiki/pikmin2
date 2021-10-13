

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D1104
 * Size:	000A2C
 */
void ebi::CardError::FSMStateMachine::init((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  addi      r30, r4, 0x6698
	  li        r4, 0x1B
	  bl        0x25A4
	  li        r3, 0x10
	  bl        -0x3AD28C
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r5, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r5, 0x73AC
	  li        r5, 0
	  stw       r0, 0x0(r4)
	  subi      r3, r3, 0x73D4
	  addi      r0, r2, 0x1760
	  stw       r5, 0x4(r4)
	  stw       r5, 0x8(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0xC(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        0x2660
	  li        r3, 0x10
	  bl        -0x3AD2D0
	  mr.       r4, r3
	  beq-      .loc_0xAC
	  lis       r5, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r5, 0x73AC
	  li        r6, 0x1
	  stw       r0, 0x0(r4)
	  li        r5, 0
	  subi      r3, r3, 0x73D4
	  addi      r0, r30, 0xC
	  stw       r6, 0x4(r4)
	  stw       r5, 0x8(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0xC(r4)

	.loc_0xAC:
	  mr        r3, r31
	  bl        0x2618
	  li        r3, 0x14
	  bl        -0x3AD318
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x2
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x18
	  subi      r5, r5, 0x74C8
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6248
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        0x25B8
	  li        r3, 0x14
	  bl        -0x3AD378
	  mr.       r4, r3
	  beq-      .loc_0x16C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x3
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x24
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6278
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x16C:
	  mr        r3, r31
	  bl        0x2558
	  li        r3, 0x14
	  bl        -0x3AD3D8
	  mr.       r4, r3
	  beq-      .loc_0x1CC
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x4
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x30
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x62A8
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1CC:
	  mr        r3, r31
	  bl        0x24F8
	  li        r3, 0x14
	  bl        -0x3AD438
	  mr.       r4, r3
	  beq-      .loc_0x22C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x5
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x40
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x62D8
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x22C:
	  mr        r3, r31
	  bl        0x2498
	  li        r3, 0x14
	  bl        -0x3AD498
	  mr.       r4, r3
	  beq-      .loc_0x28C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x6
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x50
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6308
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x28C:
	  mr        r3, r31
	  bl        0x2438
	  li        r3, 0x14
	  bl        -0x3AD4F8
	  mr.       r4, r3
	  beq-      .loc_0x2EC
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x7
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x64
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6338
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2EC:
	  mr        r3, r31
	  bl        0x23D8
	  li        r3, 0x14
	  bl        -0x3AD558
	  mr.       r4, r3
	  beq-      .loc_0x34C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x8
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x78
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6368
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x34C:
	  mr        r3, r31
	  bl        0x2378
	  li        r3, 0x14
	  bl        -0x3AD5B8
	  mr.       r4, r3
	  beq-      .loc_0x3AC
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x9
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x8C
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6398
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x3AC:
	  mr        r3, r31
	  bl        0x2318
	  li        r3, 0x14
	  bl        -0x3AD618
	  mr.       r4, r3
	  beq-      .loc_0x40C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0xA
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0xA0
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x63C8
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x40C:
	  mr        r3, r31
	  bl        0x22B8
	  li        r3, 0x14
	  bl        -0x3AD678
	  mr.       r4, r3
	  beq-      .loc_0x46C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0xB
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0xB4
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x63F8
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x46C:
	  mr        r3, r31
	  bl        0x2258
	  li        r3, 0x14
	  bl        -0x3AD6D8
	  mr.       r4, r3
	  beq-      .loc_0x4CC
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0xC
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0xCC
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6428
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x4CC:
	  mr        r3, r31
	  bl        0x21F8
	  li        r3, 0x14
	  bl        -0x3AD738
	  mr.       r4, r3
	  beq-      .loc_0x52C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0xD
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0xE0
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6458
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x52C:
	  mr        r3, r31
	  bl        0x2198
	  li        r3, 0x14
	  bl        -0x3AD798
	  mr.       r4, r3
	  beq-      .loc_0x58C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0xE
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0xF8
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6488
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x58C:
	  mr        r3, r31
	  bl        0x2138
	  li        r3, 0x14
	  bl        -0x3AD7F8
	  mr.       r4, r3
	  beq-      .loc_0x5EC
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0xF
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x114
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x64B8
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x5EC:
	  mr        r3, r31
	  bl        0x20D8
	  li        r3, 0x14
	  bl        -0x3AD858
	  mr.       r4, r3
	  beq-      .loc_0x64C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x10
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x134
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x64E8
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64C:
	  mr        r3, r31
	  bl        0x2078
	  li        r3, 0x14
	  bl        -0x3AD8B8
	  mr.       r4, r3
	  beq-      .loc_0x6AC
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x11
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x154
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6518
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x6AC:
	  mr        r3, r31
	  bl        0x2018
	  li        r3, 0x14
	  bl        -0x3AD918
	  mr.       r4, r3
	  beq-      .loc_0x70C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x12
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x16C
	  subi      r5, r5, 0x7404
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6548
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x70C:
	  mr        r3, r31
	  bl        0x1FB8
	  li        r3, 0x14
	  bl        -0x3AD978
	  mr.       r4, r3
	  beq-      .loc_0x76C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x13
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x184
	  subi      r5, r5, 0x7438
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x657C
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x76C:
	  mr        r3, r31
	  bl        0x1F58
	  li        r3, 0x14
	  bl        -0x3AD9D8
	  mr.       r4, r3
	  beq-      .loc_0x7CC
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x14
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x1A4
	  subi      r5, r5, 0x7438
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x65B0
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x7CC:
	  mr        r3, r31
	  bl        0x1EF8
	  li        r3, 0x14
	  bl        -0x3ADA38
	  mr.       r4, r3
	  beq-      .loc_0x82C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x15
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x1C0
	  subi      r5, r5, 0x7438
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x65E4
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x82C:
	  mr        r3, r31
	  bl        0x1E98
	  li        r3, 0x14
	  bl        -0x3ADA98
	  mr.       r4, r3
	  beq-      .loc_0x88C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x16
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x1D0
	  subi      r5, r5, 0x7438
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6618
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x88C:
	  mr        r3, r31
	  bl        0x1E38
	  li        r3, 0x14
	  bl        -0x3ADAF8
	  mr.       r4, r3
	  beq-      .loc_0x8EC
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x17
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x1E8
	  subi      r5, r5, 0x7438
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x664C
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x8EC:
	  mr        r3, r31
	  bl        0x1DD8
	  li        r3, 0x14
	  bl        -0x3ADB58
	  mr.       r4, r3
	  beq-      .loc_0x94C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x18
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x208
	  subi      r5, r5, 0x7438
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6680
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x94C:
	  mr        r3, r31
	  bl        0x1D78
	  li        r3, 0x18
	  bl        -0x3ADBB8
	  mr.       r4, r3
	  beq-      .loc_0x9AC
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x19
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x21C
	  subi      r5, r5, 0x7494
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x66DC
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x9AC:
	  mr        r3, r31
	  bl        0x1D18
	  li        r3, 0x18
	  bl        -0x3ADC18
	  mr.       r4, r3
	  beq-      .loc_0xA0C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x73AC
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x1A
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x73D4
	  addi      r6, r30, 0x22C
	  subi      r5, r5, 0x7494
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6738
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0xA0C:
	  mr        r3, r31
	  bl        0x1CB8
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
 * Address:	803D1B30
 * Size:	00002C
 */
void ebi::CardError::FSMState::init((ebi::CardError::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D1B5C
 * Size:	000004
 */
void ebi::CardError::FSMState::do_init((ebi::CardError::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D1B60
 * Size:	00002C
 */
void ebi::CardError::FSMState::exec((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D1B8C
 * Size:	000004
 */
void ebi::CardError::FSMState::do_exec((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D1B90
 * Size:	000084
 */
void ebi::CardError::FSMState_Warning::do_init((ebi::CardError::TMgr*,
                                                Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x1768(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stb       r0, 0x11(r3)
	  stb       r0, 0x10(r3)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x31007C
	  stw       r3, 0x298(r31)
	  li        r5, 0
	  li        r0, 0x1
	  mr        r4, r31
	  stw       r3, 0x29C(r31)
	  mr        r3, r30
	  stb       r5, 0x12(r30)
	  stb       r0, 0x19(r31)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	803D1C14
 * Size:	0000A4
 */
void ebi::CardError::FSMState_Warning::do_exec((ebi::CardError::TMgr*))
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
	  lbz       r0, 0x12(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  mr        r3, r31
	  bl        0x180C

	.loc_0x30:
	  lwz       r0, 0x298(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  lbz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x64
	  lbz       r0, 0x11(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  mr        r3, r31
	  bl        -0xE16C
	  li        r0, 0x1
	  stb       r0, 0x11(r30)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0xDCCC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x8C:
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
 * Address:	803D1CB8
 * Size:	00003C
 */
void ebi::CardError::FSMState_Question::do_init((ebi::CardError::TMgr*,
                                                 Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r5, 0x10(r3)
	  stb       r0, 0x19(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D1CF4
 * Size:	000098
 */
void ebi::CardError::FSMState_Question::do_exec((ebi::CardError::TMgr*))
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
	  lbz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  mr        r3, r31
	  bl        0x172C

	.loc_0x30:
	  mr        r3, r31
	  bl        -0xDD78
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  lbz       r0, 0x18(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x68
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x80

	.loc_0x68:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x80:
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
 * Address:	803D1D8C
 * Size:	000074
 */
void ebi::CardError::FSMState_CardRequest::do_init((ebi::CardError::TMgr*,
                                                    Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x176C(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stb       r0, 0x19(r4)
	  stw       r0, 0x10(r3)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x310278
	  stw       r3, 0x298(r31)
	  mr        r4, r31
	  stw       r3, 0x29C(r31)
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	803D1E00
 * Size:	000350
 */
void ebi::CardError::FSMState_CardRequest::do_exec((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  lwz       r5, -0x6514(r13)
	  lwz       r3, 0x5C(r5)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x48
	  bl        0x6F184
	  cmplwi    r3, 0xB
	  beq-      .loc_0x48
	  li        r29, 0x1

	.loc_0x48:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x6C
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x73CB4
	  cmpwi     r3, 0
	  bne-      .loc_0x6C
	  li        r0, 0x1
	  b         .loc_0x70

	.loc_0x6C:
	  li        r0, 0

	.loc_0x70:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x90
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x73C8C
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  bl        -0xE38C

	.loc_0x90:
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x130
	  bge-      .loc_0xAC
	  cmpwi     r0, 0
	  bge-      .loc_0xB8
	  b         .loc_0x334

	.loc_0xAC:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x334
	  b         .loc_0x194

	.loc_0xB8:
	  lwz       r3, -0x6514(r13)
	  li        r31, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xE0
	  bl        0x6F0EC
	  cmplwi    r3, 0xB
	  beq-      .loc_0xE0
	  li        r31, 0x1

	.loc_0xE0:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x334
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x110
	  li        r0, 0x1
	  stw       r0, 0x10(r30)
	  b         .loc_0x334

	.loc_0x110:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x68DC
	  li        r4, 0xBF
	  addi      r5, r5, 0x68EC
	  crclr     6, 0x6
	  bl        -0x3A78E8
	  b         .loc_0x334

	.loc_0x130:
	  lwz       r3, -0x6514(r13)
	  li        r31, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x158
	  bl        0x6F074
	  cmplwi    r3, 0xB
	  beq-      .loc_0x158
	  li        r31, 0x1

	.loc_0x158:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x334
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x73BA4
	  stw       r3, 0x14(r30)
	  lwz       r0, 0x14(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x188
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x73B88

	.loc_0x188:
	  li        r0, 0x2
	  stw       r0, 0x10(r30)
	  b         .loc_0x334

	.loc_0x194:
	  lwz       r0, 0x298(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1A8
	  mr        r3, r31
	  bl        -0xE4A4

	.loc_0x1A8:
	  mr        r3, r31
	  bl        -0xDFFC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x334
	  li        r0, 0x1
	  stb       r0, 0x19(r31)
	  lwz       r0, 0x14(r30)
	  cmplwi    r0, 0xE
	  bgt-      .loc_0x318
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x7560
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x334
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x334
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x334
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x334
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x334
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x334
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x334
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x334
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x334
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x334
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x334

	.loc_0x318:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x68DC
	  li        r4, 0x10A
	  addi      r5, r5, 0x68EC
	  crclr     6, 0x6
	  bl        -0x3A7AF0

	.loc_0x334:
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
 * Address:	803D2150
 * Size:	000064
 */
void ebi::CardError::FSMState_CardRequest::do_transitCardNoCard(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D21B4
 * Size:	000030
 */
void transit__Q24Game31FSMState<ebi::CardError::TMgr>
FPQ33ebi9CardError4TMgriPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D21E4
 * Size:	000064
 */
void ebi::CardError::FSMState_CardRequest::do_transitCardIOError(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D2248
 * Size:	000064
 */
void ebi::CardError::FSMState_CardRequest::do_transitCardWrongDevice(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D22AC
 * Size:	000064
 */
void ebi::CardError::FSMState_CardRequest::do_transitCardWrongSector(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D2310
 * Size:	000064
 */
void ebi::CardError::FSMState_CardRequest::do_transitCardBroken(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x13
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x13
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D2374
 * Size:	000064
 */
void ebi::CardError::FSMState_CardRequest::do_transitCardEncoding(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x13
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x13
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D23D8
 * Size:	000064
 */
void ebi::CardError::FSMState_CardRequest::do_transitCardNoFileSpace(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D243C
 * Size:	000064
 */
void ebi::CardError::FSMState_CardRequest::do_transitCardNoFileEntry(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D24A0
 * Size:	000064
 */
void ebi::CardError::FSMState_CardRequest::do_transitCardFileOpenError(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x16
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x16
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D2504
 * Size:	000068
 */
void ebi::CardError::FSMState_CardRequest::do_transitCardSerialNoError(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x38
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x68DC
	  li        r4, 0x169
	  addi      r5, r5, 0x68EC
	  crclr     6, 0x6
	  bl        -0x3A7EF4
	  b         .loc_0x58

	.loc_0x38:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  li        r5, 0xC
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D256C
 * Size:	000034
 */
void ebi::CardError::FSMState_NoCard::do_init((ebi::CardError::TMgr*,
                                               Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stb       r0, 0x10(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D25A0
 * Size:	0000B0
 */
void ebi::CardError::FSMState_NoCard::do_exec((ebi::CardError::TMgr*))
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
	  lwz       r5, -0x6514(r13)
	  lwz       r3, 0x5C(r5)
	  bl        0x73548
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm.   r0,r0,1,31,31
	  beq-      .loc_0x48
	  mr        r3, r31
	  bl        -0xEADC
	  li        r0, 0x1
	  stb       r0, 0x10(r30)

	.loc_0x48:
	  mr        r3, r31
	  bl        -0xE63C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x98
	  lbz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x98

	.loc_0x80:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x98:
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
 * Address:	803D2650
 * Size:	000094
 */
void ebi::CardError::TMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x514
	  li        r0, 0
	  lis       r4, 0x804F
	  stw       r0, 0x298(r31)
	  lis       r3, 0x804F
	  subi      r6, r4, 0x74E0
	  li        r5, -0x1
	  stw       r0, 0x29C(r31)
	  subi      r0, r3, 0x738C
	  addi      r3, r31, 0x2A8
	  mr        r4, r31
	  stw       r6, 0x2A8(r31)
	  stw       r5, 0x2C0(r31)
	  stw       r0, 0x2A8(r31)
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x2A8
	  mr        r4, r31
	  lwz       r12, 0x2A8(r31)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D26E4
 * Size:	000034
 */
void start__Q24Game35StateMachine<ebi::CardError::TMgr>
FPQ33ebi9CardError4TMgriPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x2C4(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D2718
 * Size:	000460
 */
void ebi::Screen::TMemoryCard::__dt(void)
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
	  beq-      .loc_0x444
	  addic.    r0, r30, 0x25C
	  beq-      .loc_0x88
	  addic.    r0, r30, 0x25C
	  beq-      .loc_0x88
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x25C
	  addi      r3, r3, 0x7648
	  stw       r3, 0x25C(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0x264(r30)
	  beq-      .loc_0x88
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x25C
	  addi      r3, r3, 0x73CC
	  stw       r3, 0x25C(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0x264(r30)
	  beq-      .loc_0x88
	  lis       r4, 0x804E
	  addi      r3, r30, 0x264
	  addi      r5, r4, 0x7420
	  li        r4, 0
	  stw       r5, 0x25C(r30)
	  addi      r0, r5, 0x18
	  stw       r0, 0x264(r30)
	  bl        -0x342B00

	.loc_0x88:
	  addic.    r0, r30, 0x224
	  beq-      .loc_0xF0
	  addic.    r0, r30, 0x224
	  beq-      .loc_0xF0
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x224
	  addi      r3, r3, 0x7648
	  stw       r3, 0x224(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0x22C(r30)
	  beq-      .loc_0xF0
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x224
	  addi      r3, r3, 0x73CC
	  stw       r3, 0x224(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0x22C(r30)
	  beq-      .loc_0xF0
	  lis       r4, 0x804E
	  addi      r3, r30, 0x22C
	  addi      r5, r4, 0x7420
	  li        r4, 0
	  stw       r5, 0x224(r30)
	  addi      r0, r5, 0x18
	  stw       r0, 0x22C(r30)
	  bl        -0x342B68

	.loc_0xF0:
	  addic.    r0, r30, 0x204
	  beq-      .loc_0x14C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x204
	  subi      r0, r3, 0x77F4
	  stw       r0, 0x204(r30)
	  beq-      .loc_0x14C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x204
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x204(r30)
	  beq-      .loc_0x14C
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x204
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x204(r30)
	  beq-      .loc_0x14C
	  lis       r4, 0x804D
	  addi      r3, r30, 0x204
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x204(r30)
	  bl        0x3ED28

	.loc_0x14C:
	  addic.    r0, r30, 0x1C8
	  beq-      .loc_0x1BC
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x1E8
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x1C8(r30)
	  beq-      .loc_0x174
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x1E8(r30)

	.loc_0x174:
	  addic.    r0, r30, 0x1C8
	  beq-      .loc_0x1BC
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x1C8
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x1C8(r30)
	  beq-      .loc_0x1BC
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x1C8
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x1C8(r30)
	  beq-      .loc_0x1BC
	  lis       r4, 0x804D
	  addi      r3, r30, 0x1C8
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x1C8(r30)
	  bl        0x3ECB8

	.loc_0x1BC:
	  addic.    r0, r30, 0x18C
	  beq-      .loc_0x22C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x1AC
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x18C(r30)
	  beq-      .loc_0x1E4
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x1AC(r30)

	.loc_0x1E4:
	  addic.    r0, r30, 0x18C
	  beq-      .loc_0x22C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x18C
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x18C(r30)
	  beq-      .loc_0x22C
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x18C
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x18C(r30)
	  beq-      .loc_0x22C
	  lis       r4, 0x804D
	  addi      r3, r30, 0x18C
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x18C(r30)
	  bl        0x3EC48

	.loc_0x22C:
	  addic.    r0, r30, 0x150
	  beq-      .loc_0x29C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x170
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x150(r30)
	  beq-      .loc_0x254
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x170(r30)

	.loc_0x254:
	  addic.    r0, r30, 0x150
	  beq-      .loc_0x29C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x150
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x150(r30)
	  beq-      .loc_0x29C
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x150
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x150(r30)
	  beq-      .loc_0x29C
	  lis       r4, 0x804D
	  addi      r3, r30, 0x150
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x150(r30)
	  bl        0x3EBD8

	.loc_0x29C:
	  addic.    r0, r30, 0x114
	  beq-      .loc_0x30C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x134
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x114(r30)
	  beq-      .loc_0x2C4
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x134(r30)

	.loc_0x2C4:
	  addic.    r0, r30, 0x114
	  beq-      .loc_0x30C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x114
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x114(r30)
	  beq-      .loc_0x30C
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x114
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x114(r30)
	  beq-      .loc_0x30C
	  lis       r4, 0x804D
	  addi      r3, r30, 0x114
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x114(r30)
	  bl        0x3EB68

	.loc_0x30C:
	  addic.    r0, r30, 0xD8
	  beq-      .loc_0x37C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xF8
	  subi      r0, r3, 0x75F4
	  stw       r0, 0xD8(r30)
	  beq-      .loc_0x334
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0xF8(r30)

	.loc_0x334:
	  addic.    r0, r30, 0xD8
	  beq-      .loc_0x37C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xD8
	  subi      r0, r3, 0x77D0
	  stw       r0, 0xD8(r30)
	  beq-      .loc_0x37C
	  lis       r3, 0x804D
	  addic.    r0, r30, 0xD8
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0xD8(r30)
	  beq-      .loc_0x37C
	  lis       r4, 0x804D
	  addi      r3, r30, 0xD8
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0xD8(r30)
	  bl        0x3EAF8

	.loc_0x37C:
	  addic.    r0, r30, 0x8C
	  beq-      .loc_0x3D8
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x8C
	  subi      r0, r3, 0x75AC
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0x3D8
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x8C
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0x3D8
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x8C
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0x3D8
	  lis       r4, 0x804D
	  addi      r3, r30, 0x8C
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x8C(r30)
	  bl        0x3EA9C

	.loc_0x3D8:
	  addic.    r0, r30, 0x40
	  beq-      .loc_0x434
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x40
	  subi      r0, r3, 0x75AC
	  stw       r0, 0x40(r30)
	  beq-      .loc_0x434
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x40
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x40(r30)
	  beq-      .loc_0x434
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x40
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x40(r30)
	  beq-      .loc_0x434
	  lis       r4, 0x804D
	  addi      r3, r30, 0x40
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x40(r30)
	  bl        0x3EA40

	.loc_0x434:
	  extsh.    r0, r31
	  ble-      .loc_0x444
	  mr        r3, r30
	  bl        -0x3AEAA4

	.loc_0x444:
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
 * Address:	803D2B78
 * Size:	0004C8
 */
void ebi::Screen::TMemoryCard::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x24(r1)
	  li        r0, 0x1
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  addi      r31, r30, 0x40
	  stw       r29, 0x14(r1)
	  mr        r29, r31
	  stw       r4, 0x0(r3)
	  stw       r4, 0x8(r3)
	  mr        r3, r31
	  stw       r4, 0xC(r30)
	  stw       r4, 0x10(r30)
	  stw       r4, 0x14(r30)
	  stb       r0, 0x19(r30)
	  stw       r4, 0x20(r30)
	  stw       r4, 0x24(r30)
	  stw       r4, 0x28(r30)
	  stw       r4, 0x2C(r30)
	  bl        0x3E7C0
	  lis       r3, 0x804D
	  lis       r4, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r6, 0x804F
	  stw       r0, 0x0(r31)
	  li        r0, 0
	  lis       r3, 0x803D
	  li        r7, 0x1
	  stw       r0, 0x18(r31)
	  addi      r0, r4, 0x7F2C
	  subi      r4, r3, 0x114
	  subi      r3, r6, 0x77D0
	  stw       r0, 0x0(r29)
	  lis       r5, 0x804F
	  subi      r0, r5, 0x75AC
	  li        r6, 0x10
	  stw       r3, 0x0(r29)
	  addi      r3, r31, 0x20
	  li        r5, 0
	  stb       r7, 0x1C(r29)
	  li        r7, 0x2
	  stw       r0, 0x0(r31)
	  bl        -0x3113F0
	  lfs       f1, 0x1768(r2)
	  addi      r29, r30, 0x8C
	  lfs       f0, 0x1770(r2)
	  li        r4, 0x1
	  stfs      f1, 0x40(r31)
	  li        r0, 0
	  mr        r3, r29
	  stfs      f0, 0x44(r31)
	  stb       r4, 0x48(r31)
	  stb       r0, 0x49(r31)
	  stb       r0, 0x1C(r31)
	  bl        0x3E734
	  lis       r3, 0x804D
	  lis       r4, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r6, 0x804F
	  stw       r0, 0x0(r29)
	  li        r0, 0
	  lis       r3, 0x803D
	  li        r7, 0x1
	  stw       r0, 0x18(r29)
	  addi      r0, r4, 0x7F2C
	  subi      r4, r3, 0x114
	  subi      r3, r6, 0x77D0
	  stw       r0, 0x0(r29)
	  lis       r5, 0x804F
	  subi      r0, r5, 0x75AC
	  li        r6, 0x10
	  stw       r3, 0x0(r29)
	  addi      r3, r29, 0x20
	  li        r5, 0
	  stb       r7, 0x1C(r29)
	  li        r7, 0x2
	  stw       r0, 0x0(r29)
	  bl        -0x31147C
	  lfs       f1, 0x1768(r2)
	  addi      r31, r30, 0xD8
	  lfs       f0, 0x1770(r2)
	  li        r4, 0x1
	  stfs      f1, 0x40(r29)
	  li        r0, 0
	  mr        r3, r31
	  stfs      f0, 0x44(r29)
	  stb       r4, 0x48(r29)
	  stb       r0, 0x49(r29)
	  stb       r0, 0x1C(r29)
	  bl        0x3E6A8
	  lis       r3, 0x804D
	  lis       r6, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r5, 0x804F
	  stw       r0, 0x0(r31)
	  li        r0, 0
	  lis       r4, 0x804F
	  lis       r3, 0x804E
	  stw       r0, 0x18(r31)
	  addi      r0, r6, 0x7F2C
	  subi      r7, r5, 0x77D0
	  li        r6, 0x1
	  stw       r0, 0x0(r31)
	  subi      r5, r4, 0x75F4
	  addi      r0, r3, 0x798C
	  addi      r3, r31, 0x20
	  stw       r7, 0x0(r31)
	  li        r4, 0
	  stb       r6, 0x1C(r31)
	  stw       r5, 0x0(r31)
	  stw       r0, 0x20(r31)
	  bl        -0x36B6C8
	  addi      r29, r30, 0x114
	  mr        r3, r29
	  bl        0x3E644
	  lis       r3, 0x804D
	  lis       r6, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r5, 0x804F
	  stw       r0, 0x0(r29)
	  li        r0, 0
	  lis       r4, 0x804F
	  lis       r3, 0x804E
	  stw       r0, 0x18(r29)
	  addi      r0, r6, 0x7F2C
	  subi      r7, r5, 0x77D0
	  li        r6, 0x1
	  stw       r0, 0x0(r29)
	  subi      r5, r4, 0x75F4
	  addi      r0, r3, 0x798C
	  addi      r3, r29, 0x20
	  stw       r7, 0x0(r29)
	  li        r4, 0
	  stb       r6, 0x1C(r29)
	  stw       r5, 0x0(r29)
	  stw       r0, 0x20(r29)
	  bl        -0x36B72C
	  addi      r29, r30, 0x150
	  mr        r3, r29
	  bl        0x3E5E0
	  lis       r3, 0x804D
	  lis       r6, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r5, 0x804F
	  stw       r0, 0x0(r29)
	  li        r0, 0
	  lis       r4, 0x804F
	  lis       r3, 0x804E
	  stw       r0, 0x18(r29)
	  addi      r0, r6, 0x7F2C
	  subi      r7, r5, 0x77D0
	  li        r6, 0x1
	  stw       r0, 0x0(r29)
	  subi      r5, r4, 0x75F4
	  addi      r0, r3, 0x798C
	  addi      r3, r29, 0x20
	  stw       r7, 0x0(r29)
	  li        r4, 0
	  stb       r6, 0x1C(r29)
	  stw       r5, 0x0(r29)
	  stw       r0, 0x20(r29)
	  bl        -0x36B790
	  addi      r29, r30, 0x18C
	  mr        r3, r29
	  bl        0x3E57C
	  lis       r3, 0x804D
	  lis       r6, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r5, 0x804F
	  stw       r0, 0x0(r29)
	  li        r0, 0
	  lis       r4, 0x804F
	  lis       r3, 0x804E
	  stw       r0, 0x18(r29)
	  addi      r0, r6, 0x7F2C
	  subi      r7, r5, 0x77D0
	  li        r6, 0x1
	  stw       r0, 0x0(r29)
	  subi      r5, r4, 0x75F4
	  addi      r0, r3, 0x798C
	  addi      r3, r29, 0x20
	  stw       r7, 0x0(r29)
	  li        r4, 0
	  stb       r6, 0x1C(r29)
	  stw       r5, 0x0(r29)
	  stw       r0, 0x20(r29)
	  bl        -0x36B7F4
	  addi      r29, r30, 0x1C8
	  mr        r3, r29
	  bl        0x3E518
	  lis       r3, 0x804D
	  lis       r6, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r5, 0x804F
	  stw       r0, 0x0(r29)
	  li        r0, 0
	  lis       r4, 0x804F
	  lis       r3, 0x804E
	  stw       r0, 0x18(r29)
	  addi      r0, r6, 0x7F2C
	  subi      r7, r5, 0x77D0
	  li        r6, 0x1
	  stw       r0, 0x0(r29)
	  subi      r5, r4, 0x75F4
	  addi      r0, r3, 0x798C
	  addi      r3, r29, 0x20
	  stw       r7, 0x0(r29)
	  li        r4, 0
	  stb       r6, 0x1C(r29)
	  stw       r5, 0x0(r29)
	  stw       r0, 0x20(r29)
	  bl        -0x36B858
	  addi      r29, r30, 0x204
	  mr        r3, r29
	  bl        0x3E4B4
	  lis       r3, 0x804D
	  lis       r4, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r3, 0x804F
	  stw       r0, 0x0(r29)
	  li        r11, 0
	  lis       r10, 0x804F
	  lis       r5, 0x804C
	  stw       r11, 0x18(r29)
	  addi      r0, r4, 0x7F2C
	  lis       r9, 0x804C
	  lis       r8, 0x804A
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x77D0
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  stw       r0, 0x0(r29)
	  li        r0, 0x1
	  addi      r7, r4, 0x7420
	  addi      r6, r3, 0x73CC
	  stb       r0, 0x1C(r29)
	  subi      r0, r10, 0x77F4
	  lis       r3, 0x804E
	  addi      r10, r5, 0x14F0
	  stw       r0, 0x0(r29)
	  addi      r5, r3, 0x7648
	  addi      r9, r9, 0x14D8
	  subi      r8, r8, 0x1D84
	  stw       r10, 0x224(r30)
	  addi      r12, r7, 0x18
	  addi      r29, r6, 0x18
	  addi      r4, r30, 0x240
	  stw       r9, 0x224(r30)
	  addi      r31, r5, 0x18
	  lfs       f3, 0x1774(r2)
	  addi      r0, r30, 0x278
	  stb       r11, 0x228(r30)
	  mr        r3, r30
	  lfs       f2, 0x1778(r2)
	  stb       r11, 0x229(r30)
	  lfs       f1, 0x1768(r2)
	  stw       r8, 0x22C(r30)
	  stw       r7, 0x224(r30)
	  stw       r12, 0x22C(r30)
	  sth       r11, 0x230(r30)
	  stw       r11, 0x234(r30)
	  stw       r6, 0x224(r30)
	  stw       r29, 0x22C(r30)
	  stw       r4, 0x238(r30)
	  stw       r5, 0x224(r30)
	  stw       r31, 0x22C(r30)
	  stfs      f3, 0x23C(r30)
	  lwz       r4, -0x6514(r13)
	  lfs       f0, 0x54(r4)
	  fmuls     f0, f2, f0
	  stfs      f0, 0x248(r30)
	  stfs      f1, 0x24C(r30)
	  stw       r11, 0x254(r30)
	  stw       r11, 0x258(r30)
	  stw       r10, 0x25C(r30)
	  stw       r9, 0x25C(r30)
	  stb       r11, 0x260(r30)
	  stb       r11, 0x261(r30)
	  stw       r8, 0x264(r30)
	  stw       r7, 0x25C(r30)
	  stw       r12, 0x264(r30)
	  sth       r11, 0x268(r30)
	  stw       r11, 0x26C(r30)
	  stw       r6, 0x25C(r30)
	  stw       r29, 0x264(r30)
	  stw       r0, 0x270(r30)
	  stw       r5, 0x25C(r30)
	  stw       r31, 0x264(r30)
	  stfs      f3, 0x274(r30)
	  lwz       r4, -0x6514(r13)
	  lfs       f0, 0x54(r4)
	  fmuls     f0, f2, f0
	  stfs      f0, 0x280(r30)
	  stfs      f1, 0x284(r30)
	  stw       r11, 0x28C(r30)
	  stw       r11, 0x290(r30)
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
 * Address:	........
 * Size:	0000A0
 */
void ebi::TYesNoCursor::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D3040
 * Size:	000378
 */
void ebi::CardError::TMgr::startSeq((ebi::CardError::TMgr::enumStart))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  mr.       r30, r4
	  stw       r0, 0x2A0(r3)
	  blt-      .loc_0x34
	  cmpwi     r30, 0x11
	  bge-      .loc_0x34
	  li        r0, 0x1

	.loc_0x34:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x58
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x68DC
	  li        r4, 0x19C
	  addi      r5, r5, 0x68EC
	  crclr     6, 0x6
	  bl        -0x3A8A54

	.loc_0x58:
	  cmplwi    r30, 0x10
	  bgt-      .loc_0x360
	  lis       r3, 0x804F
	  rlwinm    r0,r30,2,0,29
	  subi      r3, r3, 0x7524
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r0, 0
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x13
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x16
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0x1
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0x1
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0x1
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0x1
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0x1
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x13
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0x1
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0x1
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x16
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0x1
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0xC
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0x1
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x11
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x360
	  li        r0, 0x1
	  addi      r3, r31, 0x2A8
	  stw       r0, 0x2A4(r31)
	  mr        r4, r31
	  li        r5, 0x12
	  li        r6, 0
	  lwz       r12, 0x2A8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x360:
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
 * Address:	803D33B8
 * Size:	000050
 */
void ebi::CardError::TMgr::forceQuitSeq(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x2A8
	  lwz       r12, 0x2A8(r31)
	  mr        r4, r31
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0xF8C0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D3408
 * Size:	000044
 */
void ebi::CardError::TMgr::goEnd_((ebi::CardError::TMgr::enumEnd))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  stw       r4, 0x2A0(r3)
	  addi      r3, r6, 0x2A8
	  mr        r4, r6
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D344C
 * Size:	0000E0
 */
void ebi::CardError::TMgr::checkAndTransitNoCard_(void)
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
	  lwz       r4, -0x6514(r13)
	  lwz       r3, 0x5C(r4)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x40
	  bl        0x6DB40
	  cmplwi    r3, 0xB
	  beq-      .loc_0x40
	  li        r31, 0x1

	.loc_0x40:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x64
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x72670
	  cmpwi     r3, 0
	  bne-      .loc_0x64
	  li        r0, 0x1
	  b         .loc_0x68

	.loc_0x64:
	  li        r0, 0

	.loc_0x68:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xC8
	  lwz       r0, 0x2A4(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0xA0
	  addi      r3, r30, 0x2A8
	  mr        r4, r30
	  lwz       r12, 0x2A8(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC8

	.loc_0xA0:
	  cmpwi     r0, 0x1
	  bne-      .loc_0xC8
	  addi      r3, r30, 0x2A8
	  mr        r4, r30
	  lwz       r12, 0x2A8(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
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
 * Address:	803D352C
 * Size:	00006C
 */
void ebi::CardError::TMgr::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x2A8
	  lwz       r12, 0x2A8(r31)
	  mr        r4, r31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0xC8
	  cmpwi     r3, 0
	  beq-      .loc_0x58
	  mr        r3, r31
	  bl        -0xF0A8
	  lwz       r3, 0x298(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  subi      r0, r3, 0x1
	  stw       r0, 0x298(r31)

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D3598
 * Size:	00003C
 */
void ebi::CardError::TMgr::draw(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x78
	  cmpwi     r3, 0
	  beq-      .loc_0x28
	  mr        r3, r31
	  bl        -0xE830

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D35D4
 * Size:	000050
 */
void ebi::CardError::TMgr::isGetEnd(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        .loc_0x50
	  cmpwi     r3, 0
	  beq-      .loc_0x30
	  mr        r3, r31
	  bl        .loc_0x50
	  cmpwi     r3, 0x1
	  bne-      .loc_0x38

	.loc_0x30:
	  li        r3, 0x1
	  b         .loc_0x3C

	.loc_0x38:
	  li        r3, 0

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x50:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void ebi::CardError::TMgr::isFinish(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void ebi::CardError::TMgr::showInfo((long, long, long, long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D3624
 * Size:	000058
 */
void ebi::CardError::TMgr::getStateID(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x2C4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x68DC
	  li        r4, 0x2F8
	  addi      r5, r5, 0x68EC
	  crclr     6, 0x6
	  bl        -0x3A901C

	.loc_0x3C:
	  lwz       r3, 0x2C4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x4(r3)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D367C
 * Size:	000004
 */
void init__Q24Game31FSMState<ebi::CardError::TMgr>
FPQ33ebi9CardError4TMgrPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D3680
 * Size:	000004
 */
void exec__Q24Game31FSMState<ebi::CardError::TMgr> FPQ33ebi9CardError4TMgr(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D3684
 * Size:	000004
 */
void cleanup__Q24Game31FSMState<ebi::CardError::TMgr>
FPQ33ebi9CardError4TMgr(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D3688
 * Size:	000004
 */
void resume__Q24Game31FSMState<ebi::CardError::TMgr>
FPQ33ebi9CardError4TMgr(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D368C
 * Size:	000004
 */
void restart__Q24Game31FSMState<ebi::CardError::TMgr>
FPQ33ebi9CardError4TMgr(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D3690
 * Size:	000004
 */
void init__Q24Game35StateMachine<ebi::CardError::TMgr>
FPQ33ebi9CardError4TMgr(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D3694
 * Size:	000038
 */
void exec__Q24Game35StateMachine<ebi::CardError::TMgr>
FPQ33ebi9CardError4TMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2C4(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D36CC
 * Size:	000064
 */
void create__Q24Game35StateMachine<ebi::CardError::TMgr> Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0xC(r3)
	  stw       r0, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x3AF748
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x3AF758
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x3AF768
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D3730
 * Size:	00009C
 */
void transit__Q24Game35StateMachine<ebi::CardError::TMgr>
FPQ33ebi9CardError4TMgriPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x2C4(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x2C4(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D37CC
 * Size:	000084
 */
void registerState__Q24Game35StateMachine<ebi::CardError::TMgr>
FPQ24Game31FSMState<ebi::CardError::TMgr>(void)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r6,2,0,29
	  stwx      r4, r5, r0
	  lwz       r5, 0x4(r4)
	  cmpwi     r5, 0
	  blt-      .loc_0x34
	  lwz       r0, 0xC(r3)
	  cmpw      r5, r0
	  blt-      .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  beqlr-
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r3)
	  lwz       r6, 0x4(r4)
	  lwz       r5, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r6, r5, r0
	  lwz       r0, 0x4(r4)
	  lwz       r5, 0x8(r3)
	  lwz       r4, 0x14(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}
