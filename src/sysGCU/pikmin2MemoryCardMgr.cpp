#include "types.h"

#include "Game/MemoryCard/Player.h"
#include "Game/MemoryCard/PlayerFileInfo.h"
#include "Game/MemoryCard/Resource.h"
#include "Game/Data.h"
#include "Game/gamePlayData.h"
#include "Game/GameSystem.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "System.h"

namespace Game {
namespace MemoryCard {

char* cFileName = "Pikmin2_SaveData";

/**
 * @note Address: 0x804428AC
 * @note Size: 0x3C
 */
Player::Player()
    : mFlag(0)
    , _04(0)
    , mDay(0)
    , mRedPikis(0)
    , mBluePikis(0)
    , mYellowPikis(0)
    , mWhitePikis(0)
    , mPurplePikis(0)
    , mPokos(0)
    , mTreasures(0)
    , mCaveID(0)
    , mCaveFloor(0)
    , mPlayTime(0)
{
}

/**
 * @note Address: 0x804428E8
 * @note Size: 0x44
 */
PlayerFileInfo::PlayerFileInfo()
{
}

/**
 * @note Address: 0x8044292C
 * @note Size: 0x74
 */
Player* PlayerFileInfo::getPlayer(int idx)
{
	P2ASSERTBOUNDSLINE(396, 0, idx, 3);
	return &mPlayers[idx];
}

/**
 * @note Address: 0x804429A0
 * @note Size: 0x80
 */
bool PlayerFileInfo::isBrokenFile(int idx)
{
	return getPlayer(idx)->mFlag;
}

/**
 * @note Address: 0x80442A20
 * @note Size: 0x94
 */
bool PlayerFileInfo::isNewFile(int idx)
{
	Player* curPlayer = getPlayer(idx);
	return !curPlayer->mFlag && !curPlayer->_04;
}

/**
 * @note Address: 0x80442AB4
 * @note Size: 0x6C
 */
Resource::~Resource()
{
	mMgr->destroyResource();
}

/**
 * @note Address: 0x80442B20
 * @note Size: 0x7C
 */
Mgr::Mgr()
    : MemoryCardMgr()
    , mErrorCode(0)
    , mBannerImageFile(0)
    , mIconImageFile(0)
{
	OSReport("sizeof(PlayerInfo): %d BLOCKSIZE %d padding:%d \n", 0xC000, 0xC000, 0x3C);
}

/**
 * @note Address: 0x80442B9C
 * @note Size: 0x30
 */
bool Mgr::isErrorOccured()
{
	return getCardStatus() != MCS_IOError;
}

/**
 * @note Address: 0x80442BCC
 * @note Size: 0x120
 */
void Mgr::loadResource(JKRHeap* heap)
{
	Resource* resource = new (heap, 0) Resource(this);
	P2ASSERTLINE(533, resource);
	JKRArchive* memCardHeader = JKRMountArchive("/memoryCard/memoryCardHeader.szs", JKRArchive::EMM_Mem, heap, JKRArchive::EMD_Head);
	P2ASSERTLINE(540, memCardHeader);
	mBannerImageFile = JKRFileLoader::getGlbResource("banner.dat", memCardHeader); // possibly ResTIMG*
	mIconImageFile   = JKRFileLoader::getGlbResource("icon.dat", memCardHeader);
	P2ASSERTLINE(543, mBannerImageFile);
	P2ASSERTLINE(544, mIconImageFile);
}

/**
 * @note Address: 0x80442CEC
 * @note Size: 0x10
 */
void Mgr::destroyResource()
{
	mBannerImageFile = nullptr;
	mIconImageFile   = nullptr;
}

/**
 * @note Address: 0x80442CFC
 * @note Size: 0x20
 */
void Mgr::update()
{
	MemoryCardMgr::update();
}

/**
 * @note Address: 0x80442D1C
 * @note Size: 0x6C
 */
bool Mgr::format()
{
	bool result = false;
	if (OSTryLockMutex(&mOsMutex)) {
		result = MemoryCardMgr::cardFormat(CARDSLOT_Unk0);
		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}
	return result;
}

// /**
// * @note Address: N/A
// * @note Size: 0x80
// */
// void Mgr::setCommandFlag(int)
// {
// // UNUSED FUNCTION
// }

// /**
// * @note Address: N/A
// * @note Size: 0x74
// */
// void Mgr::verifySerialNo()
// {
// // UNUSED FUNCTION
// }

/**
 * @note Address: 0x80442D88
 * @note Size: 0x74
 */
bool Mgr::checkBeforeSave()
{
	bool isCheck = false;
	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		isCheck = true;
		setCommand(15);
		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}
	return isCheck;
}

/**
 * @note Address: 0x80442DFC
 * @note Size: 0x74
 */
bool Mgr::checkError()
{
	bool isError = false;
	if (resetError() && OSTryLockMutex(&mOsMutex)) {
		isError = true;
		setCommand(16);
		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}
	return isError;
}

/**
 * @note Address: 0x80442E70
 * @note Size: 0x74
 */
bool Mgr::createNewFile()
{
	bool result = false;
	if (resetError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
		setCommand(7);
		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}
	return result;
}

/**
 * @note Address: 0x80442EE4
 * @note Size: 0xB8
 */
bool Mgr::saveGameOption()
{
	bool result = false;
	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
		setCommand(5);
		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}
	return result;
}

/**
 * @note Address: 0x80442F9C
 * @note Size: 0xB8
 */
bool Mgr::loadGameOption()
{
	bool result = false;
	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
		setCommand(6);
		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}
	return result;
}

/**
 * @note Address: 0x80443054
 * @note Size: 0x124
 */
bool Mgr::savePlayerNoCheckSerialNumber(int fileIndex)
{
	bool result = false;

	if ((fileIndex < 0 || fileIndex >= 3)) {
		if ((sys->mPlayData->mFileIndex < 0 || (int)sys->mPlayData->mFileIndex >= 3)) {
			fileIndex = 0;
		} else {
			fileIndex = sys->mPlayData->mFileIndex;
		}
	}

	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
		MgrCommandPlayerNo command(9, fileIndex);
		setCommand(&command);
		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}
	return result;
}

/**
 * @note Address: 0x80443178
 * @note Size: 0x114
 */
bool Mgr::savePlayer(int fileIndex)
{
	bool result = false;
	u32 index   = 8;
	if (fileIndex < 0 || fileIndex >= 3) {
		if (sys->mPlayData->mFileIndex < 0 || sys->mPlayData->mFileIndex >= 3) {
			return false;
		} else {
			fileIndex = sys->mPlayData->mFileIndex;
		}
	} else {
		index = 9;
	}

	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
		MgrCommandPlayerNo command(index, fileIndex);
		setCommand(&command);
		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}
	return result;
}

