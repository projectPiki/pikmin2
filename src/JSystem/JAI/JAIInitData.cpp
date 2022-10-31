#include "Dolphin/stl.h"
#include "Dolphin/string.h"
#include "JSystem/JAI/JAInter.h"
#include "JSystem/JAI/JAInter/InitData.h"
#include "JSystem/JAI/JAIGlobalParameter.h"
#include "JSystem/JAS/JASHeap.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804A62A0
    lbl_804A62A0:
        .4byte lbl_800ADCFC
        .4byte lbl_800ADD04
        .4byte lbl_800ADD48
        .4byte lbl_800ADD5C
        .4byte lbl_800ADD70
        .4byte lbl_800ADD7C
        .4byte lbl_800ADDD4
        .4byte lbl_800ADE48
        .4byte lbl_800ADE74
        .4byte 0x00000000

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global wsInitCallback__Q27JAInter8InitData
    wsInitCallback__Q27JAInter8InitData:
        .4byte initWsList__Q27JAInter8InitDataFPUl
    .global bnkInitCallback__Q27JAInter8InitData
    bnkInitCallback__Q27JAInter8InitData:
        .4byte initBnkList__Q27JAInter8InitDataFPUl

    .section .sbss # 0x80514D80 - 0x80516360
    .global aafPointer__Q27JAInter8InitData
    aafPointer__Q27JAInter8InitData:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516F40
    lbl_80516F40:
        .asciz "%s%s%c"
        .skip 1
*/

/*
 * --INFO--
 * Address:	800ADBA4
 * Size:	000008
 */
void JAInter::InitData::setWsInitCallback(void (*callback)(unsigned long*)) { wsInitCallback = callback; }

/*
 * --INFO--
 * Address:	800ADBAC
 * Size:	000008
 */
void JAInter::InitData::setBnkInitCallback(void (*callback)(unsigned long*)) { bnkInitCallback = callback; }

/*
 * --INFO--
 * Address:	800ADBB4
 * Size:	0000E4
 */
