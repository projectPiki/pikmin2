#include "ebi/CardEReader.h"
#include "Dolphin/gba.h"
#include "JSystem/JKernel/JKRFile.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "P2Macros.h"

static const char name[] = "ebiCardEReader";

namespace ebi {
CardEReader::TMgr* gCardEMgr;
namespace CardEReader {
static u8 cInitialCode[4] = { 'P', 'S', 'A', 'J' };
} // namespace CardEReader

/**
 * @note Address: 0x803ECB40
 * @note Size: 0x5C
 */
void gCardEMgr_ThreadFunc(void* data)
{
	P2ASSERTLINE(16, gCardEMgr);
	gCardEMgr->threadProc(data);
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
u32 CardEReader::changeEndian(u32 x) { return ((x & 0xFF00) << 8) | (((x >> 24) & 0xFF) | ((x >> 8) & 0xFF00)) | ((x & 0xFF) << 24); }

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void CardEReader::roundup4b(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void CardEReader::CardE_probeAGB()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803ECB9C
 * @note Size: 0x274
 */
bool CardEReader::CardE_uploadToGBA(s32 chan, u8* data, size_t size)
{
	u8 gameCode[4];
	u8 sizeToGba[4];
	u8 sizeFromGba[4];
	u8 status[4];

	if (GBAReset(chan, status)) {
		return false;
	}
	if (GBAGetStatus(chan, status)) {
		return false;
	}
	if (status[0] != 0x28) {
		return false;
	}

	if (GBARead(chan, gameCode, status)) {
		return false;
	}

	for (int i = 0; i < 4; i++) {
		if (gameCode[i] != cInitialCode[i])
			return false;
	}

	if (GBAGetStatus(chan, status)) {
		return false;
	}

	if (status[0] != 0x20) {
		return false;
	}

	if (GBAWrite(chan, gameCode, status)) {
		return false;
	}

	if (GBAGetStatus(chan, status)) {
		return false;
	}

	if (status[0] != 0x30) {
		return false;
	}

	*(u32*)sizeToGba = changeEndian(size);

	if (GBAWrite(chan, sizeToGba, status)) {
		return false;
	} else if (GBARead(chan, sizeFromGba, status)) {
		return false;
	} else if (size != changeEndian(*(u32*)sizeFromGba)) {
		return false;
	}

	for (int i = 0; i < size; i += 4) {
		while (true) {
			if (GBAGetStatus(chan, status)) {
				return false;
			}
			if (!(status[0] & 2))
				break;
			if ((status[0] & 0x30) != 0x30) {
				return false;
			}
		}
		if (GBAWrite(chan, data + i, status)) {
			return false;
		}
	}
	return true;
}

/**
 * @note Address: 0x803ECE10
 * @note Size: 0x68
 */
CardEReader::TMgr::~TMgr() { gCardEMgr = nullptr; }

/**
 * @note Address: 0x803ECE78
 * @note Size: 0x6C
 */
void CardEReader::TMgr::globalInstance()
{
	if (!gCardEMgr)
		gCardEMgr = new TMgr;
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void CardEReader::TMgr::deleteInstance()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803ECEE4
 * @note Size: 0x11C
 */
void CardEReader::TMgr::loadResource()
{
	for (int i = 0; i < EREADER_GAMES; i++) {
		char* path = "";
		if (i == 0) {
			path = "user/Ebisawa/card_e_reader/pp1.dwn";
		} else if (i == 1) {
			path = "user/Ebisawa/card_e_reader/pp2.dwn";
		} else if (i == 2) {
			path = "user/Ebisawa/card_e_reader/pp3.dwn";
		}
		JKRDvdFile file;
		file.open(path);
		mGameDatas[i]
		    = JKRDvdRipper::loadToMainRAM(&file, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
		P2ASSERTLINE(462, mGameDatas[i]);
		mSizes[i] = file.mDvdPlayer.length;
		file.close();
		mSizes[i] = (mSizes[i] + 3) & ~3;
	}
}

/**
 * @note Address: 0x803ED000
 * @note Size: 0x3C
 */
void CardEReader::TMgr::init()
{
	GBAInit();
	OSInitMutex(&mMutex);
	OSInitCond(&mCond);
}

/**
 * @note Address: 0x803ED03C
 * @note Size: 0x1C
 */
void CardEReader::TMgr::uploadToGBA(s32 data)
{
	mIsUploading = 1;
	mState       = 1;
	mCounter     = 0;
	mGameID      = data;
}

/**
 * @note Address: 0x803ED058
 * @note Size: 0x18
 */
void CardEReader::TMgr::probeAGB()
{
	mIsUploading = 0;
	mState       = 1;
	mCounter     = 0;
}

/**
 * @note Address: 0x803ED070
 * @note Size: 0x150
 */
void CardEReader::TMgr::update()
{
	switch (mState) {
	case 0:
		break;
	case 1: {
		int stat;
		if (SIProbe(1) == 0x40000) {
			stat = 1;
		} else if (SIProbe(2) == 0x40000) {
			stat = 2;
		} else if (SIProbe(3) == 0x40000) {
			stat = 3;
		} else {
			stat = -1;
		}
		mGbaPort = stat;
		mCounter++;
		if (mGbaPort != -1) {
			if (mIsUploading == 0) {
				goEnd_(Error_Success);
			} else {
				mCounter = 0;
				mState   = 2;
			}
		} else if (mCounter >= 2) {
			goEnd_(Error_UnableToTransfer);
		}
		break;
	}
	case 2:
		bool stat = tryUploadToGBA_();
		mCounter++;
		if (stat) {
			mCounter = 0;
			mState   = 3;
		} else {
			if (mCounter >= 1) {
				goEnd_(Error_TransferFailed);
			}
		}
		break;
	case 3:
		break;
	}
}

/**
 * @note Address: 0x803ED1C0
 * @note Size: 0x10
 */
bool CardEReader::TMgr::isFinish() { return (u8)(mState == 0); }

/**
 * @note Address: 0x803ED1D0
 * @note Size: 0x74
 */
void CardEReader::TMgr::threadProc(void* data)
{
	while (true) {
		OSLockMutex(&mMutex);
		OSWaitCond(&mCond, &mMutex);
		if (CardE_uploadToGBA(mGbaPort, (u8*)mGameDatas[mGameID], mSizes[mGameID])) {
			goEnd_(Error_Success);
		} else {
			goEnd_(Error_TransferFailed);
		}
		OSUnlockMutex(&mMutex);
	}
}

/**
 * @note Address: 0x803ED244
 * @note Size: 0x54
 */
bool CardEReader::TMgr::tryUploadToGBA_()
{
	if (OSTryLockMutex(&mMutex)) {
		OSUnlockMutex(&mMutex);
		OSSignalCond(&mCond);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803ED298
 * @note Size: 0x10
 */
void CardEReader::TMgr::goEnd_(enumErr stat)
{
	mEndStat = stat;
	mState   = 0;
}
} // namespace ebi
