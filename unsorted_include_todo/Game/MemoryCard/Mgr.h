#ifndef _GAME_MEMORYCARD_MGR_H
#define _GAME_MEMORYCARD_MGR_H

struct MemoryCardMgr {
	virtual void _00() = 0; // _00
	virtual void _04() = 0; // _04
	virtual void doInit();  // _08

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