BOOL JAInter::InitData::checkInitDataFile(void)
{
	if (SystemInterface::checkFileExsistence(JAIGlobalParameter::getParamInitDataFileName()) == FALSE) {
		char* buffer = (char*)JASDram->alloc(
		    strlen(JAIGlobalParameter::getParamAudioResPath()) + strlen(JAIGlobalParameter::getParamInitDataFileName()) + 1, 0);
		sprintf(buffer, "%s%s%c", JAIGlobalParameter::getParamAudioResPath(), JAIGlobalParameter::getParamInitDataFileName(), 0);
		JAIGlobalParameter::setParamInitDataFileName(buffer);
		if (SystemInterface::checkFileExsistence(JAIGlobalParameter::getParamInitDataFileName()) == 0) {
			return FALSE;
		}
	}
	loadTmpDVDFile(JAIGlobalParameter::getParamInitDataFileName(), &aafPointer);
	if (aafPointer != nullptr) {
		checkInitDataOnMemory();
		deleteTmpDVDFile(&aafPointer);
		return TRUE;
	}
	return FALSE;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	bl       getParamInitDataFileName__18JAIGlobalParameterFv
	bl       checkFileExsistence__Q27JAInter15SystemInterfaceFPc
	cmpwi    r3, 0
	bne      lbl_800ADC50
	bl       getParamInitDataFileName__18JAIGlobalParameterFv
	bl       strlen
	mr       r31, r3
	bl       getParamAudioResPath__18JAIGlobalParameterFv
	bl       strlen
	mr       r4, r3
	addi     r0, r31, 1
	lwz      r3, JASDram@sda21(r13)
	add      r4, r4, r0
	li       r5, 0
	bl       alloc__7JKRHeapFUli
	mr       r30, r3
	bl       getParamInitDataFileName__18JAIGlobalParameterFv
	mr       r31, r3
	bl       getParamAudioResPath__18JAIGlobalParameterFv
	mr       r5, r3
	mr       r3, r30
	mr       r6, r31
	addi     r4, r2, lbl_80516F40@sda21
	li       r7, 0
	crclr    6
	bl       sprintf
	mr       r3, r30
	bl       setParamInitDataFileName__18JAIGlobalParameterFPc
	bl       getParamInitDataFileName__18JAIGlobalParameterFv
	bl       checkFileExsistence__Q27JAInter15SystemInterfaceFPc
	cmpwi    r3, 0
	bne      lbl_800ADC50
	li       r3, 0
	b        lbl_800ADC80

lbl_800ADC50:
	bl       getParamInitDataFileName__18JAIGlobalParameterFv
	addi     r4, r13, aafPointer__Q27JAInter8InitData@sda21
	bl       loadTmpDVDFile__7JAInterFPcPPUc
	lwz      r0, aafPointer__Q27JAInter8InitData@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800ADC7C
	bl       checkInitDataOnMemory__Q27JAInter8InitDataFv
	addi     r3, r13, aafPointer__Q27JAInter8InitData@sda21
	bl       deleteTmpDVDFile__7JAInterFPPUc
	li       r3, 1
	b        lbl_800ADC80

lbl_800ADC7C:
	li       r3, 0

lbl_800ADC80:
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
 * Address:	800ADC98
 * Size:	000264
 */
void JAInter::InitData::checkInitDataOnMemory(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	li       r31, 1
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	stw      r0, 8(r1)
	b        lbl_800ADEC8

lbl_800ADCC4:
	lwz      r3, 8(r1)
	lwz      r5, aafPointer__Q27JAInter8InitData@sda21(r13)
	addi     r4, r3, 1
	slwi     r0, r3, 2
	stw      r4, 8(r1)
	lwzx     r0, r5, r0
	cmplwi   r0, 8
	bgt      lbl_800ADEAC
	lis      r3, lbl_804A62A0@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A62A0@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_800ADCFC

lbl_800ADCFC:
	li       r31, 0
	b        lbl_800ADEC8
	.global  lbl_800ADD04

lbl_800ADD04:
	addi     r6, r4, 1
	slwi     r4, r4, 2
	stw      r6, 8(r1)
	addi     r3, r6, 1
	slwi     r0, r6, 2
	lwzx     r4, r5, r4
	stw      r3, 8(r1)
	add      r3, r5, r4
	lwzx     r29, r5, r0
	mr       r4, r29
	bl       transInitDataFile__7JAInterFPUcUl
	mr       r4, r29
	bl       init__Q27JAInter10SoundTableFPUcUl
	lwz      r3, 8(r1)
	addi     r0, r3, 1
	stw      r0, 8(r1)
	b        lbl_800ADEC8
	.global  lbl_800ADD48

lbl_800ADD48:
	lwz      r12, bnkInitCallback__Q27JAInter8InitData@sda21(r13)
	addi     r3, r1, 8
	mtctr    r12
	bctrl
	b        lbl_800ADEC8
	.global  lbl_800ADD5C

lbl_800ADD5C:
	lwz      r12, wsInitCallback__Q27JAInter8InitData@sda21(r13)
	addi     r3, r1, 8
	mtctr    r12
	bctrl
	b        lbl_800ADEC8
	.global  lbl_800ADD70

lbl_800ADD70:
	addi     r0, r4, 3
	stw      r0, 8(r1)
	b        lbl_800ADEC8
	.global  lbl_800ADD7C

lbl_800ADD7C:
	slwi     r0, r4, 2
	li       r4, 8
	add      r3, r5, r0
	bl       transInitDataFile__7JAInterFPUcUl
	lwz      r0, 8(r1)
	lwz      r5, aafPointer__Q27JAInter8InitData@sda21(r13)
	slwi     r0, r0, 2
	stw      r3, initOnCodeStrm__Q27JAInter9StreamMgr@sda21(r13)
	add      r3, r5, r0
	lwz      r0, 0(r3)
	lwz      r4, 4(r3)
	add      r3, r5, r0
	bl       transInitDataFile__7JAInterFPUcUl
	lwz      r4, initOnCodeStrm__Q27JAInter9StreamMgr@sda21(r13)
	stw      r3, 0(r4)
	lwz      r4, initOnCodeStrm__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r3, 8(r1)
	lwz      r4, 0(r4)
	addi     r0, r3, 3
	stw      r4, streamList__Q27JAInter9StreamMgr@sda21(r13)
	stw      r0, 8(r1)
	b        lbl_800ADEC8
	.global  lbl_800ADDD4

lbl_800ADDD4:
	slwi     r0, r4, 2
	add      r3, r5, r0
	lwz      r0, 0(r3)
	lwz      r4, 4(r3)
	add      r3, r5, r0
	bl       transInitDataFile__7JAInterFPUcUl
	mr       r30, r3
	lwz      r3, 0(r3)
	bl       setParamSoundSceneMax__18JAIGlobalParameterFUl
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	addi     r0, r30, 4
	li       r28, 0
	li       r29, 0
	stw      r0, 0x1c(r3)
	b        lbl_800ADE2C

lbl_800ADE10:
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	addi     r28, r28, 1
	lwz      r3, 0x1c(r3)
	lwzx     r0, r3, r29
	add      r0, r0, r30
	stwx     r0, r3, r29
	addi     r29, r29, 4

lbl_800ADE2C:
	bl       getParamSoundSceneMax__18JAIGlobalParameterFv
	cmplw    r28, r3
	blt      lbl_800ADE10
	lwz      r3, 8(r1)
	addi     r0, r3, 3
	stw      r0, 8(r1)
	b        lbl_800ADEC8
	.global  lbl_800ADE48

lbl_800ADE48:
	slwi     r0, r4, 2
	add      r3, r5, r0
	lwz      r0, 0(r3)
	lwz      r4, 4(r3)
	add      r3, r5, r0
	bl       transInitDataFile__7JAInterFPUcUl
	lwz      r4, 8(r1)
	stw      r3, initOnCodeFxScene__Q27JAInter2Fx@sda21(r13)
	addi     r0, r4, 3
	stw      r0, 8(r1)
	b        lbl_800ADEC8
	.global  lbl_800ADE74

lbl_800ADE74:
	slwi     r0, r4, 2
	add      r4, r5, r0
	lwz      r0, 4(r4)
	lwz      r3, 0(r4)
	rlwinm   r4, r0, 0, 0x10, 0x1b
	add      r3, r5, r3
	addi     r4, r4, 0x10
	bl       transInitDataFile__7JAInterFPUcUl
	lwz      r4, msBasic__8JAIBasic@sda21(r13)
	stw      r3, 0x18(r4)
	lwz      r3, 8(r1)
	addi     r0, r3, 3
	stw      r0, 8(r1)
	b        lbl_800ADEC8

lbl_800ADEAC:
	lwz      r4, 8(r1)
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 8(r1)
	lwzx     r0, r5, r0
	cmplwi   r0, 0
	bne      lbl_800ADEAC

lbl_800ADEC8:
	cmplwi   r31, 0
	bne      lbl_800ADCC4
	lwz      r12, initCallback__Q27JAInter8BankWave@sda21(r13)
	mtctr    r12
	bctrl
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
 * Address:	800ADEFC
 * Size:	0000CC
 */
void JAInter::InitData::initBnkList(unsigned long*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0(r3)
	lwz      r5, aafPointer__Q27JAInter8InitData@sda21(r13)
	slwi     r4, r0, 2
	add      r3, r5, r4
	b        lbl_800ADF38

lbl_800ADF30:
	addi     r4, r4, 0xc
	addi     r6, r6, 3

lbl_800ADF38:
	lwzx     r0, r5, r4
	cmplwi   r0, 0
	bne      lbl_800ADF30
	lis      r4, 0xAAAAAAAB@ha
	addi     r0, r4, 0xAAAAAAAB@l
	mulhwu   r0, r0, r6
	srwi     r0, r0, 1
	mulli    r4, r0, 0xc
	addi     r4, r4, 4
	bl       transInitDataFile__7JAInterFPUcUl
	stw      r3, initOnCodeBnk__Q27JAInter8BankWave@sda21(r13)
	b        lbl_800ADF90

lbl_800ADF68:
	clrlwi   r0, r31, 0x18
	lwz      r4, initOnCodeBnk__Q27JAInter8BankWave@sda21(r13)
	mulli    r3, r0, 0xc
	addi     r31, r31, 1
	lwzx     r0, r4, r3
	add      r0, r5, r0
	stwx     r0, r4, r3
	lwz      r3, 0(r30)
	addi     r0, r3, 3
	stw      r0, 0(r30)

lbl_800ADF90:
	lwz      r3, 0(r30)
	lwz      r5, aafPointer__Q27JAInter8InitData@sda21(r13)
	slwi     r0, r3, 2
	lwzx     r0, r5, r0
	cmplwi   r0, 0
	bne      lbl_800ADF68
	addi     r0, r3, 1
	stw      r0, 0(r30)
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
 * Address:	800ADFC8
 * Size:	0000D8
 */
void JAInter::InitData::initWsList(unsigned long*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0(r3)
	lwz      r5, aafPointer__Q27JAInter8InitData@sda21(r13)
	slwi     r4, r0, 2
	add      r3, r5, r4
	b        lbl_800AE004

lbl_800ADFFC:
	addi     r4, r4, 0xc
	addi     r6, r6, 3

lbl_800AE004:
	lwzx     r0, r5, r4
	cmplwi   r0, 0
	bne      lbl_800ADFFC
	lis      r4, 0xAAAAAAAB@ha
	addi     r0, r4, 0xAAAAAAAB@l
	mulhwu   r0, r0, r6
	srwi     r0, r0, 1
	mulli    r4, r0, 0xc
	addi     r4, r4, 4
	bl       transInitDataFile__7JAInterFPUcUl
	stw      r3, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
	b        lbl_800AE068

lbl_800AE034:
	clrlwi   r0, r31, 0x18
	lwz      r4, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
	mulli    r3, r0, 0xc
	addi     r31, r31, 1
	lwzx     r0, r4, r3
	add      r0, r5, r0
	stwx     r0, r4, r3
	lwz      r3, wsMax__Q27JAInter8BankWave@sda21(r13)
	addi     r0, r3, 1
	stw      r0, wsMax__Q27JAInter8BankWave@sda21(r13)
	lwz      r3, 0(r30)
	addi     r0, r3, 3
	stw      r0, 0(r30)

lbl_800AE068:
	lwz      r3, 0(r30)
	lwz      r5, aafPointer__Q27JAInter8InitData@sda21(r13)
	slwi     r0, r3, 2
	lwzx     r0, r5, r0
	cmplwi   r0, 0
	bne      lbl_800AE034
	addi     r0, r3, 1
	stw      r0, 0(r30)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
