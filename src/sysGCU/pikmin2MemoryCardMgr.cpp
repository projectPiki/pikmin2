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
    , mSaveCount(0)
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
#if defined(VERSION_PAL)
	P2ASSERTBOUNDSLINE(399, 0, idx, 3);
#elif defined(VERSION_JP)
	P2ASSERTBOUNDSLINE(390, 0, idx, 3);
#else
	P2ASSERTBOUNDSLINE(396, 0, idx, 3);
#endif
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
	return !curPlayer->mFlag && !curPlayer->mSaveCount;
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
    , mErrorCode(ERRORCODE_None)
    , mBannerImageFile(0)
    , mIconImageFile(0)
{
	OSReport("sizeof(PlayerInfo): %d BLOCKSIZE %d padding:%d \n", sizeof(PlayerInfo), PLAYER_BLOCK_SIZE, 0x3C);
}

/**
 * @note Address: 0x80442B9C
 * @note Size: 0x30
 */
bool Mgr::isErrorOccured()
{
	return getCardStatus() != MCS_Ready;
}

/**
 * @note Address: 0x80442BCC
 * @note Size: 0x120
 */
void Mgr::loadResource(JKRHeap* heap)
{
	Resource* resource = new (heap, 0) Resource(this);
#if defined(VERSION_PAL)
	P2ASSERTLINE(547, resource);
#elif defined(VERSION_JP)
	P2ASSERTLINE(527, resource);
#else
	P2ASSERTLINE(533, resource);
#endif
	JKRArchive* memCardHeader = JKRMountArchive("/memoryCard/memoryCardHeader.szs", JKRArchive::EMM_Mem, heap, JKRArchive::EMD_Head);
#if defined(VERSION_PAL)
	P2ASSERTLINE(554, memCardHeader);
#elif defined(VERSION_JP)
	P2ASSERTLINE(534, memCardHeader);
#else
	P2ASSERTLINE(540, memCardHeader);
#endif
	mBannerImageFile = JKRFileLoader::getGlbResource("banner.dat", memCardHeader); // possibly ResTIMG*
	mIconImageFile   = JKRFileLoader::getGlbResource("icon.dat", memCardHeader);
#if defined(VERSION_PAL)
	P2ASSERTLINE(557, mBannerImageFile);
#elif defined(VERSION_JP)
	P2ASSERTLINE(537, mBannerImageFile);
#else
	P2ASSERTLINE(543, mBannerImageFile);
#endif
#if defined(VERSION_PAL)
	P2ASSERTLINE(558, mIconImageFile);
#elif defined(VERSION_JP)
	P2ASSERTLINE(538, mIconImageFile);
#else
	P2ASSERTLINE(544, mIconImageFile);
#endif
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
		result = MemoryCardMgr::cardFormat(CARDSLOT_SlotA);
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
		setCommand(COMMAND_CheckBeforeSave);
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
		setCommand(COMMAND_CheckError);
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
		setCommand(COMMAND_CreateNewFile);
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
		setCommand(COMMAND_SaveGameOption);
		OSUnlockMutex(&mOsMutex);
		OSSignalCond(&mCond);
	}
	return result;
}

/**
 * @note Address: 0x80442F9C
 * @note Size: 0xB8
 */
