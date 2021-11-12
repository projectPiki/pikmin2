#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global sTableSize__14JASWaveBankMgr
    sTableSize__14JASWaveBankMgr:
        .skip 0x4
    .global sWaveBank__14JASWaveBankMgr
    sWaveBank__14JASWaveBankMgr:
        .skip 0x4
*/

/*
 * --INFO--
 * Address:	8009C044
 * Size:	000054
 */
void JASWaveBankMgr::init(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	slwi     r31, r3, 2
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r4, JASDram@sda21(r13)
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, sWaveBank__14JASWaveBankMgr@sda21(r13)
	mr       r4, r31
	bl       bzero__7JASCalcFPvUl
	stw      r30, sTableSize__14JASWaveBankMgr@sda21(r13)
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
 * Address:	8009C098
 * Size:	000034
 */
void JASWaveBankMgr::getWaveBank(int)
{
	/*
	cmpwi    r3, 0
	bge      lbl_8009C0A8
	li       r3, 0
	blr

lbl_8009C0A8:
	lwz      r0, sTableSize__14JASWaveBankMgr@sda21(r13)
	cmpw     r3, r0
	blt      lbl_8009C0BC
	li       r3, 0
	blr

lbl_8009C0BC:
	lwz      r4, sWaveBank__14JASWaveBankMgr@sda21(r13)
	slwi     r0, r3, 2
	lwzx     r3, r4, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASWaveBankMgr::registWaveBank(int, JASWaveBank*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009C0CC
 * Size:	000080
 */
void JASWaveBankMgr::registWaveBankWS(int, void*)
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
	bl       getGroupCount__11JASWSParserFPv
	cmplwi   r3, 1
	bne      lbl_8009C108
	mr       r3, r31
	bl       createSimpleWaveBank__11JASWSParserFPv
	mr       r5, r3
	b        lbl_8009C114

lbl_8009C108:
	mr       r3, r31
	bl       createBasicWaveBank__11JASWSParserFPv
	mr       r5, r3

lbl_8009C114:
	cmplwi   r5, 0
	bne      lbl_8009C124
	li       r3, 0
	b        lbl_8009C134

lbl_8009C124:
	lwz      r4, sWaveBank__14JASWaveBankMgr@sda21(r13)
	slwi     r0, r30, 2
	li       r3, 1
	stwx     r5, r4, r0

lbl_8009C134:
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
 * Address:	........
 * Size:	00006C
 */
void JASWaveBankMgr::getWaveArc(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009C14C
 * Size:	000090
 */
void JASWaveBankMgr::loadWave(int, int, JASHeap*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r3, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	bge      lbl_8009C170
	li       r3, 0
	b        lbl_8009C190

lbl_8009C170:
	lwz      r0, sTableSize__14JASWaveBankMgr@sda21(r13)
	cmpw     r3, r0
	blt      lbl_8009C184
	li       r3, 0
	b        lbl_8009C190

lbl_8009C184:
	lwz      r5, sWaveBank__14JASWaveBankMgr@sda21(r13)
	slwi     r0, r3, 2
	lwzx     r3, r5, r0

lbl_8009C190:
	cmplwi   r3, 0
	bne      lbl_8009C1A0
	li       r3, 0
	b        lbl_8009C1B0

lbl_8009C1A0:
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8009C1B0:
	cmplwi   r3, 0
	bne      lbl_8009C1C0
	li       r3, 0
	b        lbl_8009C1C8

lbl_8009C1C0:
	mr       r4, r31
	bl       load__10JASWaveArcFP7JASHeap

lbl_8009C1C8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C1DC
 * Size:	000090
 */
void JASWaveBankMgr::loadWaveTail(int, int, JASHeap*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r3, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	bge      lbl_8009C200
	li       r3, 0
	b        lbl_8009C220

lbl_8009C200:
	lwz      r0, sTableSize__14JASWaveBankMgr@sda21(r13)
	cmpw     r3, r0
	blt      lbl_8009C214
	li       r3, 0
	b        lbl_8009C220

lbl_8009C214:
	lwz      r5, sWaveBank__14JASWaveBankMgr@sda21(r13)
	slwi     r0, r3, 2
	lwzx     r3, r5, r0

lbl_8009C220:
	cmplwi   r3, 0
	bne      lbl_8009C230
	li       r3, 0
	b        lbl_8009C240

lbl_8009C230:
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8009C240:
	cmplwi   r3, 0
	bne      lbl_8009C250
	li       r3, 0
	b        lbl_8009C258

lbl_8009C250:
	mr       r4, r31
	bl       loadTail__10JASWaveArcFP7JASHeap

lbl_8009C258:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void JASWaveBankMgr::loadWaveBlock(int, int, JASHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void JASWaveBankMgr::loadWaveBlockTail(int, int, JASHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009C26C
 * Size:	000090
 */
void JASWaveBankMgr::eraseWave(int, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r3, 0
	stw      r0, 0x14(r1)
	bge      lbl_8009C288
	li       r3, 0
	b        lbl_8009C2A8

lbl_8009C288:
	lwz      r0, sTableSize__14JASWaveBankMgr@sda21(r13)
	cmpw     r3, r0
	blt      lbl_8009C29C
	li       r3, 0
	b        lbl_8009C2A8

lbl_8009C29C:
	lwz      r5, sWaveBank__14JASWaveBankMgr@sda21(r13)
	slwi     r0, r3, 2
	lwzx     r3, r5, r0

lbl_8009C2A8:
	cmplwi   r3, 0
	bne      lbl_8009C2B8
	li       r3, 0
	b        lbl_8009C2C8

lbl_8009C2B8:
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8009C2C8:
	cmplwi   r3, 0
	bne      lbl_8009C2D8
	li       r3, 0
	b        lbl_8009C2EC

lbl_8009C2D8:
	bl       erase__10JASWaveArcFv
	clrlwi   r3, r3, 0x18
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f

lbl_8009C2EC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JASWaveBankMgr::getUsedHeapSize()
{
	// UNUSED FUNCTION
}
