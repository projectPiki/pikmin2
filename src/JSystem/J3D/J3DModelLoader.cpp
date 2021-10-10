

/*
 * --INFO--
 * Address:	8006F894
 * Size:	000154
 */
void J3DModelLoaderDataBase::load(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  cmplwi    r3, 0
	  mr        r5, r4
	  stw       r0, 0x44(r1)
	  bne-      .loc_0x20
	  li        r3, 0
	  b         .loc_0x144

	.loc_0x20:
	  lwz       r6, 0x0(r3)
	  subis     r0, r6, 0x4A33
	  cmplwi    r0, 0x4431
	  bne-      .loc_0x48
	  lwz       r4, 0x4(r3)
	  subis     r0, r4, 0x626D
	  cmplwi    r0, 0x6431
	  bne-      .loc_0x48
	  li        r3, 0
	  b         .loc_0x144

	.loc_0x48:
	  subis     r0, r6, 0x4A33
	  cmplwi    r0, 0x4432
	  bne-      .loc_0xC4
	  lwz       r4, 0x4(r3)
	  subis     r0, r4, 0x626D
	  cmplwi    r0, 0x6432
	  bne-      .loc_0xC4
	  lis       r4, 0x804A
	  li        r6, 0
	  addi      r0, r4, 0x1F74
	  stw       r6, 0x28(r1)
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0x1E30
	  mr        r4, r3
	  addi      r3, r1, 0x24
	  stw       r6, 0x2C(r1)
	  stw       r6, 0x30(r1)
	  stw       r6, 0x34(r1)
	  stw       r6, 0x38(r1)
	  stb       r6, 0x3C(r1)
	  sth       r6, 0x3E(r1)
	  stw       r0, 0x24(r1)
	  bl        0x26C
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x1E30
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0x1F74
	  stw       r0, 0x24(r1)
	  b         .loc_0x144

	.loc_0xC4:
	  subis     r0, r6, 0x4A33
	  cmplwi    r0, 0x4432
	  bne-      .loc_0x140
	  lwz       r4, 0x4(r3)
	  subis     r0, r4, 0x626D
	  cmplwi    r0, 0x6433
	  bne-      .loc_0x140
	  lis       r4, 0x804A
	  li        r6, 0
	  addi      r0, r4, 0x1F74
	  stw       r6, 0xC(r1)
	  lis       r4, 0x804A
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x1E74
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  stw       r6, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r6, 0x18(r1)
	  stw       r6, 0x1C(r1)
	  stb       r6, 0x20(r1)
	  sth       r6, 0x22(r1)
	  stw       r0, 0x8(r1)
	  bl        0x1F0
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x1E74
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x1F74
	  stw       r0, 0x8(r1)
	  b         .loc_0x144

	.loc_0x140:
	  li        r3, 0

	.loc_0x144:
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F9E8
 * Size:	00005C
 */
void J3DModelLoader_v26::~J3DModelLoader_v26()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1E74
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1F74
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x4B974

	.loc_0x44:
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
 * Address:	8006FA44
 * Size:	00005C
 */
void J3DModelLoader_v21::~J3DModelLoader_v21()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1E30
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1F74
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x4B9D0

	.loc_0x44:
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
 * Address:	8006FAA0
 * Size:	000048
 */
void J3DModelLoader::~J3DModelLoader()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  addi      r0, r5, 0x1F74
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x4BA18

	.loc_0x30:
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
 * Address:	........
 * Size:	0000B0
 */
void J3DModelLoaderDataBase::loadMaterialTable(const void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8006FAE8
 * Size:	0000BC
 */
void J3DModelLoaderDataBase::loadBinaryDisplayList(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  cmplwi    r3, 0
	  mr        r5, r4
	  stw       r0, 0x34(r1)
	  bne-      .loc_0x20
	  li        r3, 0
	  b         .loc_0xAC

	.loc_0x20:
	  lwz       r4, 0x0(r3)
	  subis     r0, r4, 0x4A33
	  cmplwi    r0, 0x4432
	  bne-      .loc_0xA8
	  lwz       r4, 0x4(r3)
	  subis     r0, r4, 0x6264
	  cmplwi    r0, 0x6C33
	  beq-      .loc_0x48
	  cmplwi    r0, 0x6C34
	  bne-      .loc_0xA8

	.loc_0x48:
	  lis       r4, 0x804A
	  li        r6, 0
	  addi      r0, r4, 0x1F74
	  stw       r6, 0xC(r1)
	  lis       r4, 0x804A
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x1E74
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  stw       r6, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r6, 0x18(r1)
	  stw       r6, 0x1C(r1)
	  stb       r6, 0x20(r1)
	  sth       r6, 0x22(r1)
	  stw       r0, 0x8(r1)
	  bl        0x448
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x1E74
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x1F74
	  stw       r0, 0x8(r1)
	  b         .loc_0xAC

	.loc_0xA8:
	  li        r3, 0

	.loc_0xAC:
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006FBA4
 * Size:	0002BC
 */
void J3DModelLoader::load(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r26, 0x18(r1)
	  mr        r27, r3
	  mr        r29, r4
	  mr        r28, r5
	  lwz       r3, -0x77D4(r13)
	  bl        -0x4C3E4
	  li        r3, 0xE4
	  bl        -0x4BD28
	  mr.       r0, r3
	  beq-      .loc_0x3C
	  bl        0x13BD4
	  mr        r0, r3

	.loc_0x3C:
	  stw       r0, 0x4(r27)
	  lwz       r3, 0x4(r27)
	  bl        0x13BAC
	  lwz       r4, 0x4(r27)
	  lis       r3, 0x4D41
	  li        r0, 0
	  lwz       r26, 0xC(r29)
	  stw       r29, 0x4(r4)
	  addi      r30, r29, 0x20
	  addi      r31, r3, 0x5432
	  li        r29, 0
	  lwz       r3, 0x4(r27)
	  stw       r0, 0x1C(r3)
	  lwz       r3, 0x4(r27)
	  addi      r0, r3, 0x58
	  stw       r0, 0x8(r27)
	  b         .loc_0x1F0

	.loc_0x80:
	  lwz       r4, 0x0(r30)
	  cmpw      r4, r31
	  beq-      .loc_0x1A4
	  bge-      .loc_0xE0
	  lis       r3, 0x494E
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0x130
	  bge-      .loc_0xCC
	  lis       r3, 0x4556
	  addi      r0, r3, 0x5031
	  cmpw      r4, r0
	  beq-      .loc_0x154
	  bge-      .loc_0x1E4
	  lis       r3, 0x4452
	  addi      r0, r3, 0x5731
	  cmpw      r4, r0
	  beq-      .loc_0x164
	  b         .loc_0x1E4

	.loc_0xCC:
	  lis       r3, 0x4A4E
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0x174
	  b         .loc_0x1E4

	.loc_0xE0:
	  lis       r3, 0x5445
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x1D8
	  bge-      .loc_0x11C
	  lis       r3, 0x5348
	  addi      r0, r3, 0x5031
	  cmpw      r4, r0
	  beq-      .loc_0x1C4
	  bge-      .loc_0x1E4
	  lis       r3, 0x4D41
	  addi      r0, r3, 0x5434
	  cmpw      r4, r0
	  bge-      .loc_0x1E4
	  b         .loc_0x184

	.loc_0x11C:
	  lis       r3, 0x5654
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x144
	  b         .loc_0x1E4

	.loc_0x130:
	  mr        r3, r27
	  mr        r4, r30
	  mr        r5, r28
	  bl        0x6C8
	  b         .loc_0x1E4

	.loc_0x144:
	  mr        r3, r27
	  mr        r4, r30
	  bl        0x87C
	  b         .loc_0x1E4

	.loc_0x154:
	  mr        r3, r27
	  mr        r4, r30
	  bl        0xAA4
	  b         .loc_0x1E4

	.loc_0x164:
	  mr        r3, r27
	  mr        r4, r30
	  bl        0xB2C
	  b         .loc_0x1E4

	.loc_0x174:
	  mr        r3, r27
	  mr        r4, r30
	  bl        0xBD4
	  b         .loc_0x1E4

	.loc_0x184:
	  mr        r3, r27
	  mr        r4, r30
	  lwz       r12, 0x0(r27)
	  mr        r5, r28
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1E4

	.loc_0x1A4:
	  mr        r3, r27
	  mr        r4, r30
	  lwz       r12, 0x0(r27)
	  mr        r5, r28
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1E4

	.loc_0x1C4:
	  mr        r3, r27
	  mr        r4, r30
	  mr        r5, r28
	  bl        0x1190
	  b         .loc_0x1E4

	.loc_0x1D8:
	  mr        r3, r27
	  mr        r4, r30
	  bl        0x129C

	.loc_0x1E4:
	  lwz       r0, 0x4(r30)
	  addi      r29, r29, 0x1
	  add       r30, r30, r0

	.loc_0x1F0:
	  cmplw     r29, r26
	  blt+      .loc_0x80
	  lwz       r3, 0x4(r27)
	  addi      r5, r1, 0x8
	  li        r4, 0
	  lwz       r0, 0x14(r3)
	  stw       r0, 0x8(r1)
	  lwz       r26, 0x4(r27)
	  addi      r3, r26, 0x10
	  addi      r6, r26, 0x58
	  addi      r7, r26, 0x78
	  bl        0x18550
	  addi      r3, r26, 0x78
	  addi      r4, r26, 0x44
	  addi      r5, r26, 0x88
	  bl        0x19894
	  lwz       r3, 0x4(r27)
	  addi      r3, r3, 0x78
	  bl        0x198EC
	  lwz       r3, 0x4(r27)
	  addi      r3, r3, 0x10
	  bl        0x18684
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r27)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x2A4
	  li        r5, 0
	  b         .loc_0x290

	.loc_0x274:
	  lwz       r3, 0x80(r4)
	  rlwinm    r0,r5,2,14,29
	  addi      r5, r5, 0x1
	  lwzx      r3, r3, r0
	  lwz       r0, 0xC(r3)
	  ori       r0, r0, 0x200
	  stw       r0, 0xC(r3)

	.loc_0x290:
	  lwz       r4, 0x4(r27)
	  rlwinm    r0,r5,0,16,31
	  lhz       r3, 0x7C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x274

	.loc_0x2A4:
	  lwz       r3, 0x4(r27)
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006FE60
 * Size:	000004
 */
void J3DModelLoader::readMaterial_v21(const J3DMaterialBlock_v21*,
                                      unsigned long)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006FE64
 * Size:	000004
 */
void J3DModelLoader::readMaterial(const J3DMaterialBlock*, unsigned long)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006FE68
 * Size:	000148
 */
void J3DModelLoader::loadMaterialTable(const void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r31, r3
	  mr        r27, r4
	  li        r3, 0x20
	  bl        -0x4BFE0
	  mr.       r0, r3
	  beq-      .loc_0x30
	  bl        0x13DE4
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, 0x8(r31)
	  lwz       r3, 0x8(r31)
	  bl        0x13DAC
	  lis       r3, 0x4D41
	  lwz       r30, 0xC(r27)
	  addi      r28, r27, 0x20
	  li        r27, 0
	  addi      r29, r3, 0x5433
	  b         .loc_0xE4

	.loc_0x54:
	  lwz       r4, 0x0(r28)
	  cmpw      r4, r29
	  beq-      .loc_0x8C
	  bge-      .loc_0x78
	  lis       r3, 0x4D41
	  addi      r0, r3, 0x5432
	  cmpw      r4, r0
	  bge-      .loc_0xAC
	  b         .loc_0xD8

	.loc_0x78:
	  lis       r3, 0x5445
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0xCC
	  b         .loc_0xD8

	.loc_0x8C:
	  mr        r3, r31
	  mr        r4, r28
	  lwz       r12, 0x0(r31)
	  lis       r5, 0x5110
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD8

	.loc_0xAC:
	  mr        r3, r31
	  mr        r4, r28
	  lwz       r12, 0x0(r31)
	  lis       r5, 0x5110
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD8

	.loc_0xCC:
	  mr        r3, r31
	  mr        r4, r28
	  bl        0x1440

	.loc_0xD8:
	  lwz       r0, 0x4(r28)
	  addi      r27, r27, 0x1
	  add       r28, r28, r0

	.loc_0xE4:
	  cmplw     r27, r30
	  blt+      .loc_0x54
	  lwz       r3, 0x8(r31)
	  lwz       r0, 0x14(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  li        r3, 0xC
	  bl        -0x4C0C4
	  cmplwi    r3, 0
	  beq-      .loc_0x128
	  lis       r4, 0x804A
	  li        r0, 0
	  addi      r4, r4, 0x1F68
	  stw       r4, 0x8(r3)
	  sth       r0, 0x0(r3)
	  sth       r0, 0x2(r3)
	  stw       r0, 0x4(r3)

	.loc_0x128:
	  lwz       r4, 0x8(r31)
	  stw       r3, 0x14(r4)

	.loc_0x130:
	  lwz       r3, 0x8(r31)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006FFB0
 * Size:	000004
 */
void J3DModelLoader::readMaterialTable_v21(const J3DMaterialBlock_v21*,
                                           unsigned long)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006FFB4
 * Size:	000004
 */
void J3DModelLoader::readMaterialTable(const J3DMaterialBlock*, unsigned long)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006FFB8
 * Size:	0002A4
 */
void J3DModelLoader::loadBinaryDisplayList(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  mr        r25, r3
	  mr        r27, r4
	  mr        r26, r5
	  li        r3, 0xE4
	  bl        -0x4C134
	  mr.       r0, r3
	  beq-      .loc_0x34
	  bl        0x137C8
	  mr        r0, r3

	.loc_0x34:
	  stw       r0, 0x4(r25)
	  lwz       r3, 0x4(r25)
	  bl        0x137A0
	  lwz       r4, 0x4(r25)
	  lis       r3, 0x4D41
	  li        r0, 0x1
	  lwz       r24, 0xC(r27)
	  stw       r27, 0x4(r4)
	  addi      r28, r27, 0x20
	  rlwinm    r30,r26,0,6,7
	  rlwinm    r29,r26,0,18,19
	  lwz       r4, 0x4(r25)
	  addi      r31, r3, 0x5433
	  li        r27, 0
	  stw       r0, 0x1C(r4)
	  lwz       r3, 0x4(r25)
	  addi      r0, r3, 0x58
	  stw       r0, 0x8(r25)
	  b         .loc_0x218

	.loc_0x80:
	  lwz       r4, 0x0(r28)
	  cmpw      r4, r31
	  beq-      .loc_0x1C8
	  bge-      .loc_0xE0
	  lis       r3, 0x494E
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0x130
	  bge-      .loc_0xCC
	  lis       r3, 0x4556
	  addi      r0, r3, 0x5031
	  cmpw      r4, r0
	  beq-      .loc_0x154
	  bge-      .loc_0x20C
	  lis       r3, 0x4452
	  addi      r0, r3, 0x5731
	  cmpw      r4, r0
	  beq-      .loc_0x164
	  b         .loc_0x20C

	.loc_0xCC:
	  lis       r3, 0x4A4E
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0x174
	  b         .loc_0x20C

	.loc_0xE0:
	  lis       r3, 0x5445
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x198
	  bge-      .loc_0x11C
	  lis       r3, 0x5348
	  addi      r0, r3, 0x5031
	  cmpw      r4, r0
	  beq-      .loc_0x184
	  bge-      .loc_0x20C
	  lis       r3, 0x4D44
	  addi      r0, r3, 0x4C33
	  cmpw      r4, r0
	  beq-      .loc_0x1A8
	  b         .loc_0x20C

	.loc_0x11C:
	  lis       r3, 0x5654
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x144
	  b         .loc_0x20C

	.loc_0x130:
	  mr        r3, r25
	  mr        r4, r28
	  mr        r5, r26
	  bl        0x2B4
	  b         .loc_0x20C

	.loc_0x144:
	  mr        r3, r25
	  mr        r4, r28
	  bl        0x468
	  b         .loc_0x20C

	.loc_0x154:
	  mr        r3, r25
	  mr        r4, r28
	  bl        0x690
	  b         .loc_0x20C

	.loc_0x164:
	  mr        r3, r25
	  mr        r4, r28
	  bl        0x718
	  b         .loc_0x20C

	.loc_0x174:
	  mr        r3, r25
	  mr        r4, r28
	  bl        0x7C0
	  b         .loc_0x20C

	.loc_0x184:
	  mr        r3, r25
	  mr        r4, r28
	  mr        r5, r26
	  bl        0xDBC
	  b         .loc_0x20C

	.loc_0x198:
	  mr        r3, r25
	  mr        r4, r28
	  bl        0xEC8
	  b         .loc_0x20C

	.loc_0x1A8:
	  mr        r3, r25
	  mr        r4, r28
	  mr        r5, r26
	  bl        0x1424
	  mr        r3, r25
	  mr        r4, r26
	  bl        0x15D4
	  b         .loc_0x20C

	.loc_0x1C8:
	  cmplwi    r29, 0
	  lis       r5, 0x5010
	  stw       r28, 0x10(r25)
	  or        r5, r5, r30
	  bne-      .loc_0x1F8
	  lwz       r12, 0x0(r25)
	  mr        r3, r25
	  mr        r4, r28
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x20C

	.loc_0x1F8:
	  cmplwi    r29, 0x2000
	  bne-      .loc_0x20C
	  mr        r3, r25
	  mr        r4, r28
	  bl        0x1280

	.loc_0x20C:
	  lwz       r0, 0x4(r28)
	  addi      r27, r27, 0x1
	  add       r28, r28, r0

	.loc_0x218:
	  cmplw     r27, r24
	  blt+      .loc_0x80
	  lwz       r3, 0x4(r25)
	  addi      r5, r1, 0x8
	  li        r4, 0
	  lwz       r0, 0x14(r3)
	  stw       r0, 0x8(r1)
	  lwz       r24, 0x4(r25)
	  addi      r3, r24, 0x10
	  addi      r6, r24, 0x58
	  addi      r7, r24, 0x78
	  bl        0x18114
	  addi      r3, r24, 0x78
	  addi      r4, r24, 0x44
	  addi      r5, r24, 0x88
	  bl        0x19458
	  lwz       r3, 0x4(r25)
	  addi      r3, r3, 0x78
	  bl        0x194B0
	  lwz       r3, 0x4(r25)
	  addi      r3, r3, 0x10
	  bl        0x18248
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r25)
	  bl        0x1372C
	  lwz       r3, 0x4(r25)
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007025C
 * Size:	00014C
 */
void J3DModelLoader::setupBBoardInfo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r29, r3
	  li        r30, 0
	  b         .loc_0x124

	.loc_0x1C:
	  lwz       r3, 0x28(r4)
	  rlwinm    r31,r30,2,14,29
	  lwzx      r3, r3, r31
	  lwz       r4, 0x58(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x120
	  lwz       r5, 0x8(r4)
	  lwz       r3, 0xC(r29)
	  lhz       r27, 0x8(r5)
	  lwz       r4, 0x10(r3)
	  bl        0x1868
	  lwz       r5, 0xC(r29)
	  mr        r28, r3
	  lwz       r4, 0xC(r5)
	  mr        r3, r5
	  bl        0x183C
	  rlwinm    r0,r27,1,15,30
	  lhzx      r0, r28, r0
	  mulli     r0, r0, 0x28
	  lbzx      r0, r3, r0
	  cmpwi     r0, 0x2
	  beq-      .loc_0xDC
	  bge-      .loc_0x88
	  cmpwi     r0, 0
	  beq-      .loc_0x94
	  bge-      .loc_0xB0
	  b         .loc_0x120

	.loc_0x88:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x120
	  b         .loc_0x108

	.loc_0x94:
	  lwz       r3, 0x4(r29)
	  lwz       r3, 0x28(r3)
	  lwzx      r3, r3, r31
	  lbz       r0, 0x16(r3)
	  rlwinm    r0,r0,0,28,31
	  stb       r0, 0x16(r3)
	  b         .loc_0x120

	.loc_0xB0:
	  lwz       r3, 0x4(r29)
	  li        r0, 0x1
	  lwz       r3, 0x28(r3)
	  lwzx      r4, r3, r31
	  lbz       r3, 0x16(r4)
	  rlwinm    r3,r3,0,28,23
	  ori       r3, r3, 0x10
	  stb       r3, 0x16(r4)
	  lwz       r3, 0x4(r29)
	  sth       r0, 0xE(r3)
	  b         .loc_0x120

	.loc_0xDC:
	  lwz       r3, 0x4(r29)
	  li        r0, 0x1
	  lwz       r3, 0x28(r3)
	  lwzx      r4, r3, r31
	  lbz       r3, 0x16(r4)
	  rlwinm    r3,r3,0,28,23
	  ori       r3, r3, 0x20
	  stb       r3, 0x16(r4)
	  lwz       r3, 0x4(r29)
	  sth       r0, 0xE(r3)
	  b         .loc_0x120

	.loc_0x108:
	  lwz       r3, 0x4(r29)
	  lwz       r3, 0x28(r3)
	  lwzx      r3, r3, r31
	  lbz       r0, 0x16(r3)
	  rlwinm    r0,r0,0,28,31
	  stb       r0, 0x16(r3)

	.loc_0x120:
	  addi      r30, r30, 0x1

	.loc_0x124:
	  lwz       r4, 0x4(r29)
	  rlwinm    r0,r30,0,16,31
	  lhz       r3, 0x2C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x1C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800703A8
 * Size:	000168
 */
void J3DModelLoader::readInformation(const J3DModelInfoBlock*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r7, 0
	  stw       r0, 0x14(r1)
	  lhz       r0, 0x8(r4)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  or        r0, r5, r0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x4(r3)
	  stw       r0, 0x8(r3)
	  lwz       r3, 0x4(r30)
	  lwz       r0, 0x8(r3)
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4(r30)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,28,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0xA8
	  bge-      .loc_0x60
	  cmpwi     r0, 0
	  bge-      .loc_0x6C
	  b         .loc_0x11C

	.loc_0x60:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x11C
	  b         .loc_0xE4

	.loc_0x6C:
	  li        r3, 0x4
	  bl        -0x4C574
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  subi      r0, r4, 0x4C4
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r5, r5, 0x1F3C
	  addi      r0, r4, 0x1F10
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0xA0:
	  mr        r7, r3
	  b         .loc_0x11C

	.loc_0xA8:
	  li        r3, 0x4
	  bl        -0x4C5B0
	  cmplwi    r3, 0
	  beq-      .loc_0xDC
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  subi      r0, r4, 0x4C4
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r5, r5, 0x1F3C
	  addi      r0, r4, 0x1EE4
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0xDC:
	  mr        r7, r3
	  b         .loc_0x11C

	.loc_0xE4:
	  li        r3, 0x4
	  bl        -0x4C5EC
	  cmplwi    r3, 0
	  beq-      .loc_0x118
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  subi      r0, r4, 0x4C4
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r5, r5, 0x1F3C
	  addi      r0, r4, 0x1EB8
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0x118:
	  mr        r7, r3

	.loc_0x11C:
	  lwz       r4, 0x4(r30)
	  mr        r3, r31
	  lwz       r6, 0xC(r31)
	  stw       r7, 0x24(r4)
	  lwz       r0, 0x10(r31)
	  lwz       r5, 0x4(r30)
	  lwz       r4, 0x14(r31)
	  stw       r6, 0x98(r5)
	  lwz       r5, 0x4(r30)
	  stw       r0, 0x88(r5)
	  bl        0x15EC
	  lwz       r4, 0x4(r30)
	  stw       r3, 0x14(r4)
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
 * Address:	80070510
 * Size:	00005C
 */
void J3DMtxCalcNoAnmBase::~J3DMtxCalcNoAnmBase()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1F3C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  subi      r0, r3, 0x4C4
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x4C49C

	.loc_0x44:
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
 * Address:	........
 * Size:	00002C
 */
void getFmtType(_GXVtxAttrFmtList*, _GXAttr)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8007056C
 * Size:	000238
 */
void J3DModelLoader::readVertex(const J3DVertexBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r4
	  lwz       r4, 0x8(r4)
	  lwz       r5, 0x4(r3)
	  mr        r3, r30
	  addi      r31, r5, 0x88
	  bl        0x1530
	  stw       r3, 0x14(r31)
	  mr        r3, r30
	  lwz       r4, 0xC(r30)
	  bl        0x1508
	  stw       r3, 0x18(r31)
	  mr        r3, r30
	  lwz       r4, 0x10(r30)
	  bl        0x14F8
	  stw       r3, 0x1C(r31)
	  mr        r3, r30
	  lwz       r4, 0x14(r30)
	  bl        0x14E8
	  stw       r3, 0x20(r31)
	  mr        r29, r30
	  mr        r28, r31
	  li        r27, 0

	.loc_0x68:
	  lwz       r4, 0x18(r29)
	  mr        r3, r30
	  bl        0x14CC
	  addi      r27, r27, 0x1
	  stw       r3, 0x24(r28)
	  cmpwi     r27, 0x2
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x4
	  blt+      .loc_0x68
	  mr        r28, r30
	  mr        r29, r31
	  li        r27, 0

	.loc_0x98:
	  lwz       r4, 0x20(r28)
	  mr        r3, r30
	  bl        0x149C
	  addi      r27, r27, 0x1
	  stw       r3, 0x2C(r29)
	  cmpwi     r27, 0x8
	  addi      r28, r28, 0x4
	  addi      r29, r29, 0x4
	  blt+      .loc_0x98
	  lwz       r3, 0x14(r31)
	  b         .loc_0xD8

	.loc_0xC4:
	  cmpwi     r0, 0xA
	  bne-      .loc_0xD4
	  lwz       r0, 0x8(r3)
	  b         .loc_0xE8

	.loc_0xD4:
	  addi      r3, r3, 0x10

	.loc_0xD8:
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0xFF
	  bne+      .loc_0xC4
	  li        r0, 0x4

	.loc_0xE8:
	  cmpwi     r0, 0x4
	  li        r4, 0x6
	  bne-      .loc_0xF8
	  li        r4, 0xC

	.loc_0xF8:
	  lwz       r0, 0x20(r31)
	  li        r3, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x110
	  mr        r3, r0
	  b         .loc_0x134

	.loc_0x110:
	  lwz       r0, 0x24(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  mr        r3, r0
	  b         .loc_0x134

	.loc_0x124:
	  lwz       r0, 0x2C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x134
	  mr        r3, r0

	.loc_0x134:
	  lwz       r0, 0x1C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x14C
	  li        r0, 0
	  stw       r0, 0x4(r31)
	  b         .loc_0x180

	.loc_0x14C:
	  cmplwi    r3, 0
	  beq-      .loc_0x168
	  sub       r0, r3, r0
	  divwu     r3, r0, r4
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r31)
	  b         .loc_0x180

	.loc_0x168:
	  lwz       r3, 0x10(r30)
	  lwz       r0, 0x4(r30)
	  sub       r0, r0, r3
	  divwu     r3, r0, r4
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r31)

	.loc_0x180:
	  lwz       r0, 0x28(r31)
	  li        r3, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x198
	  mr        r3, r0
	  b         .loc_0x1A8

	.loc_0x198:
	  lwz       r0, 0x2C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x1A8
	  mr        r3, r0

	.loc_0x1A8:
	  lwz       r0, 0x24(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C0
	  li        r0, 0
	  stw       r0, 0x8(r31)
	  b         .loc_0x1F4

	.loc_0x1C0:
	  cmplwi    r3, 0
	  beq-      .loc_0x1DC
	  sub       r0, r3, r0
	  rlwinm    r3,r0,30,2,31
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r31)
	  b         .loc_0x1F4

	.loc_0x1DC:
	  lwz       r3, 0x18(r30)
	  lwz       r0, 0x4(r30)
	  sub       r0, r0, r3
	  rlwinm    r3,r0,30,2,31
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r31)

	.loc_0x1F4:
	  lwz       r0, 0x2C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x20C
	  li        r0, 0
	  stw       r0, 0xC(r31)
	  b         .loc_0x224

	.loc_0x20C:
	  lwz       r3, 0x20(r30)
	  lwz       r0, 0x4(r30)
	  sub       r0, r0, r3
	  rlwinm    r3,r0,29,3,31
	  addi      r0, r3, 0x1
	  stw       r0, 0xC(r31)

	.loc_0x224:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800707A4
 * Size:	000098
 */
void J3DModelLoader::readEnvelop(const J3DEnvelopeBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lhz       r0, 0x8(r4)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  lwz       r4, 0xC(r4)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r30
	  lwz       r5, 0x4(r29)
	  sth       r0, 0x2E(r5)
	  lwz       r31, 0x4(r29)
	  bl        -0x27388
	  stw       r3, 0x30(r31)
	  mr        r3, r30
	  lwz       r4, 0x10(r30)
	  lwz       r31, 0x4(r29)
	  bl        -0x2736C
	  stw       r3, 0x34(r31)
	  mr        r3, r30
	  lwz       r4, 0x14(r30)
	  lwz       r31, 0x4(r29)
	  bl        -0x27350
	  stw       r3, 0x38(r31)
	  mr        r3, r30
	  lwz       r4, 0x18(r30)
	  lwz       r31, 0x4(r29)
	  bl        0x1278
	  stw       r3, 0x3C(r31)
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
 * Address:	8007083C
 * Size:	0000B8
 */
void J3DModelLoader::readDraw(const J3DDrawBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lhz       r0, 0x8(r4)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  lwz       r4, 0xC(r4)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r31, 0x4(r3)
	  mr        r3, r30
	  lhz       r5, 0x2E(r31)
	  sub       r0, r0, r5
	  sth       r0, 0x44(r31)
	  bl        -0x27424
	  stw       r3, 0x48(r31)
	  mr        r3, r30
	  lwz       r4, 0x10(r30)
	  bl        -0x27404
	  stw       r3, 0x4C(r31)
	  li        r5, 0
	  lhz       r4, 0x44(r31)
	  b         .loc_0x78

	.loc_0x60:
	  lwz       r3, 0x48(r31)
	  rlwinm    r0,r5,0,16,31
	  lbzx      r0, r3, r0
	  cmplwi    r0, 0x1
	  beq-      .loc_0x84
	  addi      r5, r5, 0x1

	.loc_0x78:
	  rlwinm    r0,r5,0,16,31
	  cmplw     r0, r4
	  blt+      .loc_0x60

	.loc_0x84:
	  sth       r5, 0x46(r31)
	  lhz       r0, 0x44(r31)
	  lwz       r31, 0x4(r29)
	  rlwinm    r3,r0,1,0,30
	  bl        -0x4C924
	  stw       r3, 0x40(r31)
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
 * Address:	800708F4
 * Size:	0000EC
 */
void J3DModelLoader::readJoint(const J3DJointBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bl        0x1208
	  lwz       r0, 0x14(r29)
	  lhz       r4, 0x8(r29)
	  lwz       r3, 0x4(r31)
	  cmplwi    r0, 0
	  sth       r4, 0x2C(r3)
	  beq-      .loc_0x78
	  li        r3, 0x10
	  bl        -0x4CA94
	  mr.       r30, r3
	  beq-      .loc_0x6C
	  lwz       r4, 0x14(r29)
	  mr        r3, r29
	  bl        -0x274E0
	  mr        r4, r3
	  mr        r3, r30
	  bl        -0x41C4C
	  mr        r30, r3

	.loc_0x6C:
	  lwz       r3, 0x4(r31)
	  stw       r30, 0x54(r3)
	  b         .loc_0x84

	.loc_0x78:
	  lwz       r3, 0x4(r31)
	  li        r0, 0
	  stw       r0, 0x54(r3)

	.loc_0x84:
	  lwz       r30, 0x4(r31)
	  lhz       r0, 0x2C(r30)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4C9D8
	  stw       r3, 0x28(r30)
	  li        r29, 0
	  b         .loc_0xBC

	.loc_0xA0:
	  addi      r3, r1, 0x8
	  rlwinm    r4,r29,0,16,31
	  bl        0x11DC
	  lwz       r4, 0x28(r30)
	  rlwinm    r0,r29,2,14,29
	  addi      r29, r29, 0x1
	  stwx      r3, r4, r0

	.loc_0xBC:
	  lwz       r30, 0x4(r31)
	  rlwinm    r0,r29,0,16,31
	  lhz       r3, 0x2C(r30)
	  cmplw     r0, r3
	  blt+      .loc_0xA0
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
 * Address:	800709E0
 * Size:	000274
 */
void J3DModelLoader_v26::readMaterial(const J3DMaterialBlock*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stmw      r27, 0x9C(r1)
	  mr        r29, r3
	  mr        r27, r4
	  mr        r30, r5
	  addi      r3, r1, 0x8
	  bl        -0x465C
	  lhz       r0, 0x8(r27)
	  addi      r3, r1, 0x8
	  lwz       r4, 0x8(r29)
	  sth       r0, 0x4(r4)
	  bl        -0x43A0
	  lwz       r0, 0x14(r27)
	  lwz       r4, 0x8(r29)
	  cmplwi    r0, 0
	  sth       r3, 0x6(r4)
	  beq-      .loc_0x84
	  li        r3, 0x10
	  bl        -0x4CB8C
	  mr.       r28, r3
	  beq-      .loc_0x78
	  lwz       r4, 0x14(r27)
	  mr        r3, r27
	  bl        -0x275D8
	  mr        r4, r3
	  mr        r3, r28
	  bl        -0x41D44
	  mr        r28, r3

	.loc_0x78:
	  lwz       r3, 0x8(r29)
	  stw       r28, 0xC(r3)
	  b         .loc_0x90

	.loc_0x84:
	  lwz       r3, 0x8(r29)
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0x90:
	  lwz       r3, 0x8(r29)
	  lhz       r0, 0x4(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4CAD0
	  lwz       r4, 0x8(r29)
	  rlwinm.   r31,r30,0,10,10
	  stw       r3, 0x8(r4)
	  beq-      .loc_0xF0
	  lwz       r3, 0x8(r29)
	  li        r4, 0x20
	  lhz       r28, 0x6(r3)
	  mulli     r3, r28, 0x4C
	  addi      r3, r3, 0x10
	  bl        -0x4CAAC
	  lis       r4, 0x8007
	  lis       r5, 0x8007
	  addi      r4, r4, 0xC54
	  mr        r7, r28
	  subi      r5, r5, 0x256C
	  li        r6, 0x4C
	  bl        0x50F30
	  lwz       r4, 0x8(r29)
	  stw       r3, 0x10(r4)
	  b         .loc_0xFC

	.loc_0xF0:
	  lwz       r3, 0x8(r29)
	  li        r0, 0
	  stw       r0, 0x10(r3)

	.loc_0xFC:
	  cmplwi    r31, 0
	  beq-      .loc_0x158
	  li        r27, 0
	  b         .loc_0x144

	.loc_0x10C:
	  rlwinm    r6,r27,0,16,31
	  lwz       r0, 0x10(r4)
	  mulli     r28, r6, 0x4C
	  mr        r7, r30
	  addi      r3, r1, 0x8
	  li        r5, 0
	  add       r4, r0, r28
	  bl        -0x444C
	  lwz       r3, 0x8(r29)
	  addi      r27, r27, 0x1
	  lwz       r0, 0x10(r3)
	  add       r3, r0, r28
	  rlwinm    r0,r3,28,4,31
	  stw       r0, 0x20(r3)

	.loc_0x144:
	  lwz       r4, 0x8(r29)
	  rlwinm    r3,r27,0,16,31
	  lhz       r0, 0x6(r4)
	  cmplw     r3, r0
	  blt+      .loc_0x10C

	.loc_0x158:
	  li        r27, 0
	  b         .loc_0x18C

	.loc_0x160:
	  mr        r7, r30
	  addi      r3, r1, 0x8
	  rlwinm    r6,r27,0,16,31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x4498
	  lwz       r4, 0x8(r29)
	  rlwinm    r0,r27,2,14,29
	  addi      r27, r27, 0x1
	  lwz       r4, 0x8(r4)
	  stwx      r3, r4, r0

	.loc_0x18C:
	  lwz       r3, 0x8(r29)
	  rlwinm    r4,r27,0,16,31
	  lhz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt+      .loc_0x160
	  cmplwi    r31, 0
	  beq-      .loc_0x21C
	  li        r8, 0
	  b         .loc_0x204

	.loc_0x1B0:
	  lwz       r3, 0x10(r1)
	  rlwinm    r6,r8,1,15,30
	  rlwinm    r7,r8,2,14,29
	  lwz       r4, 0x10(r5)
	  lhzx      r0, r3, r6
	  addi      r8, r8, 0x1
	  lwz       r3, 0x8(r5)
	  mulli     r0, r0, 0x4C
	  lwzx      r3, r3, r7
	  add       r0, r4, r0
	  rlwinm    r0,r0,28,4,31
	  stw       r0, 0x20(r3)
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0x8(r29)
	  lhzx      r0, r3, r6
	  lwz       r3, 0x8(r4)
	  mulli     r0, r0, 0x4C
	  lwz       r4, 0x10(r4)
	  lwzx      r3, r3, r7
	  add       r0, r4, r0
	  stw       r0, 0x38(r3)

	.loc_0x204:
	  lwz       r5, 0x8(r29)
	  rlwinm    r3,r8,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0x1B0
	  b         .loc_0x260

	.loc_0x21C:
	  li        r7, 0
	  b         .loc_0x24C

	.loc_0x224:
	  lwz       r4, 0x10(r1)
	  rlwinm    r3,r7,1,15,30
	  lwz       r6, 0x8(r5)
	  rlwinm    r0,r7,2,14,29
	  lhzx      r4, r4, r3
	  addi      r7, r7, 0x1
	  rlwinm    r5,r6,28,4,31
	  lwzx      r3, r6, r0
	  add       r0, r5, r4
	  stw       r0, 0x20(r3)

	.loc_0x24C:
	  lwz       r5, 0x8(r29)
	  rlwinm    r3,r7,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0x224

	.loc_0x260:
	  lmw       r27, 0x9C(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80070C54
 * Size:	000054
 */
void J3DMaterial::J3DMaterial()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x3CF4
	  lis       r6, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r0, r6, 0x15D8
	  subi      r5, r5, 0x3100
	  lis       r4, 0xF4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x30C4
	  stw       r5, 0x40(r3)
	  stw       r0, 0x44(r3)
	  bl        -0xE4F4
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
 * Address:	80070CA8
 * Size:	00025C
 */
void J3DModelLoader_v21::readMaterial_v21(const J3DMaterialBlock_v21*,
                                          unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stmw      r27, 0x7C(r1)
	  mr        r29, r3
	  mr        r27, r4
	  mr        r30, r5
	  addi      r3, r1, 0x8
	  bl        0x13D38
	  lhz       r0, 0x8(r27)
	  addi      r3, r1, 0x8
	  lwz       r4, 0x8(r29)
	  sth       r0, 0x4(r4)
	  bl        0x13F04
	  lwz       r0, 0x14(r27)
	  lwz       r4, 0x8(r29)
	  cmplwi    r0, 0
	  sth       r3, 0x6(r4)
	  beq-      .loc_0x84
	  li        r3, 0x10
	  bl        -0x4CE54
	  mr.       r28, r3
	  beq-      .loc_0x78
	  lwz       r4, 0x14(r27)
	  mr        r3, r27
	  bl        -0x278A0
	  mr        r4, r3
	  mr        r3, r28
	  bl        -0x4200C
	  mr        r28, r3

	.loc_0x78:
	  lwz       r3, 0x8(r29)
	  stw       r28, 0xC(r3)
	  b         .loc_0x90

	.loc_0x84:
	  lwz       r3, 0x8(r29)
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0x90:
	  lwz       r3, 0x8(r29)
	  lhz       r0, 0x4(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4CD98
	  lwz       r4, 0x8(r29)
	  rlwinm.   r31,r30,0,10,10
	  stw       r3, 0x8(r4)
	  beq-      .loc_0xF0
	  lwz       r3, 0x8(r29)
	  li        r4, 0x20
	  lhz       r28, 0x6(r3)
	  mulli     r3, r28, 0x4C
	  addi      r3, r3, 0x10
	  bl        -0x4CD74
	  lis       r4, 0x8007
	  lis       r5, 0x8007
	  addi      r4, r4, 0xC54
	  mr        r7, r28
	  subi      r5, r5, 0x256C
	  li        r6, 0x4C
	  bl        0x50C68
	  lwz       r4, 0x8(r29)
	  stw       r3, 0x10(r4)
	  b         .loc_0xFC

	.loc_0xF0:
	  lwz       r3, 0x8(r29)
	  li        r0, 0
	  stw       r0, 0x10(r3)

	.loc_0xFC:
	  cmplwi    r31, 0
	  beq-      .loc_0x154
	  li        r27, 0
	  b         .loc_0x140

	.loc_0x10C:
	  rlwinm    r5,r27,0,16,31
	  lwz       r0, 0x10(r4)
	  mulli     r28, r5, 0x4C
	  mr        r6, r30
	  addi      r3, r1, 0x8
	  add       r4, r0, r28
	  bl        0x13E60
	  lwz       r3, 0x8(r29)
	  addi      r27, r27, 0x1
	  lwz       r0, 0x10(r3)
	  add       r3, r0, r28
	  rlwinm    r0,r3,28,4,31
	  stw       r0, 0x20(r3)

	.loc_0x140:
	  lwz       r4, 0x8(r29)
	  rlwinm    r3,r27,0,16,31
	  lhz       r0, 0x6(r4)
	  cmplw     r3, r0
	  blt+      .loc_0x10C

	.loc_0x154:
	  li        r27, 0
	  b         .loc_0x184

	.loc_0x15C:
	  mr        r6, r30
	  addi      r3, r1, 0x8
	  rlwinm    r5,r27,0,16,31
	  li        r4, 0
	  bl        0x13E18
	  lwz       r4, 0x8(r29)
	  rlwinm    r0,r27,2,14,29
	  addi      r27, r27, 0x1
	  lwz       r4, 0x8(r4)
	  stwx      r3, r4, r0

	.loc_0x184:
	  lwz       r3, 0x8(r29)
	  rlwinm    r4,r27,0,16,31
	  lhz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt+      .loc_0x15C
	  cmplwi    r31, 0
	  beq-      .loc_0x214
	  li        r8, 0
	  b         .loc_0x1FC

	.loc_0x1A8:
	  lwz       r3, 0x10(r1)
	  rlwinm    r6,r8,1,15,30
	  rlwinm    r7,r8,2,14,29
	  lwz       r4, 0x10(r5)
	  lhzx      r0, r3, r6
	  addi      r8, r8, 0x1
	  lwz       r3, 0x8(r5)
	  mulli     r0, r0, 0x4C
	  lwzx      r3, r3, r7
	  add       r0, r4, r0
	  rlwinm    r0,r0,28,4,31
	  stw       r0, 0x20(r3)
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0x8(r29)
	  lhzx      r0, r3, r6
	  lwz       r3, 0x8(r4)
	  mulli     r0, r0, 0x4C
	  lwz       r4, 0x10(r4)
	  lwzx      r3, r3, r7
	  add       r0, r4, r0
	  stw       r0, 0x38(r3)

	.loc_0x1FC:
	  lwz       r5, 0x8(r29)
	  rlwinm    r3,r8,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0x1A8
	  b         .loc_0x248

	.loc_0x214:
	  li        r6, 0
	  lis       r4, 0xC000
	  b         .loc_0x234

	.loc_0x220:
	  lwz       r3, 0x8(r5)
	  rlwinm    r0,r6,2,14,29
	  addi      r6, r6, 0x1
	  lwzx      r3, r3, r0
	  stw       r4, 0x20(r3)

	.loc_0x234:
	  lwz       r5, 0x8(r29)
	  rlwinm    r3,r6,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0x220

	.loc_0x248:
	  lmw       r27, 0x7C(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80070F04
 * Size:	00011C
 */
void J3DModelLoader::readShape(const J3DShapeBlock*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r28, r4
	  mr        r27, r3
	  mr        r30, r5
	  stw       r28, 0xC(r3)
	  addi      r3, r1, 0x8
	  lwz       r31, 0x4(r27)
	  bl        0xDE4
	  lwz       r0, 0x14(r28)
	  lhz       r3, 0x8(r28)
	  cmplwi    r0, 0
	  sth       r3, 0x7C(r31)
	  beq-      .loc_0x74
	  li        r3, 0x10
	  bl        -0x4D0A4
	  mr.       r29, r3
	  beq-      .loc_0x6C
	  lwz       r4, 0x14(r28)
	  mr        r3, r28
	  bl        -0x27AF0
	  mr        r4, r3
	  mr        r3, r29
	  bl        -0x4225C
	  mr        r29, r3

	.loc_0x6C:
	  stw       r29, 0x84(r31)
	  b         .loc_0x7C

	.loc_0x74:
	  li        r0, 0
	  stw       r0, 0x84(r31)

	.loc_0x7C:
	  lhz       r0, 0x7C(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4CFDC
	  stw       r3, 0x80(r31)
	  addi      r3, r1, 0x8
	  lhz       r4, 0x7C(r31)
	  bl        0x1358
	  lwz       r3, 0x4(r27)
	  li        r6, 0
	  lwz       r29, 0x14(r3)
	  b         .loc_0xFC

	.loc_0xA8:
	  cmplwi    r0, 0x12
	  bne-      .loc_0xF8
	  lhz       r4, 0x2(r29)
	  mr        r5, r30
	  addi      r3, r1, 0x8
	  bl        0xE00
	  lhz       r0, 0x2(r29)
	  lwz       r4, 0x80(r31)
	  rlwinm    r0,r0,2,0,29
	  stwx      r3, r4, r0
	  lhz       r0, 0x2(r29)
	  lwz       r3, 0xC(r1)
	  rlwinm    r0,r0,1,0,30
	  lwz       r4, 0x8(r1)
	  lhzx      r0, r3, r0
	  lwz       r5, 0x10(r1)
	  mulli     r3, r0, 0x28
	  addi      r0, r3, 0x4
	  lhzx      r0, r4, r0
	  add       r6, r5, r0

	.loc_0xF8:
	  addi      r29, r29, 0x4

	.loc_0xFC:
	  lhz       r0, 0x0(r29)
	  cmplwi    r0, 0
	  bne+      .loc_0xA8
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80071020
 * Size:	0000C4
 */
void J3DModelLoader::readTexture(const J3DTextureBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  lhz       r29, 0x8(r4)
	  mr        r27, r3
	  lwz       r4, 0xC(r4)
	  mr        r3, r28
	  bl        0xA34
	  lwz       r0, 0x10(r28)
	  mr        r31, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  li        r3, 0x10
	  bl        -0x4D1B8
	  mr.       r30, r3
	  beq-      .loc_0x64
	  lwz       r4, 0x10(r28)
	  mr        r3, r28
	  bl        -0x27C04
	  mr        r4, r3
	  mr        r3, r30
	  bl        -0x42370
	  mr        r30, r3

	.loc_0x64:
	  lwz       r3, 0x8(r27)
	  stw       r30, 0x18(r3)
	  b         .loc_0x7C

	.loc_0x70:
	  lwz       r3, 0x8(r27)
	  li        r0, 0
	  stw       r0, 0x18(r3)

	.loc_0x7C:
	  li        r3, 0xC
	  bl        -0x4D1FC
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  lis       r4, 0x804A
	  li        r0, 0
	  addi      r4, r4, 0x1F68
	  stw       r4, 0x8(r3)
	  sth       r29, 0x0(r3)
	  sth       r0, 0x2(r3)
	  stw       r31, 0x4(r3)

	.loc_0xA8:
	  lwz       r4, 0x8(r27)
	  stw       r3, 0x14(r4)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800710E4
 * Size:	00014C
 */
void J3DModelLoader_v26::readMaterialTable(const J3DMaterialBlock*,
                                           unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  mr        r31, r5
	  stw       r30, 0x98(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  stw       r29, 0x94(r1)
	  stw       r28, 0x90(r1)
	  mr        r28, r4
	  bl        -0x4D6C
	  lwz       r0, 0x14(r28)
	  lhz       r4, 0x8(r28)
	  lwz       r3, 0x8(r30)
	  cmplwi    r0, 0
	  sth       r4, 0x4(r3)
	  beq-      .loc_0x80
	  li        r3, 0x10
	  bl        -0x4D28C
	  mr.       r29, r3
	  beq-      .loc_0x74
	  lwz       r4, 0x14(r28)
	  mr        r3, r28
	  bl        -0x27CD8
	  mr        r4, r3
	  mr        r3, r29
	  bl        -0x42444
	  mr        r29, r3

	.loc_0x74:
	  lwz       r3, 0x8(r30)
	  stw       r29, 0xC(r3)
	  b         .loc_0x8C

	.loc_0x80:
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0x8C:
	  lwz       r3, 0x8(r30)
	  lhz       r0, 0x4(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4D1D0
	  lwz       r4, 0x8(r30)
	  li        r29, 0
	  stw       r3, 0x8(r4)
	  b         .loc_0xD8

	.loc_0xAC:
	  mr        r7, r31
	  addi      r3, r1, 0x8
	  rlwinm    r6,r29,0,16,31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x4AE8
	  lwz       r4, 0x8(r30)
	  rlwinm    r0,r29,2,14,29
	  addi      r29, r29, 0x1
	  lwz       r4, 0x8(r4)
	  stwx      r3, r4, r0

	.loc_0xD8:
	  lwz       r3, 0x8(r30)
	  rlwinm    r4,r29,0,16,31
	  lhz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt+      .loc_0xAC
	  li        r6, 0
	  b         .loc_0x118

	.loc_0xF4:
	  lwz       r4, 0x10(r1)
	  rlwinm    r3,r6,1,15,30
	  lwz       r5, 0x8(r5)
	  rlwinm    r0,r6,2,14,29
	  lhzx      r4, r4, r3
	  addi      r6, r6, 0x1
	  lwzx      r3, r5, r0
	  add       r0, r5, r4
	  stw       r0, 0x20(r3)

	.loc_0x118:
	  lwz       r5, 0x8(r30)
	  rlwinm    r3,r6,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0xF4
	  lwz       r0, 0xA4(r1)
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
 * Address:	80071230
 * Size:	00014C
 */
void J3DModelLoader_v21::readMaterialTable_v21(const J3DMaterialBlock_v21*,
                                               unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stw       r31, 0x8C(r1)
	  mr        r31, r5
	  stw       r30, 0x88(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  mr        r28, r4
	  bl        0x137A4
	  lwz       r0, 0x14(r28)
	  lhz       r4, 0x8(r28)
	  lwz       r3, 0x8(r30)
	  cmplwi    r0, 0
	  sth       r4, 0x4(r3)
	  beq-      .loc_0x80
	  li        r3, 0x10
	  bl        -0x4D3D8
	  mr.       r29, r3
	  beq-      .loc_0x74
	  lwz       r4, 0x14(r28)
	  mr        r3, r28
	  bl        -0x27E24
	  mr        r4, r3
	  mr        r3, r29
	  bl        -0x42590
	  mr        r29, r3

	.loc_0x74:
	  lwz       r3, 0x8(r30)
	  stw       r29, 0xC(r3)
	  b         .loc_0x8C

	.loc_0x80:
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0x8C:
	  lwz       r3, 0x8(r30)
	  lhz       r0, 0x4(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4D31C
	  lwz       r4, 0x8(r30)
	  li        r29, 0
	  stw       r3, 0x8(r4)
	  b         .loc_0xD4

	.loc_0xAC:
	  mr        r6, r31
	  addi      r3, r1, 0x8
	  rlwinm    r5,r29,0,16,31
	  li        r4, 0
	  bl        0x13940
	  lwz       r4, 0x8(r30)
	  rlwinm    r0,r29,2,14,29
	  addi      r29, r29, 0x1
	  lwz       r4, 0x8(r4)
	  stwx      r3, r4, r0

	.loc_0xD4:
	  lwz       r3, 0x8(r30)
	  rlwinm    r4,r29,0,16,31
	  lhz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt+      .loc_0xAC
	  li        r7, 0
	  b         .loc_0x118

	.loc_0xF0:
	  lwz       r4, 0x10(r1)
	  rlwinm    r3,r7,1,15,30
	  lwz       r6, 0x8(r5)
	  rlwinm    r0,r7,2,14,29
	  lhzx      r4, r4, r3
	  addi      r7, r7, 0x1
	  rlwinm    r5,r6,28,4,31
	  lwzx      r3, r6, r0
	  add       r0, r5, r4
	  stw       r0, 0x20(r3)

	.loc_0x118:
	  lwz       r5, 0x8(r30)
	  rlwinm    r3,r7,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0xF0
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007137C
 * Size:	0000C4
 */
void J3DModelLoader::readTextureTable(const J3DTextureBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  lhz       r29, 0x8(r4)
	  mr        r27, r3
	  lwz       r4, 0xC(r4)
	  mr        r3, r28
	  bl        0x6D8
	  lwz       r0, 0x10(r28)
	  mr        r31, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  li        r3, 0x10
	  bl        -0x4D514
	  mr.       r30, r3
	  beq-      .loc_0x64
	  lwz       r4, 0x10(r28)
	  mr        r3, r28
	  bl        -0x27F60
	  mr        r4, r3
	  mr        r3, r30
	  bl        -0x426CC
	  mr        r30, r3

	.loc_0x64:
	  lwz       r3, 0x8(r27)
	  stw       r30, 0x18(r3)
	  b         .loc_0x7C

	.loc_0x70:
	  lwz       r3, 0x8(r27)
	  li        r0, 0
	  stw       r0, 0x18(r3)

	.loc_0x7C:
	  li        r3, 0xC
	  bl        -0x4D558
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  lis       r4, 0x804A
	  li        r0, 0
	  addi      r4, r4, 0x1F68
	  stw       r4, 0x8(r3)
	  sth       r29, 0x0(r3)
	  sth       r0, 0x2(r3)
	  stw       r31, 0x4(r3)

	.loc_0xA8:
	  lwz       r4, 0x8(r27)
	  stw       r3, 0x14(r4)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80071440
 * Size:	000150
 */
void J3DModelLoader::readPatchedMaterial(const J3DMaterialBlock*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  mr        r30, r5
	  stw       r29, 0x94(r1)
	  mr        r29, r3
	  addi      r3, r1, 0x8
	  stw       r28, 0x90(r1)
	  mr        r28, r4
	  bl        -0x50C8
	  lhz       r0, 0x8(r28)
	  addi      r3, r1, 0x8
	  lwz       r4, 0x8(r29)
	  sth       r0, 0x4(r4)
	  bl        -0x4E0C
	  lwz       r0, 0x14(r28)
	  lwz       r4, 0x8(r29)
	  cmplwi    r0, 0
	  sth       r3, 0x6(r4)
	  beq-      .loc_0x90
	  li        r3, 0x10
	  bl        -0x4D5F8
	  mr.       r31, r3
	  beq-      .loc_0x84
	  lwz       r4, 0x14(r28)
	  mr        r3, r28
	  bl        -0x28044
	  mr        r4, r3
	  mr        r3, r31
	  bl        -0x427B0
	  mr        r31, r3

	.loc_0x84:
	  lwz       r3, 0x8(r29)
	  stw       r31, 0xC(r3)
	  b         .loc_0x9C

	.loc_0x90:
	  lwz       r3, 0x8(r29)
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0x9C:
	  lwz       r3, 0x8(r29)
	  lhz       r0, 0x4(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4D53C
	  lwz       r4, 0x8(r29)
	  li        r0, 0
	  li        r31, 0
	  stw       r3, 0x8(r4)
	  lwz       r3, 0x8(r29)
	  stw       r0, 0x10(r3)
	  b         .loc_0x11C

	.loc_0xC8:
	  rlwinm    r28,r31,0,16,31
	  mr        r7, r30
	  mr        r6, r28
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0x2
	  bl        -0x4E64
	  lwz       r4, 0x8(r29)
	  rlwinm    r6,r31,2,14,29
	  rlwinm    r0,r28,1,0,30
	  addi      r31, r31, 0x1
	  lwz       r4, 0x8(r4)
	  stwx      r3, r4, r6
	  lwz       r4, 0x8(r29)
	  lwz       r3, 0x10(r1)
	  lwz       r5, 0x8(r4)
	  lhzx      r0, r3, r0
	  rlwinm    r4,r5,28,4,31
	  lwzx      r3, r5, r6
	  add       r0, r4, r0
	  stw       r0, 0x20(r3)

	.loc_0x11C:
	  lwz       r3, 0x8(r29)
	  rlwinm    r4,r31,0,16,31
	  lhz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt+      .loc_0xC8
	  lwz       r0, 0xA4(r1)
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
 * Address:	80071590
 * Size:	0001BC
 */
void J3DModelLoader::readMaterialDL(const J3DMaterialDLBlock*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  mr        r31, r5
	  stw       r30, 0x98(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  stw       r29, 0x94(r1)
	  stw       r28, 0x90(r1)
	  mr        r28, r4
	  bl        -0x4FD0
	  lwz       r4, 0x8(r30)
	  lhz       r0, 0x4(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x150
	  li        r3, 0x1
	  lwz       r0, 0x20(r28)
	  sth       r3, 0x1C(r4)
	  lhz       r4, 0x8(r28)
	  cmplwi    r0, 0
	  lwz       r3, 0x8(r30)
	  sth       r4, 0x4(r3)
	  lwz       r3, 0x8(r30)
	  sth       r4, 0x6(r3)
	  beq-      .loc_0xA0
	  li        r3, 0x10
	  bl        -0x4D758
	  mr.       r29, r3
	  beq-      .loc_0x94
	  lwz       r4, 0x20(r28)
	  mr        r3, r28
	  bl        -0x281A4
	  mr        r4, r3
	  mr        r3, r29
	  bl        -0x42910
	  mr        r29, r3

	.loc_0x94:
	  lwz       r3, 0x8(r30)
	  stw       r29, 0xC(r3)
	  b         .loc_0xAC

	.loc_0xA0:
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0xAC:
	  lwz       r3, 0x8(r30)
	  lhz       r0, 0x4(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4D69C
	  lwz       r4, 0x8(r30)
	  li        r0, 0
	  li        r29, 0
	  stw       r3, 0x8(r4)
	  lwz       r3, 0x8(r30)
	  stw       r0, 0x10(r3)
	  b         .loc_0x104

	.loc_0xD8:
	  mr        r7, r31
	  addi      r3, r1, 0x8
	  rlwinm    r6,r29,0,16,31
	  li        r4, 0
	  li        r5, 0x1
	  bl        -0x4FC0
	  lwz       r4, 0x8(r30)
	  rlwinm    r0,r29,2,14,29
	  addi      r29, r29, 0x1
	  lwz       r4, 0x8(r4)
	  stwx      r3, r4, r0

	.loc_0x104:
	  lwz       r3, 0x8(r30)
	  rlwinm    r4,r29,0,16,31
	  lhz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt+      .loc_0xD8
	  li        r6, 0
	  lis       r4, 0xC000
	  b         .loc_0x138

	.loc_0x124:
	  lwz       r3, 0x8(r5)
	  rlwinm    r0,r6,2,14,29
	  addi      r6, r6, 0x1
	  lwzx      r3, r3, r0
	  stw       r4, 0x20(r3)

	.loc_0x138:
	  lwz       r5, 0x8(r30)
	  rlwinm    r3,r6,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0x124
	  b         .loc_0x19C

	.loc_0x150:
	  li        r28, 0
	  b         .loc_0x188

	.loc_0x158:
	  lwz       r3, 0x8(r4)
	  rlwinm    r29,r28,2,14,29
	  rlwinm    r6,r28,0,16,31
	  mr        r7, r31
	  lwzx      r4, r3, r29
	  addi      r3, r1, 0x8
	  li        r5, 0x1
	  bl        -0x5048
	  lwz       r4, 0x8(r30)
	  addi      r28, r28, 0x1
	  lwz       r4, 0x8(r4)
	  stwx      r3, r4, r29

	.loc_0x188:
	  lwz       r4, 0x8(r30)
	  rlwinm    r3,r28,0,16,31
	  lhz       r0, 0x4(r4)
	  cmplw     r3, r0
	  blt+      .loc_0x158

	.loc_0x19C:
	  lwz       r0, 0xA4(r1)
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
 * Address:	8007174C
 * Size:	00007C
 */
void J3DModelLoader::modifyMaterial(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  rlwinm.   r0,r4,0,18,18
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  mr        r30, r3
	  beq-      .loc_0x64
	  lwz       r4, 0x10(r30)
	  addi      r3, r1, 0x8
	  bl        -0x53D0
	  li        r31, 0
	  b         .loc_0x50

	.loc_0x34:
	  lwz       r4, 0x8(r4)
	  rlwinm    r0,r31,2,14,29
	  rlwinm    r5,r31,0,16,31
	  addi      r3, r1, 0x8
	  lwzx      r4, r4, r0
	  bl        -0x3CB8
	  addi      r31, r31, 0x1

	.loc_0x50:
	  lwz       r4, 0x8(r30)
	  rlwinm    r3,r31,0,16,31
	  lhz       r0, 0x4(r4)
	  cmplw     r3, r0
	  blt+      .loc_0x34

	.loc_0x64:
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800717C8
 * Size:	000008
 */
void J3DModelLoader::calcSizeMaterial(const J3DMaterialBlock*, unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800717D0
 * Size:	000008
 */
void J3DModelLoader::calcSizeMaterialTable(const J3DMaterialBlock*,
                                           unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800717D8
 * Size:	000048
 */
void J3DTexture::~J3DTexture()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  addi      r0, r5, 0x1F68
	  stw       r0, 0x8(r31)
	  ble-      .loc_0x30
	  bl        -0x4D750

	.loc_0x30:
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
 * Address:	80071820
 * Size:	00006C
 */
void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformMaya,
                     J3DMtxCalcJ3DSysInitMaya>::~J3DMtxCalcNoAnm()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1EB8
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1F3C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  subi      r0, r3, 0x4C4
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x4D7BC

	.loc_0x54:
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
 * Address:	8007188C
 * Size:	000028
 */
void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformMaya,
                     J3DMtxCalcJ3DSysInitMaya>::init(const Vec&,
                                                     const float (&)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  mr        r4, r5
	  stw       r0, 0x14(r1)
	  bl        -0x6608
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800718B4
 * Size:	000028
 */
void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformMaya,
                     J3DMtxCalcJ3DSysInitMaya>::calc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x7674(r13)
	  addi      r3, r3, 0x18
	  bl        -0x6318
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800718DC
 * Size:	00006C
 */
void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformSoftimage,
                     J3DMtxCalcJ3DSysInitSoftimage>::~J3DMtxCalcNoAnm()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1EE4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1F3C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  subi      r0, r3, 0x4C4
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x4D878

	.loc_0x54:
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
 * Address:	80071948
 * Size:	00004C
 */
void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformSoftimage,
                     J3DMtxCalcJ3DSysInitSoftimage>::init(const Vec&,
                                                          const float (&)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  lfs       f2, 0x0(r4)
	  stw       r0, 0x14(r1)
	  subi      r6, r3, 0xBFC
	  lfs       f1, 0x4(r4)
	  lis       r3, 0x8051
	  lfs       f0, 0x8(r4)
	  subi      r4, r3, 0xC2C
	  stfs      f2, 0x0(r6)
	  mr        r3, r5
	  stfs      f1, 0x4(r6)
	  stfs      f0, 0x8(r6)
	  bl        0x7894C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80071994
 * Size:	000028
 */
void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformSoftimage,
                     J3DMtxCalcJ3DSysInitSoftimage>::calc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x7674(r13)
	  addi      r3, r3, 0x18
	  bl        -0x6560
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800719BC
 * Size:	00006C
 */
void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformBasic,
                     J3DMtxCalcJ3DSysInitBasic>::~J3DMtxCalcNoAnm()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1F10
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1F3C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  subi      r0, r3, 0x4C4
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x4D958

	.loc_0x54:
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
 * Address:	80071A28
 * Size:	000028
 */
void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformBasic,
                     J3DMtxCalcJ3DSysInitBasic>::init(const Vec&,
                                                      const float (&)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  mr        r4, r5
	  stw       r0, 0x14(r1)
	  bl        -0x683C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80071A50
 * Size:	000028
 */
void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformBasic,
                     J3DMtxCalcJ3DSysInitBasic>::calc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x7674(r13)
	  addi      r3, r3, 0x18
	  bl        -0x6734
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80071A78
 * Size:	000018
 */
void JSUConvertOffsetToPtr<ResTIMG>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80071A90
 * Size:	000018
 */
void JSUConvertOffsetToPtr<float[3][4]>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80071AA8
 * Size:	000018
 */
void JSUConvertOffsetToPtr<void>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80071AC0
 * Size:	000018
 */
void JSUConvertOffsetToPtr<_GXVtxAttrFmtList>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80071AD8
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DModelHierarchy>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80071AF0
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DShapeInitData>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80071B08
 * Size:	000018
 */
void JSUConvertOffsetToPtr<unsigned short>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}