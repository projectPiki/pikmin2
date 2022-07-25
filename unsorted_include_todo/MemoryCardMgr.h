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
	virtual ~MemoryCardMgr();                              // _08 (weak)
	virtual void update();                                 // _0C
	virtual void doInit();                                 // _10 (weak)
	virtual void doCardProc(void*, MemoryCardMgrCommand*); // _14 (weak)
	virtual void getHeaderSize();                          // _18 (weak)
	virtual void doMakeHeader(unsigned char*);             // _1C
	virtual void doSetCardStat(CARDStat*);                 // _20
	virtual void doCheckCardStat(CARDStat*);               // _24
	virtual void isErrorOccured();                         // _28
};

#endif