#if defined(VERSION_PAL)
bool Mgr::loadGameOption(bool loadLanguage)
#else
bool Mgr::loadGameOption()
#endif
{
	bool result = false;
	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
#if defined(VERSION_PAL)
		MgrCommandLoadGameOption command(6, loadLanguage);
		setCommand(&command);
#else
		setCommand(COMMAND_LoadGameOption);
#endif
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

	if (fileIndex < 0 || fileIndex >= 3) {
		if ((sys->mPlayData->mFileIndex < 0 || (int)sys->mPlayData->mFileIndex >= 3)) {
			fileIndex = 0;
		} else {
			fileIndex = sys->mPlayData->mFileIndex;
		}
	}

	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
		MgrCommandPlayerNo command(COMMAND_SavePlayerNoSerialNum, fileIndex);
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
	u32 index   = COMMAND_SavePlayer;
	if (fileIndex < 0 || fileIndex >= 3) {
		if (sys->mPlayData->mFileIndex < 0 || sys->mPlayData->mFileIndex >= 3) {
			return false;
		} else {
			fileIndex = sys->mPlayData->mFileIndex;
		}
	} else {
		index = COMMAND_SavePlayerNoSerialNum;
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
#if defined(VERSION_PAL)
	P2ASSERTBOUNDSLINE(831, 0, fileIndex, 3);
#elif defined(VERSION_JP)
	P2ASSERTBOUNDSLINE(809, 0, fileIndex, 3);
#else
	P2ASSERTBOUNDSLINE(815, 0, fileIndex, 3);
#endif
	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
		MgrCommandPlayerNo command(COMMAND_LoadPlayer, fileIndex);
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
#if defined(VERSION_PAL)
	P2ASSERTBOUNDSLINE(855, 0, fileIndex, 3);
#elif defined(VERSION_JP)
	P2ASSERTBOUNDSLINE(833, 0, fileIndex, 3);
#else
	P2ASSERTBOUNDSLINE(839, 0, fileIndex, 3);
#endif
	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
		MgrCommandPlayerNo command(COMMAND_DeletePlayer, fileIndex);
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
bool Mgr::copyPlayer(int fileIndexFrom, int fileIndexTo)
{
	bool result = false;
#if defined(VERSION_PAL)
	P2ASSERTBOUNDSINCLUSIVELINE(878, 0, fileIndexFrom, 2);
#elif defined(VERSION_JP)
	P2ASSERTBOUNDSINCLUSIVELINE(856, 0, fileIndexFrom, 2);
#else
	P2ASSERTBOUNDSINCLUSIVELINE(862, 0, fileIndexFrom, 2);
#endif
#if defined(VERSION_PAL)
	P2ASSERTBOUNDSINCLUSIVELINE(879, 0, fileIndexTo, 2);
#elif defined(VERSION_JP)
	P2ASSERTBOUNDSINCLUSIVELINE(857, 0, fileIndexTo, 2);
#else
	P2ASSERTBOUNDSINCLUSIVELINE(863, 0, fileIndexTo, 2);
#endif
	if (checkError() && OSTryLockMutex(&mOsMutex)) {
		result = true;
		MgrCommandCopyPlayer command(COMMAND_CopyPlayer, fileIndexFrom, fileIndexTo);
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
		MgrCommandGetPlayerHeader command(COMMAND_UpdatePlayerHeader, playerInfo);
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

	mErrorCode = ERRORCODE_None;
	switch (command->mFlag) {
	case COMMAND_CreateNewFile:
		setFlag(MCMFLAG_IsWriting);
		result = commandCreateNewFile();
		resetFlag(MCMFLAG_IsWriting);
		break;

	case COMMAND_SaveGameOption:
		setFlag(MCMFLAG_IsWriting);
		result = varifyCardStatus() && commandSaveGameOption(false, false) && commandSaveHeader();
		resetFlag(MCMFLAG_IsWriting);
		break;

	case COMMAND_LoadGameOption:
#if defined(VERSION_PAL)
		result = commandLoadGameOption(reinterpret_cast<MgrCommandLoadGameOption*>(command)->mLoadLanguage);
#else
		result = commandLoadGameOption();
#endif
		break;

	case COMMAND_SavePlayer:
		setFlag(MCMFLAG_IsWriting);
		result = varifyCardStatus() && commandSavePlayer(command->mData.intView, true) && commandSaveHeader();
		resetFlag(MCMFLAG_IsWriting);
		break;

	case COMMAND_SavePlayerNoSerialNum:
		setFlag(MCMFLAG_IsWriting);
		result = varifyCardStatus() && commandSavePlayerNoCheckSerialNo(command->mData.intView, true) && commandSaveHeader();
		resetFlag(MCMFLAG_IsWriting);
		break;

	case COMMAND_LoadPlayer:
		result = commandLoadPlayer(command->mData.intView);
		break;

	case COMMAND_DeletePlayer:
		setFlag(MCMFLAG_IsWriting);
		result = varifyCardStatus() && commandDeletePlayer(command->mData.intView) && commandSaveHeader();
		resetFlag(MCMFLAG_IsWriting);
		break;

	case COMMAND_CopyPlayer:
		setFlag(MCMFLAG_IsWriting);
		result = varifyCardStatus() && commandCopyPlayer(command->mData.shortView[0], command->mData.shortView[1]) && commandSaveHeader();
		resetFlag(MCMFLAG_IsWriting);
		break;

	case COMMAND_UpdatePlayerHeader:
		result = commandUpdatePlayerHeader((PlayerFileInfo*)command->mData.dataView);
		break;

	case COMMAND_CheckSerialNum:
		result = commandCheckSerialNo();
		break;

	case COMMAND_CheckBeforeSave:
		result = commandCheckBeforeSave();
		break;

	case COMMAND_CheckError:
		result = commandCheckError();
		break;

	default:
#if defined(VERSION_PAL)
		P2ASSERTLINE(1011, false);
#elif defined(VERSION_JP)
		P2ASSERTLINE(989, false);
#else
		P2ASSERTLINE(995, false);
#endif
	}
#if defined(VERSION_PAL)
	P2ASSERTLINE(1024, currHeap == JKRHeap::getCurrentHeap());
#elif defined(VERSION_JP)
	P2ASSERTLINE(1002, currHeap == JKRHeap::getCurrentHeap());
#else
	P2ASSERTLINE(1008, currHeap == JKRHeap::getCurrentHeap());
#endif
#if defined(VERSION_PAL)
	P2ASSERTLINE(1026, heapSize == (int)JKRHeap::getCurrentHeap()->getTotalFreeSize());
#elif defined(VERSION_JP)
	P2ASSERTLINE(1004, heapSize == (int)JKRHeap::getCurrentHeap()->getTotalFreeSize());
#else
	P2ASSERTLINE(1010, heapSize == (int)JKRHeap::getCurrentHeap()->getTotalFreeSize());
#endif

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
#if defined(VERSION_PAL)
	P2ASSERTLINE(1047, playerInfo);
#elif defined(VERSION_JP)
	P2ASSERTLINE(1025, playerInfo);
#else
	P2ASSERTLINE(1031, playerInfo);
#endif
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
				player->mSaveCount   = 0;
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
	if (fileOpen(&fileInfo, CARDSLOT_SlotA, cFileName)) {
		CARDClose(&fileInfo);
		return commandCheckSerialNo();

	} else {
		checkSpace(CARDSLOT_SlotA);
		if (mStatusFlag == INSIDESTATUS_Mounted) {
			setInsideStatusFlag(INSIDESTATUS_FileOpenError);
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
	if (fileOpen(fileInfo, CARDSLOT_SlotA, cFileName)) {
		CARDClose(fileInfo);
	} else {
		if (checkSpace(CARDSLOT_SlotA)) {
			setInsideStatusFlag(INSIDESTATUS_FileOpenError);
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
		setInsideStatusFlag(INSIDESTATUS_Mounted);
		result = true;
		break;

	case 1:
		setInsideStatusFlag(INSIDESTATUS_NoFileSpace);
		break;

	case 2:
		setInsideStatusFlag(INSIDESTATUS_NoFileEntry);
		break;

	default:
#if defined(VERSION_PAL)
		JUT_PANICLINE(1236, "P2Assert");
#elif defined(VERSION_JP)
		JUT_PANICLINE(1214, "P2Assert");
#else
		JUT_PANICLINE(1220, "P2Assert");
#endif
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
		if (fileOpen(&fileInfo, CARDSLOT_SlotA, cFileName)) {
			CARDClose(&fileInfo);
			if (!isErrorOccured()) {
				writeHeader(CARDSLOT_SlotA, cFileName);
			}
			if (!isErrorOccured()) {
				writeCardStatus(CARDSLOT_SlotA, cFileName);
			}
			if (!isErrorOccured()) {
				result = true;
			}
		} else if (!isErrorOccured()) {
			setInsideStatusFlag(INSIDESTATUS_FileOpenError);
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
	if (fileOpen(&fileInfo, CARDSLOT_SlotA, cFileName)) {
		CARDClose(&fileInfo);
		result = true;
	} else {
		checkSpace(CARDSLOT_SlotA);

		if (readCardSerialNo(&serial, CARDSLOT_SlotA)) {
			sys->mPlayData->setCardSerialNo(serial);
		}

		if (checkStatus() == MCS_Ready) {
			int createResult = CARDCreate(0, cFileName, 0x36000, &fileInfo);
			CARDClose(&fileInfo);
			if (!createResult) {
				dataFormat(CARDSLOT_SlotA);
			} else {
				setInsideStatusFlag(INSIDESTATUS_ErrorOccurred);
			}
		}

		if (!isErrorOccured()) {
			result = true;
		} else {
			setInsideStatusFlag(INSIDESTATUS_ErrorOccurred);
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
	u8* buffer = new u8[HEADER_BLOCK_SIZE];
	memset(buffer, 0xCD, HEADER_BLOCK_SIZE);

	for (int i = 0; i < 0x1B; i++) {
		if (!isErrorOccured()) {
			write(slot, cFileName, buffer, HEADER_BLOCK_SIZE, GET_HEADER_OFFSET(i));
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
	if (fileOpen(&fileInfo, CARDSLOT_SlotA, cFileName)) {
		checkCardStat(CARDSLOT_SlotA, &fileInfo);
		CARDClose(&fileInfo);
	}

	if (_D0) {
		result = true;
	} else {
		result = writeBrokenData(CARDSLOT_SlotA);
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
		u8* optionBuffer = new (mHeap, -32) u8[OPTION_BLOCK_SIZE];

#if defined(VERSION_PAL)
		P2ASSERTLINE(1516, optionBuffer);
#elif defined(VERSION_JP)
		P2ASSERTLINE(1494, optionBuffer);
#else
		P2ASSERTLINE(1500, optionBuffer);
#endif

		int selectedSlot    = -1;
		bool hasWriteFailed = false;
		if (!skipReadCheck) {
			for (int i = 0; i < 2; i++) {
				if (!read(CARDSLOT_SlotA, cFileName, optionBuffer, OPTION_BLOCK_SIZE, GET_OPTION_OFFSET(i))) {
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

			OptionInfo* optionInfo     = (OptionInfo*)optionBuffer;
			optionInfo->mMagic         = 'OpVa';
			optionInfo->mVersionType   = '0002';
			optionInfo->mSaveSlotIndex = sys->mPlayData->mSaveSlotIndex;

			RamStream ramStream(&optionInfo->mFileBuffer, OPTION_FILE_SIZE);
			writeGameOption(ramStream);
			optionInfo->mChecksum = calcCheckSumOptionInfo(optionInfo);

			hasWriteFailed = write(CARDSLOT_SlotA, cFileName, optionBuffer, OPTION_BLOCK_SIZE, GET_OPTION_OFFSET(selectedSlot));
			saveSuccessful = hasWriteFailed;
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
#if defined(VERSION_PAL)
bool Mgr::commandLoadGameOption(bool loadLanguage)
#else
bool Mgr::commandLoadGameOption()
#endif
{
	bool result = false;

#if defined(VERSION_PAL)
	if (loadLanguage) {
		sys->mPlayData->mFlags.set(CommonSaveData::Mgr::SaveFlag_Language);
	} else {
		sys->mPlayData->mFlags.unset(CommonSaveData::Mgr::SaveFlag_Language);
	}
#endif
	u64 serial;
	if (readCardSerialNo(&serial, CARDSLOT_SlotA)) {
		int freeSize = JKRHeap::getCurrentHeap()->getTotalFreeSize();

		u8* infoBuffers[2];
		infoBuffers[0] = new (mHeap, -32) u8[OPTION_BLOCK_SIZE];
#if defined(VERSION_PAL)
		P2ASSERTLINE(1642, infoBuffers[0]);
#elif defined(VERSION_JP)
		P2ASSERTLINE(1610, infoBuffers[0]);
#else
		P2ASSERTLINE(1616, infoBuffers[0]);
#endif
		infoBuffers[1] = new (mHeap, -32) u8[OPTION_BLOCK_SIZE];
#if defined(VERSION_PAL)
		P2ASSERTLINE(1644, infoBuffers[1]);
#elif defined(VERSION_JP)
		P2ASSERTLINE(1612, infoBuffers[1]);
#else
		P2ASSERTLINE(1618, infoBuffers[1]);
#endif

		int i;
		bool readError = false;
		for (i = 0; i < 2; i++) {
			if (!read(CARDSLOT_SlotA, cFileName, infoBuffers[i], OPTION_BLOCK_SIZE, GET_OPTION_OFFSET(i))) {
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
				mErrorCode = ERRORCODE_OptionBroken;
				sys->mPlayData->setDefault();
			} else {
				result                         = true;
				sys->mPlayData->mSaveSlotIndex = optionResult->mSaveSlotIndex;
				RamStream ramStream(&optionResult->mFileBuffer, OPTION_FILE_SIZE);
				readGameOption(ramStream);
			}

			sys->mPlayData->setCardSerialNo(serial);
		}

		delete (infoBuffers[0]);
		delete (infoBuffers[1]);

		// check we successfully deleted the buffers
#if defined(VERSION_PAL)
		P2ASSERTLINE(1733, freeSize == (int)JKRHeap::getCurrentHeap()->getTotalFreeSize());
#elif defined(VERSION_JP)
		P2ASSERTLINE(1701, freeSize == (int)JKRHeap::getCurrentHeap()->getTotalFreeSize());
#else
		P2ASSERTLINE(1707, freeSize == (int)JKRHeap::getCurrentHeap()->getTotalFreeSize());
#endif
	}

	sys->mPlayData->setup();
#if defined(VERSION_PAL)
	sys->mPlayData->mFlags.unset(CommonSaveData::Mgr::SaveFlag_Language);
#endif
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
bool Mgr::checkSerialNo(bool setError)
{
	bool result = false;
	if (!(sys->mPlayData->mFlags.isSet(CommonSaveData::Mgr::SaveFlag_SerialNoSet))) {
		if (setError) {
			mErrorCode = ERRORCODE_SerialNoUnset;
		}
		result = true;
	} else {
		if (verifyCardSerialNo(&sys->mPlayData->mCardSerialNo, CARDSLOT_SlotA)) {
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
#if defined(VERSION_PAL)
	P2ASSERTBOUNDSLINE(1943, 0, fileIndex, 3);
#elif defined(VERSION_JP)
	P2ASSERTBOUNDSLINE(1908, 0, fileIndex, 3);
#else
	P2ASSERTBOUNDSLINE(1914, 0, fileIndex, 3);
#endif
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
	if (readCardSerialNo(&serial, CARDSLOT_SlotA)) {
		u8* buffer = new (mHeap, -32) u8[PLAYER_BLOCK_SIZE];

#if defined(VERSION_PAL)
		P2ASSERTLINE(1968, buffer);
#elif defined(VERSION_JP)
		P2ASSERTLINE(1933, buffer);
#else
		P2ASSERTLINE(1939, buffer);
#endif
		sys->mPlayData->mSaveCount++;

		PlayerInfo* playerInfo         = (PlayerInfo*)buffer;
		playerInfo->mMagic             = 'PlVa'; // Magic Word
		playerInfo->mVersionType       = '0003'; // Version
		playerInfo->mPlayer.mSaveCount = sys->mPlayData->mSaveCount;
		playerInfo->mSaveSlotIndex     = fileIndex; // File Index
		playerInfo->mPlayer.mFlag      = 0;
		playerInfo->mPlayer._01        = param_2;
		playerInfo->mPlayer._02        = sys->mPlayData->_22;

		if (gameSystem) {
			playerInfo->mPlayer.mDay = gameSystem->mTimeMgr->mDayCount + 1; // Day Count

			CommonSaveData::Mgr* localSave = sys->mPlayData;
			int time                       = localSave->mTime + playData->calcPlayMinutes();
			if (playData->mCaveSaveData.mIsInCave) {
				playerInfo->mPlayer.mRedPikis    = playData->mCaveSaveData.mCavePikis.getColorSum(Red);
				playerInfo->mPlayer.mBluePikis   = playData->mCaveSaveData.mCavePikis.getColorSum(Blue);
				playerInfo->mPlayer.mYellowPikis = playData->mCaveSaveData.mCavePikis.getColorSum(Yellow);
				playerInfo->mPlayer.mWhitePikis  = playData->mCaveSaveData.mCavePikis.getColorSum(White);
				playerInfo->mPlayer.mPurplePikis = playData->mCaveSaveData.mCavePikis.getColorSum(Purple);
			} else {
				playerInfo->mPlayer.mRedPikis    = playData->mPikiContainer.getColorSum(Red);
				playerInfo->mPlayer.mBluePikis   = playData->mPikiContainer.getColorSum(Blue);
				playerInfo->mPlayer.mYellowPikis = playData->mPikiContainer.getColorSum(Yellow);
				playerInfo->mPlayer.mWhitePikis  = playData->mPikiContainer.getColorSum(White);
				playerInfo->mPlayer.mPurplePikis = playData->mPikiContainer.getColorSum(Purple);
			}

			playerInfo->mPlayer.mPokos = playData->mPokoCount;

			// Register Cave Information
			if (playData->mCaveSaveData.mIsInCave) {
				ID32 id;
				int caveFloor;
				playData->getCurrentCave(id, caveFloor);
				playerInfo->mPlayer.mCaveID    = id.getID();
				playerInfo->mPlayer.mCaveFloor = caveFloor + 1;
			} else {
				playerInfo->mPlayer.mCaveID    = 0;
				playerInfo->mPlayer.mCaveFloor = 123;
			}
			playerInfo->mPlayer.mTreasures = playData->mZukanStat->calcEarnKinds();
			playerInfo->mPlayer.mPlayTime  = time;
		} else {
#if defined(VERSION_PAL)
			JUT_PANICLINE(2071, "dameck\n");
#elif defined(VERSION_JP)
			JUT_PANICLINE(2036, "dameck\n");
#else
			JUT_PANICLINE(2042, "dameck\n");
#endif

			// this code never gets reached smh.
			playerInfo->mPlayer.mDay         = 0;
			playerInfo->mPlayer.mRedPikis    = 1;
			playerInfo->mPlayer.mBluePikis   = 2;
			playerInfo->mPlayer.mYellowPikis = 3;
			playerInfo->mPlayer.mWhitePikis  = 4;
			playerInfo->mPlayer.mPurplePikis = 5;
			playerInfo->mPlayer.mPokos       = 12345;
			playerInfo->mPlayer.mCaveID      = 1;
			playerInfo->mPlayer.mCaveFloor   = 99;
			playerInfo->mPlayer.mTreasures   = 0;
		}

		RamStream ramStream(&playerInfo->mFileBuffer, PLAYER_FILE_SIZE);
		writePlayer(ramStream);
		result = savePlayerProc(fileIndex, buffer, true);

		delete (buffer);

		if (result) {
			sys->mPlayData->setCardSerialNo(serial);
		}
	}

#if defined(VERSION_PAL)
	P2ASSERTLINE(2108, freeSize == (int)JKRHeap::getCurrentHeap()->getTotalFreeSize());
#elif defined(VERSION_JP)
	P2ASSERTLINE(2073, freeSize == (int)JKRHeap::getCurrentHeap()->getTotalFreeSize());
#else
	P2ASSERTLINE(2079, freeSize == (int)JKRHeap::getCurrentHeap()->getTotalFreeSize());
#endif

	if (result) {
		result = commandSaveGameOption(true, false);
	}

	return result;
}

/**
 * @note Address: 0x80444DD8
 * @note Size: 0x70
 */
bool Mgr::getPlayerInfo(s8 fileIndex, PlayerInfoHeader* playerInfo, bool* outCheck)
{
	int index = getIndexPlayerInfo(fileIndex, playerInfo, outCheck);
	return !isErrorOccured() && (index >= 0 && index < 4);
}

/**
 * @note Address: 0x80444E48
 * @note Size: 0x2B0
 */
int Mgr::getIndexPlayerInfo(s8 fileIndex, PlayerInfoHeader* infoHeader, bool* outCheck)
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
#if defined(VERSION_PAL)
		JUT_ASSERTLINE(2192, i < 5, "MemoryCardModify Error");
#elif defined(VERSION_JP)
		JUT_ASSERTLINE(2157, i < 5, "MemoryCardModify Error");
#else
		JUT_ASSERTLINE(2163, i < 5, "MemoryCardModify Error");
#endif
		doLoop = false;
		for (int j = 0; j < 4; j++) {
			if (checkPlayerNoPlayerInfo(j, fileIndex, &localHeader)) {
				noPlayerInfoCheck = true;
				if (index == -1) {
					index = j;
					if (infoHeader) {
						*infoHeader = localHeader;
					}
				} else if (modifyPlayerInfo(fileIndex, outCheck)) {
					index  = -1;
					doLoop = true;
					break;
				} else {
					index      = -1;
					mErrorCode = ERRORCODE_PlayerBroken;
					break;
				}
			} else {
				if (infoHeader && infoHeader->mMagic != 'PlVa') {
					bool fileIndexCheck = false;
					if (localHeader.mSaveSlotIndex == fileIndex) {
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
#if defined(VERSION_PAL)
	P2ASSERTBOUNDSLINE(2293, 0, fileIndex, 3);
#elif defined(VERSION_JP)
	P2ASSERTBOUNDSLINE(2258, 0, fileIndex, 3);
#else
	P2ASSERTBOUNDSLINE(2264, 0, fileIndex, 3);
#endif
#if defined(VERSION_PAL)
	commandLoadGameOption(false);
#else
	commandLoadGameOption();
#endif
	if ((s32)mErrorCode == ERRORCODE_OptionBroken)
		mErrorCode = ERRORCODE_None;

	if (!isErrorOccured()) {
		if (readCardSerialNo(&serial, CARDSLOT_SlotA)) {
			u8* buffer = new (mHeap, -32) u8[PLAYER_BLOCK_SIZE];

#if defined(VERSION_PAL)
			P2ASSERTLINE(2319, buffer);
#elif defined(VERSION_JP)
			P2ASSERTLINE(2284, buffer);
#else
			P2ASSERTLINE(2290, buffer);
#endif

			sys->mPlayData->setCardSerialNo(serial);
			if (loadPlayerProc(fileIndex, buffer)) {
				PlayerInfo* info = (PlayerInfo*)buffer;
				RamStream ramStream(&info->mFileBuffer, PLAYER_FILE_SIZE);
				readPlayer(ramStream);

				CommonSaveData::Mgr* saveMgr = sys->mPlayData;
				saveMgr->mFileIndex          = fileIndex;
				saveMgr->mSaveCount          = info->mPlayer.mSaveCount;
				saveMgr->mTime               = info->mPlayer.mPlayTime;
				saveMgr->_22                 = info->mPlayer._02; // hmm.
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
#if defined(VERSION_PAL)
	P2ASSERTBOUNDSLINE(2411, 0, fileIndex, 3);
#elif defined(VERSION_JP)
	P2ASSERTBOUNDSLINE(2376, 0, fileIndex, 3);
#else
	P2ASSERTBOUNDSLINE(2382, 0, fileIndex, 3);
#endif
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
#if defined(VERSION_PAL)
	P2ASSERTBOUNDSLINE(2436, 0, fileIndex, 3);
#elif defined(VERSION_JP)
	P2ASSERTBOUNDSLINE(2401, 0, fileIndex, 3);
#else
	P2ASSERTBOUNDSLINE(2407, 0, fileIndex, 3);
#endif

	PlayerInfoHeader infoHeader;
	int playerInfo = getIndexPlayerInfo(fileIndex, &infoHeader, nullptr);
	if (playerInfo >= 0 && playerInfo < 4) {
		if ((loadSuccess = read(CARDSLOT_SlotA, cFileName, playerDataBuffer, PLAYER_BLOCK_SIZE, GET_PLAYER_OFFSET(playerInfo)), loadSuccess)
		    && !checkPlayerInfo((PlayerInfo*)playerDataBuffer)) {
			loadSuccess = false;
			mErrorCode  = ERRORCODE_PlayerBroken;
		}
	} else {
		if (infoHeader.mMagic == 'PlIn') {
			sys->mPlayData->resetPlayer((s8)fileIndex);
			playData->reset();
		} else {
			loadSuccess = false;
			mErrorCode  = ERRORCODE_PlayerBroken;
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
			mErrorCode = ERRORCODE_PlayerBroken;
		}
	}
	return result;
}

/**
 * @note Address: 0x8044553C
 * @note Size: 0x19C
 */
bool Mgr::savePlayerProc(s8 fileIndex, u8* playerDataBuffer, bool check)
{
	s8 tempIndex = -1;
	int idx;
	bool result = false;

#if defined(VERSION_PAL)
	P2ASSERTBOUNDSLINE(2535, 0, fileIndex, 3);
#elif defined(VERSION_JP)
	P2ASSERTBOUNDSLINE(2500, 0, fileIndex, 3);
#else
	P2ASSERTBOUNDSLINE(2506, 0, fileIndex, 3);
#endif

	PlayerInfo* playerInfo = (PlayerInfo*)playerDataBuffer;
	if (getIndexInvalidPlayerInfo(&idx, &tempIndex, fileIndex, playerInfo->mPlayer.mSaveCount, check)) {
		if (idx < 0 || idx >= 4) {
			mErrorCode = ERRORCODE_PlayerBroken;
			modifyPlayerInfo(fileIndex, nullptr);
		} else {
			playerInfo->mChecksum = calcCheckSumPlayerInfo((PlayerInfo*)playerDataBuffer);

			s8 newFileIndex = fileIndex;
			result          = write(CARDSLOT_SlotA, cFileName, playerDataBuffer, PLAYER_BLOCK_SIZE, GET_PLAYER_OFFSET(idx));
			newFileIndex    = fileIndex;
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
		mErrorCode = ERRORCODE_SerialNoUnset;
	} else {
		if (verifyCardSerialNo(&sys->mPlayData->mCardSerialNo, CARDSLOT_SlotA)) {
			result = true;
		}
	}
	return result;
}

/**
 * @note Address: 0x80445740
 * @note Size: 0x1C8
 */
bool Mgr::commandCopyPlayer(s8 fileIndexFrom, s8 fileIndexTo)
{
	u8* buffer = new (mHeap, -0x20) u8[PLAYER_BLOCK_SIZE];
#if defined(VERSION_PAL)
	P2ASSERTLINE(2679, buffer);
#elif defined(VERSION_JP)
	P2ASSERTLINE(2644, buffer);
#else
	P2ASSERTLINE(2650, buffer);
#endif

	bool result = loadPlayerProc(fileIndexFrom, buffer);
	if (result) {
		PlayerInfo* info     = (PlayerInfo*)buffer;
		info->mSaveSlotIndex = fileIndexTo;
		result               = savePlayerProc(fileIndexTo, buffer, false);
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
	return calcCheckSum(optionInfo, OPTION_BLOCK_SIZE - 0x4);
}

/**
 * @note Address: 0x804459E8
 * @note Size: 0x40
 */
bool Mgr::testCheckSumOptionInfo(OptionInfo* optionInfo)
{
	return (calcCheckSum(optionInfo, OPTION_BLOCK_SIZE - 0x4) == optionInfo->mChecksum);
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
	return calcCheckSum(playerInfo, PLAYER_BLOCK_SIZE - 0x4);
}

/**
 * @note Address: 0x80445AC4
 * @note Size: 0x48
 */
bool Mgr::testCheckSumPlayerInfo(PlayerInfo* playerInfo)
{
	return (calcCheckSum(playerInfo, PLAYER_BLOCK_SIZE - 0x4) == playerInfo->mChecksum);
}

/**
 * @note Address: 0x80445B0C
 * @note Size: 0xB8
 */
u32 Mgr::getCardStatus()
{
	u32 result;
	if (checkStatus() == MCS_Ready) {
		switch (mErrorCode) {
		case ERRORCODE_None:
			result = MCS_Ready;
			break;
		case ERRORCODE_OptionBroken:
			result = MCS_GameOptionsBroken;
			break;
		case ERRORCODE_PlayerBroken:
			result = MCS_PlayerDataBroken;
			break;
		case ERRORCODE_SerialNoUnset:
			result = MCS_SerialNoError;
			break;
		default:
#if defined(VERSION_PAL)
			P2ASSERTLINE(2861, false);
#elif defined(VERSION_JP)
			P2ASSERTLINE(2826, false);
#else
			P2ASSERTLINE(2832, false);
#endif
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
	u8* buffer = new (mHeap, -32) u8[OPTION_BLOCK_SIZE];
#if defined(VERSION_PAL)
	P2ASSERTLINE(2886, buffer);
#elif defined(VERSION_JP)
	P2ASSERTLINE(2851, buffer);
#else
	P2ASSERTLINE(2857, buffer);
#endif

	result                        = true;
	((OptionInfo*)buffer)->mMagic = 'OpIn';

	for (int i = 0; i < 2; i++) {
		if (!write(CARDSLOT_SlotA, cFileName, buffer, OPTION_BLOCK_SIZE, GET_OPTION_OFFSET(i))) {
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
bool Mgr::writeInvalidPlayerInfo(int playerIndex, s8 fileIndex)
{
#if defined(VERSION_PAL)
	P2ASSERTBOUNDSLINE(2951, 0, playerIndex, 4);
#elif defined(VERSION_JP)
	P2ASSERTBOUNDSLINE(2916, 0, playerIndex, 4);
#else
	P2ASSERTBOUNDSLINE(2922, 0, playerIndex, 4);
#endif
	u8* buffer = new (mHeap, -32) u8[0x2000];
#if defined(VERSION_PAL)
	P2ASSERTLINE(2954, buffer);
#elif defined(VERSION_JP)
	P2ASSERTLINE(2919, buffer);
#else
	P2ASSERTLINE(2925, buffer);
#endif
	memset(buffer, 0xCD, 0x2000);

	PlayerInfo* info     = (PlayerInfo*)buffer;
	info->mMagic         = 'PlIn';
	info->mSaveSlotIndex = fileIndex;

	bool result = write(CARDSLOT_SlotA, cFileName, buffer, 0x2000, GET_PLAYER_OFFSET(playerIndex));
	delete (buffer);
	return result;
}

/**
 * @note Address: 0x80445DFC
 * @note Size: 0x1A8
 */
bool Mgr::checkPlayerNoPlayerInfo(int playerIndex, s8 fileIndex, PlayerInfoHeader* infoHeader)
{
	bool result     = false;
	char* localName = cFileName;
	CARDFileInfo fileInfo;
	if (fileOpen(&fileInfo, CARDSLOT_SlotA, cFileName)) {
		checkCardStat(CARDSLOT_SlotA, &fileInfo);
		CARDClose(&fileInfo);
	}
	if (_D0) {
		u8* buffer = new (mHeap, -32) u8[0x2000];
#if defined(VERSION_PAL)
		P2ASSERTLINE(3004, buffer);
#elif defined(VERSION_JP)
		P2ASSERTLINE(2969, buffer);
#else
		P2ASSERTLINE(2975, buffer);
#endif
		if (read(CARDSLOT_SlotA, localName, buffer, 0x200, GET_PLAYER_OFFSET(playerIndex))) {
			PlayerInfo* playerInfo = (PlayerInfo*)buffer;
			if (infoHeader) {
				*infoHeader = *playerInfo;
			}

			if (playerInfo->mSaveSlotIndex == fileIndex && playerInfo->mMagic == 'PlVa') {
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
bool Mgr::getIndexInvalidPlayerInfo(int* outPlayerIndex, s8* outFileIndex, s8 targetFileIndex, u32 targetSaveCount, bool checkValue)
{
	int blockRemaps[4];     // _24, remaps card slot blocks to player file index (?)
	int blockInfoMagics[4]; // _14, player info magic of each block

	for (int i = 0; i < 4; i++) {
		blockRemaps[i]     = -1;
		blockInfoMagics[i] = 0xCDCDCDCD;
	}

	bool isValid   = true;
	int foundIndex = -1;

	u8* buffer = new (mHeap, -32) u8[0x200];
#if defined(VERSION_PAL)
	P2ASSERTLINE(3100, buffer);
#elif defined(VERSION_JP)
	P2ASSERTLINE(3065, buffer);
#else
	P2ASSERTLINE(3071, buffer);
#endif

	for (int i = 0; i < 4; i++) {
		if (read(CARDSLOT_SlotA, cFileName, buffer, 0x200, GET_PLAYER_OFFSET(i))) {
			PlayerInfoHeader* info = (PlayerInfoHeader*)buffer;
			u32 magic              = info->mMagic;
			s8 saveIndex           = (u8)info->mSaveSlotIndex;

			blockRemaps[i]     = saveIndex;
			blockInfoMagics[i] = magic;

			if (foundIndex == -1 && saveIndex == targetFileIndex && magic != 'PlVa') {
				*outFileIndex = targetFileIndex;
				foundIndex    = i;
			}

			if (info->mSaveSlotIndex == targetFileIndex && info->mMagic == 'PlVa' && checkValue
			    && info->mPlayer.mSaveCount >= targetSaveCount) {
#if defined(VERSION_PAL)
				JUT_ASSERTLINE(3177, targetSaveCount == 1, "card [%d] memory[%d]\n", info->mPlayer.mSaveCount, targetSaveCount);
#elif defined(VERSION_JP)
				JUT_ASSERTLINE(3142, targetSaveCount == 1, "card [%d] memory[%d]\n", info->mPlayer.mSaveCount, targetSaveCount);
#else
				JUT_ASSERTLINE(3148, targetSaveCount == 1, "card [%d] memory[%d]\n", info->mPlayer.mSaveCount, targetSaveCount);
#endif
				isValid    = false;
				mErrorCode = ERRORCODE_SerialNoUnset;
				break;
			}
		} else {
			isValid = false;
			break;
		}
	}

	delete (buffer);

	if (isValid && foundIndex == -1) {
		int fileIndices[3]; // save file indices
		fileIndices[0] = -1;
		fileIndices[1] = -1;
		fileIndices[2] = -1;

		u32 check = foundIndex;
		for (int i = 0; i < 4; i++) {
			if (blockRemaps[i] >= 0 && blockRemaps[i] < 3) {
				if (fileIndices[blockRemaps[i]] == -1) {
					fileIndices[blockRemaps[i]] = i;
					continue;
				} else if (blockInfoMagics[i] == 'PlVa' && blockInfoMagics[fileIndices[blockRemaps[i]]] != 'PlVa') {
					foundIndex = fileIndices[blockRemaps[i]];
				} else if (blockInfoMagics[i] != 'PlVa' && blockInfoMagics[fileIndices[blockRemaps[i]]] == 'PlVa') {
					foundIndex = i;
				} else if (blockInfoMagics[i] != 'PlVa' && blockInfoMagics[fileIndices[blockRemaps[i]]] != 'PlVa') {
					foundIndex = i;
				}

				if (foundIndex != -1) {
					*outFileIndex = targetFileIndex;
					break;
				}
			}
		}

		if (isValid && foundIndex == -1) {
			for (int i = 0; i < 4; i++) {
				if (blockRemaps[i] < 0 || blockRemaps[i] > 2) {
					foundIndex = i;
				} else if (blockInfoMagics[i] != 'PlVa' && blockInfoMagics[i] != 'PlIn') {
					foundIndex = i;
				}

				if (foundIndex != -1) {
					*outFileIndex = targetFileIndex;
					break;
				}
			}
		}
	}

	*outPlayerIndex = foundIndex;
	return isValid;
}

inline bool Mgr::checkCheckSum(PlayerInfo* info)
{
	return _D0 && info->mChecksum == calcCheckSum(info, PLAYER_BLOCK_SIZE - 0x4);
}

inline bool Mgr::checkPlVa(PlayerInfo* info)
{
	bool checkPlVa = false;
	if (checkCheckSum(info)) {
		if (info->mMagic == 'PlVa') {
			checkPlVa = true;
		}
	}
	return checkPlVa;
}

inline bool Mgr::checkInfoBody(PlayerInfo* info)
{
	bool checkVersion = false;
	if (checkPlVa(info) && info->mVersionType == '0003') {
		checkVersion = true;
	}

	return checkVersion;
}

inline bool Mgr::checkInfo(PlayerInfo* info)
{
	return checkInfoBody(info);
}

/**
 * @note Address: 0x80446324
 * @note Size: 0x4BC
 */
bool Mgr::modifyPlayerInfo(s8 fileIndex, bool* outCheckWrite)
{
	bool result;
	u32 fileSaveCounts[3];        // 0x1C, save counts per file index
	int fileBlockIndices[3];      // 0x10, remaps player file index to card slot blocks (?)
	bool blockInvalidStatuses[4]; // 0xC, invalid status of each card block (?)
	bool fileInvalidStatuses[3];  // 0x8, invalid status of each file index

	if (outCheckWrite) {
		*outCheckWrite = false;
	}

	for (int i = 0; i < 3; i++) {
		fileSaveCounts[i]      = 0;
		fileInvalidStatuses[i] = false;
		fileBlockIndices[i]    = -1;
	}

	for (int i = 0; i < 4; i++) {
		blockInvalidStatuses[i] = false;
	}

	for (int i = 0; i < 4; i++) {
		u8* buffer = new (mHeap, -32) u8[PLAYER_BLOCK_SIZE];
#if defined(VERSION_PAL)
		P2ASSERTLINE(3474, buffer);
#elif defined(VERSION_JP)
		P2ASSERTLINE(3439, buffer);
#else
		P2ASSERTLINE(3445, buffer);
#endif

		result = read(CARDSLOT_SlotA, cFileName, buffer, PLAYER_BLOCK_SIZE, GET_PLAYER_OFFSET(i));
		if (result) {
			PlayerInfo* info = (PlayerInfo*)buffer;
			if (checkInfo(info)) {
				const s8 saveSlotIndex = info->mSaveSlotIndex;
				if (!fileSaveCounts[saveSlotIndex] || info->mPlayer.mSaveCount > fileSaveCounts[saveSlotIndex]) {
					if (fileBlockIndices[saveSlotIndex] != -1) {
						// if a file already has an assigned block, the block is invalid
						blockInvalidStatuses[fileBlockIndices[saveSlotIndex]] = true;
					}
					// if the file has never been saved to or is newer (has a greater save count),
					// set the block index and the save counts for this file index
					fileBlockIndices[saveSlotIndex] = i;
					fileSaveCounts[saveSlotIndex]   = info->mPlayer.mSaveCount;
				} else {
					// if the save file of this block has been saved to, but is older (has a lesser or equal save count),
					// then the block is invalid
					blockInvalidStatuses[i] = true;
				}
			} else if (info->mMagic == 'PlIn' && info->mSaveSlotIndex >= 0 && info->mSaveSlotIndex < 3) {
				if (fileInvalidStatuses[info->mSaveSlotIndex]) {
					// if the file at this block has already been marked invalid, mark the block invalid too
					blockInvalidStatuses[i] = true;
				}

				fileInvalidStatuses[info->mSaveSlotIndex] = true;
			} else {
				blockInvalidStatuses[i] = true;
			}
		}

		memset(buffer, 0xCD, PLAYER_BLOCK_SIZE);
		delete (buffer);

		if (!result) {
			break;
		}
	}

	if (result) {
		for (int i = 0; i < 4; i++) {
			if (!blockInvalidStatuses[i]) {
				// skip valid blocks
				continue;
			}

			bool checkWrite;
			if (!fileInvalidStatuses[fileIndex] && fileBlockIndices[fileIndex] == -1) {
				// if the file is not marked invalid, but the file has no block index, write invalid info
				checkWrite = writeInvalidPlayerInfo(i, fileIndex);
			} else {
				// the file is invalid, write invalid info
				s8 someChar = fileIndex;
				for (int j = 0; j < 3; j++) {
					if (!fileInvalidStatuses[j] && fileBlockIndices[j] == -1) {
						someChar = j;
						break;
					}
				}
				checkWrite = writeInvalidPlayerInfo(i, someChar);
			}

			if (checkWrite) {
				if (!outCheckWrite) {
					break;
				}
				*outCheckWrite = true;
				break;
			}
			result = false;
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
			mErrorCode = ERRORCODE_SerialNoUnset;
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
		mErrorCode = ERRORCODE_None;
	} else {
		result = true;
	}
#if defined(VERSION_PAL)
	P2ASSERTLINE(3802, result);
#elif defined(VERSION_JP)
	P2ASSERTLINE(3767, result);
#else
	P2ASSERTLINE(3773, result);
#endif
	return result;
}

/**
 * @note Address: 0x804468E0
 * @note Size: 0x12C
 */
void Mgr::doMakeHeader(u8* header)
{
	OSCalendarTime calendar;
#if defined(VERSION_JP)
	snprintf((char*)(header + 0x1800), 0x20, "ピクミン２　セーブデータ ");
#else
	snprintf((char*)(header + 0x1800), 0x20, "PIKMIN 2");
#endif
	OSTime time = OSGetTime();
	OSTicksToCalendarTime(time, &calendar);
#if defined(VERSION_JP)
	snprintf((char*)(header + 0x1820), 0x20, "%04d/%02d/%02d %02d:%02d:%02d", calendar.year, calendar.mon + 1, calendar.mday, calendar.hour,
	         calendar.min, calendar.sec);
#else
	snprintf((char*)(header + 0x1820), 0x20, "%02d/%02d/%04d %02d:%02d:%02d", calendar.mon + 1, calendar.mday, calendar.year, calendar.hour,
	         calendar.min, calendar.sec);
#endif
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
