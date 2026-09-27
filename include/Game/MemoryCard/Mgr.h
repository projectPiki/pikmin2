#ifndef _GAME_MEMORYCARD_MGR_H
#define _GAME_MEMORYCARD_MGR_H

#include "MemoryCardMgr.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "stream.h"
#include "types.h"
#include "Game/MemoryCard/Player.h"

#define GET_CARD_OFFSET(i, size, offset) (i * size + offset)

// block size of save header
#define HEADER_BLOCK_SIZE (0x2000)
// header section offset at save index i
#define GET_HEADER_OFFSET(i) GET_CARD_OFFSET(i, HEADER_BLOCK_SIZE, 0)

// block size of save game options
#define OPTION_BLOCK_SIZE (0x2000)
// file buffer size of game options
#define OPTION_FILE_SIZE (0x1C00)
// game option section offset at save index i
#define GET_OPTION_OFFSET(i) GET_CARD_OFFSET(i, OPTION_BLOCK_SIZE, HEADER_BLOCK_SIZE)

// block size of save player options
#define PLAYER_BLOCK_SIZE (0xC000)
// file buffer size of save player options
#define PLAYER_FILE_SIZE (0xBF80)
// player option section offset at save index i
#define GET_PLAYER_OFFSET(i) GET_CARD_OFFSET(i, PLAYER_BLOCK_SIZE, GET_OPTION_OFFSET(2))

struct Stream;

namespace Game {
namespace MemoryCard {
struct PlayerFileInfo;
struct PlayerInfoHeader;

struct PlayerInfo : PlayerInfoHeader {
	// _0000-_0040 = PlayerInfoHeader
	u8 mFileBuffer[0xBFBC]; // _0040
	u32 mChecksum;          // _BFFC
};

struct OptionInfo {
	u32 mMagic;             // _0000
	u32 mVersionType;       // _0004
	u32 mSaveSlotIndex;     // _0008
	u8 mFileBuffer[0x1FF0]; // _000C
	u32 mChecksum;          // _1FFC
};

enum MemoryCardMgrFlags {
	MCMFLAG_IsWriting = 0x1,
};

struct Mgr : public MemoryCardMgr {
	enum ECardErrorCode {
		ERRORCODE_None          = 0,
		ERRORCODE_OptionBroken  = 1,
		ERRORCODE_PlayerBroken  = 2,
		ERRORCODE_SerialNoUnset = 3,
	};

	Mgr();

	virtual ~Mgr() { }                                        // _08 (weak)
	virtual void update();                                    // _0C
	virtual bool doCardProc(void*, MemoryCardMgrCommand*);    // _14
	virtual u32 getHeaderSize() { return HEADER_BLOCK_SIZE; } // _18 (weak)
	virtual void doMakeHeader(u8*);                           // _1C
	virtual void doSetCardStat(CARDStat*);                    // _20
	virtual bool doCheckCardStat(CARDStat*);                  // _24
	virtual bool isErrorOccured();                            // _28

	void loadResource(JKRHeap*);
	void destroyResource();
	u32 getCardStatus(); // MemoryCardStatus
	bool format();
	bool checkBeforeSave();
	bool checkError();
	bool createNewFile();
	bool saveGameOption();
#if defined(VERSION_PAL)
	bool loadGameOption(bool loadLanguage);
	bool commandLoadGameOption(bool loadLanguage);
#else
	bool loadGameOption();
	bool commandLoadGameOption();
#endif
	bool savePlayerNoCheckSerialNumber(int);
	bool savePlayer(int);
	bool loadPlayer(int);
	bool deletePlayer(int);
	bool copyPlayer(int, int);
	bool getPlayerHeader(PlayerFileInfo*);
	bool commandUpdatePlayerHeader(PlayerFileInfo*);
	bool commandCheckBeforeSave();
	bool commandCheckError();
	bool checkSpace(MemoryCardMgr::ECardSlot);
	bool commandSaveHeader();
	bool commandCreateNewFile();
	bool dataFormat(MemoryCardMgr::ECardSlot);
	bool varifyCardStatus();
	bool commandSaveGameOption(bool, bool);
	void writeGameOption(Stream&);
	void readGameOption(Stream&);
	bool checkSerialNo(bool);
	bool commandSavePlayer(s8, bool);
	bool commandSavePlayerNoCheckSerialNo(s8, bool);
	bool getPlayerInfo(s8, PlayerInfoHeader*, bool*);
	int getIndexPlayerInfo(s8, PlayerInfoHeader*, bool*);
	bool commandLoadPlayer(s8);
	bool loadPlayerForNoCard(s8);
	bool loadPlayerProc(s8, u8*);
	bool commandDeletePlayer(s8);
	bool savePlayerProc(s8, u8*, bool);
	bool commandCheckSerialNo();
	bool commandCopyPlayer(s8, s8);
	void writePlayer(Stream&);
	void readPlayer(Stream&);
	bool writeBrokenData(MemoryCardMgr::ECardSlot);
	bool checkOptionInfo(OptionInfo*);
	u32 calcCheckSumOptionInfo(OptionInfo*);
	bool testCheckSumOptionInfo(OptionInfo*);
	bool checkPlayerInfo(PlayerInfo*);
	u32 calcCheckSumPlayerInfo(PlayerInfo*);
	bool testCheckSumPlayerInfo(PlayerInfo*);
	bool writeInvalidGameOption();
	bool writeInvalidPlayerInfoAll();
	bool writeInvalidPlayerInfo(int, s8);
	bool checkPlayerNoPlayerInfo(int, s8, PlayerInfoHeader*);
	bool getIndexInvalidPlayerInfo(int*, s8*, s8, u32, bool);
	bool modifyPlayerInfo(s8, bool*);
	bool verifyCardSerialNo(u64*, MemoryCardMgr::ECardSlot);
	bool resetError();

