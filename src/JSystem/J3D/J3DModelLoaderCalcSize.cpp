

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void J3DModelLoaderDataBase::countMaterialNum(const void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80087900
 * Size:	000040
 */
void J3DModelLoader::countMaterialNum(const void*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xC(r4)
	  addi      r4, r4, 0x20
	  mtctr     r0
	  cmplwi    r0, 0
	  ble-      .loc_0x38

	.loc_0x14:
	  lwz       r3, 0x0(r4)
	  subis     r0, r3, 0x4D41
	  cmplwi    r0, 0x5433
	  bne-      .loc_0x2C
	  lhz       r3, 0x8(r4)
	  blr

	.loc_0x2C:
	  lwz       r0, 0x4(r4)
	  add       r4, r4, r0
	  bdnz+     .loc_0x14

	.loc_0x38:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void J3DModelLoaderDataBase::calcLoadSize(const void*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void J3DModelLoaderDataBase::calcLoadMaterialTableSize(const void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void J3DModelLoaderDataBase::calcLoadBinaryDisplayListSize(const void*,
                                                           unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80087940
 * Size:	0001B0
 */
void J3DModelLoader::calcLoadSize(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r6, 0x4D41
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r3
	  lwz       r25, 0xC(r4)
	  mr        r27, r5
	  addi      r29, r4, 0x20
	  addi      r31, r6, 0x5432
	  li        r28, 0
	  li        r30, 0xE4
	  b         .loc_0x190

	.loc_0x34:
	  lwz       r4, 0x0(r29)
	  cmpw      r4, r31
	  beq-      .loc_0x184
	  bge-      .loc_0x94
	  lis       r3, 0x494E
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0xE4
	  bge-      .loc_0x80
	  lis       r3, 0x4556
	  addi      r0, r3, 0x5031
	  cmpw      r4, r0
	  beq-      .loc_0x160
	  bge-      .loc_0x184
	  lis       r3, 0x4452
	  addi      r0, r3, 0x5731
	  cmpw      r4, r0
	  beq-      .loc_0x174
	  b         .loc_0x184

	.loc_0x80:
	  lis       r3, 0x4A4E
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0xFC
	  b         .loc_0x184

	.loc_0x94:
	  lis       r3, 0x5445
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x14C
	  bge-      .loc_0xD0
	  lis       r3, 0x5348
	  addi      r0, r3, 0x5031
	  cmpw      r4, r0
	  beq-      .loc_0x134
	  bge-      .loc_0x184
	  lis       r3, 0x4D41
	  addi      r0, r3, 0x5434
	  cmpw      r4, r0
	  bge-      .loc_0x184
	  b         .loc_0x110

	.loc_0xD0:
	  lis       r3, 0x5654
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x184
	  b         .loc_0x184

	.loc_0xE4:
	  mr        r3, r26
	  mr        r4, r29
	  mr        r5, r27
	  bl        0x39C
	  add       r30, r30, r3
	  b         .loc_0x184

	.loc_0xFC:
	  mr        r3, r26
	  mr        r4, r29
	  bl        0x418
	  add       r30, r30, r3
	  b         .loc_0x184

	.loc_0x110:
	  mr        r3, r26
	  mr        r4, r29
	  lwz       r12, 0x0(r26)
	  mr        r5, r27
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  add       r30, r30, r3
	  b         .loc_0x184

	.loc_0x134:
	  mr        r3, r26
	  mr        r4, r29
	  mr        r5, r27
	  bl        0x510
	  add       r30, r30, r3
	  b         .loc_0x184

	.loc_0x14C:
	  mr        r3, r26
	  mr        r4, r29
	  bl        0x5B0
	  add       r30, r30, r3
	  b         .loc_0x184

	.loc_0x160:
	  mr        r3, r26
	  mr        r4, r29
	  bl        0x3E0
	  add       r30, r30, r3
	  b         .loc_0x184

	.loc_0x174:
	  mr        r3, r26
	  mr        r4, r29
	  bl        0x3DC
	  add       r30, r30, r3

	.loc_0x184:
	  lwz       r0, 0x4(r29)
	  addi      r28, r28, 0x1
	  add       r29, r29, r0

	.loc_0x190:
	  cmplw     r28, r25
	  blt+      .loc_0x34
	  mr        r3, r30
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80087AF0
 * Size:	0000CC
 */
void J3DModelLoader::calcLoadMaterialTableSize(const void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x4D41
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  lwz       r31, 0xC(r4)
	  addi      r28, r4, 0x20
	  addi      r30, r5, 0x5433
	  li        r27, 0
	  li        r26, 0
	  li        r29, 0x20
	  b         .loc_0xA0

	.loc_0x34:
	  lwz       r4, 0x0(r28)
	  cmpw      r4, r30
	  beq-      .loc_0x5C
	  bge-      .loc_0x48
	  b         .loc_0x94

	.loc_0x48:
	  lis       r3, 0x5445
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x80
	  b         .loc_0x94

	.loc_0x5C:
	  mr        r3, r25
	  mr        r4, r28
	  lwz       r12, 0x0(r25)
	  lis       r5, 0x5110
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  add       r29, r29, r3
	  b         .loc_0x94

	.loc_0x80:
	  mr        r3, r25
	  mr        r4, r28
	  bl        0x588
	  add       r29, r29, r3
	  li        r27, 0x1

	.loc_0x94:
	  lwz       r0, 0x4(r28)
	  addi      r26, r26, 0x1
	  add       r28, r28, r0

	.loc_0xA0:
	  cmplw     r26, r31
	  blt+      .loc_0x34
	  rlwinm.   r0,r27,0,24,31
	  bne-      .loc_0xB4
	  addi      r29, r29, 0xC

	.loc_0xB4:
	  mr        r3, r29
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80087BBC
 * Size:	000210
 */
void J3DModelLoader::calcLoadBinaryDisplayListSize(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r23, 0xC(r1)
	  mr        r25, r5
	  lis       r5, 0x4D41
	  lwz       r23, 0xC(r4)
	  mr        r24, r3
	  addi      r27, r4, 0x20
	  rlwinm    r30,r25,0,6,7
	  rlwinm    r29,r25,0,18,19
	  addi      r31, r5, 0x5433
	  li        r26, 0
	  li        r28, 0xE4
	  b         .loc_0x1F0

	.loc_0x3C:
	  lwz       r4, 0x0(r27)
	  cmpw      r4, r31
	  beq-      .loc_0x160
	  bge-      .loc_0xA0
	  lis       r3, 0x494E
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0xF0
	  bge-      .loc_0x88
	  lis       r3, 0x4556
	  addi      r0, r3, 0x5031
	  cmpw      r4, r0
	  beq-      .loc_0x1C0
	  bge-      .loc_0x1E4
	  lis       r3, 0x4452
	  addi      r0, r3, 0x5731
	  cmpw      r4, r0
	  beq-      .loc_0x1D4
	  b         .loc_0x1E4

	.loc_0x88:
	  lis       r3, 0x4A4E
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0x108
	  blt-      .loc_0x1E4
	  b         .loc_0x1E4

	.loc_0xA0:
	  lis       r3, 0x5445
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x134
	  bge-      .loc_0xDC
	  lis       r3, 0x5348
	  addi      r0, r3, 0x5031
	  cmpw      r4, r0
	  beq-      .loc_0x11C
	  bge-      .loc_0x1E4
	  lis       r3, 0x4D44
	  addi      r0, r3, 0x4C33
	  cmpw      r4, r0
	  beq-      .loc_0x148
	  b         .loc_0x1E4

	.loc_0xDC:
	  lis       r3, 0x5654
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x1E4
	  b         .loc_0x1E4

	.loc_0xF0:
	  mr        r3, r24
	  mr        r4, r27
	  mr        r5, r25
	  bl        .loc_0x210
	  add       r28, r28, r3
	  b         .loc_0x1E4

	.loc_0x108:
	  mr        r3, r24
	  mr        r4, r27
	  bl        0x190
	  add       r28, r28, r3
	  b         .loc_0x1E4

	.loc_0x11C:
	  mr        r3, r24
	  mr        r4, r27
	  mr        r5, r25
	  bl        0x2AC
	  add       r28, r28, r3
	  b         .loc_0x1E4

	.loc_0x134:
	  mr        r3, r24
	  mr        r4, r27
	  bl        0x34C
	  add       r28, r28, r3
	  b         .loc_0x1E4

	.loc_0x148:
	  mr        r3, r24
	  mr        r4, r27
	  mr        r5, r25
	  bl        0x4AC
	  add       r28, r28, r3
	  b         .loc_0x1E4

	.loc_0x160:
	  cmplwi    r29, 0
	  lis       r5, 0x5010
	  stw       r27, 0x10(r24)
	  or        r5, r5, r30
	  bne-      .loc_0x19C
	  li        r0, 0x1
	  mr        r3, r24
	  stb       r0, 0x18(r24)
	  mr        r4, r27
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  add       r28, r28, r3
	  b         .loc_0x1E4

	.loc_0x19C:
	  cmplwi    r29, 0x2000
	  bne-      .loc_0x1E4
	  li        r0, 0x1
	  mr        r3, r24
	  stb       r0, 0x18(r24)
	  mr        r4, r27
	  bl        0x3AC
	  add       r28, r28, r3
	  b         .loc_0x1E4

	.loc_0x1C0:
	  mr        r3, r24
	  mr        r4, r27
	  bl        0x104
	  add       r28, r28, r3
	  b         .loc_0x1E4

	.loc_0x1D4:
	  mr        r3, r24
	  mr        r4, r27
	  bl        0x100
	  add       r28, r28, r3

	.loc_0x1E4:
	  lwz       r0, 0x4(r27)
	  addi      r26, r26, 0x1
	  add       r27, r27, r0

	.loc_0x1F0:
	  cmplw     r26, r23
	  blt+      .loc_0x3C
	  mr        r3, r28
	  lmw       r23, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x210:
	*/
}

/*
 * --INFO--
 * Address:	80087DCC
 * Size:	000090
 */
void J3DModelLoader::calcSizeInformation(const J3DModelInfoBlock*,
                                         unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r4
	  stw       r0, 0x14(r1)
	  lhz       r0, 0x8(r4)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  or        r0, r5, r0
	  rlwinm    r0,r0,0,28,31
	  stw       r30, 0x8(r1)
	  cmpwi     r0, 0x1
	  mr        r30, r3
	  beq-      .loc_0x58
	  bge-      .loc_0x44
	  cmpwi     r0, 0
	  bge-      .loc_0x50
	  b         .loc_0x64

	.loc_0x44:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x64
	  b         .loc_0x60

	.loc_0x50:
	  li        r31, 0x4
	  b         .loc_0x64

	.loc_0x58:
	  li        r31, 0x4
	  b         .loc_0x64

	.loc_0x60:
	  li        r31, 0x4

	.loc_0x64:
	  lwz       r4, 0x14(r6)
	  mr        r3, r6
	  bl        -0x16360
	  stw       r3, 0x14(r30)
	  mr        r3, r31
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
 * Address:	80087E5C
 * Size:	00002C
 */
void J3DModelLoader::calcSizeJoint(const J3DJointBlock*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x14(r4)
	  li        r3, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  li        r3, 0x10

	.loc_0x14:
	  lhz       r4, 0x8(r4)
	  mulli     r0, r4, 0x5C
	  rlwinm    r4,r4,2,0,29
	  add       r3, r3, r4
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80087E88
 * Size:	000010
 */
void J3DModelLoader::calcSizeEnvelope(const J3DEnvelopeBlock*)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x8(r4)
	  sth       r0, 0x1A(r3)
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80087E98
 * Size:	000014
 */
void J3DModelLoader::calcSizeDraw(const J3DDrawBlock*)
{
	/*
	.loc_0x0:
	  lhz       r3, 0x1A(r3)
	  lhz       r0, 0x8(r4)
	  sub       r0, r0, r3
	  rlwinm    r3,r0,1,0,30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80087EAC
 * Size:	0000E4
 */
void J3DModelLoader_v26::calcSizeMaterial(const J3DMaterialBlock*,
                                          unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  addi      r3, r1, 0x8
	  stmw      r27, 0x9C(r1)
	  mr        r28, r4
	  mr        r27, r5
	  li        r31, 0
	  bl        -0x1BB28
	  lhz       r30, 0x8(r28)
	  addi      r3, r1, 0x8
	  bl        -0x1B864
	  lwz       r0, 0x14(r28)
	  rlwinm    r29,r3,0,16,31
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  li        r31, 0x10

	.loc_0x44:
	  rlwinm.   r4,r27,0,10,10
	  rlwinm    r0,r30,2,0,29
	  add       r31, r31, r0
	  beq-      .loc_0x64
	  mulli     r3, r29, 0x4C
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  add       r31, r31, r0

	.loc_0x64:
	  cmplwi    r4, 0
	  beq-      .loc_0x9C
	  li        r28, 0
	  b         .loc_0x94

	.loc_0x74:
	  mr        r6, r28
	  mr        r7, r27
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0
	  bl        -0x19FF0
	  add       r31, r31, r3
	  addi      r28, r28, 0x1

	.loc_0x94:
	  cmplw     r28, r29
	  blt+      .loc_0x74

	.loc_0x9C:
	  li        r28, 0
	  b         .loc_0xC4

	.loc_0xA4:
	  mr        r6, r28
	  mr        r7, r27
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0
	  bl        -0x1A020
	  add       r31, r31, r3
	  addi      r28, r28, 0x1

	.loc_0xC4:
	  cmplw     r28, r30
	  blt+      .loc_0xA4
	  mr        r3, r31
	  lmw       r27, 0x9C(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80087F90
 * Size:	0000B4
 */
void J3DModelLoader::calcSizeShape(const J3DShapeBlock*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  li        r31, 0
	  stw       r30, 0x38(r1)
	  mr        r30, r4
	  stw       r29, 0x34(r1)
	  mr        r29, r5
	  stw       r28, 0x30(r1)
	  mr        r28, r3
	  addi      r3, r1, 0x8
	  bl        -0x162B0
	  lwz       r0, 0x14(r30)
	  lhz       r4, 0x8(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  li        r31, 0x10

	.loc_0x48:
	  rlwinm    r0,r4,2,0,29
	  addi      r3, r1, 0x8
	  add       r31, r31, r0
	  bl        -0x15B5C
	  lwz       r30, 0x14(r28)
	  add       r31, r31, r3
	  b         .loc_0x84

	.loc_0x64:
	  cmplwi    r0, 0x12
	  bne-      .loc_0x80
	  lhz       r4, 0x2(r30)
	  mr        r5, r29
	  addi      r3, r1, 0x8
	  bl        -0x15C0C
	  add       r31, r31, r3

	.loc_0x80:
	  addi      r30, r30, 0x4

	.loc_0x84:
	  lhz       r0, 0x0(r30)
	  cmplwi    r0, 0
	  bne+      .loc_0x64
	  lwz       r0, 0x44(r1)
	  mr        r3, r31
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80088044
 * Size:	00001C
 */
void J3DModelLoader::calcSizeTexture(const J3DTextureBlock*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x10(r4)
	  li        r3, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  li        r3, 0x10

	.loc_0x14:
	  addi      r3, r3, 0xC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80088060
 * Size:	0000A0
 */
void J3DModelLoader_v26::calcSizeMaterialTable(const J3DMaterialBlock*,
                                               unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  addi      r3, r1, 0x8
	  stw       r31, 0x9C(r1)
	  li        r31, 0
	  stw       r30, 0x98(r1)
	  lhz       r30, 0x8(r4)
	  stw       r29, 0x94(r1)
	  mr        r29, r4
	  stw       r28, 0x90(r1)
	  mr        r28, r5
	  bl        -0x1BCEC
	  lwz       r0, 0x14(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  li        r31, 0x10

	.loc_0x44:
	  rlwinm    r0,r30,2,0,29
	  li        r29, 0
	  add       r31, r31, r0
	  b         .loc_0x70

	.loc_0x54:
	  mr        r7, r28
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0
	  bl        -0x1A180
	  add       r31, r31, r3
	  addi      r29, r29, 0x1

	.loc_0x70:
	  rlwinm    r6,r29,0,16,31
	  cmplw     r6, r30
	  blt+      .loc_0x54
	  lwz       r0, 0xA4(r1)
	  mr        r3, r31
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  lwz       r28, 0x90(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80088100
 * Size:	00001C
 */
void J3DModelLoader::calcSizeTextureTable(const J3DTextureBlock*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x10(r4)
	  li        r3, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  li        r3, 0x10

	.loc_0x14:
	  addi      r3, r3, 0xC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008811C
 * Size:	0000A0
 */
void J3DModelLoader::calcSizePatchedMaterial(const J3DMaterialBlock*,
                                             unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  addi      r3, r1, 0x8
	  stw       r31, 0x9C(r1)
	  li        r31, 0
	  stw       r30, 0x98(r1)
	  lhz       r30, 0x8(r4)
	  stw       r29, 0x94(r1)
	  mr        r29, r4
	  stw       r28, 0x90(r1)
	  mr        r28, r5
	  bl        -0x1BDA8
	  lwz       r0, 0x14(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  li        r31, 0x10

	.loc_0x44:
	  rlwinm    r0,r30,2,0,29
	  li        r29, 0
	  add       r31, r31, r0
	  b         .loc_0x70

	.loc_0x54:
	  mr        r7, r28
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0x2
	  bl        -0x1A23C
	  add       r31, r31, r3
	  addi      r29, r29, 0x1

	.loc_0x70:
	  rlwinm    r6,r29,0,16,31
	  cmplw     r6, r30
	  blt+      .loc_0x54
	  lwz       r0, 0xA4(r1)
	  mr        r3, r31
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  lwz       r28, 0x90(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800881BC
 * Size:	0000D0
 */
void J3DModelLoader::calcSizeMaterialDL(const J3DMaterialDLBlock*,
                                        unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stmw      r27, 0x9C(r1)
	  mr        r27, r3
	  mr        r29, r4
	  mr        r28, r5
	  addi      r3, r1, 0x8
	  li        r31, 0
	  bl        -0x1BBF4
	  lbz       r0, 0x18(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  lwz       r0, 0x20(r29)
	  lhz       r30, 0x8(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  li        r31, 0x10

	.loc_0x48:
	  rlwinm    r0,r30,2,0,29
	  li        r29, 0
	  add       r31, r31, r0
	  b         .loc_0x74

	.loc_0x58:
	  mr        r7, r28
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0x1
	  bl        -0x1A2E0
	  add       r31, r31, r3
	  addi      r29, r29, 0x1

	.loc_0x74:
	  rlwinm    r6,r29,0,16,31
	  cmplw     r6, r30
	  blt+      .loc_0x58
	  b         .loc_0xB8

	.loc_0x84:
	  lhz       r29, 0x8(r29)
	  li        r30, 0
	  b         .loc_0xAC

	.loc_0x90:
	  mr        r4, r27
	  mr        r7, r28
	  addi      r3, r1, 0x8
	  li        r5, 0x1
	  bl        -0x1A318
	  add       r31, r31, r3
	  addi      r30, r30, 0x1

	.loc_0xAC:
	  rlwinm    r6,r30,0,16,31
	  cmplw     r6, r29
	  blt+      .loc_0x90

	.loc_0xB8:
	  mr        r3, r31
	  lmw       r27, 0x9C(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}