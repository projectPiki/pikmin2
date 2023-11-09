#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASDvd.h"
#include "JSystem/JAudio/JAS/JASWave.h"
#include "types.h"
#include "JSystem/JAudio/JAI/JAInter/BankWave.h"

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

JAInter::BankWave::TCodeBnk* JAInter::BankWave::initOnCodeBnk;
JAInter::BankWave::TCodeWS* JAInter::BankWave::initOnCodeWs;
long* JAInter::BankWave::wsGroupNumber;
long* JAInter::BankWave::wsLoadStatus;
int JAInter::BankWave::wsMax;

JAInter::BankWave::Flags JAInter::BankWave::flags                     = { 0 };
int JAInter::BankWave::SceneSetFlag                                   = -1;
JAInter::BankWave::InitCallback JAInter::BankWave::initCallback       = init;
JAInter::BankWave::LoadCallback JAInter::BankWave::firstLoadCallback  = loadFirstStayWave;
JAInter::BankWave::LoadCallback JAInter::BankWave::secondLoadCallback = loadSecondStayWave;

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JAInter::BankWave::setWsGroupNumber(long index, long groupNumber)
{
	// UNUSED FUNCTION
	wsGroupNumber[index] = groupNumber;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JAInter::BankWave::setWsLoadStatus(long index, long status)
{
	// UNUSED FUNCTION
	wsLoadStatus[index] = status;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
long JAInter::BankWave::getWsGroupNumber(long index)
{
	// UNUSED FUNCTION
	return wsGroupNumber[index];
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
long JAInter::BankWave::getWsLoadStatus(long index)
{
	// UNUSED FUNCTION
	return wsLoadStatus[index];
}

/*
 * --INFO--
 * Address:	800ABE44
 * Size:	000008
 */
void JAInter::BankWave::setInitCallback(JAInter::BankWave::InitCallback callback) { initCallback = callback; }

/*
 * --INFO--
 * Address:	800ABE4C
 * Size:	000008
 */
void JAInter::BankWave::setFirstLoadCallback(JAInter::BankWave::LoadCallback callback) { firstLoadCallback = callback; }

/*
 * --INFO--
 * Address:	800ABE54
 * Size:	000008
 */
void JAInter::BankWave::setSecondLoadCallback(JAInter::BankWave::LoadCallback callback) { secondLoadCallback = callback; }

/*
 * --INFO--
 * Address:	800ABE5C
 * Size:	000148
 */
void JAInter::BankWave::init()
{
	wsGroupNumber = new (JAIBasic::msCurrentHeap, 0x20) long[wsMax];
	wsLoadStatus  = new (JAIBasic::msCurrentHeap, 0x20) long[wsMax];
	JASWaveArcLoader::setCurrentDir(JAIGlobalParameter::getParamWavePath());
	JASWaveBankMgr::init(0x100);
	JASWaveArcLoader::init(nullptr);
	if (initOnCodeWs != nullptr) {
		for (long i = 0; *initOnCodeWs[i] != 0; i++) {
			if (initOnCodeWs[i] != 0) {
				JASWaveBankMgr::registWaveBankWS(i, initOnCodeWs[i]);
				setWsGroupNumber(i, -1);
				setWsLoadStatus(i, 0);
			}
		}
	}
	JASBankMgr::init(0x100);
	if (initOnCodeBnk != nullptr) {
		for (long i = 0; initOnCodeBnk[i][0] != 0; i++) {
			if (initOnCodeBnk[i][0] != 0) {
				JASBankMgr::registBankBNK(i, &initOnCodeBnk[i]);
			}
		}
		for (long i = 0; initOnCodeBnk[i][0] != 0; i++) {
			JASBankMgr::assignWaveBank(i, initOnCodeBnk[i][2]);
		}
	}
	// if (initOnCodeBnk != nullptr) {
	// 	for (int i = 0; initOnCodeBnk[i]._00 != nullptr; i++) {
	// 		if (initOnCodeBnk[i]._00 != nullptr) {
	// 			JASBankMgr::registBankBNK(i, initOnCodeBnk + i);
	// 		}
	// 	}
	// 	for (int i = 0; initOnCodeBnk[i]._00 != nullptr; i++) {
	// 		JASBankMgr::assignWaveBank(i, initOnCodeBnk[i]._08);
	// 	}
	// }
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
void JAInter::BankWave::readInitSoundData()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ABFA4
 * Size:	000094
 */
void JAInter::BankWave::loadFirstStayWave()
{
	if (initOnCodeWs != nullptr && !flags.asStruct._7) {
		for (int i = 0; initOnCodeWs[i][0] != nullptr; i++) {
			if (initOnCodeWs[i][2] == 0) {
				loadGroupWave(i, 0);
			}
		}
		flags.asStruct._7 = true;
	}
}

/*
 * --INFO--
 * Address:	800AC038
 * Size:	000094
 */
void JAInter::BankWave::loadSecondStayWave()
{
	if (!flags.asStruct._6 && initOnCodeWs != nullptr) {
		for (int i = 0; initOnCodeWs[i][0] != 0; i++) {
			if (initOnCodeWs[i][2] == 1) {
				loadGroupWave(i, 0);
			}
		}
		flags.asStruct._6 = true;
	}
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
void JAInter::BankWave::finishSceneSet(u32 flag)
{
	SceneSetFlag               = flag;
	wsLoadStatus[flag >> 0x10] = 2;
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
void JAInter::BankWave::loadGroupWave(long bankIndex, long arcIndex)
{
	JASWaveBankMgr::loadWave(bankIndex, arcIndex, nullptr);
	SceneSetFlag            = -1;
	wsLoadStatus[bankIndex] = 1;
	long v1                 = bankIndex * 0x10000;
	JASDvd::checkPassDvdT(v1 + arcIndex, nullptr, finishSceneSet);
	wsGroupNumber[bankIndex] = arcIndex;
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
void JAInter::BankWave::checkAllWaveLoadStatus()
{
	// UNUSED FUNCTION
}
