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
	virtual ~MemoryCardMgr(); // _00
	virtual void update();    // _04
	virtual void doInit();    // _08

	// _00 VTBL
};

namespace Game {
namespace MemoryCard {
	struct Mgr : public MemoryCardMgr {
		virtual ~Mgr();                                        // _00
		virtual void update();                                 // _04
		virtual void doInit();                                 // _08
		virtual void doCardProc(void*, MemoryCardMgrCommand*); // _0C
		virtual void getHeaderSize();                          // _10
		virtual void doMakeHeader(unsigned char*);             // _14
		virtual void doSetCardStat(CARDStat*);                 // _18
		virtual void doCheckCardStat(CARDStat*);               // _1C
		virtual void isErrorOccured();                         // _20

		// _00 VTBL
	};
} // namespace MemoryCard
} // namespace Game

#endif
