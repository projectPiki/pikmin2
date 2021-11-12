#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	80087900
 * Size:	000040
 */
void J3DModelLoader::countMaterialNum(const void*)
{
	/*
	lwz      r0, 0xc(r4)
	addi     r4, r4, 0x20
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_80087938

lbl_80087914:
	lwz      r3, 0(r4)
	addis    r0, r3, 0xb2bf
	cmplwi   r0, 0x5433
	bne      lbl_8008792C
	lhz      r3, 8(r4)
	blr

lbl_8008792C:
	lwz      r0, 4(r4)
	add      r4, r4, r0
	bdnz     lbl_80087914

lbl_80087938:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80087940
 * Size:	0001B0
 */
void J3DModelLoader::calcLoadSize(const void*, unsigned long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, 0x4D415432@ha
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r3
	lwz      r25, 0xc(r4)
	mr       r27, r5
	addi     r29, r4, 0x20
	addi     r31, r6, 0x4D415432@l
	li       r28, 0
	li       r30, 0xe4
	b        lbl_80087AD0

lbl_80087974:
	lwz      r4, 0(r29)
	cmpw     r4, r31
	beq      lbl_80087AC4
	bge      lbl_800879D4
	lis      r3, 0x494E4631@ha
	addi     r0, r3, 0x494E4631@l
	cmpw     r4, r0
	beq      lbl_80087A24
	bge      lbl_800879C0
	lis      r3, 0x45565031@ha
	addi     r0, r3, 0x45565031@l
	cmpw     r4, r0
	beq      lbl_80087AA0
	bge      lbl_80087AC4
	lis      r3, 0x44525731@ha
	addi     r0, r3, 0x44525731@l
	cmpw     r4, r0
	beq      lbl_80087AB4
	b        lbl_80087AC4

lbl_800879C0:
	lis      r3, 0x4A4E5431@ha
	addi     r0, r3, 0x4A4E5431@l
	cmpw     r4, r0
	beq      lbl_80087A3C
	b        lbl_80087AC4

lbl_800879D4:
	lis      r3, 0x54455831@ha
	addi     r0, r3, 0x54455831@l
	cmpw     r4, r0
	beq      lbl_80087A8C
	bge      lbl_80087A10
	lis      r3, 0x53485031@ha
	addi     r0, r3, 0x53485031@l
	cmpw     r4, r0
	beq      lbl_80087A74
	bge      lbl_80087AC4
	lis      r3, 0x4D415434@ha
	addi     r0, r3, 0x4D415434@l
	cmpw     r4, r0
	bge      lbl_80087AC4
	b        lbl_80087A50

lbl_80087A10:
	lis      r3, 0x56545831@ha
	addi     r0, r3, 0x56545831@l
	cmpw     r4, r0
	beq      lbl_80087AC4
	b        lbl_80087AC4

lbl_80087A24:
	mr       r3, r26
	mr       r4, r29
	mr       r5, r27
	bl       calcSizeInformation__14J3DModelLoaderFPC17J3DModelInfoBlockUl
	add      r30, r30, r3
	b        lbl_80087AC4

lbl_80087A3C:
	mr       r3, r26
	mr       r4, r29
	bl       calcSizeJoint__14J3DModelLoaderFPC13J3DJointBlock
	add      r30, r30, r3
	b        lbl_80087AC4

lbl_80087A50:
	mr       r3, r26
	mr       r4, r29
	lwz      r12, 0(r26)
	mr       r5, r27
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	add      r30, r30, r3
	b        lbl_80087AC4

lbl_80087A74:
	mr       r3, r26
	mr       r4, r29
	mr       r5, r27
	bl       calcSizeShape__14J3DModelLoaderFPC13J3DShapeBlockUl
	add      r30, r30, r3
	b        lbl_80087AC4

lbl_80087A8C:
	mr       r3, r26
	mr       r4, r29
	bl       calcSizeTexture__14J3DModelLoaderFPC15J3DTextureBlock
	add      r30, r30, r3
	b        lbl_80087AC4

lbl_80087AA0:
	mr       r3, r26
	mr       r4, r29
	bl       calcSizeEnvelope__14J3DModelLoaderFPC16J3DEnvelopeBlock
	add      r30, r30, r3
	b        lbl_80087AC4

lbl_80087AB4:
	mr       r3, r26
	mr       r4, r29
	bl       calcSizeDraw__14J3DModelLoaderFPC12J3DDrawBlock
	add      r30, r30, r3

lbl_80087AC4:
	lwz      r0, 4(r29)
	addi     r28, r28, 1
	add      r29, r29, r0

lbl_80087AD0:
	cmplw    r28, r25
	blt      lbl_80087974
	mr       r3, r30
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
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
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, 0x4D415433@ha
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r25, r3
	lwz      r31, 0xc(r4)
	addi     r28, r4, 0x20
	addi     r30, r5, 0x4D415433@l
	li       r27, 0
	li       r26, 0
	li       r29, 0x20
	b        lbl_80087B90

lbl_80087B24:
	lwz      r4, 0(r28)
	cmpw     r4, r30
	beq      lbl_80087B4C
	bge      lbl_80087B38
	b        lbl_80087B84

lbl_80087B38:
	lis      r3, 0x54455831@ha
	addi     r0, r3, 0x54455831@l
	cmpw     r4, r0
	beq      lbl_80087B70
	b        lbl_80087B84

lbl_80087B4C:
	mr       r3, r25
	mr       r4, r28
	lwz      r12, 0(r25)
	lis      r5, 0x5110
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	add      r29, r29, r3
	b        lbl_80087B84

lbl_80087B70:
	mr       r3, r25
	mr       r4, r28
	bl       calcSizeTextureTable__14J3DModelLoaderFPC15J3DTextureBlock
	add      r29, r29, r3
	li       r27, 1

lbl_80087B84:
	lwz      r0, 4(r28)
	addi     r26, r26, 1
	add      r28, r28, r0

lbl_80087B90:
	cmplw    r26, r31
	blt      lbl_80087B24
	clrlwi.  r0, r27, 0x18
	bne      lbl_80087BA4
	addi     r29, r29, 0xc

lbl_80087BA4:
	mr       r3, r29
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
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
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r23, 0xc(r1)
	mr       r25, r5
	lis      r5, 0x4D415433@ha
	lwz      r23, 0xc(r4)
	mr       r24, r3
	addi     r27, r4, 0x20
	rlwinm   r30, r25, 0, 6, 7
	rlwinm   r29, r25, 0, 0x12, 0x13
	addi     r31, r5, 0x4D415433@l
	li       r26, 0
	li       r28, 0xe4
	b        lbl_80087DAC

lbl_80087BF8:
	lwz      r4, 0(r27)
	cmpw     r4, r31
	beq      lbl_80087D1C
	bge      lbl_80087C5C
	lis      r3, 0x494E4631@ha
	addi     r0, r3, 0x494E4631@l
	cmpw     r4, r0
	beq      lbl_80087CAC
	bge      lbl_80087C44
	lis      r3, 0x45565031@ha
	addi     r0, r3, 0x45565031@l
	cmpw     r4, r0
	beq      lbl_80087D7C
	bge      lbl_80087DA0
	lis      r3, 0x44525731@ha
	addi     r0, r3, 0x44525731@l
	cmpw     r4, r0
	beq      lbl_80087D90
	b        lbl_80087DA0

lbl_80087C44:
	lis      r3, 0x4A4E5431@ha
	addi     r0, r3, 0x4A4E5431@l
	cmpw     r4, r0
	beq      lbl_80087CC4
	blt      lbl_80087DA0
	b        lbl_80087DA0

lbl_80087C5C:
	lis      r3, 0x54455831@ha
	addi     r0, r3, 0x54455831@l
	cmpw     r4, r0
	beq      lbl_80087CF0
	bge      lbl_80087C98
	lis      r3, 0x53485031@ha
	addi     r0, r3, 0x53485031@l
	cmpw     r4, r0
	beq      lbl_80087CD8
	bge      lbl_80087DA0
	lis      r3, 0x4D444C33@ha
	addi     r0, r3, 0x4D444C33@l
	cmpw     r4, r0
	beq      lbl_80087D04
	b        lbl_80087DA0

lbl_80087C98:
	lis      r3, 0x56545831@ha
	addi     r0, r3, 0x56545831@l
	cmpw     r4, r0
	beq      lbl_80087DA0
	b        lbl_80087DA0

lbl_80087CAC:
	mr       r3, r24
	mr       r4, r27
	mr       r5, r25
	bl       calcSizeInformation__14J3DModelLoaderFPC17J3DModelInfoBlockUl
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087CC4:
	mr       r3, r24
	mr       r4, r27
	bl       calcSizeJoint__14J3DModelLoaderFPC13J3DJointBlock
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087CD8:
	mr       r3, r24
	mr       r4, r27
	mr       r5, r25
	bl       calcSizeShape__14J3DModelLoaderFPC13J3DShapeBlockUl
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087CF0:
	mr       r3, r24
	mr       r4, r27
	bl       calcSizeTexture__14J3DModelLoaderFPC15J3DTextureBlock
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087D04:
	mr       r3, r24
	mr       r4, r27
	mr       r5, r25
	bl       calcSizeMaterialDL__14J3DModelLoaderFPC18J3DMaterialDLBlockUl
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087D1C:
	cmplwi   r29, 0
	lis      r5, 0x5010
	stw      r27, 0x10(r24)
	or       r5, r5, r30
	bne      lbl_80087D58
	li       r0, 1
	mr       r3, r24
	stb      r0, 0x18(r24)
	mr       r4, r27
	lwz      r12, 0(r24)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087D58:
	cmplwi   r29, 0x2000
	bne      lbl_80087DA0
	li       r0, 1
	mr       r3, r24
	stb      r0, 0x18(r24)
	mr       r4, r27
	bl       calcSizePatchedMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087D7C:
	mr       r3, r24
	mr       r4, r27
	bl       calcSizeEnvelope__14J3DModelLoaderFPC16J3DEnvelopeBlock
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087D90:
	mr       r3, r24
	mr       r4, r27
	bl       calcSizeDraw__14J3DModelLoaderFPC12J3DDrawBlock
	add      r28, r28, r3

lbl_80087DA0:
	lwz      r0, 4(r27)
	addi     r26, r26, 1
	add      r27, r27, r0

lbl_80087DAC:
	cmplw    r26, r23
	blt      lbl_80087BF8
	mr       r3, r28
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
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
	lwz      r0, 0x14(r4)
	li       r3, 0
	cmplwi   r0, 0
	beq      lbl_80087E70
	li       r3, 0x10

lbl_80087E70:
	lhz      r4, 8(r4)
	mulli    r0, r4, 0x5c
	slwi     r4, r4, 2
	add      r3, r3, r4
	add      r3, r3, r0
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
	lhz      r0, 8(r4)
	sth      r0, 0x1a(r3)
	li       r3, 0
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
	lhz      r3, 0x1a(r3)
	lhz      r0, 8(r4)
	subf     r0, r3, r0
	slwi     r3, r0, 1
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
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	li       r31, 0
	stw      r30, 0x38(r1)
	mr       r30, r4
	stw      r29, 0x34(r1)
	mr       r29, r5
	stw      r28, 0x30(r1)
	mr       r28, r3
	addi     r3, r1, 8
	bl       __ct__15J3DShapeFactoryFRC13J3DShapeBlock
	lwz      r0, 0x14(r30)
	lhz      r4, 8(r30)
	cmplwi   r0, 0
	beq      lbl_80087FD8
	li       r31, 0x10

lbl_80087FD8:
	slwi     r0, r4, 2
	addi     r3, r1, 8
	add      r31, r31, r0
	bl       calcSizeVcdVatCmdBuffer__15J3DShapeFactoryFUl
	lwz      r30, 0x14(r28)
	add      r31, r31, r3
	b        lbl_80088014

lbl_80087FF4:
	cmplwi   r0, 0x12
	bne      lbl_80088010
	lhz      r4, 2(r30)
	mr       r5, r29
	addi     r3, r1, 8
	bl       calcSize__15J3DShapeFactoryFiUl
	add      r31, r31, r3

lbl_80088010:
	addi     r30, r30, 4

lbl_80088014:
	lhz      r0, 0(r30)
	cmplwi   r0, 0
	bne      lbl_80087FF4
	lwz      r0, 0x44(r1)
	mr       r3, r31
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x40
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
	lwz      r0, 0x10(r4)
	li       r3, 0
	cmplwi   r0, 0
	beq      lbl_80088058
	li       r3, 0x10

lbl_80088058:
	addi     r3, r3, 0xc
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
	lwz      r0, 0x10(r4)
	li       r3, 0
	cmplwi   r0, 0
	beq      lbl_80088114
	li       r3, 0x10

lbl_80088114:
	addi     r3, r3, 0xc
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