/**
 * @note Address: 0x8044328C
 * @note Size: 0x124
 */
bool Mgr::loadPlayer(int fileIndex)
{
	bool result = false;
	P2ASSERTBOUNDSLINE(815, 0, fileIndex, 3);
	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
		MgrCommandPlayerNo command(10, fileIndex);
		setCommand(&command);
		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}
	return result;
}

/**
 * @note Address: 0x804433B0
 * @note Size: 0x124
 */
bool Mgr::deletePlayer(int fileIndex)
{
	bool result = false;
	P2ASSERTBOUNDSLINE(839, 0, fileIndex, 3);
	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
		MgrCommandPlayerNo command(0xB, fileIndex);
		setCommand(&command);
		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}
	return result;
}

/**
 * @note Address: 0x804434D4
 * @note Size: 0x150
 */
bool Mgr::copyPlayer(int fileIndex1, int fileIndex2)
{
	bool result = false;
	P2ASSERTBOUNDSINCLUSIVELINE(862, 0, fileIndex1, 2);
	P2ASSERTBOUNDSINCLUSIVELINE(863, 0, fileIndex2, 2);
	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
		MgrCommandCopyPlayer command(12, fileIndex1, fileIndex2);
		setCommand(&command);
		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}
	return result;
}

/**
 * @note Address: 0x80443624
 * @note Size: 0xE8
 */
bool Mgr::getPlayerHeader(PlayerFileInfo* playerInfo)
{
	bool result = false;
	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
		MgrCommandGetPlayerHeader command(13, playerInfo);
		setCommand(&command);
		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}
	return result;
}

/**
 * @note Address: 0x8044370C
 * @note Size: 0x354
 */
bool Mgr::doCardProc(void*, MemoryCardMgrCommand* command)
{
	bool result       = false;
	int heapSize      = JKRHeap::getCurrentHeap()->getTotalFreeSize();
	JKRHeap* currHeap = JKRHeap::getCurrentHeap();

	mErrorCode = 0;
	switch (command->mFlag) {
	case 7:
		setFlag(MCMFLAG_IsWriting);
		result = commandCreateNewFile();
		resetFlag(MCMFLAG_IsWriting);
		break;

	case 5:
		setFlag(MCMFLAG_IsWriting);
		result = varifyCardStatus() && commandSaveGameOption(false, false) && commandSaveHeader();
		resetFlag(MCMFLAG_IsWriting);
		break;

	case 6:
		result = commandLoadGameOption();
		break;

	case 8:
		setFlag(MCMFLAG_IsWriting);
		result = varifyCardStatus() && commandSavePlayer(command->mData.intView, true) && commandSaveHeader();
		resetFlag(MCMFLAG_IsWriting);
		break;

	case 9:
		setFlag(MCMFLAG_IsWriting);
		result = varifyCardStatus() && commandSavePlayerNoCheckSerialNo(command->mData.intView, true) && commandSaveHeader();
		resetFlag(MCMFLAG_IsWriting);
		break;

	case 10:
		result = commandLoadPlayer(command->mData.intView);
		break;

	case 11:
		setFlag(MCMFLAG_IsWriting);
		result = varifyCardStatus() && commandDeletePlayer(command->mData.intView) && commandSaveHeader();
		resetFlag(MCMFLAG_IsWriting);
		break;

	case 12:
		setFlag(MCMFLAG_IsWriting);
		result = varifyCardStatus() && commandCopyPlayer(command->mData.shortView[0], command->mData.shortView[1]) && commandSaveHeader();
		resetFlag(MCMFLAG_IsWriting);
		break;

	case 13:
		result = commandUpdatePlayerHeader((PlayerFileInfo*)command->mData.dataView);
		break;

	case 14:
		result = commandCheckSerialNo();
		break;

	case 15:
		result = commandCheckBeforeSave();
		break;

	case 16:
		result = commandCheckError();
		break;

	default:
		P2ASSERTLINE(995, false);
	}
	P2ASSERTLINE(1008, currHeap == JKRHeap::getCurrentHeap());
	P2ASSERTLINE(1010, heapSize == (int)JKRHeap::getCurrentHeap()->getTotalFreeSize());

	return result;
}

/**
 * @note Address: 0x80443A60
 * @note Size: 0x390
 */
bool Mgr::commandUpdatePlayerHeader(PlayerFileInfo* playerInfo)
{
	bool result = false;
	Player* players;
	P2ASSERTLINE(1031, playerInfo);
	bool check;
	do {
		check = false;
		for (s8 i = 0; i < 3; i++) {
			PlayerInfoHeader infoHeader;
			if (getPlayerInfo(i, &infoHeader, &check)) {
				*playerInfo->getPlayer(i) = infoHeader.mPlayer;
			} else if (isErrorOccured()) {
				break;
			} else if (infoHeader.mMagic == 'PlIn') {
				bool tagCheck        = (infoHeader.mMagic != 'PlIn');
				Player* player       = playerInfo->getPlayer(i);
				player->mFlag        = tagCheck;
				player->_01          = 0;
				player->_02          = 0;
				player->_04          = 0;
				player->mDay         = 0;
				player->mRedPikis    = 0;
				player->mBluePikis   = 0;
				player->mYellowPikis = 0;
				player->mWhitePikis  = 0;
				player->mPurplePikis = 0;
				player->mPokos       = 10000;
				player->mCaveID      = 0;
				player->mCaveFloor   = 0;
				player->mPlayTime    = 0;
			} else {
				infoHeader.mPlayer.mFlag  = 1;
				*playerInfo->getPlayer(i) = infoHeader.mPlayer;
			}
		}
	} while (check);

	for (s8 i = 0; i < 3; i++) {
		playerInfo->getPlayer(i);
	}

	if (!isErrorOccured()) {
		result = true;
	}

	return result;
}

/**
 * @note Address: 0x80443DF0
 * @note Size: 0x7C
 */
bool Mgr::commandCheckBeforeSave()
{
	CARDFileInfo fileInfo;
	if (fileOpen(&fileInfo, CARDSLOT_Unk0, cFileName)) {
		CARDClose(&fileInfo);
		return commandCheckSerialNo();

	} else {
		checkSpace(CARDSLOT_Unk0);
		if (mStatusFlag == INSIDESTATUS_Unk2) {
			setInsideStatusFlag(INSIDESTATUS_Unk3);
		}
		return false;
	}
}

