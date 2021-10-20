

/*
 * --INFO--
 * Address:	80018958
 * Size:	0000B0
 */
void JKRAramArchive::JKRAramArchive(long, JKRArchive::EMountDirection)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  li        r5, 0x2
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        0x1B3C
	  lis       r4, 0x804A
	  mr        r3, r29
	  subi      r0, r4, 0x438
	  mr        r4, r30
	  stw       r0, 0x0(r29)
	  stw       r31, 0x60(r29)
	  bl        0x21C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  mr        r3, r29
	  b         .loc_0x94

	.loc_0x58:
	  lis       r4, 0x5241
	  lis       r3, 0x8050
	  addi      r0, r4, 0x5243
	  stw       r0, 0x2C(r29)
	  addi      r4, r29, 0x18
	  addi      r3, r3, 0x6E24
	  lwz       r5, 0x48(r29)
	  lwz       r6, 0x54(r29)
	  lwz       r0, 0x4(r5)
	  add       r0, r6, r0
	  stw       r0, 0x28(r29)
	  bl        0xDFC0
	  li        r0, 0x1
	  mr        r3, r29
	  stb       r0, 0x30(r29)

	.loc_0x94:
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
 * Address:	80018A08
 * Size:	000150
 */
void JKRAramArchive::~JKRAramArchive()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr.       r30, r3
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  beq-      .loc_0x12C
	  lis       r3, 0x804A
	  subi      r0, r3, 0x438
	  stw       r0, 0x0(r30)
	  lbz       r0, 0x30(r30)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x110
	  lwz       r0, 0x44(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r29, 0x4C(r30)
	  li        r28, 0
	  b         .loc_0x74

	.loc_0x58:
	  lwz       r3, 0x10(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  lwz       r4, 0x38(r30)
	  bl        0xABFC

	.loc_0x6C:
	  addi      r29, r29, 0x14
	  addi      r28, r28, 0x1

	.loc_0x74:
	  lwz       r3, 0x44(r30)
	  lwz       r0, 0x8(r3)
	  cmplw     r28, r0
	  blt+      .loc_0x58
	  lwz       r4, 0x38(r30)
	  bl        0xABDC
	  li        r0, 0
	  stw       r0, 0x44(r30)

	.loc_0x94:
	  lwz       r3, 0x50(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xB0
	  li        r4, 0
	  bl        0xABC0
	  li        r0, 0
	  stw       r0, 0x50(r30)

	.loc_0xB0:
	  lwz       r3, 0x68(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
	  beq-      .loc_0xD4
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD4:
	  lwz       r3, 0x64(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  beq-      .loc_0xF8
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF8:
	  lis       r3, 0x8050
	  addi      r4, r30, 0x18
	  addi      r3, r3, 0x6E24
	  bl        0xE118
	  li        r0, 0
	  stb       r0, 0x30(r30)

	.loc_0x110:
	  mr        r3, r30
	  li        r4, 0
	  bl        0x1A44
	  extsh.    r0, r31
	  ble-      .loc_0x12C
	  mr        r3, r30
	  bl        0xB584

	.loc_0x12C:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
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
 * Address:	80018B58
 * Size:	000060
 */
void JKRFile::~JKRFile()
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
	  beq-      .loc_0x44
	  lis       r5, 0x804A
	  li        r4, 0
	  subi      r0, r5, 0x458
	  stw       r0, 0x0(r30)
	  bl        0x44AC
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        0xB51C

	.loc_0x44:
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
 * Address:	80018BB8
 * Size:	000334
 */
void JKRAramArchive::open(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  li        r5, -0x4
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  stmw      r27, 0x1C(r1)
	  mr        r28, r3
	  mr        r29, r4
	  stw       r0, 0x44(r3)
	  li        r3, 0xF8
	  stw       r0, 0x48(r28)
	  stw       r0, 0x4C(r28)
	  stw       r0, 0x54(r28)
	  stw       r0, 0x64(r28)
	  lwz       r0, 0x60(r28)
	  lwz       r4, -0x77D8(r13)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x4C
	  li        r5, 0x4

	.loc_0x4C:
	  bl        0xB33C
	  mr.       r0, r3
	  beq-      .loc_0x64
	  mr        r4, r29
	  bl        0x45C8
	  mr        r0, r3

	.loc_0x64:
	  stw       r0, 0x68(r28)
	  lwz       r0, 0x68(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  li        r0, 0
	  li        r3, 0
	  stb       r0, 0x3C(r28)
	  b         .loc_0x320

	.loc_0x84:
	  lwz       r3, -0x77D8(r13)
	  li        r4, 0x20
	  li        r5, -0x20
	  bl        0xA9F8
	  mr.       r30, r3
	  bne-      .loc_0xA8
	  li        r0, 0
	  stb       r0, 0x3C(r28)
	  b         .loc_0x2D0

	.loc_0xA8:
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x8(r1)
	  mr        r4, r30
	  addi      r10, r28, 0x5C
	  li        r5, 0x1
	  li        r6, 0x20
	  li        r7, 0
	  li        r8, 0x1
	  li        r9, 0
	  bl        0x65B4
	  mr        r3, r30
	  li        r4, 0x20
	  bl        0xD3A58
	  lwz       r0, 0x60(r28)
	  li        r31, -0x20
	  cmpwi     r0, 0x1
	  bne-      .loc_0xF4
	  li        r31, 0x20

	.loc_0xF4:
	  lwz       r3, 0xC(r30)
	  mr        r4, r31
	  lwz       r5, 0x38(r28)
	  addi      r0, r3, 0x1F
	  rlwinm    r27,r0,0,0,26
	  mr        r3, r27
	  bl        0xA91C
	  stw       r3, 0x44(r28)
	  lwz       r4, 0x44(r28)
	  cmplwi    r4, 0
	  bne-      .loc_0x12C
	  li        r0, 0
	  stb       r0, 0x3C(r28)
	  b         .loc_0x2D0

	.loc_0x12C:
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x8(r1)
	  mr        r6, r27
	  li        r5, 0x1
	  li        r7, 0
	  li        r8, 0x1
	  li        r9, 0x20
	  li        r10, 0
	  bl        0x6534
	  lwz       r3, 0x44(r28)
	  mr        r4, r27
	  bl        0xD39D8
	  lwz       r4, 0x44(r28)
	  li        r0, 0
	  li        r5, 0
	  lwz       r3, 0x4(r4)
	  add       r3, r4, r3
	  stw       r3, 0x48(r28)
	  lwz       r4, 0x44(r28)
	  lwz       r3, 0xC(r4)
	  add       r3, r4, r3
	  stw       r3, 0x4C(r28)
	  lwz       r4, 0x44(r28)
	  lwz       r3, 0x14(r4)
	  add       r3, r4, r3
	  stw       r3, 0x54(r28)
	  stw       r0, 0x50(r28)
	  lwz       r3, 0x44(r28)
	  lwz       r4, 0x4C(r28)
	  lwz       r0, 0x8(r3)
	  mtctr     r0
	  cmplwi    r0, 0
	  ble-      .loc_0x1D8

	.loc_0x1B4:
	  lwz       r3, 0x4(r4)
	  rlwinm.   r0,r3,8,31,31
	  rlwinm    r3,r3,8,24,31
	  beq-      .loc_0x1D0
	  rlwinm    r0,r3,0,29,29
	  or        r0, r5, r0
	  rlwinm    r5,r0,0,24,31

	.loc_0x1D0:
	  addi      r4, r4, 0x14
	  bdnz+     .loc_0x1B4

	.loc_0x1D8:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x23C
	  mr        r3, r31
	  bl        0xAD3B4
	  lwz       r4, 0x44(r28)
	  lwz       r5, 0x38(r28)
	  lwz       r0, 0x8(r4)
	  mr        r4, r3
	  rlwinm    r3,r0,2,0,29
	  bl        0xA82C
	  stw       r3, 0x50(r28)
	  lwz       r3, 0x50(r28)
	  cmplwi    r3, 0
	  bne-      .loc_0x228
	  lwz       r3, 0x44(r28)
	  li        r4, 0
	  bl        0xA89C
	  li        r0, 0
	  stb       r0, 0x3C(r28)
	  b         .loc_0x2D0

	.loc_0x228:
	  lwz       r5, 0x44(r28)
	  li        r4, 0
	  lwz       r0, 0x8(r5)
	  rlwinm    r5,r0,2,0,29
	  bl        -0x13D3C

	.loc_0x23C:
	  lwz       r3, 0x60(r28)
	  lwz       r4, 0x10(r30)
	  lwz       r6, -0x78E0(r13)
	  subfic    r5, r3, 0x1
	  subi      r0, r3, 0x1
	  addi      r4, r4, 0x1F
	  or        r0, r5, r0
	  lwz       r3, 0x94(r6)
	  rlwinm    r4,r4,0,0,26
	  rlwinm    r5,r0,1,31,31
	  bl        0xA2C
	  stw       r3, 0x64(r28)
	  lwz       r4, 0x64(r28)
	  cmplwi    r4, 0
	  bne-      .loc_0x2AC
	  lwz       r3, 0x44(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x28C
	  li        r4, 0
	  bl        0xA82C

	.loc_0x28C:
	  lwz       r3, 0x50(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x2A0
	  li        r4, 0
	  bl        0xA818

	.loc_0x2A0:
	  li        r0, 0
	  stb       r0, 0x3C(r28)
	  b         .loc_0x2D0

	.loc_0x2AC:
	  lwz       r6, 0x8(r30)
	  mr        r3, r29
	  lwz       r0, 0xC(r30)
	  li        r5, 0x1
	  lwz       r4, 0x14(r4)
	  li        r7, 0
	  add       r6, r6, r0
	  li        r8, 0
	  bl        0x4908

	.loc_0x2D0:
	  cmplwi    r30, 0
	  beq-      .loc_0x2E4
	  lwz       r3, -0x77D8(r13)
	  mr        r4, r30
	  bl        0xA81C

	.loc_0x2E4:
	  lbz       r0, 0x3C(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x31C
	  lwz       r3, 0x68(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x314
	  beq-      .loc_0x314
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x314:
	  li        r3, 0
	  b         .loc_0x320

	.loc_0x31C:
	  li        r3, 0x1

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
 * Address:	80018EEC
 * Size:	000124
 */
void JKRAramArchive::fetchResource(JKRArchive::SDIFileEntry*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bne-      .loc_0x30
	  addi      r30, r1, 0xC

	.loc_0x30:
	  lwz       r3, 0x4(r29)
	  rlwinm.   r0,r3,8,29,29
	  rlwinm    r3,r3,8,24,31
	  bne-      .loc_0x48
	  li        r31, 0
	  b         .loc_0x5C

	.loc_0x48:
	  rlwinm.   r0,r3,0,24,24
	  beq-      .loc_0x58
	  li        r31, 0x2
	  b         .loc_0x5C

	.loc_0x58:
	  li        r31, 0x1

	.loc_0x5C:
	  lwz       r0, 0x10(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  lwz       r3, 0x64(r28)
	  mr        r6, r31
	  lwz       r8, 0x8(r29)
	  addi      r7, r1, 0x8
	  lwz       r0, 0x14(r3)
	  lwz       r4, 0xC(r29)
	  lwz       r5, 0x38(r28)
	  add       r3, r8, r0
	  bl        0x250
	  cmplwi    r3, 0
	  stw       r3, 0x0(r30)
	  bne-      .loc_0xA0
	  li        r3, 0
	  b         .loc_0x104

	.loc_0xA0:
	  lwz       r0, 0x8(r1)
	  cmpwi     r31, 0x2
	  stw       r0, 0x10(r29)
	  bne-      .loc_0x100
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  lwz       r5, 0x0(r30)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x100

	.loc_0xD0:
	  cmpwi     r31, 0x2
	  bne-      .loc_0xF8
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x0(r30)
	  b         .loc_0x100

	.loc_0xF8:
	  lwz       r0, 0xC(r29)
	  stw       r0, 0x0(r30)

	.loc_0x100:
	  lwz       r3, 0x10(r29)

	.loc_0x104:
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
 * Address:	80019010
 * Size:	0000F8
 */
void JKRAramArchive::fetchResource(void*, unsigned long,
                                   JKRArchive::SDIFileEntry*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r5
	  mr        r29, r6
	  mr        r27, r4
	  mr        r30, r7
	  lwz       r31, 0xC(r6)
	  cmplw     r31, r28
	  ble-      .loc_0x30
	  mr        r31, r28

	.loc_0x30:
	  lwz       r4, 0x4(r29)
	  rlwinm.   r0,r4,8,29,29
	  rlwinm    r4,r4,8,24,31
	  bne-      .loc_0x48
	  li        r7, 0
	  b         .loc_0x5C

	.loc_0x48:
	  rlwinm.   r0,r4,0,24,24
	  beq-      .loc_0x58
	  li        r7, 0x2
	  b         .loc_0x5C

	.loc_0x58:
	  li        r7, 0x1

	.loc_0x5C:
	  lwz       r0, 0x10(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x90
	  lwz       r3, 0x64(r3)
	  mr        r4, r31
	  lwz       r8, 0x8(r29)
	  mr        r5, r27
	  lwz       r0, 0x14(r3)
	  rlwinm    r6,r28,0,0,26
	  add       r3, r8, r0
	  bl        .loc_0xF8
	  mr        r31, r3
	  b         .loc_0xD4

	.loc_0x90:
	  cmpwi     r7, 0x2
	  bne-      .loc_0xB8
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  mr        r31, r3

	.loc_0xB8:
	  cmplw     r31, r28
	  ble-      .loc_0xC4
	  mr        r31, r28

	.loc_0xC4:
	  lwz       r4, 0x10(r29)
	  mr        r3, r27
	  mr        r5, r31
	  bl        0xACE4

	.loc_0xD4:
	  cmplwi    r30, 0
	  beq-      .loc_0xE0
	  stw       r31, 0x0(r30)

	.loc_0xE0:
	  mr        r3, r27
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xF8:
	*/
}

/*
 * --INFO--
 * Address:	80019108
 * Size:	0000BC
 */
void JKRAramArchive::fetchResource_subroutine(unsigned long, unsigned long,
                                              unsigned char*, unsigned long,
                                              int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r7, 0
	  rlwinm    r6,r6,0,0,26
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1F
	  rlwinm    r0,r0,0,0,26
	  beq-      .loc_0x30
	  blt-      .loc_0x8C
	  cmpwi     r7, 0x3
	  bge-      .loc_0x8C
	  b         .loc_0x64

	.loc_0x30:
	  cmplw     r0, r6
	  ble-      .loc_0x3C
	  mr        r0, r6

	.loc_0x3C:
	  mr        r4, r5
	  mr        r7, r6
	  mr        r5, r0
	  addi      r10, r1, 0x8
	  li        r6, 0
	  li        r8, 0
	  li        r9, -0x1
	  bl        -0x1214
	  lwz       r3, 0x8(r1)
	  b         .loc_0xAC

	.loc_0x64:
	  mr        r4, r5
	  mr        r5, r0
	  mr        r7, r6
	  addi      r10, r1, 0x8
	  li        r6, 0x1
	  li        r8, 0
	  li        r9, -0x1
	  bl        -0x123C
	  lwz       r3, 0x8(r1)
	  b         .loc_0xAC

	.loc_0x8C:
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r3, r3, 0x3510
	  li        r4, 0x28F
	  addi      r5, r5, 0x3524
	  crclr     6, 0x6
	  bl        0xD45C0
	  li        r3, 0

	.loc_0xAC:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800191C4
 * Size:	00014C
 */
void JKRAramArchive::fetchResource_subroutine(unsigned long, unsigned long,
                                              JKRHeap*, int, unsigned char**)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  cmpwi     r6, 0
	  stw       r0, 0x74(r1)
	  stmw      r26, 0x58(r1)
	  mr        r26, r4
	  addi      r0, r26, 0x1F
	  mr        r28, r3
	  mr        r29, r5
	  mr        r30, r7
	  rlwinm    r31,r0,0,0,26
	  beq-      .loc_0x40
	  blt-      .loc_0x118
	  cmpwi     r6, 0x3
	  bge-      .loc_0x118
	  b         .loc_0x84

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0x20
	  bl        0xA3D4
	  mr        r0, r3
	  mr        r3, r28
	  mr        r27, r0
	  mr        r5, r31
	  mr        r7, r31
	  li        r6, 0
	  mr        r4, r27
	  li        r8, 0
	  li        r9, -0x1
	  li        r10, 0
	  bl        -0x12EC
	  stw       r27, 0x0(r30)
	  mr        r3, r26
	  b         .loc_0x138

	.loc_0x84:
	  addi      r0, r1, 0x2B
	  li        r5, 0x20
	  rlwinm    r27,r0,0,0,26
	  li        r6, 0
	  mr        r4, r27
	  li        r7, 0
	  li        r8, 0
	  li        r9, -0x1
	  li        r10, 0
	  bl        -0x1320
	  lbz       r0, 0x5(r27)
	  mr        r5, r29
	  lbz       r3, 0x4(r27)
	  li        r4, 0x20
	  rlwinm    r0,r0,16,0,15
	  lbz       r6, 0x6(r27)
	  rlwimi    r0,r3,24,0,7
	  lbz       r7, 0x7(r27)
	  rlwimi    r0,r6,8,16,23
	  or        r3, r7, r0
	  addi      r0, r3, 0x1F
	  rlwinm    r26,r0,0,0,26
	  mr        r3, r26
	  bl        0xA33C
	  mr        r27, r3
	  mr        r3, r28
	  mr        r5, r31
	  mr        r7, r26
	  mr        r4, r27
	  mr        r8, r29
	  addi      r10, r1, 0x8
	  li        r6, 0x1
	  li        r9, -0x1
	  bl        -0x1380
	  stw       r27, 0x0(r30)
	  lwz       r3, 0x8(r1)
	  b         .loc_0x138

	.loc_0x118:
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r3, r3, 0x3510
	  li        r4, 0x2C9
	  addi      r5, r5, 0x3524
	  crclr     6, 0x6
	  bl        0xD4478
	  li        r3, 0

	.loc_0x138:
	  lmw       r26, 0x58(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80019310
 * Size:	000134
 */
void JKRAramArchive::getExpandedResSize(const void*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  lwz       r0, 0x50(r3)
	  stw       r31, 0x5C(r1)
	  cmplwi    r0, 0
	  stw       r30, 0x58(r1)
	  mr        r30, r4
	  stw       r29, 0x54(r1)
	  mr        r29, r3
	  bne-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x118

	.loc_0x40:
	  bl        0x1B30
	  mr.       r31, r3
	  bne-      .loc_0x54
	  li        r3, -0x1
	  b         .loc_0x118

	.loc_0x54:
	  lwz       r0, 0x4(r31)
	  rlwinm.   r0,r0,8,29,29
	  bne-      .loc_0x7C
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x118

	.loc_0x7C:
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  b         .loc_0x118

	.loc_0xA0:
	  lwz       r3, 0x64(r29)
	  addi      r0, r1, 0x27
	  rlwinm    r30,r0,0,0,26
	  lwz       r7, 0x8(r31)
	  lwz       r0, 0x14(r3)
	  mr        r4, r30
	  li        r5, 0x20
	  li        r6, 0
	  add       r3, r7, r0
	  li        r7, 0
	  li        r8, 0
	  li        r9, -0x1
	  li        r10, 0
	  bl        -0x1498
	  lbz       r0, 0x5(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  lbz       r5, 0x4(r30)
	  rlwinm    r0,r0,16,0,15
	  lbz       r6, 0x6(r30)
	  rlwimi    r0,r5,24,0,7
	  lbz       r5, 0x7(r30)
	  rlwimi    r0,r6,8,16,23
	  lwz       r12, 0x48(r12)
	  or        r31, r5, r0
	  mr        r5, r31
	  mtctr     r12
	  bctrl
	  mr        r3, r31

	.loc_0x118:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}
