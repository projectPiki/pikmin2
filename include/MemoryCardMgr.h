#ifndef MEMORYCARDMGR_H
#define MEMORYCARDMGR_H

#include "JSystem/JKernel/JKRHeap.h"
#include "BitFlag.h"
#include "Dolphin/card.h"
#include "types.h"

struct MemoryCardMgrCommandBase {
	inline MemoryCardMgrCommandBase(int flags)
	    : mFlag(flags)
	{
	}

	int mFlag; // _00
	// _04 = VTBL

	virtual u32 getClassSize() = 0; // _08
};

struct MemoryCardMgrCommand : public MemoryCardMgrCommandBase {
	MemoryCardMgrCommand(int val = 0)
	    : MemoryCardMgrCommandBase(val)
	{
	}

	virtual u32 getClassSize() { return sizeof(MemoryCardMgrCommand); } // _08 (weak)

	// _04     = VTBL
	// _00-_04 = MemoryCardMgrCommandBase
	union {
		int intView;
		s16 shortView[2];
		s8 byteView;
		void* dataView;
	} mData;      // _08, this is genuinely dumb but necessary?
	u8 _0B[0x14]; // _0C, unknown
};

struct MemoryCardMgr {
	enum ECardSlot {
		CARDSLOT_Unk0 = 0,
		CARDSLOT_Unk1 = 1,
		CARDSLOT_UnkF = 0xf,
	};

	enum EInsideStatusFlag {
		INSIDESTATUS_Unk   = 0,
		INSIDESTATUS_Unk1  = 1,
		INSIDESTATUS_Unk2  = 2,
		INSIDESTATUS_Unk3  = 3,
		INSIDESTATUS_Unk4  = 4,
		INSIDESTATUS_Unk5  = 5,
		INSIDESTATUS_Unk6  = 6,
		INSIDESTATUS_Unk7  = 7,
		INSIDESTATUS_Unk8  = 8,
		INSIDESTATUS_Unk9  = 9,
		INSIDESTATUS_Unk10 = 10,
		INSIDESTATUS_Unk11 = 11,
	};

	MemoryCardMgr();

	virtual ~MemoryCardMgr() { }                                           // _08 (weak)
	virtual void update();                                                 // _0C
	virtual void doInit() { }                                              // _10 (weak)
	virtual bool doCardProc(void*, MemoryCardMgrCommand*) { return true; } // _14 (weak)
	virtual u32 getHeaderSize() { return 0x2000; }                         // _18 (weak)
	virtual void doMakeHeader(u8*);                                        // _1C
	virtual void doSetCardStat(CARDStat*);                                 // _20
	virtual bool doCheckCardStat(CARDStat*);                               // _24
	virtual bool isErrorOccured();                                         // _28

	inline bool isSaveValid() { return mIsCard || checkStatus() != INSIDESTATUS_Unk11; }
	inline bool isSaveInvalid() { return !mIsCard && checkStatus() != INSIDESTATUS_Unk11; }
	inline bool isErrorNotOccured() { return (checkStatus() == 2); }

	void cardProc(void*);
	bool cardFormat(ECardSlot);
	bool cardMount();
	bool fileOpen(CARDFileInfo*, ECardSlot, const char*);
	bool writeHeader(ECardSlot, const char*);
	bool writeCardStatus(ECardSlot, const char*);
	void setTmpHeap(JKRHeap*);
	void init();
	u32 checkStatus();
	void resetCommandFlagQueue();
	MemoryCardMgrCommand* getCurrentCommand();
	void setCommand(int);
	bool setCommand(MemoryCardMgrCommandBase*);
	void releaseCurrentCommand();
	bool write(ECardSlot, const char*, u8*, s32, s32);
	bool checkCardStat(ECardSlot, CARDFileInfo*);
	bool read(ECardSlot, const char*, u8*, s32, s32);
	void format(ECardSlot);
	void attach(ECardSlot);
	void detach(ECardSlot);
	bool mount(ECardSlot);
	s32 checkSpace(ECardSlot, int);
	u32 calcCheckSum(void*, u32);
	bool readCardSerialNo(u64*, ECardSlot);
	void setInsideStatusFlag(EInsideStatusFlag);
	void resetInsideStatusFlag(EInsideStatusFlag);

	MemoryCardMgrCommand mCommands[5]; // _04
	u32 mCurrentCommandIdx;            // _A4
	int mIsCard;                       // _A8
	OSMutex mOsMutex;                  // _AC
	OSCond mCond;                      // _C4
	JKRHeap* mHeap;                    // _C8
	u8 _D0;                            // _D0
	EInsideStatusFlag mStatusFlag;     // _D4
};

#endif
