#ifndef _GAME_MEMORYCARD_MGR_H
#define _GAME_MEMORYCARD_MGR_H

#include "MemoryCardMgr.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "stream.h"
#include "types.h"

struct Stream;

namespace Game {
namespace MemoryCard {

struct PlayerFileInfo;
struct PlayerInfoHeader;
struct PlayerInfo;
struct OptionInfo;

struct Mgr : public MemoryCardMgr {
	Mgr();

	virtual ~Mgr();                                        // _08 (weak)
	virtual void update();                                 // _0C
	virtual void doCardProc(void*, MemoryCardMgrCommand*); // _14
	virtual u32 getHeaderSize();                           // _18 (weak)
	virtual void doMakeHeader(unsigned char*);             // _1C
	virtual void doSetCardStat(CARDStat*);                 // _20
	virtual void doCheckCardStat(CARDStat*);               // _24
	virtual bool isErrorOccured();                         // _28

	enum MemoryCardStatus {
		MCS_Ready,
		MCS_NoCard,
		MCS_IOError,
		MCS_WrongDevice,
		MCS_WrongSector,
		MCS_Broken,
		MCS_Encoding,
		MCS_NoFileSpace,
		MCS_NoFileEntry,
		MCS_FileOpenError,
		MCS_SerialNoError,
		MCS_11,
		MCS_12,
		MCS_13,
		MCS_PlayerDataBroken
	};

	void loadResource(JKRHeap*);
	void destroyResource();
	u32 getCardStatus();
	bool format();
	void checkBeforeSave();
	void checkError();
	bool createNewFile();
	void saveGameOption();
	void loadGameOption();
	void savePlayerNoCheckSerialNumber(int);
	void savePlayer(int);
	void loadPlayer(int);
	void deletePlayer(int);
	void copyPlayer(int, int);
	bool getPlayerHeader(PlayerFileInfo*);
	void commandUpdatePlayerHeader(PlayerFileInfo*);
	void commandCheckBeforeSave();
	void commandCheckError();
	void checkSpace(MemoryCardMgr::ECardSlot);
	void commandSaveHeader();
	void commandCreateNewFile();
	void dataFormat(MemoryCardMgr::ECardSlot);
	void varifyCardStatus();
	void commandSaveGameOption(bool, bool);
	void commandLoadGameOption();
	void writeGameOption(Stream&);
	void readGameOption(Stream&);
	void checkSerialNo(bool);
	void commandSavePlayer(s8, bool);
	void commandSavePlayerNoCheckSerialNo(s8, bool);
	void getPlayerInfo(s8, PlayerInfoHeader*, bool*);
	void getIndexPlayerInfo(s8, PlayerInfoHeader*, bool*);
	void commandLoadPlayer(s8);
	void loadPlayerForNoCard(s8);
	void loadPlayerProc(s8, unsigned char*);
	void commandDeletePlayer(s8);
	void savePlayerProc(s8, unsigned char*, bool);
	void commandCheckSerialNo();
	void commandCopyPlayer(s8, s8);
	void writePlayer(Stream&);
	void readPlayer(Stream&);
	void checkOptionInfo(OptionInfo*);
	void calcCheckSumOptionInfo(OptionInfo*);
	void testCheckSumOptionInfo(OptionInfo*);
	void checkPlayerInfo(PlayerInfo*);
	void calcCheckSumPlayerInfo(PlayerInfo*);
	void testCheckSumPlayerInfo(PlayerInfo*);
	void writeInvalidGameOption();
	void writeInvalidPlayerInfoAll();
	void writeInvalidPlayerInfo(int, s8);
	void checkPlayerNoPlayerInfo(int, s8, PlayerInfoHeader*);
	void getIndexInvalidPlayerInfo(int*, s8*, s8, unsigned long, bool);
	void modifyPlayerInfo(s8, bool*);
	void verifyCardSerialNo(unsigned long long*, MemoryCardMgr::ECardSlot);
	bool resetError();

	// _00-_E8 = MemoryCardMgr
};

struct MgrCommandCopyPlayer : public MemoryCardMgrCommand {
	virtual u32 getClassSize(); // _08 (weak)
};

struct MgrCommandPlayerNo : public MemoryCardMgrCommand {
	virtual u32 getClassSize(); // _08 (weak)
};

struct MgrCommandGetPlayerHeader : public MemoryCardMgrCommand {
	virtual u32 getClassSize(); // _08 (weak)
};

} // namespace MemoryCard
} // namespace Game

#endif