/**
 * @note Address: 0x80443E6C
 * @note Size: 0x80
 */
bool Mgr::commandCheckError()
{
	CARDFileInfo fileInfo[1];
	bool result = true;
	if (fileOpen(fileInfo, CARDSLOT_Unk0, cFileName)) {
		CARDClose(fileInfo);
	} else {
		if (checkSpace(CARDSLOT_Unk0)) {
			setInsideStatusFlag(INSIDESTATUS_Unk3);
		}
		result = false;
	}
	return result;
}

/**
 * @note Address: 0x80443EEC
 * @note Size: 0xB8
 */
bool Mgr::checkSpace(MemoryCardMgr::ECardSlot cardSlot)
{
	bool result = false;
	switch (MemoryCardMgr::checkSpace(cardSlot, 0x36000)) {
	case 0:
		setInsideStatusFlag(INSIDESTATUS_Unk2);
		result = true;
		break;

	case 1:
		setInsideStatusFlag(INSIDESTATUS_Unk6);
		break;

	case 2:
		setInsideStatusFlag(INSIDESTATUS_Unk7);
		break;

	default:
		JUT_PANICLINE(1220, "P2Assert");
	}

	return result;
}

/**
 * @note Address: 0x80443FA4
 * @note Size: 0x118
 */
bool Mgr::commandSaveHeader()
{
	bool result = false;
	CARDFileInfo fileInfo;
	if (!isErrorOccured()) {
		if (fileOpen(&fileInfo, CARDSLOT_Unk0, cFileName)) {
			CARDClose(&fileInfo);
			if (!isErrorOccured()) {
				writeHeader(CARDSLOT_Unk0, cFileName);
			}
			if (!isErrorOccured()) {
				writeCardStatus(CARDSLOT_Unk0, cFileName);
			}
			if (!isErrorOccured()) {
				result = true;
			}
		} else if (!isErrorOccured()) {
			setInsideStatusFlag(INSIDESTATUS_Unk3);
		}
	}
	return result;
}

/**
 * @note Address: 0x804440BC
 * @note Size: 0x1A0
 */
bool Mgr::commandCreateNewFile()
{
	CARDFileInfo fileInfo;
	u64 serial;
	bool result = false;
	if (fileOpen(&fileInfo, CARDSLOT_Unk0, cFileName)) {
		CARDClose(&fileInfo);
		result = true;
	} else {
		checkSpace(CARDSLOT_Unk0);

		if (readCardSerialNo(&serial, CARDSLOT_Unk0)) {
			sys->mPlayData->setCardSerialNo(serial);
		}

		if (checkStatus() == INSIDESTATUS_Unk2) {
			int createResult = CARDCreate(0, cFileName, 0x36000, &fileInfo);
			CARDClose(&fileInfo);
			if (!createResult) {
				dataFormat(CARDSLOT_Unk0);
			} else {
				setInsideStatusFlag(INSIDESTATUS_Unk10);
			}
		}

		if (!isErrorOccured()) {
			result = true;
		} else {
			setInsideStatusFlag(INSIDESTATUS_Unk10);
		}
	}

	return result;
}

/**
 * @note Address: 0x8044425C
 * @note Size: 0x100
 */
bool Mgr::dataFormat(MemoryCardMgr::ECardSlot cardSlot)
{
	if (!isErrorOccured()) {
		writeHeader(cardSlot, cFileName);
	}

	if (!isErrorOccured()) {
		writeInvalidGameOption();
		commandSaveGameOption(false, true);
	}

	if (!isErrorOccured()) {
		writeInvalidPlayerInfoAll();
	}

	if (!isErrorOccured()) {
		writeCardStatus(cardSlot, cFileName);
	}

	return !isErrorOccured();
}

/**
 * @note Address: N/A
 * @note Size: 0x114
 */
bool Mgr::writeBrokenData(MemoryCardMgr::ECardSlot slot)
{
	u8* buffer = new u8[0x2000];
	memset(buffer, 0xCD, 0x2000);

	for (int i = 0; i < 0x1B; i++) {
		if (!isErrorOccured()) {
			write(slot, cFileName, buffer, 0x2000, i * 0x2000);
		}
	}

	delete (buffer);

	if (!isErrorOccured()) {
		writeHeader(slot, cFileName);
	}

	if (!isErrorOccured()) {
		writeCardStatus(slot, cFileName);
	}

	return !isErrorOccured();
}

/**
 * @note Address: 0x8044435C
 * @note Size: 0x170
 */
bool Mgr::varifyCardStatus()
{
	CARDFileInfo fileInfo;
	bool result;
	if (fileOpen(&fileInfo, CARDSLOT_Unk0, cFileName)) {
		checkCardStat(CARDSLOT_Unk0, &fileInfo);
		CARDClose(&fileInfo);
	}

	if (_D0) {
		result = true;
	} else {
		result = writeBrokenData(CARDSLOT_Unk0);
	}

	return result;
}

/**
 * @note Address: 0x804444CC
 * @note Size: 0x1C0
 */
bool Mgr::commandSaveGameOption(bool isForceSave, bool skipReadCheck)
{
	bool saveSuccessful = false;

	if (isForceSave || checkSerialNo(false)) {
		u32* optionBuffer = new (mHeap, -32) u32[0x800];
		P2ASSERTLINE(1500, optionBuffer);

		int selectedSlot    = -1;
		bool hasWriteFailed = false;
		if (!skipReadCheck) {
			for (int i = 0; i < 2; i++) {
				if (!read(CARDSLOT_Unk0, cFileName, (u8*)optionBuffer, 0x2000, i * 0x2000 + 0x2000)) {
					hasWriteFailed = true;
					break;
				}

				bool checkOption = checkOptionInfo((OptionInfo*)optionBuffer) == 0;
				if (checkOption) {
					selectedSlot = i;
					break;
				}
			}
		}

		if (selectedSlot == -1) {
			selectedSlot = sys->mPlayData->mSaveSlotIndex + 1 & 1;
		}

		if (!hasWriteFailed) {
			sys->mPlayData->mSaveSlotIndex++;
			optionBuffer[0] = 'OpVa';
			optionBuffer[1] = '0002';
			optionBuffer[2] = sys->mPlayData->mSaveSlotIndex;

			RamStream ramStream(&optionBuffer[3], 0x1C00);
			writeGameOption(ramStream);
			optionBuffer[0x7FF] = calcCheckSumOptionInfo((OptionInfo*)optionBuffer);
			hasWriteFailed      = write(CARDSLOT_Unk0, cFileName, (u8*)optionBuffer, 0x2000, selectedSlot * 0x2000 + 0x2000);
			saveSuccessful      = hasWriteFailed;
		}
		delete (optionBuffer);
	}
	if (saveSuccessful) {
		sys->clearOptionBlockSaveFlag();
	}
	return saveSuccessful;
}

