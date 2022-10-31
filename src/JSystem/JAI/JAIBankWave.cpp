#include "types.h"
#include "JSystem/JAI/JAInter/BankWave.h"

/*
    Generated from dpostproc

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global flags__Q27JAInter8BankWave
    flags__Q27JAInter8BankWave:
        .4byte 0x00000000
    .global SceneSetFlag__Q27JAInter8BankWave
    SceneSetFlag__Q27JAInter8BankWave:
        .4byte 0xFFFFFFFF
    .global initCallback__Q27JAInter8BankWave
    initCallback__Q27JAInter8BankWave:
        .4byte init__Q27JAInter8BankWaveFv
    .global firstLoadCallback__Q27JAInter8BankWave
    firstLoadCallback__Q27JAInter8BankWave:
        .4byte loadFirstStayWave__Q27JAInter8BankWaveFv
    .global secondLoadCallback__Q27JAInter8BankWave
    secondLoadCallback__Q27JAInter8BankWave:
        .4byte loadSecondStayWave__Q27JAInter8BankWaveFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global initOnCodeBnk__Q27JAInter8BankWave
    initOnCodeBnk__Q27JAInter8BankWave:
        .skip 0x4
    .global initOnCodeWs__Q27JAInter8BankWave
    initOnCodeWs__Q27JAInter8BankWave:
        .skip 0x4
    .global wsGroupNumber__Q27JAInter8BankWave
    wsGroupNumber__Q27JAInter8BankWave:
        .skip 0x4
    .global wsLoadStatus__Q27JAInter8BankWave
    wsLoadStatus__Q27JAInter8BankWave:
        .skip 0x4
    .global wsMax__Q27JAInter8BankWave
    wsMax__Q27JAInter8BankWave:
        .skip 0x8
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JAInter::BankWave::setWsGroupNumber(long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JAInter::BankWave::setWsLoadStatus(long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
long JAInter::BankWave::getWsGroupNumber(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
long JAInter::BankWave::getWsLoadStatus(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ABE44
 * Size:	000008
 */
