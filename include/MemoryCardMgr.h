#ifndef MEMORYCARDMGR_H
#define MEMORYCARDMGR_H

#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

struct CARDStat;

struct MemoryCardMgrCommand {
	virtual void getClassSize(); // _08 (weak)
};

// not sure about this one
struct MemoryCardMgrCommandBase {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
};

struct MemoryCardMgr {
	struct ECardSlot;

	MemoryCardMgr();

	virtual ~MemoryCardMgr();                              // _08 (weak)
	virtual void update();                                 // _0C
	virtual void doInit();                                 // _10 (weak)
	virtual void doCardProc(void*, MemoryCardMgrCommand*); // _14 (weak)
	virtual void getHeaderSize();                          // _18 (weak)
	virtual void doMakeHeader(unsigned char*);             // _1C
	virtual void doSetCardStat(CARDStat*);                 // _20
	virtual void doCheckCardStat(CARDStat*);               // _24
	virtual bool isErrorOccured();                         // _28

	u8 _04[0xD4]; // _04
	u32 _D8;      // _D8
	u32 _DC;      // _DC
	u32 _E0;      // _E0
	u32 _E4;      // _E4
};

#endif
