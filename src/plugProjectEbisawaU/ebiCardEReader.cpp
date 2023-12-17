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

/*
 * --INFO--
 * Address:	803ECB40
 * Size:	00005C
 */
void gCardEMgr_ThreadFunc(void* data)
{
	P2ASSERTLINE(16, gCardEMgr);
	gCardEMgr->threadProc(data);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
u32 CardEReader::changeEndian(u32 x) { return ((x & 0xFF00) << 8) | (((x >> 24) & 0xFF) | ((x >> 8) & 0xFF00)) | ((x & 0xFF) << 24); }

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void CardEReader::roundup4b(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void CardEReader::CardE_probeAGB()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803ECB9C
 * Size:	000274
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

/*
 * --INFO--
 * Address:	803ECE10
 * Size:	000068
 */
CardEReader::TMgr::~TMgr() { gCardEMgr = nullptr; }

/*
 * --INFO--
 * Address:	803ECE78
 * Size:	00006C
 */
void CardEReader::TMgr::globalInstance()
{
	if (!gCardEMgr)
		gCardEMgr = new TMgr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void CardEReader::TMgr::deleteInstance()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803ECEE4
 * Size:	00011C
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

/*
 * --INFO--
 * Address:	803ED000
 * Size:	00003C
 */
void CardEReader::TMgr::init()
{
	GBAInit();
	OSInitMutex(&mMutex);
	OSInitCond(&mCond);
}

/*
 * --INFO--
 * Address:	803ED03C
 * Size:	00001C
 */
void CardEReader::TMgr::uploadToGBA(s32 data)
{
	_38      = 1;
	mState   = 1;
	mCounter = 0;
	mGameID  = data;
}

/*
 * --INFO--
 * Address:	803ED058
 * Size:	000018
 */
void CardEReader::TMgr::probeAGB()
{
	_38      = 0;
	mState   = 1;
	mCounter = 0;
}

/*
 * --INFO--
 * Address:	803ED070
 * Size:	000150
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
			if (_38 == 0) {
				goEnd_(Error_0);
			} else {
				mCounter = 0;
				mState   = 2;
			}
		} else if (mCounter >= 2) {
			goEnd_(Error_1);
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
				goEnd_(Error_2);
			}
		}
		break;
	case 3:
		break;
	}
}

/*
 * --INFO--
 * Address:	803ED1C0
 * Size:	000010
 */
bool CardEReader::TMgr::isFinish() { return (u8)(mState == 0); }

/*
 * --INFO--
 * Address:	803ED1D0
 * Size:	000074
 */
void CardEReader::TMgr::threadProc(void* data)
{
	while (true) {
		OSLockMutex(&mMutex);
		OSWaitCond(&mCond, &mMutex);
		if (CardE_uploadToGBA(mGbaPort, (u8*)mGameDatas[mGameID], mSizes[mGameID])) {
			goEnd_(Error_0);
		} else {
			goEnd_(Error_2);
		}
		OSUnlockMutex(&mMutex);
	}
}

/*
 * --INFO--
 * Address:	803ED244
 * Size:	000054
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

/*
 * --INFO--
 * Address:	803ED298
 * Size:	000010
 */
void CardEReader::TMgr::goEnd_(enumErr stat)
{
	mEndStat = stat;
	mState   = 0;
}
} // namespace ebi