/**
 * @note Address: 0x8044468C
 * @note Size: 0x248
 */
bool Mgr::commandLoadGameOption()
{
	bool result = false;

	u64 serial;
	if (readCardSerialNo(&serial, CARDSLOT_Unk0)) {
		int freeSize = JKRHeap::getCurrentHeap()->getTotalFreeSize();

		u32* infoBuffers[2];
		infoBuffers[0] = new (mHeap, -32) u32[0x800];
		P2ASSERTLINE(1616, infoBuffers[0]);
		infoBuffers[1] = new (mHeap, -32) u32[0x800];
		P2ASSERTLINE(1618, infoBuffers[1]);

		int i;
		bool readError = false;
		for (i = 0; i < 2; i++) {
			if (!read(CARDSLOT_Unk0, cFileName, (u8*)infoBuffers[i], 0x2000, i * 0x2000 + 0x2000)) {
				result    = false;
				readError = true;
			}
		}

		if (!readError) {
			OptionInfo* info2;
			OptionInfo* info1;
			info1                    = (OptionInfo*)infoBuffers[0];
			info2                    = (OptionInfo*)infoBuffers[1];
			OptionInfo* optionResult = nullptr;

			bool check1 = checkOptionInfo(info1);
			bool check2 = checkOptionInfo(info2);
			// if both checks pass, pick buffer with higher value at 0xC, or first if equal
			if (check1 && check2) {
				if (info1->mSaveSlotIndex >= info2->mSaveSlotIndex) {
					optionResult = info1;
				} else {
					optionResult = info2;
				}

				// if only first passed, use first
			} else if (check1 && !check2) {
				optionResult = info1;

				// if only second passed, use second
			} else if (!check1 && check2) {
				optionResult = info2;
			}

			// if none passed, set default
			if (!optionResult) {
				mErrorCode = 1;
				sys->mPlayData->setDefault();

				// use buffer info to set playData variable
			} else {
				result                         = true;
				sys->mPlayData->mSaveSlotIndex = optionResult->mSaveSlotIndex;
				RamStream ramStream(&optionResult->_000C, 0x1c00);
				readGameOption(ramStream);
			}

			sys->mPlayData->setCardSerialNo(serial);
		}

		delete (infoBuffers[0]);
		delete (infoBuffers[1]);

		// check we successfully deleted the buffers
		P2ASSERTLINE(1707, freeSize == (int)JKRHeap::getCurrentHeap()->getTotalFreeSize());
	}

	sys->mPlayData->setup();
	return result;
}

/**
 * @note Address: 0x804448D4
 * @note Size: 0x28
 */
void Mgr::writeGameOption(Stream& stream)
{
	sys->mPlayData->write(stream);
}

/**
 * @note Address: 0x804448FC
 * @note Size: 0x28
 */
void Mgr::readGameOption(Stream& stream)
{
	sys->mPlayData->read(stream);
}

/**
 * @note Address: 0x80444924
 * @note Size: 0x70
 */
bool Mgr::checkSerialNo(bool param_1)
{
	bool result = false;
	if (!(sys->mPlayData->mFlags.isSet(CommonSaveData::Mgr::SaveFlag_SerialNoSet))) {
		if (param_1) {
			mErrorCode = 3;
		}
		result = true;
	} else {
		if (verifyCardSerialNo(&sys->mPlayData->mCardSerialNo, CARDSLOT_Unk0)) {
			result = true;
		}
	}
	return result;
}

/**
 * @note Address: 0x80444994
 * @note Size: 0xD0
 */
bool Mgr::commandSavePlayer(s8 fileIndex, bool param_2)
{
	bool result = false;
	P2ASSERTBOUNDSLINE(1914, 0, fileIndex, 3);
	if (checkSerialNo(false)) {
		result = commandSavePlayerNoCheckSerialNo(fileIndex, param_2);
	}

	return result;
}

/**
 * @note Address: 0x80444A64
 * @note Size: 0x374
 */
bool Mgr::commandSavePlayerNoCheckSerialNo(s8 fileIndex, bool param_2)
{
	bool result  = false;
	int freeSize = JKRHeap::getCurrentHeap()->getTotalFreeSize();
	u64 serial;
	if (readCardSerialNo(&serial, CARDSLOT_Unk0)) {
		u32* buffer = new (mHeap, -32) u32[0x3000];
		P2ASSERTLINE(1939, buffer);
		sys->mPlayData->mSaveCount++;
		buffer[0]                   = 'PlVa'; // Magic Word
		buffer[1]                   = '0003'; // Version
		buffer[4]                   = sys->mPlayData->mSaveCount;
		((u8*)buffer)[8]            = fileIndex; // File Index
		((u8*)buffer)[12]           = 0;
		((u8*)buffer)[13]           = param_2;
		*(u16*)&(((u8*)buffer)[14]) = sys->mPlayData->_22;

		int time;
		int playMinutes;
		if (gameSystem) {
			buffer[5]                      = gameSystem->mTimeMgr->mDayCount + 1; // Day Count
			CommonSaveData::Mgr* localSave = sys->mPlayData;
			time                           = localSave->mTime + playData->calcPlayMinutes();
			int pikiCount;
			if (playData->mCaveSaveData.mIsInCave) {
				buffer[6]  = playData->mCaveSaveData.mCavePikis.getColorSum(Red);
				buffer[7]  = playData->mCaveSaveData.mCavePikis.getColorSum(Blue);
				buffer[8]  = playData->mCaveSaveData.mCavePikis.getColorSum(Yellow);
				buffer[9]  = playData->mCaveSaveData.mCavePikis.getColorSum(White);
				buffer[10] = playData->mCaveSaveData.mCavePikis.getColorSum(Purple);
			} else {
				buffer[6]  = playData->mPikiContainer.getColorSum(Red);
				buffer[7]  = playData->mPikiContainer.getColorSum(Blue);
				buffer[8]  = playData->mPikiContainer.getColorSum(Yellow);
				buffer[9]  = playData->mPikiContainer.getColorSum(White);
				buffer[10] = playData->mPikiContainer.getColorSum(Purple);
			}

			buffer[11] = playData->mPokoCount;

			// Register Cave Information
			if (playData->mCaveSaveData.mIsInCave) {
				ID32 id;
				int caveFloor;
				playData->getCurrentCave(id, caveFloor);
				buffer[13] = id.getID();
				buffer[14] = caveFloor + 1;
			} else {
				buffer[13] = 0;
				buffer[14] = 123;
			}
			buffer[12] = playData->mZukanStat->calcEarnKinds();
			buffer[15] = time;
		} else {
			JUT_PANICLINE(2042, "dameck\n");

			// this code never gets reached smh.
			buffer[5]  = 0;
			buffer[6]  = 1;
			buffer[7]  = 2;
			buffer[8]  = 3;
			buffer[9]  = 4;
			buffer[10] = 5;
			buffer[11] = 12345;
			buffer[13] = 1;
			buffer[14] = 99;
			buffer[12] = 0;
		}

		RamStream ramStream(&buffer[16], 0xBF80);
		writePlayer(ramStream);
		result = savePlayerProc(fileIndex, (u8*)buffer, true);
		delete (buffer);

		if (result) {
			sys->mPlayData->setCardSerialNo(serial);
		}
	}

	P2ASSERTLINE(2079, freeSize == (int)JKRHeap::getCurrentHeap()->getTotalFreeSize());

	if (result) {
		result = commandSaveGameOption(true, false);
	}

	return result;
}

