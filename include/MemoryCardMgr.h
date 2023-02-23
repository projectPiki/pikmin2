#ifndef MEMORYCARDMGR_H
#define MEMORYCARDMGR_H

#include "JSystem/JKernel/JKRHeap.h"
#include "Dolphin/card.h"
#include "types.h"

struct MemoryCardMgrCommand {
	virtual u32 getClassSize(); // _08 (weak)
};

// not sure about this one
struct MemoryCardMgrCommandBase {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
};

struct MemoryCardMgr {
	enum ECardSlot {
		CARDSLOT_Unk0 = 0,
	};

	MemoryCardMgr();

	virtual ~MemoryCardMgr();                              // _08 (weak)
	virtual void update();                                 // _0C
	virtual void doInit();                                 // _10 (weak)
	virtual void doCardProc(void*, MemoryCardMgrCommand*); // _14 (weak)
	virtual u32 getHeaderSize();                           // _18 (weak)
	virtual void doMakeHeader(unsigned char*);             // _1C
	virtual void doSetCardStat(CARDStat*);                 // _20
	virtual void doCheckCardStat(CARDStat*);               // _24
	virtual bool isErrorOccured();                         // _28

	void cardProc(void*);
	void init();
	u32 checkStatus();

	u8 _04[0xA4];        // _04
	int _A8;             // _A8
	u8 _AC[0xDC - 0xAC]; // _AC
	u32 _DC;             // _DC
	u32 _E0;             // _E0
	u32 _E4;             // _E4
};

#endif
