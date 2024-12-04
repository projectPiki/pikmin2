#include "PSSystem/BankMgr.h"
#include "PSSystem/WaveScene.h"
#include "JSystem/JAudio/JAI/JAInter/BankWave.h"
#include "JSystem/JAudio/JAI/JAInter/InitData.h"
#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASWave.h"
#include "JSystem/JAudio/JAS/JASDvd.h"

namespace PSSystem {

BankMgr* BankMgr::sBankMgr;

/**
 * @note Address: 0x8033D738
 * @note Size: 0x64
 */
BankMgr* BankMgr::createInstance()
{
	P2ASSERTLINE(14, !sBankMgr);
	BankMgr* bankMgr = new BankMgr;
	sBankMgr         = bankMgr;
	return bankMgr;
}

/**
 * @note Address: 0x8033D79C
 * @note Size: 0x58
 */
BankMgr::BankMgr()
{
	mInstBankNum      = 0;
	mBankData         = nullptr;
	mWaveBankNum      = 0;
	mWsData           = nullptr;
	mIsPreInitialized = false;
	mIsInitialized    = false;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C8
 */
void BankMgr::setBankData(u32* data)
{
	u32* aafPtr = (u32*)JAInter::InitData::aafPointer;
	P2ASSERTLINE(56, aafPtr);
	P2ASSERTLINE(57, !mBankData);

	u32 dataStart = data[0];
	u32 count     = 0;
	u8* aafData   = (u8*)&aafPtr[dataStart];
	while (aafPtr[dataStart + count]) {
		count += 3;
	}
	count      = (count / 3) * 12 + 4;
	u8* wsdata = new (JASDram, 0x20) u8[count];
	if (wsdata) {
		for (u32 i = 0; i < count; i++) {
			(wsdata)[i] = (aafData)[i];
		}
	}
	mBankData = (PSInstData*)wsdata;

	u8 banks = 0;
	for (; *(u32*)aafData;) {
		aafData += 12;
		dataStart += 3;
		mBankData[banks]._00 = (int)aafPtr + mBankData[banks]._00;
		banks++;
	}
	mInstBankNum = banks;
	*data        = dataStart + 1;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C8
 */
void BankMgr::setWsData(u32* data)
{
	u32* aafPtr = (u32*)JAInter::InitData::aafPointer;
	P2ASSERTLINE(89, aafPtr);
	P2ASSERTLINE(90, !mWsData);

	u32 dataStart = data[0];
	u32 count     = 0;
	u8* aafData   = (u8*)&aafPtr[dataStart];
	while (aafPtr[dataStart + count]) {
		count += 3;
	}
	count      = (count / 3) * 12 + 4;
	u8* wsdata = new (JASDram, 0x20) u8[count];
	if (wsdata) {
		for (u32 i = 0; i < count; i++) {
			(wsdata)[i] = (aafData)[i];
		}
	}
	mWsData = (PSInstData*)wsdata;

	u8 banks = 0;
	for (; *(u32*)aafData;) {
		aafData += 12;
		dataStart += 3;
		mWsData[banks]._00 = (int)aafPtr + mWsData[banks]._00;
		banks++;
	}
	mWaveBankNum = banks;
	*data        = dataStart + 1;
}

/**
 * @note Address: 0x8033D7F4
 * @note Size: 0x94
 */
void BankMgr::preInit()
{
	P2ASSERTLINE(119, !mIsPreInitialized);
	mIsPreInitialized = true;

	JAInter::InitData::setBnkInitCallback(&setBankDataS);
	JAInter::InitData::setWsInitCallback(&setWsDataS);
	JAInter::BankWave::setInitCallback(&initS);
	JAInter::BankWave::setFirstLoadCallback(&firstLoadS);
	JAInter::BankWave::setSecondLoadCallback(&secondLoadS);
}

/**
 * @note Address: 0x8033D888
 * @note Size: 0x178
 */
void BankMgr::init()
{
	P2ASSERTLINE(132, !mIsInitialized);
	mIsInitialized = true;

	bool check = false;
	if (mWaveBankNum && mInstBankNum) {
		check = true;
	}

	P2ASSERTLINE(134, check);
	JASWaveArcLoader::setCurrentDir("/AudioRes/Banks");
	JASWaveBankMgr::init(mWaveBankNum);
	JASWaveArcLoader::init(nullptr);

	if (mWsData) {
		for (u8 i = 0; i < mWaveBankNum; i++) {
			// this does NOT feel right, but it matches
			PSInstData** ptr = &((PSInstData**)mWsData)[i * 3];
			if (*ptr) {
				JASWaveBankMgr::registWaveBankWS(i, *ptr);
			}
		}
	}

	JASBankMgr::init(256);

	if (mBankData) {
		for (u8 i = 0; i < mInstBankNum; i++) {
			PSInstData** ptr = &((PSInstData**)mBankData)[i * 3];
			if (*ptr) {
				JASBankMgr::registBankBNK((u32)i, *ptr);
			}
		}

		for (u8 i = 0; mBankData[i]._00; i++) {
			JASBankMgr::assignWaveBank(i, mBankData[i].mIndex);
		}
	}
}

/**
 * @note Address: 0x8033DA00
 * @note Size: 0x78
 */
void WaveScene::load(u16 bankIdx, u16 arcIdx, AreaArg areaArg, TaskChecker* taskChecker)
{
	P2ASSERTLINE(197, areaArg < AREA_Count);
	mAreas[areaArg].loadWave(bankIdx, arcIdx, taskChecker);
}

/**
 * @note Address: 0x8033DA78
 * @note Size: 0x28
 */
WaveScene::WaveArea::WaveArea()
{
	mChecker    = nullptr;
	mBankIdx    = 0;
	mArcIdx     = 0;
	mIsLoadTail = false;
	mWaveType   = WaveType_Null;
}

/**
 * @note Address: 0x8033DAA0
 * @note Size: 0x114
 */
u8 WaveScene::WaveArea::loadWave(u16 bankIdx, u16 arcIdx, TaskChecker* checker)
{
	deleteWave();
	if (checker) {
		checker->advanceTask();
	}
	mWaveType = WaveType_Loading;
	bool isWave
	    = (mIsLoadTail) ? JASWaveBankMgr::loadWaveTail(bankIdx, arcIdx, nullptr) : JASWaveBankMgr::loadWave(bankIdx, arcIdx, nullptr);

	if (isWave == true) {
		WaveAreaLoader* loader = new (JKRGetSystemHeap(), -4) WaveAreaLoader(bankIdx, arcIdx, this);
		mChecker               = checker;
		JASDvd::checkPassDvdT((u32)loader, nullptr, &waveLoadCallback);
	} else {
		mWaveType = WaveType_Null;
		if (checker) {
			checker->rewindTask();
		}
	}

	return isWave;
}

/**
 * @note Address: 0x8033DBB4
 * @note Size: 0xB0
 */
void WaveScene::WaveArea::deleteWave()
{
	switch (mWaveType) {
	case WaveType_Null:
		return;
	case WaveType_Loading:
		return;
	case WaveType_Standard:
		P2ASSERTLINE(255, JASWaveBankMgr::eraseWave(mBankIdx, mArcIdx));
		break;
	default:
		P2ASSERTLINE(259, false);
		break;
	}

	mWaveType = WaveType_Null;
}

/**
 * @note Address: 0x8033DC64
 * @note Size: 0x7C
 */
void WaveScene::WaveArea::waveLoadCallback(u32 areaLoader)
{
	TaskChecker* checker;
	WaveAreaLoader* loader = (WaveAreaLoader*)(areaLoader);
	WaveArea* wave         = loader->mWaveArea;
	wave->mBankIdx         = loader->mBankIdx;
	wave->mArcIdx          = loader->mArcIdx;
	wave->mWaveType        = WaveType_Standard;

	checker = wave->mChecker;
	if (checker) {
		checker->rewindTask();
	}

	delete loader;
}

} // namespace PSSystem