	inline void setFlag(u32 flag) { mFlags.typeView |= flag; }
	inline void resetFlag(u32 flag) { mFlags.typeView &= ~flag; }
	inline bool isFlag(u32 flag) const { return mFlags.typeView & flag; }

	inline bool checkCheckSum(PlayerInfo* buffer);
	inline bool checkPlVa(PlayerInfo* buffer);
	inline bool checkInfoBody(PlayerInfo* buffer);
	inline bool checkInfo(PlayerInfo* buffer);

	inline bool isCardReady() { return (int)getCardStatus() == MCS_NoCard; }

	inline bool isCardNotReady() { return (int)getCardStatus() != MCS_NoCard; }

	inline bool isCardInvalid() { return !mIsCard && checkStatus() != MCS_Invalid; }

	// _00-_E8 = MemoryCardMgr
	u32 mErrorCode;         // _D8
	void* mBannerImageFile; // _DC
	void* mIconImageFile;   // _E0
	BitFlag<u32> mFlags;    // _E4
};

#if defined(VERSION_PAL)
// PAL-only command class - name is a guess, based on the function in pikmin2MemoryCardMgr that uses it
struct MgrCommandLoadGameOption : public MemoryCardMgrCommandBase {
	MgrCommandLoadGameOption(int flags, bool loadLanguage)
	    : MemoryCardMgrCommandBase(flags)
	    , mLoadLanguage(loadLanguage)
	{
	}

	virtual u32 getClassSize() { return sizeof(MgrCommandLoadGameOption); } // _08 (weak)

	// _04     = VTBL
	// _00-_08 = MemoryCardMgrCommandBase
	bool mLoadLanguage; // _08
};
#endif

struct MgrCommandCopyPlayer : public MemoryCardMgrCommandBase {
	MgrCommandCopyPlayer(int flags, int fileIndex1, int fileIndex2)
	    : MemoryCardMgrCommandBase(flags)
	    , mFileIndex1(fileIndex1)
	    , mFileIndex2(fileIndex2)
	{
	}

	virtual u32 getClassSize() { return sizeof(MgrCommandCopyPlayer); } // _08 (weak)

	// _04     = VTBL
	// _00-_08 = MemoryCardMgrCommandBase
	u16 mFileIndex1; // _08
	u16 mFileIndex2; // _0A
};

struct MgrCommandPlayerNo : public MemoryCardMgrCommandBase {
	MgrCommandPlayerNo(int val, int fileIndex)
	    : MemoryCardMgrCommandBase(val)
	    , mFileIndex(fileIndex)
	{
	}

	virtual u32 getClassSize() { return sizeof(MgrCommandPlayerNo); } // _08 (weak)

	// _04     = VTBL
	// _00-_08 = MemoryCardMgrCommandBase
	int mFileIndex; // _08
};

struct MgrCommandGetPlayerHeader : public MemoryCardMgrCommandBase {
	MgrCommandGetPlayerHeader(int val, PlayerFileInfo* info)
	    : MemoryCardMgrCommandBase(val)
	    , mPlayerInfo(info)
	{
	}

	virtual u32 getClassSize() { return sizeof(MgrCommandGetPlayerHeader); } // _08 (weak)

	// _04     = VTBL
	// _00-_08 = MemoryCardMgrCommandBase
	PlayerFileInfo* mPlayerInfo; // _08
};

extern char* cFileName;

} // namespace MemoryCard
} // namespace Game

#endif
