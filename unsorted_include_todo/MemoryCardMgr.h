#ifndef _MEMORYCARDMGR_H
#define _MEMORYCARDMGR_H

struct MemoryCardMgr {
	virtual ~MemoryCardMgr();                              // _00
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

#endif