/**
 * @note Address: 0x80444DD8
 * @note Size: 0x70
 */
bool Mgr::getPlayerInfo(s8 fileIndex, PlayerInfoHeader* playerInfo, bool* param_1)
{
	int index = getIndexPlayerInfo(fileIndex, playerInfo, param_1);
	return !isErrorOccured() && (index >= 0 && index < 4);
}

/**
 * @note Address: 0x80444E48
 * @note Size: 0x2B0
 */
int Mgr::getIndexPlayerInfo(s8 fileIndex, PlayerInfoHeader* infoHeader, bool* param_1)
{
	int index = -1;
	bool doLoop;
	bool noPlayerInfoCheck = false;
	u32 i                  = 0;
	PlayerInfoHeader localHeader;
	if (infoHeader) {
		memset(infoHeader, 0xCD, 0x40);
	}
	doLoop = true;
	while (doLoop) {
		i++;
		JUT_ASSERTLINE(2163, i < 5, "MemoryCardModify Error");
		doLoop = false;
		for (int j = 0; j < 4; j++) {
			if (checkPlayerNoPlayerInfo(j, fileIndex, &localHeader)) {
				noPlayerInfoCheck = true;
				if (index == -1) {
					index = j;
					if (infoHeader) {
						*infoHeader = localHeader;
					}
				} else if (modifyPlayerInfo(fileIndex, param_1)) {
					index  = -1;
					doLoop = true;
					break;
				} else {
					index      = -1;
					mErrorCode = 2;
					break;
				}
			} else {
				if (infoHeader && infoHeader->mMagic != 'PlVa') {
					bool fileIndexCheck = false;
					if ((s8)localHeader._08 == fileIndex) {
						if (!noPlayerInfoCheck) {
							fileIndexCheck = true;
						} else if (infoHeader->mMagic != 'PlIn' && localHeader.mMagic == 'PlIn') {
							fileIndexCheck = true;
						}
					}
					if (fileIndexCheck) {
						noPlayerInfoCheck = true;
						*infoHeader       = localHeader;
					}
				}
			}
		}
	}
	return index;
}

/**
 * @note Address: 0x804450F8
 * @note Size: 0x19C
 */
bool Mgr::commandLoadPlayer(s8 fileIndex)
{
	u64 serial;
	P2ASSERTBOUNDSLINE(2264, 0, fileIndex, 3);
	commandLoadGameOption();
	if ((s32)mErrorCode == 1)
		mErrorCode = 0;
	if (!isErrorOccured()) {
		if (readCardSerialNo(&serial, CARDSLOT_Unk0)) {
			u32* buffer = new (mHeap, -32) u32[0x3000];
			P2ASSERTLINE(2290, buffer);
			sys->mPlayData->setCardSerialNo(serial);
			if (loadPlayerProc(fileIndex, (u8*)buffer)) {
				RamStream ramStream(&buffer[0x10], 0xBF80);
				readPlayer(ramStream);
				CommonSaveData::Mgr* saveMgr = sys->mPlayData;
				saveMgr->mFileIndex          = fileIndex;
				saveMgr->mSaveCount          = buffer[4];
				saveMgr->mTime               = buffer[0xF];
				saveMgr->_22                 = *(u16*)&((u8*)buffer)[0xE]; // hmm.
			}
			delete (buffer);
		}
	}
	return !isErrorOccured();
}

/**
 * @note Address: 0x80445294
 * @note Size: 0x9C
 */
bool Mgr::loadPlayerForNoCard(s8 fileIndex)
{
	P2ASSERTBOUNDSLINE(2382, 0, fileIndex, 3);
	sys->mPlayData->mFileIndex = fileIndex;
	sys->mPlayData->resetPlayer((s8)fileIndex);
	playData->reset();
	sys->mPlayData->resetCardSerialNo();
	return true;
}

/**
 * @note Address: 0x80445330
 * @note Size: 0x178
 */
bool Mgr::loadPlayerProc(s8 fileIndex, u8* playerDataBuffer)
{
	bool loadSuccess = false;
	P2ASSERTBOUNDSLINE(2407, 0, fileIndex, 3);

	PlayerInfoHeader infoHeader;
	int playerInfo = getIndexPlayerInfo(fileIndex, &infoHeader, nullptr);
	if (playerInfo >= 0 && playerInfo < 4) {
		if ((loadSuccess = read(CARDSLOT_Unk0, cFileName, playerDataBuffer, 0xC000, playerInfo * 0xC000 + 0x6000), loadSuccess)
		    && !checkPlayerInfo((PlayerInfo*)playerDataBuffer)) {
			loadSuccess = false;
			mErrorCode  = 2;
		}
	} else {
		if (infoHeader.mMagic == 'PlIn') {
			sys->mPlayData->resetPlayer((s8)fileIndex);
			playData->reset();
		} else {
			loadSuccess = false;
			mErrorCode  = 2;
		}
	}
	return loadSuccess;
}

/**
 * @note Address: 0x804454A8
 * @note Size: 0x94
 */
