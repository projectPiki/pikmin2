#ifndef _MEMORYCARDMGR_H
#define _MEMORYCARDMGR_H

/*
    __vt__13MemoryCardMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__13MemoryCardMgrFv
    .4byte update__13MemoryCardMgrFv
    .4byte doInit__13MemoryCardMgrFv
    .4byte doCardProc__13MemoryCardMgrFPvP20MemoryCardMgrCommand
    .4byte getHeaderSize__13MemoryCardMgrFv
    .4byte doMakeHeader__13MemoryCardMgrFPUc
    .4byte doSetCardStat__13MemoryCardMgrFP8CARDStat
    .4byte doCheckCardStat__13MemoryCardMgrFP8CARDStat
    .4byte isErrorOccured__13MemoryCardMgrFv
*/

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
