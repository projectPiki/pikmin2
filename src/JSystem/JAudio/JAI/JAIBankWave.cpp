#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASDvd.h"
#include "JSystem/JAudio/JAS/JASWave.h"
#include "types.h"
#include "JSystem/JAudio/JAI/JAInter/BankWave.h"

JAInter::BankWave::TCodeBnk* JAInter::BankWave::initOnCodeBnk;
JAInter::BankWave::TCodeWS* JAInter::BankWave::initOnCodeWs;
s32* JAInter::BankWave::wsGroupNumber;
s32* JAInter::BankWave::wsLoadStatus;
int JAInter::BankWave::wsMax;

JAInter::BankWave::Flags JAInter::BankWave::flags                     = { 0 };
int JAInter::BankWave::SceneSetFlag                                   = -1;
JAInter::BankWave::InitCallback JAInter::BankWave::initCallback       = init;
JAInter::BankWave::LoadCallback JAInter::BankWave::firstLoadCallback  = loadFirstStayWave;
JAInter::BankWave::LoadCallback JAInter::BankWave::secondLoadCallback = loadSecondStayWave;

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void JAInter::BankWave::setWsGroupNumber(s32 index, s32 groupNumber)
{
	// UNUSED FUNCTION
	wsGroupNumber[index] = groupNumber;
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void JAInter::BankWave::setWsLoadStatus(s32 index, s32 status)
{
	// UNUSED FUNCTION
	wsLoadStatus[index] = status;
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
s32 JAInter::BankWave::getWsGroupNumber(s32 index)
{
	// UNUSED FUNCTION
	return wsGroupNumber[index];
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
s32 JAInter::BankWave::getWsLoadStatus(s32 index)
{
	// UNUSED FUNCTION
	return wsLoadStatus[index];
}

/**
 * @note Address: 0x800ABE44
 * @note Size: 0x8
 */
void JAInter::BankWave::setInitCallback(JAInter::BankWave::InitCallback callback) { initCallback = callback; }

/**
 * @note Address: 0x800ABE4C
 * @note Size: 0x8
 */
void JAInter::BankWave::setFirstLoadCallback(JAInter::BankWave::LoadCallback callback) { firstLoadCallback = callback; }

/**
 * @note Address: 0x800ABE54
 * @note Size: 0x8
 */
void JAInter::BankWave::setSecondLoadCallback(JAInter::BankWave::LoadCallback callback) { secondLoadCallback = callback; }

/**
 * @note Address: 0x800ABE5C
 * @note Size: 0x148
 */
void JAInter::BankWave::init()
{
	wsGroupNumber = new (JAIGetCurrentHeap(), 0x20) s32[wsMax];
	wsLoadStatus  = new (JAIGetCurrentHeap(), 0x20) s32[wsMax];

	JASWaveArcLoader::setCurrentDir(JAIGlobalParameter::getParamWavePath());
	JASWaveBankMgr::init(256);
	JASWaveArcLoader::init(nullptr);
	if (initOnCodeWs) {
		for (int i = 0; initOnCodeWs[i]._00; i++) {
			if (initOnCodeWs[i]._00) {
				JASWaveBankMgr::registWaveBankWS(i, initOnCodeWs[i]._00);
				setWsGroupNumber(i, -1);
				setWsLoadStatus(i, 0);
			}
		}
	}

	JASBankMgr::init(256);
	if (initOnCodeBnk) {
		int i;
		for (i = 0; initOnCodeBnk[i].mBankData; i++) {
			if (initOnCodeBnk[i].mBankData) {
				JASBankMgr::registBankBNK(i, initOnCodeBnk[i].mBankData);
			}
		}
		for (i = 0; initOnCodeBnk[i].mBankData; i++) {
			JASBankMgr::assignWaveBank(i, initOnCodeBnk[i].mWaveBankId);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void JAInter::BankWave::readInitSoundData()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800ABFA4
 * @note Size: 0x94
 */
void JAInter::BankWave::loadFirstStayWave()
{
	if (initOnCodeWs != nullptr && !flags.asStruct._7) {
		for (int i = 0; initOnCodeWs[i]._00 != nullptr; i++) {
			if (initOnCodeWs[i]._08 == 0) {
				loadGroupWave(i, 0);
			}
		}
		flags.asStruct._7 = true;
	}
}

/**
 * @note Address: 0x800AC038
 * @note Size: 0x94
 */
void JAInter::BankWave::loadSecondStayWave()
{
	if (!flags.asStruct._6 && initOnCodeWs != nullptr) {
		for (int i = 0; initOnCodeWs[i]._00 != 0; i++) {
			if (initOnCodeWs[i]._08 == 1) {
				loadGroupWave(i, 0);
			}
		}
		flags.asStruct._6 = true;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void JAInter::BankWave::setSceneSetFinishCallback(JAInter::BankWave::SceneSetFinishCallback)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800AC0CC
 * @note Size: 0x18
 */
void JAInter::BankWave::finishSceneSet(u32 flag)
{
	SceneSetFlag               = flag;
	wsLoadStatus[flag >> 0x10] = 2;
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void JAInter::BankWave::loadSceneWave(s32, s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void JAInter::BankWave::checkSceneWaveOnMemory(s32, s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800AC0E4
 * @note Size: 0x74
 */
void JAInter::BankWave::loadGroupWave(s32 bankIndex, s32 arcIndex)
{
	JASWaveBankMgr::loadWave(bankIndex, arcIndex, nullptr);
	SceneSetFlag            = -1;
	wsLoadStatus[bankIndex] = 1;
	s32 v1                  = bankIndex * 0x10000;
	JASDvd::checkPassDvdT(v1 + arcIndex, nullptr, finishSceneSet);
	wsGroupNumber[bankIndex] = arcIndex;
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
s32 JAInter::BankWave::getWaveGroupNumber(s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
s32 JAInter::BankWave::getWaveLoadStatus(s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void JAInter::BankWave::checkAllWaveLoadStatus()
{
	// UNUSED FUNCTION
}
