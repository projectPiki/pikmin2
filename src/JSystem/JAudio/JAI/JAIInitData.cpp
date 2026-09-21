#include "string.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/BankWave.h"
#include "JSystem/JAudio/JAI/JAInter/InitData.h"
#include "JSystem/JAudio/JAI/JAInter/Fx.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAIStream.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "Dolphin/stl.h"

u32* JAInter::InitData::aafPointer;
JAInter::InitData::InitCallback JAInter::InitData::wsInitCallback  = initWsList;
JAInter::InitData::InitCallback JAInter::InitData::bnkInitCallback = initBnkList;

/**
 * @note Address: 0x800ADBA4
 * @note Size: 0x8
 */
void JAInter::InitData::setWsInitCallback(void (*callback)(u32*))
{
	wsInitCallback = callback;
}

/**
 * @note Address: 0x800ADBAC
 * @note Size: 0x8
 */
void JAInter::InitData::setBnkInitCallback(void (*callback)(u32*))
{
	bnkInitCallback = callback;
}

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
			u8* file = (u8*)aafPointer;
			file += aafPointer[r30];
			u8* tmp                               = transInitDataFile(file, (aafPointer[r30 + 1] & 0xFFF0) + 16);
			JAIBasic::getInterface()->mRawDataPtr = tmp;
			r30 += 3;
			break;
		}
		default:
			while (aafPointer[r30++]) { }
			break;
		}
	}
	BankWave::initCallback();
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
