#include "string.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/BankWave.h"
#include "JSystem/JAudio/JAI/JAInter/InitData.h"
#include "JSystem/JAudio/JAI/JAInter/Fx.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAIStream.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "Dolphin/stl.h"
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

u32* JAInter::InitData::aafPointer;
JAInter::InitData::InitCallback JAInter::InitData::wsInitCallback  = initWsList;
JAInter::InitData::InitCallback JAInter::InitData::bnkInitCallback = initBnkList;

/**
 * @note Address: 0x800ADBA4
 * @note Size: 0x8
 */
void JAInter::InitData::setWsInitCallback(void (*callback)(u32*)) { wsInitCallback = callback; }

/**
 * @note Address: 0x800ADBAC
 * @note Size: 0x8
 */
void JAInter::InitData::setBnkInitCallback(void (*callback)(u32*)) { bnkInitCallback = callback; }

/**
 * @note Address: 0x800ADBB4
 * @note Size: 0xE4
 */
BOOL JAInter::InitData::checkInitDataFile()
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
	loadTmpDVDFile(JAIGlobalParameter::getParamInitDataFileName(), (u8**)&aafPointer);
	if (aafPointer != nullptr) {
		checkInitDataOnMemory();
		deleteTmpDVDFile((u8**)&aafPointer);
		return TRUE;
	}
	return FALSE;
}

/**
 * @note Address: 0x800ADC98
 * @note Size: 0x264
 */
void JAInter::InitData::checkInitDataOnMemory()
{
	u32 r30 = 0;
	u32 r29 = true;
	u8 r31;
	u8* temp;
	while (r29) {
		switch (aafPointer[r30++]) {
		case 0:
			r29 = false;
			break;
		case 1: {
			u8* var1 = (u8*)aafPointer + aafPointer[r30++];
			u32 var2 = aafPointer[r30++];
			SoundTable::init(transInitDataFile(var1, var2), var2);
			r30 += 1;
			break;
		}
		case 2:
			bnkInitCallback(&r30);
			break;
		case 3:
			wsInitCallback(&r30);
			break;
		case 4:
			r30 += 3;
			break;
		case 5:
			StreamMgr::initOnCodeStrm        = transInitDataFile((u8*)(aafPointer + r30), 8);
			*(u8**)StreamMgr::initOnCodeStrm = transInitDataFile((u8*)aafPointer + aafPointer[r30], aafPointer[r30 + 1]);
			StreamMgr::streamList            = *(u16**)StreamMgr::initOnCodeStrm;
			r30 += 3;
			break;
		case 6: {
			u32* r28 = (u32*)transInitDataFile((u8*)aafPointer + aafPointer[r30], aafPointer[r30 + 1]);
			JAIGlobalParameter::setParamSoundSceneMax(*r28);
			JAIBasic::getInterface()->_1C = (u8**)(r28 + 1);
			for (int i = 0; i < JAIGlobalParameter::getParamSoundSceneMax(); i++) {
				JAIBasic::getInterface()->_1C[i] += (u32)r28;
			}
			r30 += 3;
			break;
		}
		case 7:
			Fx::initOnCodeFxScene = (Fx::Init*)transInitDataFile((u8*)aafPointer + aafPointer[r30], aafPointer[r30 + 1]);
			r30 += 3;
			break;
		case 8: {
			u8* tmp = transInitDataFile((u8*)aafPointer + aafPointer[r30], (aafPointer[r30 + 1] & 0xFFF0) + 16); // aaaaaaaaaaaaa
			JAIBasic::getInterface()->_18 = tmp;
			r30 += 3;
			break;
		}
		default:
			while (aafPointer[r30++]) { }
			break;
		}
	}
	BankWave::initCallback();
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

/**
 * @note Address: 0x800ADEFC
 * @note Size: 0xCC
 */
void JAInter::InitData::initBnkList(u32* p1)
{
	u32 count  = 0;
	u8 val31   = 0;
	int offset = *p1;
	u8* start  = (u8*)&(aafPointer[offset]);
	for (; aafPointer[offset + count] != 0; count += 3) { }
	BankWave::initOnCodeBnk = (BankWave::TCodeBnk*)transInitDataFile(start, (count / 3) * 0xC + 4);
	while ((aafPointer)[*p1] != 0) {
		BankWave::initOnCodeBnk[val31].mBankData
		    = (int*)((u32) reinterpret_cast<int*>(aafPointer) + (u32)BankWave::initOnCodeBnk[val31].mBankData);
		*p1 += 3;
		val31++;
	}
	*p1 += 1;
}

/**
 * @note Address: 0x800ADFC8
 * @note Size: 0xD8
 */
void JAInter::InitData::initWsList(u32* data)
{
	u32 waveformCount = 0;
	u8 waveformIndex  = 0;
	int offset        = *data;
	u8* start         = (u8*)&(aafPointer[offset]);

	for (; aafPointer[offset + waveformCount] != 0; waveformCount += 3) { }

	BankWave::initOnCodeWs = (BankWave::TCodeWS*)transInitDataFile(start, (waveformCount / 3) * 0xC + 4);

	while ((aafPointer)[*data] != 0) {
		BankWave::initOnCodeWs[waveformIndex]._00
		    = (int*)((u32) reinterpret_cast<int*>(aafPointer) + (u32)BankWave::initOnCodeWs[waveformIndex]._00);
		BankWave::wsMax++;
		*data += 3;
		waveformIndex++;
	}

	*data += 1;
}
