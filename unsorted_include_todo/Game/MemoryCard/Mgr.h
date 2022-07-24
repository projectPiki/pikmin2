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
	virtual ~MemoryCardMgr(); // _08
	virtual void update();    // _0C
	virtual void doInit();    // _10

	// _00 VTBL
};

namespace Game {
namespace MemoryCard {
struct Mgr : public MemoryCardMgr {
	virtual ~Mgr();                                        // _08
	virtual void update();                                 // _0C
	virtual void doCardProc(void*, MemoryCardMgrCommand*); // _14
	virtual void getHeaderSize();                          // _18
	virtual void doMakeHeader(unsigned char*);             // _1C
	virtual void doSetCardStat(CARDStat*);                 // _20
	virtual void doCheckCardStat(CARDStat*);               // _24
	virtual void isErrorOccured();                         // _28

	// _00 VTBL
};
} // namespace MemoryCard
} // namespace Game

#endif