bool Mgr::commandDeletePlayer(s8 fileIndex)
{
	bool result    = false;
	int playerInfo = getIndexPlayerInfo(fileIndex, nullptr, nullptr);
	if (playerInfo >= 0 && playerInfo < 4) {
		result = writeInvalidPlayerInfo(playerInfo, (s8)fileIndex);
	} else {
		if (!modifyPlayerInfo(fileIndex, nullptr)) {
			mErrorCode = 2;
		}
	}
	return result;
}

/**
 * @note Address: 0x8044553C
 * @note Size: 0x19C
 */
bool Mgr::savePlayerProc(s8 fileIndex, u8* param_2, bool param_3)
{
	s8 tempIndex = -1;
	int idx;
	bool result = false;

	P2ASSERTBOUNDSLINE(2506, 0, fileIndex, 3);
	if (getIndexInvalidPlayerInfo(&idx, &tempIndex, fileIndex, ((u32*)param_2)[4], param_3)) {
		if (idx < 0 || idx >= 4) {
			mErrorCode = 2;
			modifyPlayerInfo(fileIndex, nullptr);
		} else {
			((u32*)param_2)[0x2FFF] = calcCheckSumPlayerInfo((PlayerInfo*)param_2);
			s8 newFileIndex         = fileIndex;
			result                  = write(CARDSLOT_Unk0, cFileName, param_2, 0xC000, idx * 0xC000 + 0x6000);
			newFileIndex            = fileIndex;
			if (tempIndex >= 0 && tempIndex < 3) {
				newFileIndex = tempIndex;
			}
			if (result) {
				for (int i = 0; i < 4; i++) {
					if (result && i != idx && checkPlayerNoPlayerInfo(i, fileIndex, nullptr) && !writeInvalidPlayerInfo(i, newFileIndex)) {
						result = false;
					}
				}
			}
		}
	}
	return result;
}

/**
 * @note Address: 0x804456D8
 * @note Size: 0x68
 */
bool Mgr::commandCheckSerialNo()
{
	bool result = false;
	if (!(sys->mPlayData->mFlags.isSet(CommonSaveData::Mgr::SaveFlag_SerialNoSet))) {
		result     = true;
		mErrorCode = 3;
	} else {
		if (verifyCardSerialNo(&sys->mPlayData->mCardSerialNo, CARDSLOT_Unk0)) {
			result = true;
		}
	}
	return result;
}

/**
 * @note Address: 0x80445740
 * @note Size: 0x1C8
 */
bool Mgr::commandCopyPlayer(s8 fileIndex, s8 param_1)
{
	u32* buffer = new (mHeap, -0x20) u32[0x3000];
	P2ASSERTLINE(2650, buffer);

	bool result = loadPlayerProc(fileIndex, (u8*)buffer);
	if (result) {
		((u8*)buffer)[8] = param_1;
		result           = savePlayerProc(param_1, (u8*)buffer, false);
	}
	delete (buffer);

	return result;
}

/**
 * @note Address: 0x80445908
 * @note Size: 0x24
 */
void Mgr::writePlayer(Stream& stream)
{
	playData->write(stream);
}

/**
 * @note Address: 0x8044592C
 * @note Size: 0x24
 */
void Mgr::readPlayer(Stream& stream)
{
	playData->read(stream);
}

/**
 * @note Address: 0x80445950
 * @note Size: 0x74
 */
bool Mgr::checkOptionInfo(OptionInfo* optionInfo)
{
	return _D0 && testCheckSumOptionInfo(optionInfo) && optionInfo->mMagic == 'OpVa' && optionInfo->mVersionType == '0002';
}

/**
 * @note Address: 0x804459C4
 * @note Size: 0x24
 */
u32 Mgr::calcCheckSumOptionInfo(OptionInfo* optionInfo)
{
	return calcCheckSum(optionInfo, 0x1FFC);
}

/**
 * @note Address: 0x804459E8
 * @note Size: 0x40
 */
bool Mgr::testCheckSumOptionInfo(OptionInfo* optionInfo)
{
	return (calcCheckSum(optionInfo, 0x1FFC) == optionInfo->mChecksum);
}

/**
 * @note Address: 0x80445A28
 * @note Size: 0x74
 */
bool Mgr::checkPlayerInfo(PlayerInfo* playerInfo)
{
	bool result = false;
	if (_D0 != 0 && testCheckSumPlayerInfo(playerInfo) && playerInfo->mMagic == 'PlVa' && playerInfo->mVersionType == '0003') {
		result = true;
	}
	return result;
}

/**
 * @note Address: 0x80445A9C
 * @note Size: 0x28
 */
u32 Mgr::calcCheckSumPlayerInfo(PlayerInfo* playerInfo)
{
	return calcCheckSum(playerInfo, 0xBFFC);
}

/**
 * @note Address: 0x80445AC4
 * @note Size: 0x48
 */
bool Mgr::testCheckSumPlayerInfo(PlayerInfo* playerInfo)
{
	return (calcCheckSum(playerInfo, 0xBFFC) == playerInfo->mChecksum);
}

/**
 * @note Address: 0x80445B0C
 * @note Size: 0xB8
 */
u32 Mgr::getCardStatus()
{
	u32 result;
	if (checkStatus() == 2) {
		switch (mErrorCode) {
		case 0:
			result = 2;
			break;
		case 1:
			result = 12;
			break;
		case 2:
			result = 13;
			break;
		case 3:
			result = 14;
			break;
		default:
			P2ASSERTLINE(2832, false);
		}
	} else {
		result = checkStatus();
	}
	return result;
}

/**
 * @note Address: 0x80445BC4
 * @note Size: 0xB8
 */
bool Mgr::writeInvalidGameOption()
{
	bool result;
	u32* buffer = new (mHeap, -32) u32[0x800];
	P2ASSERTLINE(2857, buffer);

	result    = true;
	buffer[0] = 'OpIn';

	for (int i = 0; i < 2; i++) {
		if (!write(CARDSLOT_Unk0, cFileName, (u8*)buffer, 0x2000, i * 0x2000 + 0x2000)) {
			result = false;
		}
	}

	delete (buffer);

	return result;
}

/**
 * @note Address: 0x80445C7C
 * @note Size: 0x70
 */
bool Mgr::writeInvalidPlayerInfoAll()
{
	bool result = true;
	for (int i = 0; i < 4; i++) {
		if (!(writeInvalidPlayerInfo(i, i - 1))) {
			result = false;
		}
	}
	return result;
}

/**
 * @note Address: 0x80445CEC
 * @note Size: 0x110
 */
