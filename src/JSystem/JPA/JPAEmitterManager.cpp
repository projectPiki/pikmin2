#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JPA/JPAEmitter.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516BB8
    lbl_80516BB8:
        .4byte 0x00000000
    .global lbl_80516BBC
    lbl_80516BBC:
        .4byte 0x42000000
    .global lbl_80516BC0
    lbl_80516BC0:
        .float 0.5
    .global lbl_80516BC4
    lbl_80516BC4:
        .4byte 0x40400000
    .global lbl_80516BC8
    lbl_80516BC8:
        .float 1.0
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80090538
 * Size:	0001FC
 */
JPAEmitterManager::JPAEmitterManager(unsigned long, unsigned long, JKRHeap*, unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r30, r3
	  mr        r26, r4
	  mr        r27, r5
	  mr        r31, r6
	  mr        r29, r7
	  mr        r28, r8
	  addi      r3, r30, 0x4
	  bl        -0x69C94
	  li        r0, 0
	  mr        r4, r31
	  stw       r0, 0x10(r30)
	  li        r5, 0
	  stw       r0, 0x14(r30)
	  stw       r0, 0x18(r30)
	  stw       r27, 0x24(r30)
	  stw       r26, 0x28(r30)
	  stb       r29, 0x2C(r30)
	  stb       r28, 0x2D(r30)
	  lwz       r29, 0x24(r30)
	  mulli     r3, r29, 0x114
	  addi      r3, r3, 0x10
	  bl        -0x6C554
	  lis       r4, 0x8009
	  lis       r5, 0x8009
	  addi      r4, r4, 0x810
	  mr        r7, r29
	  addi      r5, r5, 0x7B0
	  li        r6, 0x114
	  bl        0x31438
	  li        r28, 0
	  mr        r29, r3
	  b         .loc_0xA4

	.loc_0x90:
	  addi      r3, r30, 0x4
	  addi      r4, r29, 0x58
	  bl        -0x69C34
	  addi      r29, r29, 0x114
	  addi      r28, r28, 0x1

	.loc_0xA4:
	  lwz       r0, 0x24(r30)
	  cmplw     r28, r0
	  blt+      .loc_0x90
	  lwz       r29, 0x28(r30)
	  mr        r4, r31
	  li        r5, 0
	  mulli     r3, r29, 0xA0
	  addi      r3, r3, 0x10
	  bl        -0x6C5B4
	  lis       r4, 0x8009
	  lis       r5, 0x8009
	  addi      r4, r4, 0x7A0
	  mr        r7, r29
	  addi      r5, r5, 0x764
	  li        r6, 0xA0
	  bl        0x313D8
	  li        r6, 0
	  li        r5, 0
	  b         .loc_0x138

	.loc_0xF0:
	  lwz       r0, 0x14(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x114
	  stw       r0, 0x0(r3)
	  stw       r5, 0x4(r3)
	  lwz       r4, 0x14(r30)
	  stw       r3, 0x4(r4)
	  stw       r3, 0x14(r30)
	  b         .loc_0x124

	.loc_0x114:
	  stw       r3, 0x10(r30)
	  stw       r3, 0x14(r30)
	  stw       r5, 0x0(r3)
	  stw       r5, 0x4(r3)

	.loc_0x124:
	  lwz       r4, 0x18(r30)
	  addi      r3, r3, 0xA0
	  addi      r6, r6, 0x1
	  addi      r0, r4, 0x1
	  stw       r0, 0x18(r30)

	.loc_0x138:
	  lwz       r0, 0x28(r30)
	  cmplw     r6, r0
	  blt+      .loc_0xF0
	  lbz       r29, 0x2C(r30)
	  mr        r4, r31
	  li        r5, 0
	  mulli     r3, r29, 0xC
	  addi      r3, r3, 0x10
	  bl        -0x6C648
	  lis       r4, 0x8009
	  lis       r5, 0x8009
	  addi      r4, r4, 0x734
	  mr        r7, r29
	  addi      r5, r5, 0x868
	  li        r6, 0xC
	  bl        0x31344
	  stw       r3, 0x0(r30)
	  mr        r4, r31
	  li        r5, 0
	  lbz       r0, 0x2D(r30)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x6C67C
	  li        r5, 0
	  stw       r3, 0x1C(r30)
	  mr        r4, r5
	  li        r6, 0
	  b         .loc_0x1B4

	.loc_0x1A4:
	  lwz       r3, 0x1C(r30)
	  addi      r6, r6, 0x1
	  stwx      r4, r3, r5
	  addi      r5, r5, 0x4

	.loc_0x1B4:
	  lbz       r0, 0x2D(r30)
	  cmpw      r6, r0
	  blt+      .loc_0x1A4
	  mr        r4, r31
	  li        r3, 0x218
	  li        r5, 0
	  bl        -0x6C7C4
	  cmplwi    r3, 0
	  beq-      .loc_0x1E0
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0x1E0:
	  stw       r3, 0x20(r30)
	  mr        r3, r30
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
JPARandom::~JPARandom()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80090734
 * Size:	000030
 */
void JSUList<JPABaseEmitter>::JSUList()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       initiate__10JSUPtrListFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80090764
 * Size:	00003C
 */
void JPANode<JPABaseParticle>::~JPANode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80090788
	extsh.   r0, r4
	ble      lbl_80090788
	bl       __dl__FPv

lbl_80090788:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800907A0
 * Size:	000010
 */
void JPANode<JPABaseParticle>::JPANode()
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
JPABaseParticle::~JPABaseParticle()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800907B0
 * Size:	000060
 */
JPABaseEmitter::~JPABaseEmitter()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800907F4
	addic.   r0, r30, 0x58
	beq      lbl_800907E4
	addi     r3, r30, 0x58
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_800907E4:
	extsh.   r0, r31
	ble      lbl_800907F4
	mr       r3, r30
	bl       __dl__FPv

lbl_800907F4:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80090810
 * Size:	000058
 */
JPABaseEmitter::JPABaseEmitter()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	addi     r3, r31, 0x58
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0
	mr       r3, r31
	stw      r0, 0xc4(r31)
	stw      r0, 0xc8(r31)
	stw      r0, 0xcc(r31)
	stw      r0, 0xd0(r31)
	stw      r0, 0xd4(r31)
	stw      r0, 0xd8(r31)
	stw      r0, 0xdc(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JPABaseEmitter>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JPAList<JPABaseParticle>::~JPAList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80090868
 * Size:	000054
 */
void JSUList<JPABaseEmitter>::~JSUList()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800908A0
	li       r4, 0
	bl       __dt__10JSUPtrListFv
	extsh.   r0, r31
	ble      lbl_800908A0
	mr       r3, r30
	bl       __dl__FPv

lbl_800908A0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800908BC
 * Size:	0000DC
 */
void JPAEmitterManager::createSimpleEmitterID(const JGeometry::TVec3<float>&, unsigned short, unsigned char, unsigned char,
                                              JPAEmitterCallBack*, JPAParticleCallBack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  rlwinm    r0,r7,2,22,29
	  stmw      r24, 0x10(r1)
	  mr        r24, r3
	  mr        r25, r4
	  mr        r27, r7
	  mr        r26, r6
	  mr        r28, r8
	  mr        r29, r9
	  mr        r4, r5
	  lwz       r3, 0x1C(r3)
	  lwzx      r3, r3, r0
	  bl        0x7C34
	  mr.       r30, r3
	  beq-      .loc_0xC4
	  lwz       r0, 0xC(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0xC4
	  lwz       r31, 0x4(r24)
	  addi      r3, r24, 0x4
	  mr        r4, r31
	  bl        -0x69CF4
	  rlwinm    r0,r26,0,24,31
	  lwz       r3, 0x0(r24)
	  mulli     r0, r0, 0xC
	  mr        r4, r31
	  add       r3, r3, r0
	  bl        -0x6A04C
	  lwz       r31, 0x0(r31)
	  mr        r4, r24
	  mr        r5, r30
	  mr        r3, r31
	  bl        -0xC60
	  addi      r0, r24, 0x10
	  lfs       f2, 0x0(r25)
	  stw       r0, 0xE0(r31)
	  mr        r3, r31
	  lfs       f1, 0x4(r25)
	  stw       r28, 0xEC(r31)
	  lfs       f0, 0x8(r25)
	  stw       r29, 0xF0(r31)
	  stb       r26, 0x112(r31)
	  stb       r27, 0x113(r31)
	  stfs      f2, 0xA4(r31)
	  stfs      f1, 0xA8(r31)
	  stfs      f0, 0xAC(r31)
	  b         .loc_0xC8

	.loc_0xC4:
	  li        r3, 0

	.loc_0xC8:
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void JPAEmitterManager::createSimpleEmitter(const JGeometry::TVec3<float>&, unsigned short, JPAEmitterCallBack*, JPAParticleCallBack*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void JPAEmitterManager::calc(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80090998
 * Size:	0000B0
 */
void JPAEmitterManager::calc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_80090A18

lbl_800909C0:
	clrlwi   r0, r29, 0x18
	lwz      r3, 0(r28)
	mulli    r0, r0, 0xc
	lwzx     r31, r3, r0
	b        lbl_80090A0C

lbl_800909D4:
	lwz      r30, 0(r31)
	lwz      r31, 0xc(r31)
	lwz      r3, 0xe8(r30)
	mr       r5, r30
	lwz      r4, 0x20(r28)
	bl       calc__11JPAResourceFP18JPAEmitterWorkDataP14JPABaseEmitter
	clrlwi.  r0, r3, 0x18
	beq      lbl_80090A0C
	lwz      r0, 0xf4(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_80090A0C
	mr       r3, r28
	mr       r4, r30
	bl       forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter

lbl_80090A0C:
	cmplwi   r31, 0
	bne      lbl_800909D4
	addi     r29, r29, 1

lbl_80090A18:
	lbz      r0, 0x2c(r28)
	clrlwi   r3, r29, 0x18
	cmplw    r3, r0
	blt      lbl_800909C0
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80090A48
 * Size:	000200
 */
void JPAEmitterManager::draw(const JPADrawInfo*, unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r4, 0x20(r3)
	mr       r3, r30
	addi     r4, r4, 0x184
	bl       PSMTXCopy
	lwz      r4, 0x20(r29)
	addi     r3, r30, 0x30
	addi     r4, r4, 0x1b4
	bl       PSMTXCopy
	mr       r3, r29
	bl       calcYBBCam__17JPAEmitterManagerFv
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	li       r3, 0
	li       r4, 1
	li       r5, 1
	bl       GXEnableTexOffsets
	li       r3, 1
	li       r4, 1
	li       r5, 1
	bl       GXEnableTexOffsets
	li       r3, 2
	li       r4, 1
	li       r5, 1
	bl       GXEnableTexOffsets
	li       r3, 0
	bl       GXSetCullMode
	li       r3, 0
	bl       GXSetCoPlanar
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 2
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 2
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 1
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xd
	li       r5, 1
	li       r6, 1
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 1
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 1
	li       r4, 0xd
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	bl       GXSetCurrentMtx
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 5
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 0
	bl       GXSetNumChans
	clrlwi   r0, r31, 0x18
	lwz      r3, 0(r29)
	mulli    r0, r0, 0xc
	lwzx     r31, r3, r0
	b        lbl_80090C24

lbl_80090BEC:
	lwz      r5, 0(r31)
	lwz      r0, 0xf4(r5)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_80090C20
	lbz      r0, 0x113(r5)
	lwz      r4, 0x1c(r29)
	slwi     r0, r0, 2
	lwz      r3, 0x20(r29)
	lwzx     r0, r4, r0
	stw      r0, 8(r3)
	lwz      r3, 0xe8(r5)
	lwz      r4, 0x20(r29)
	bl       draw__11JPAResourceFP18JPAEmitterWorkDataP14JPABaseEmitter

lbl_80090C20:
	lwz      r31, 0xc(r31)

lbl_80090C24:
	cmplwi   r31, 0
	bne      lbl_80090BEC
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JPAEmitterManager::draw(float (*)[4], unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void JPAEmitterManager::draw(const JPADrawInfo*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JPAEmitterManager::draw(float (*)[4])
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80090C48
 * Size:	000058
 */
void JPAEmitterManager::forceDeleteAllEmitter()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_80090C78

lbl_80090C68:
	mr       r3, r30
	mr       r4, r31
	bl       forceDeleteGroupEmitter__17JPAEmitterManagerFUc
	addi     r31, r31, 1

lbl_80090C78:
	lbz      r0, 0x2c(r30)
	clrlwi   r3, r31, 0x18
	cmplw    r3, r0
	blt      lbl_80090C68
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80090CA0
 * Size:	000060
 */
void JPAEmitterManager::forceDeleteGroupEmitter(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi   r0, r4, 0x18
	stw      r31, 0xc(r1)
	mulli    r31, r0, 0xc
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_80090CD4

lbl_80090CC4:
	lwz      r4, 4(r3)
	mr       r3, r30
	lwz      r4, 0(r4)
	bl       forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter

lbl_80090CD4:
	lwz      r0, 0(r30)
	add      r3, r31, r0
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	bne      lbl_80090CC4
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80090D00
 * Size:	00006C
 */
void JPAEmitterManager::forceDeleteEmitter(JPABaseEmitter*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       deleteAllParticle__14JPABaseEmitterFv
	lwz      r0, 0xf4(r31)
	addi     r4, r31, 0x58
	ori      r0, r0, 0x300
	stw      r0, 0xf4(r31)
	lbz      r0, 0x112(r31)
	lwz      r3, 0(r30)
	mulli    r0, r0, 0xc
	add      r3, r3, r0
	bl       remove__10JSUPtrListFP10JSUPtrLink
	addi     r3, r30, 4
	addi     r4, r31, 0x58
	bl       prepend__10JSUPtrListFP10JSUPtrLink
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80090D6C
 * Size:	000010
 */
void JPAEmitterManager::entryResourceManager(JPAResourceManager*, unsigned char)
{
	/*
	lwz      r3, 0x1c(r3)
	rlwinm   r0, r5, 2, 0x16, 0x1d
	stwx     r4, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80090D7C
 * Size:	0000C8
 */
void JPAEmitterManager::clearResourceManager(unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r4
	mr       r26, r3
	clrlwi   r31, r4, 0x18
	li       r28, 0
	b        lbl_80090E10

lbl_80090DA0:
	clrlwi   r0, r28, 0x18
	lwz      r3, 0(r26)
	mulli    r0, r0, 0xc
	lwzx     r3, r3, r0
	b        lbl_80090E04

lbl_80090DB4:
	lwz      r29, 0(r3)
	lwz      r30, 0xc(r3)
	lbz      r0, 0x113(r29)
	cmplw    r31, r0
	bne      lbl_80090E00
	mr       r3, r29
	bl       deleteAllParticle__14JPABaseEmitterFv
	lwz      r0, 0xf4(r29)
	addi     r4, r29, 0x58
	ori      r0, r0, 0x300
	stw      r0, 0xf4(r29)
	lbz      r0, 0x112(r29)
	lwz      r3, 0(r26)
	mulli    r0, r0, 0xc
	add      r3, r3, r0
	bl       remove__10JSUPtrListFP10JSUPtrLink
	addi     r3, r26, 4
	addi     r4, r29, 0x58
	bl       prepend__10JSUPtrListFP10JSUPtrLink

lbl_80090E00:
	mr       r3, r30

lbl_80090E04:
	cmplwi   r3, 0
	bne      lbl_80090DB4
	addi     r28, r28, 1

lbl_80090E10:
	lbz      r0, 0x2c(r26)
	clrlwi   r3, r28, 0x18
	cmplw    r3, r0
	blt      lbl_80090DA0
	lwz      r3, 0x1c(r26)
	rlwinm   r0, r27, 2, 0x16, 0x1d
	li       r4, 0
	stwx     r4, r3, r0
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80090E44
 * Size:	0000E8
 */
void JPAEmitterManager::calcYBBCam()
{
	/*
	lwz      r5, 0x20(r3)
	lis      r4, __float_epsilon@ha
	lfs      f3, lbl_80516BB8@sda21(r2)
	lfs      f4, 0x198(r5)
	lfs      f5, 0x1a8(r5)
	fmadds   f2, f4, f4, f3
	lfs      f1, lbl_80516BBC@sda21(r2)
	lfs      f0, __float_epsilon@l(r4)
	fmadds   f6, f5, f5, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f6, f0
	cror     2, 0, 2
	beq      lbl_80090EB0
	fcmpo    cr0, f6, f3
	cror     2, 0, 2
	bne      lbl_80090E88
	b        lbl_80090EA8

lbl_80090E88:
	frsqrte  f3, f6
	lfs      f2, lbl_80516BC0@sda21(r2)
	lfs      f0, lbl_80516BC4@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f6, f1, f0
	fmuls    f6, f2, f0

lbl_80090EA8:
	fmuls    f4, f4, f6
	fmuls    f5, f5, f6

lbl_80090EB0:
	lfs      f1, lbl_80516BC8@sda21(r2)
	fneg     f0, f5
	lwz      r4, 0x20(r3)
	lfs      f2, lbl_80516BB8@sda21(r2)
	stfs     f1, 0x154(r4)
	lwz      r4, 0x20(r3)
	stfs     f2, 0x158(r4)
	lwz      r4, 0x20(r3)
	stfs     f2, 0x15c(r4)
	lwz      r4, 0x20(r3)
	lfs      f1, 0x190(r4)
	stfs     f1, 0x160(r4)
	lwz      r4, 0x20(r3)
	stfs     f2, 0x164(r4)
	lwz      r4, 0x20(r3)
	stfs     f4, 0x168(r4)
	lwz      r4, 0x20(r3)
	stfs     f0, 0x16c(r4)
	lwz      r4, 0x20(r3)
	lfs      f0, 0x1a0(r4)
	stfs     f0, 0x170(r4)
	lwz      r4, 0x20(r3)
	stfs     f2, 0x174(r4)
	lwz      r4, 0x20(r3)
	stfs     f5, 0x178(r4)
	lwz      r4, 0x20(r3)
	stfs     f4, 0x17c(r4)
	lwz      r3, 0x20(r3)
	lfs      f0, 0x1b0(r3)
	stfs     f0, 0x180(r3)
	blr
	*/
}
