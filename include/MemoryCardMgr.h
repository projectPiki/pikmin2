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
		CARDSLOT_SlotA   = 0,
		CARDSLOT_SlotB   = 1,
		CARDSLOT_INVALID = 0xf,
	};

	enum EInsideStatusFlag {
		INSIDESTATUS_NoCard        = 0,
		INSIDESTATUS_Ready         = 1,
		INSIDESTATUS_Mounted       = 2,
		INSIDESTATUS_FileOpenError = 3,
		INSIDESTATUS_Encoding      = 4,
		INSIDESTATUS_Broken        = 5,
		INSIDESTATUS_NoFileSpace   = 6,
		INSIDESTATUS_NoFileEntry   = 7,
		INSIDESTATUS_WrongDevice   = 8,
		INSIDESTATUS_WrongSector   = 9,
		INSIDESTATUS_ErrorOccurred = 10,
		INSIDESTATUS_Default       = 11,
	};

	enum EMemoryCardStatus {
		MCS_NoCard           = 0,
		MCS_FileOpenError    = 1,
		MCS_Ready            = 2,
		MCS_Broken           = 3,
		MCS_Encoding         = 4,
		MCS_IOError          = 5,
		MCS_WrongDevice      = 6,
		MCS_WrongSector      = 7,
		MCS_NoFileSpace      = 8,
		MCS_NoFileEntry      = 9,
		MCS_10               = 10,
		MCS_Invalid          = 11,
		MCS_GameOptionsBroken               = 12,
		MCS_PlayerDataBroken = 13,
		MCS_SerialNoError    = 14,
	};

	enum EMgrCommand {
		COMMAND_Default               = 0,
		COMMAND_FormatSlotA           = 1,
		COMMAND_FormatSlotB           = 2,
		COMMAND_MountSlotA            = 3,
		COMMAND_UnmountSlotA          = 4,
		COMMAND_SaveGameOption        = 5,
		COMMAND_LoadGameOption        = 6,
		COMMAND_CreateNewFile         = 7,
		COMMAND_SavePlayer            = 8,
		COMMAND_SavePlayerNoSerialNum = 9,
		COMMAND_LoadPlayer            = 10,
		COMMAND_DeletePlayer          = 11,
		COMMAND_CopyPlayer            = 12,
		COMMAND_UpdatePlayerHeader    = 13,
		COMMAND_CheckSerialNum        = 14,
		COMMAND_CheckBeforeSave       = 15,
		COMMAND_CheckError            = 16,
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

	inline bool isSaveValid() { return mIsCard || checkStatus() != MCS_Invalid; }
	inline bool isSaveInvalid() { return !mIsCard && checkStatus() != MCS_Invalid; }
	inline bool isErrorNotOccured() { return (checkStatus() == MCS_Ready); }
	inline MemoryCardMgrCommand* getCommandQueue() { return mCommands; }

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