void JAInter::BankWave::setInitCallback(JAInter::BankWave::InitCallback)
{
	/*
	stw      r3, initCallback__Q27JAInter8BankWave@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ABE4C
 * Size:	000008
 */
void JAInter::BankWave::setFirstLoadCallback(JAInter::BankWave::LoadCallback)
{
	/*
	stw      r3, firstLoadCallback__Q27JAInter8BankWave@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ABE54
 * Size:	000008
 */
void JAInter::BankWave::setSecondLoadCallback(JAInter::BankWave::LoadCallback)
{
	/*
	stw      r3, secondLoadCallback__Q27JAInter8BankWave@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ABE5C
 * Size:	000148
 */
void JAInter::BankWave::init(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0x20
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	lwz      r0, wsMax__Q27JAInter8BankWave@sda21(r13)
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	slwi     r3, r0, 2
	bl       __nwa__FUlP7JKRHeapi
	lwz      r0, wsMax__Q27JAInter8BankWave@sda21(r13)
	li       r5, 0x20
	stw      r3, wsGroupNumber__Q27JAInter8BankWave@sda21(r13)
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	slwi     r3, r0, 2
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, wsLoadStatus__Q27JAInter8BankWave@sda21(r13)
	bl       getParamWavePath__18JAIGlobalParameterFv
	bl       setCurrentDir__16JASWaveArcLoaderFPCc
	li       r3, 0x100
	bl       init__14JASWaveBankMgrFi
	li       r3, 0
	bl       init__16JASWaveArcLoaderFP7JASHeap
	lwz      r0, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800ABF14
	li       r29, 0
	li       r27, 0
	mr       r28, r29
	li       r30, -1
	mr       r31, r29
	b        lbl_800ABF04

lbl_800ABED8:
	cmplwi   r4, 0
	beq      lbl_800ABEF8
	mr       r3, r27
	bl       registWaveBankWS__14JASWaveBankMgrFiPv
	lwz      r3, wsGroupNumber__Q27JAInter8BankWave@sda21(r13)
	stwx     r30, r3, r28
	lwz      r3, wsLoadStatus__Q27JAInter8BankWave@sda21(r13)
	stwx     r31, r3, r28

lbl_800ABEF8:
	addi     r29, r29, 0xc
	addi     r28, r28, 4
	addi     r27, r27, 1

lbl_800ABF04:
	lwz      r3, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
	lwzx     r4, r3, r29
	cmplwi   r4, 0
	bne      lbl_800ABED8

lbl_800ABF14:
	li       r3, 0x100
	bl       init__10JASBankMgrFi
	lwz      r0, initOnCodeBnk__Q27JAInter8BankWave@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800ABF90
	li       r27, 0
	li       r28, 0
	b        lbl_800ABF4C

lbl_800ABF34:
	cmplwi   r4, 0
	beq      lbl_800ABF44
	mr       r3, r27
	bl       registBankBNK__10JASBankMgrFiPv

lbl_800ABF44:
	addi     r28, r28, 0xc
	addi     r27, r27, 1

lbl_800ABF4C:
	lwz      r3, initOnCodeBnk__Q27JAInter8BankWave@sda21(r13)
	lwzx     r4, r3, r28
	cmplwi   r4, 0
	bne      lbl_800ABF34
	li       r29, 0
	mr       r28, r29
	b        lbl_800ABF7C

lbl_800ABF68:
	lwz      r4, 8(r3)
	mr       r3, r29
	bl       assignWaveBank__10JASBankMgrFii
	addi     r28, r28, 0xc
	addi     r29, r29, 1

lbl_800ABF7C:
	lwz      r0, initOnCodeBnk__Q27JAInter8BankWave@sda21(r13)
	add      r3, r0, r28
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_800ABF68

lbl_800ABF90:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JAInter::BankWave::readInitSoundData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ABFA4
 * Size:	000094
 */
void JAInter::BankWave::loadFirstStayWave(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r0, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AC020
	lbz      r0, flags__Q27JAInter8BankWave@sda21(r13)
	rlwinm.  r0, r0, 0x19, 0x1f, 0x1f
	bne      lbl_800AC020
	li       r30, 0
	li       r31, 0
	b        lbl_800ABFFC

lbl_800ABFDC:
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	bne      lbl_800ABFF4
	mr       r3, r30
	li       r4, 0
	bl       loadGroupWave__Q27JAInter8BankWaveFll

lbl_800ABFF4:
	addi     r31, r31, 0xc
	addi     r30, r30, 1

lbl_800ABFFC:
	lwz      r0, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
	add      r3, r0, r31
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_800ABFDC
	lbz      r0, flags__Q27JAInter8BankWave@sda21(r13)
	li       r3, 1
	rlwimi   r0, r3, 7, 0x18, 0x18
	stb      r0, flags__Q27JAInter8BankWave@sda21(r13)

lbl_800AC020:
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
 * Address:	800AC038
 * Size:	000094
 */
void JAInter::BankWave::loadSecondStayWave(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lbz      r0, flags__Q27JAInter8BankWave@sda21(r13)
	rlwinm.  r0, r0, 0x1a, 0x1f, 0x1f
	bne      lbl_800AC0B4
	lwz      r0, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AC0B4
	li       r30, 0
	li       r31, 0
	b        lbl_800AC090

lbl_800AC070:
	lwz      r0, 8(r3)
	cmplwi   r0, 1
	bne      lbl_800AC088
	mr       r3, r30
	li       r4, 0
	bl       loadGroupWave__Q27JAInter8BankWaveFll

lbl_800AC088:
	addi     r31, r31, 0xc
	addi     r30, r30, 1

lbl_800AC090:
	lwz      r0, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
	add      r3, r0, r31
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_800AC070
	lbz      r0, flags__Q27JAInter8BankWave@sda21(r13)
	li       r3, 1
	rlwimi   r0, r3, 6, 0x19, 0x19
	stb      r0, flags__Q27JAInter8BankWave@sda21(r13)

lbl_800AC0B4:
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
 * Size:	00004C
 */
void JAInter::BankWave::setSceneSetFinishCallback(JAInter::BankWave::SceneSetFinishCallback)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC0CC
 * Size:	000018
 */
void JAInter::BankWave::finishSceneSet(unsigned long)
{
	/*
	stw      r3, SceneSetFlag__Q27JAInter8BankWave@sda21(r13)
	rlwinm   r0, r3, 0x12, 0xe, 0x1d
	lwz      r3, wsLoadStatus__Q27JAInter8BankWave@sda21(r13)
	li       r4, 2
	stwx     r4, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void JAInter::BankWave::loadSceneWave(long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JAInter::BankWave::checkSceneWaveOnMemory(long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC0E4
 * Size:	000074
 */
void JAInter::BankWave::loadGroupWave(long, long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	mr       r30, r4
	bl       loadWave__14JASWaveBankMgrFiiP7JASHeap
	li       r0, -1
	lis      r3, finishSceneSet__Q27JAInter8BankWaveFUl@ha
	stw      r0, SceneSetFlag__Q27JAInter8BankWave@sda21(r13)
	slwi     r0, r31, 0x10
	lwz      r4, wsLoadStatus__Q27JAInter8BankWave@sda21(r13)
	slwi     r31, r31, 2
	li       r6, 1
	addi     r5, r3, finishSceneSet__Q27JAInter8BankWaveFUl@l
	stwx     r6, r4, r31
	add      r3, r0, r30
	li       r4, 0
	bl       checkPassDvdT__6JASDvdFUlPUlPFUl_v
	lwz      r3, wsGroupNumber__Q27JAInter8BankWave@sda21(r13)
	stwx     r30, r3, r31
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
 * Size:	000010
 */
long JAInter::BankWave::getWaveGroupNumber(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
long JAInter::BankWave::getWaveLoadStatus(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JAInter::BankWave::checkAllWaveLoadStatus(void)
{
	// UNUSED FUNCTION
}
