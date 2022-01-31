#ifndef _GAME_MEMORYCARD_MGR_H
#define _GAME_MEMORYCARD_MGR_H

#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

typedef struct CARDStat;
typedef struct MemoryCardMgrCommand;

struct MemoryCardMgr {
	virtual ~MemoryCardMgr();                              // _00
	virtual void update();                                 // _04
	virtual void doInit();                                 // _08
	virtual void doCardProc(void*, MemoryCardMgrCommand*); // _0C
	virtual void getHeaderSize();                          // _10
	virtual void doMakeHeader(unsigned char*);             // _14
	virtual void doSetCardStat(CARDStat*);                 // _18
	virtual void doCheckCardStat(CARDStat*);               // _1C
	virtual bool isErrorOccured();                         // _20

	// _00 VTBL
	MemoryCardMgr();
	u8 _04[0xD4]; // _04
	u32 _D8;      // _D8
	u32 _DC;      // _DC
	u32 _E0;      // _E0
	u32 _E4;      // _E4
};

// this should probably be split into two headers, with
// Game's inheriting the namespaceless one.

namespace Game {
namespace MemoryCard {
struct Mgr : public MemoryCardMgr {
	Mgr();
	virtual ~Mgr();

	enum MemoryCardStatus {
		MCS_Error = 2,
	};

	void loadResource(JKRHeap*);
	void destroyResource();
	bool isErrorOccured();
	u32 getCardStatus();

	u8 _04[0xD4]; // _04
	u32 _D8;      // _D8
	u32 _DC;      // _DC
	u32 _E0;      // _E0
	u8 _E4;       // _E4
	u8 _E5;       // _E5
	u8 _E6;       // _E6
	u8 _E7;       // _E7
};
} // namespace MemoryCard
} // namespace Game

#endif