bool Mgr::writeInvalidPlayerInfo(int fileIndex, s8 param_2)
{
	P2ASSERTBOUNDSLINE(2922, 0, fileIndex, 4);
	s8* buffer = new (mHeap, -32) s8[0x2000];
	P2ASSERTLINE(2925, buffer);
	memset(buffer, 0xCD, 0x2000);
	((u32*)buffer)[0] = 'PlIn';
	buffer[8]         = param_2;
	bool result       = write(CARDSLOT_Unk0, cFileName, (u8*)buffer, 0x2000, (fileIndex * 0xC000) + 0x6000);
	delete (buffer);
	return result;
}

/**
 * @note Address: 0x80445DFC
 * @note Size: 0x1A8
 */
bool Mgr::checkPlayerNoPlayerInfo(int param_1, s8 param_2, PlayerInfoHeader* infoHeader)
{
	bool result     = false;
	char* localName = cFileName;
	CARDFileInfo fileInfo;
	if (fileOpen(&fileInfo, CARDSLOT_Unk0, cFileName)) {
		checkCardStat(CARDSLOT_Unk0, &fileInfo);
		CARDClose(&fileInfo);
	}
	if (_D0) {
		u32* buffer = new (mHeap, -32) u32[0x800];
		P2ASSERTLINE(2975, buffer);
		if (read(CARDSLOT_Unk0, localName, (u8*)buffer, 0x200, param_1 * 0xC000 + 0x6000)) {
			if (infoHeader) {
				*infoHeader = *(PlayerInfoHeader*)buffer;
			}
			if ((s8)((PlayerInfoHeader*)buffer)->_08 == (s8)param_2 && buffer[0] == 'PlVa') {
				result = true;
			}
		}
		delete (buffer);
	} else {
		infoHeader->mMagic = -1;
	}
	return result;
}

// /**
// * @note Address: N/A
// * @note Size: 0x40
// */
// void Mgr::loadPlayerHeaderProc(int, u8*)
// {
// // UNUSED FUNCTION
// }

/**
 * @note Address: 0x80445FA4
 * @note Size: 0x380
 */
bool Mgr::getIndexInvalidPlayerInfo(int* playerInfoIndex, s8* playerType, s8 targetType, u32 targetValue, bool checkValue)
{
	int playerTypes[4];  // _24
	int playerValues[4]; // _14

	for (int i = 0; i < 4; i++) {
		playerTypes[i]  = -1;
		playerValues[i] = 0xCDCDCDCD;
	}

	bool isValid   = true;
	int foundIndex = -1;

	u32* buffer = new (mHeap, -32) u32[0x80];
	P2ASSERTLINE(3071, buffer);

	for (int i = 0; i < 4; i++) {
		if (read(CARDSLOT_Unk0, cFileName, (u8*)buffer, 0x200, 0x6000 + (i * 0xC000))) {
			u32 bufVal = buffer[0];
			s8 bufByte = ((u8*)buffer)[8];

			playerTypes[i] = bufByte;

			playerValues[i] = bufVal;
			if (foundIndex == -1 && bufByte == targetType && bufVal != 'PlVa') {
				*playerType = targetType;
				foundIndex  = i;
			}
			if (*(s8*)(buffer + 2) == targetType && buffer[0] == 'PlVa' && checkValue && buffer[4] >= targetValue) {
				JUT_ASSERTLINE(3148, targetValue == 1, "card [%d] memory[%d]\n", buffer[4], targetValue);
				isValid    = false;
				mErrorCode = 3;
				break;
			}
		} else {
			isValid = false;
			break;
		}
	}

	delete (buffer);

	if (isValid && foundIndex == -1) {
		int array3[3];
		array3[0] = -1;
		array3[1] = -1;
		array3[2] = -1;
		u32 check = foundIndex;
		for (int i = 0; i < 4; i++) {
			if (playerTypes[i] >= 0 && playerTypes[i] < 3) {
				if (array3[playerTypes[i]] == -1) {
					array3[playerTypes[i]] = i;
					continue;
				} else if (playerValues[i] == 'PlVa' && playerValues[array3[playerTypes[i]]] != 'PlVa') {
					foundIndex = array3[playerTypes[i]];
				} else if (playerValues[i] != 'PlVa' && playerValues[array3[playerTypes[i]]] == 'PlVa') {
					foundIndex = i;
				} else if (playerValues[i] != 'PlVa' && playerValues[array3[playerTypes[i]]] != 'PlVa') {
					foundIndex = i;
				}

				if (foundIndex != -1) {
					playerType[0] = targetType;
					break;
				}
			}
		}
		if (isValid && foundIndex == -1) {
			for (int i = 0; i < 4; i++) {
				if (playerTypes[i] < 0 || playerTypes[i] > 2) {
					foundIndex = i;
				} else if (playerValues[i] != 'PlVa' && playerValues[i] != 'PlIn') {
					foundIndex = i;
				}

				if (foundIndex != -1) {
					playerType[0] = targetType;
					break;
				}
			}
		}
	}

	*playerInfoIndex = foundIndex;
	return isValid;
}

inline bool Mgr::checkCheckSum(u32* buffer)
{
	return _D0 && buffer[0x2FFF] == calcCheckSum(buffer, 0xBFFC);
}

inline bool Mgr::checkPlVa(u32* buffer)
{
	bool checkPlVa = false;
	if (checkCheckSum(buffer)) {
		if (buffer[0] == 'PlVa') {
			checkPlVa = true;
		}
	}
	return checkPlVa;
}

inline bool Mgr::checkInfoBody(u32* buffer)
{
	bool checkVersion = false;
	if (checkPlVa(buffer) && buffer[1] == '0003') {
		checkVersion = true;
	}

	return checkVersion;
}

inline bool Mgr::checkInfo(u32* buffer)
{
	return checkInfoBody(buffer);
}

/**
 * @note Address: 0x80446324
 * @note Size: 0x4BC
 */
