#ifndef _GAME_MEMORYCARD_MGR_H
#define _GAME_MEMORYCARD_MGR_H

/*
    __vt__Q34Game10MemoryCard3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game10MemoryCard3MgrFv
    .4byte update__Q34Game10MemoryCard3MgrFv
    .4byte doInit__13MemoryCardMgrFv
    .4byte doCardProc__Q34Game10MemoryCard3MgrFPvP20MemoryCardMgrCommand
    .4byte getHeaderSize__Q34Game10MemoryCard3MgrFv
    .4byte doMakeHeader__Q34Game10MemoryCard3MgrFPUc
    .4byte doSetCardStat__Q34Game10MemoryCard3MgrFP8CARDStat
    .4byte doCheckCardStat__Q34Game10MemoryCard3MgrFP8CARDStat
    .4byte isErrorOccured__Q34Game10MemoryCard3MgrFv
*/

struct MemoryCardMgr {
	virtual ~MemoryCardMgr(); // _08 (inline)
	virtual void update();    // _0C
	virtual void doInit();    // _10 (inline)
};

namespace Game {
namespace MemoryCard {
struct Mgr : public MemoryCardMgr {
	virtual ~Mgr();                                        // _08 (inline)
	virtual void update();                                 // _0C
	virtual void doCardProc(void*, MemoryCardMgrCommand*); // _14
	virtual void getHeaderSize();                          // _18 (inline)
	virtual void doMakeHeader(unsigned char*);             // _1C
	virtual void doSetCardStat(CARDStat*);                 // _20
	virtual void doCheckCardStat(CARDStat*);               // _24
	virtual void isErrorOccured();                         // _28

	Mgr();
	void loadResource(JKRHeap*);
	void destroyResource();
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
	void getPlayerHeader(Game::MemoryCard::PlayerFileInfo*);
	void commandUpdatePlayerHeader(Game::MemoryCard::PlayerFileInfo*);
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
	void getPlayerInfo(char, Game::MemoryCard::PlayerInfoHeader*, bool*);
	void getIndexPlayerInfo(char, Game::MemoryCard::PlayerInfoHeader*, bool*);
	void commandLoadPlayer(char);
	void loadPlayerForNoCard(char);
	void loadPlayerProc(char, unsigned char*);
	void commandDeletePlayer(char);
	void savePlayerProc(char, unsigned char*, bool);
	void commandCheckSerialNo();
	void commandCopyPlayer(char, char);
	void writePlayer(Stream&);
	void readPlayer(Stream&);
	void checkOptionInfo(Game::MemoryCard::OptionInfo*);
	void calcCheckSumOptionInfo(Game::MemoryCard::OptionInfo*);
	void testCheckSumOptionInfo(Game::MemoryCard::OptionInfo*);
	void checkPlayerInfo(Game::MemoryCard::PlayerInfo*);
	void calcCheckSumPlayerInfo(Game::MemoryCard::PlayerInfo*);
	void testCheckSumPlayerInfo(Game::MemoryCard::PlayerInfo*);
	void getCardStatus();
	void writeInvalidGameOption();
	void writeInvalidPlayerInfoAll();
	void writeInvalidPlayerInfo(int, char);
	void checkPlayerNoPlayerInfo(int, char, Game::MemoryCard::PlayerInfoHeader*);
	void getIndexInvalidPlayerInfo(int*, char*, char, unsigned long, bool);
	void modifyPlayerInfo(char, bool*);
	void verifyCardSerialNo(unsigned long long*, MemoryCardMgr::ECardSlot);
	void resetError();
};
} // namespace MemoryCard
} // namespace Game

#endif
