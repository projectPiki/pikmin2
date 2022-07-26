#ifndef _GAME_MEMORYCARD_MGR_H
#define _GAME_MEMORYCARD_MGR_H

#include "MemoryCardMgr.h"
#include "JSystem/JKR/JKRHeap.h"
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
	virtual void getHeaderSize();                          // _18 (weak)
	virtual void doMakeHeader(unsigned char*);             // _1C
	virtual void doSetCardStat(CARDStat*);                 // _20
	virtual void doCheckCardStat(CARDStat*);               // _24
	virtual bool isErrorOccured();                         // _28

	enum MemoryCardStatus {
		MCS_Error = 2,
	};

	void loadResource(JKRHeap*);
	void destroyResource();
	u32 getCardStatus();
	void format();
	void checkBeforeSave();
	void checkError();
	void createNewFile();
	void saveGameOption();
	void loadGameOption();
	void savePlayerNoCheckSerialNumber(int);
	void savePlayer(int);
	void loadPlayer(int);
	void deletePlayer(int);
	void copyPlayer(int, int);
	void getPlayerHeader(PlayerFileInfo*);
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
	void commandSavePlayer(char, bool);
	void commandSavePlayerNoCheckSerialNo(char, bool);
	void getPlayerInfo(char, PlayerInfoHeader*, bool*);
	void getIndexPlayerInfo(char, PlayerInfoHeader*, bool*);
	void commandLoadPlayer(char);
	void loadPlayerForNoCard(char);
	void loadPlayerProc(char, unsigned char*);
	void commandDeletePlayer(char);
	void savePlayerProc(char, unsigned char*, bool);
	void commandCheckSerialNo();
	void commandCopyPlayer(char, char);
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
	void writeInvalidPlayerInfo(int, char);
	void checkPlayerNoPlayerInfo(int, char, PlayerInfoHeader*);
	void getIndexInvalidPlayerInfo(int*, char*, char, unsigned long, bool);
	void modifyPlayerInfo(char, bool*);
	void verifyCardSerialNo(unsigned long long*, MemoryCardMgr::ECardSlot);
	void resetError();

	u8 _04[0xD4]; // _04
	u32 _D8;      // _D8
	u32 _DC;      // _DC
	u32 _E0;      // _E0
	u8 _E4;       // _E4
	u8 _E5;       // _E5
	u8 _E6;       // _E6
	u8 _E7;       // _E7
};

struct MgrCommandCopyPlayer : public MemoryCardMgrCommand {
	virtual void getClassSize(); // _08 (weak)
};

struct MgrCommandPlayerNo : public MemoryCardMgrCommand {
	virtual void getClassSize(); // _08 (weak)
};

struct MgrCommandGetPlayerHeader : public MemoryCardMgrCommand {
	virtual void getClassSize(); // _08 (weak)
};

struct Resource {
	virtual ~Resource();    // _08
	virtual void _0C() = 0; // _0C - might be fake?
};

} // namespace MemoryCard
} // namespace Game

#endif