bool Mgr::modifyPlayerInfo(s8 fileIndex, bool* param_2)
{
	bool result;
	u32 array1[3]; // 0x1C
	int array2[3]; // 0x10
	u8 array4[4];  // 0xC
	u8 array3[3];  // 0x8

	if (param_2) {
		*param_2 = false;
	}

	for (int i = 0; i < 3; i++) {
		array1[i] = 0;
		array3[i] = 0;
		array2[i] = -1;
	}

	for (int i = 0; i < 4; i++) {
		array4[i] = 0;
	}

	for (int i = 0; i < 4; i++) {
		u32* buffer = new (mHeap, -32) u32[0x3000];
		P2ASSERTLINE(3445, buffer);
		result = read(CARDSLOT_Unk0, cFileName, (u8*)buffer, 0xC000, 0x6000 + (0xC000 * i));
		if (result) {
			if (checkInfo(buffer)) {
				const int bufferPos = ((char*)buffer)[8];
				if (!array1[bufferPos] || buffer[4] > array1[bufferPos]) {
					if (array2[bufferPos] != -1) {
						array4[array2[bufferPos]] = 1;
					}
					array2[bufferPos] = i;
					array1[bufferPos] = buffer[4];
				} else {
					array4[i] = 1;
				}
			} else if (buffer[0] == 'PlIn' && ((char*)buffer)[8] >= 0 && ((char*)buffer)[8] < 3) {
				if (array3[((char*)buffer)[8]]) {
					array4[i] = 1;
				}

				array3[((char*)buffer)[8]] = 1;
			} else {
				array4[i] = 1;
			}
		}
		memset(buffer, 0xCD, 0xC000);
		delete (buffer);

		if (!result) {
			break;
		}
	}

	if (result) {
		for (int i = 0; i < 4; i++) {
			if (array4[i]) {
				bool checkWrite;
				if (!array3[fileIndex] && (int)array2[fileIndex] == -1) {
					checkWrite = writeInvalidPlayerInfo(i, fileIndex);
				} else {
					s8 someChar = fileIndex;
					for (int j = 0; j < 3; j++) {
						if (!array3[j] && array2[j] == -1) {
							someChar = j;
							break;
						}
					}
					checkWrite = writeInvalidPlayerInfo(i, someChar);
				}
				if (checkWrite) {
					if (!param_2) {
						break;
					}
					*param_2 = true;
					break;
				}
				result = false;
			}
		}
	}

	return result;
}

/**
 * @note Address: 0x804467E0
 * @note Size: 0x84
 */
bool Mgr::verifyCardSerialNo(u64* serial, MemoryCardMgr::ECardSlot cardSlot)
{
	bool result = false;
	u64 serialDat;
	if (readCardSerialNo(&serialDat, cardSlot)) {
		if (serialDat == *serial) {
			result = true;
		} else {
			mErrorCode = 3;
		}
	}
	return result;
}

/**
 * @note Address: 0x80446864
 * @note Size: 0x7C
 */
bool Mgr::resetError()
{
	bool result;
	if (CARDProbe(0)) {
		result     = cardMount();
		mErrorCode = 0;
	} else {
		result = true;
	}
	P2ASSERTLINE(3773, result);
	return result;
}

/**
 * @note Address: 0x804468E0
 * @note Size: 0x12C
 */
void Mgr::doMakeHeader(u8* header)
{
	OSCalendarTime calendar;
	snprintf((char*)(header + 0x1800), 0x20, "PIKMIN 2");
	OSTime time = OSGetTime();
	OSTicksToCalendarTime(time, &calendar);
	snprintf((char*)(header + 0x1820), 0x20, "%02d/%02d/%04d %02d:%02d:%02d", calendar.mon + 1, calendar.mday, calendar.year, calendar.hour,
	         calendar.min, calendar.sec);
	if (mBannerImageFile && mIconImageFile) {
		memcpy(header, mBannerImageFile, 0xe00);
		memcpy(header + 0xe00, mIconImageFile, 0x400);
		memcpy(header + 0x1200, mIconImageFile, 0x400);
		memcpy(header + 0x1600, (void*)((u32)mIconImageFile + 0x400), 0x200);
	} else {
		memset(header, 0, 0xc00);
		memset(header + 0xc00, 0xff, 0x200);
		memset(header + 0xe00, 0x0, 0x2000);
		memset(header + 0x2e00, 0xff, 0x200);
	}
	return;
}

/**
 * @note Address: 0x80446A0C
 * @note Size: 0x104
 */
void Mgr::doSetCardStat(CARDStat* cardStat)
{
	CARDSetIconAddress(cardStat, 0);
	CARDSetCommentAddress(cardStat, 0x1800);
	CARDSetBannerFormat(cardStat, BannerColorCI8);
	CARDSetIconAnim(cardStat, IconAnimationPingPong);

	CARDSetIconFormat(cardStat, 0, 1);
	CARDSetIconFormat(cardStat, 1, 1);
	CARDSetIconFormat(cardStat, 2, 0);
	CARDSetIconFormat(cardStat, 3, 0);
	CARDSetIconFormat(cardStat, 4, 0);
	CARDSetIconFormat(cardStat, 5, 0);
	CARDSetIconFormat(cardStat, 6, 0);
	CARDSetIconFormat(cardStat, 7, 0);

	CARDSetIconSpeed(cardStat, 0, 3);
	CARDSetIconSpeed(cardStat, 1, 3);
	CARDSetIconSpeed(cardStat, 2, 0);
	CARDSetIconSpeed(cardStat, 3, 0);
	CARDSetIconSpeed(cardStat, 4, 0);
	CARDSetIconSpeed(cardStat, 5, 0);
	CARDSetIconSpeed(cardStat, 6, 0);
	CARDSetIconSpeed(cardStat, 7, 0);
}

/**
 * @note Address: 0x80446B10
 * @note Size: 0xDC
 */
bool MemoryCard::Mgr::doCheckCardStat(CARDStat* cardStat)
{
	if (cardStat->iconAddr != 0 || cardStat->commentAddr != 0x1800 || CARDGetBannerFormat(cardStat) != BannerColorCI8
	    || CARDGetIconAnim(cardStat) != IconAnimationPingPong || CARDGetIconFormat(cardStat, 0) != 1 || CARDGetIconFormat(cardStat, 1) != 1
	    || CARDGetIconFormat(cardStat, 2) != 0 || CARDGetIconFormat(cardStat, 3) != 0 || CARDGetIconFormat(cardStat, 4) != 0
	    || CARDGetIconFormat(cardStat, 5) != 0 || CARDGetIconFormat(cardStat, 6) != 0 || CARDGetIconFormat(cardStat, 7) != 0
	    || CARDGetIconSpeed(cardStat, 0) != 3 || CARDGetIconSpeed(cardStat, 1) != 3 || CARDGetIconSpeed(cardStat, 2) != 0
	    || CARDGetIconSpeed(cardStat, 3) != 0 || CARDGetIconSpeed(cardStat, 4) != 0 || CARDGetIconSpeed(cardStat, 5) != 0
	    || CARDGetIconSpeed(cardStat, 6) != 0 || CARDGetIconSpeed(cardStat, 7) != 0) {
		return false;
	}

	return true;
}

} // namespace MemoryCard
} // namespace Game
