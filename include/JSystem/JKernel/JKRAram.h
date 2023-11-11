#ifndef _JSYSTEM_JKR_ARAM_H
#define _JSYSTEM_JKR_ARAM_H

#include "Dolphin/ar.h"
#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRThread.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JUtility/JUTException.h"
#include "types.h"

struct JKRDvdFile;
struct JKRAramHeap;
struct JKRDecompCommand;
struct JKRAMCommand;

enum JKRAramMsg {
	ARAMMSG_DMA = 1, // start DMA
};

struct JKRAramCommand {
	void setting(int type, void* cmd)
	{
		mMsgType = (JKRAramMsg)type;
		mCommand = cmd;
	}
	JKRAramMsg mMsgType; // _00
	void* mCommand;      // _04
};

struct JKRAramBlock {
	JKRAramBlock(u32 addr, u32 size, u32 freeSize, u8 groupID, bool isTempMem);

	virtual ~JKRAramBlock(); // _08

	JKRAramBlock* allocHead(u32 newSize, u8 newGroupID, JKRAramHeap* heap);
	JKRAramBlock* allocTail(u32 newSize, u8 newGroupID, JKRAramHeap* heap);

	u32 getAddress() const { return mAddress; }

	u32 getSize() const { return mSize; }

	u32 getFreeSize() const { return mFreeSize; }

	bool isTempMemory() const { return mIsTempMemory; }

	void newGroupID(u8 groupId) { mGroupID = groupId; }

	// _00 = VTBL
	JSULink<JKRAramBlock> mLink; // _04
	u32 mAddress;                // _14
	u32 mSize;                   // _18
	u32 mFreeSize;               // _1C
	u8 mGroupID;                 // _20
	bool mIsTempMemory;          // _21
};

struct JKRAramHeap : public JKRDisposer {
	enum EAllocMode { AM_Head = 0, AM_Tail };

	JKRAramHeap(u32 addr, u32 size);

	virtual ~JKRAramHeap(); // _08

	JKRAramBlock* alloc(u32 size, EAllocMode mode);
	JKRAramBlock* allocFromHead(u32 size);
	JKRAramBlock* allocFromTail(u32 size);
	s32 getFreeSize();

	void free(JKRAramBlock* block) { delete block; }

	u8 getCurrentGroupID() const { return mGroupID; }
	JKRHeap* getMgrHeap() const { return mHeap; }

	void lock() { OSLockMutex(&mMutex); }

	void unlock() { OSUnlockMutex(&mMutex); }

	static JSUList<JKRAramBlock> sAramList;

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	OSMutex mMutex;   // _18
	JKRHeap* mHeap;   // _30
	u32 mHeadAddress; // _34
	u32 mTailAddress; // _38
	u32 mSize;        // _3C
	u8 mGroupID;      // _40
};

// Size: 0xA4
struct JKRAram : public JKRThread {
	JKRAram(u32 bufSize, u32 graphSize, s32 prio);

	virtual ~JKRAram();  // _08
	virtual void* run(); // _0C

	static JKRAram* create(u32 bufSize, u32 graphSize, s32 streamPrio, s32 decompPrio, s32 piecePrio);
	static void checkOkAddress(u8* addr, u32 size, JKRAramBlock* block, u32 param_4);
	static void changeGroupIdIfNeed(u8* data, int groupId);
	static JKRAramBlock* mainRamToAram(u8* buf, u32 bufSize, u32 alignedSize, JKRExpandSwitch expandSwitch, u32 fileSize, JKRHeap* heap,
	                                   int id, u32* pSize);
	static u8* aramToMainRam(u32 addr, u8* buf, u32 size, JKRExpandSwitch expandSwitch, u32 maxExpandSize, JKRHeap* heap, int id,
	                         u32* pSize);
	static u8* aramToMainRam(JKRAramBlock* block, u8* buf, u32 addr, u32 offset, JKRExpandSwitch expandSwitch, u32 maxExpandSize,
	                         JKRHeap* heap, int id, u32* pSize);

	u32 getAudioMemory() const { return mAudioMemoryPtr; }
	u32 getAudioMemSize() const { return mAudioMemorySize; }
	u32 getGraphMemory() const { return mGraphMemoryPtr; }
	u32 getGraphMemSize() const { return mGraphMemorySize; }

	static JKRAram* getManager() { return sAramObject; }
	static JKRAramHeap* getAramHeap() { return getManager()->mAramHeap; }
	static JSUList<JKRAMCommand>& getCommandList() { return sAramCommandList; }

	static u8 decideAramGroupId(int groupId)
	{
		JKRAramHeap* heap;
		u8 finalGroupId;

		if (groupId < 0) {
			return getAramHeap()->getCurrentGroupID();
		}

		return (u8)groupId;
	}

	static u32 getSZSBufferSize() { return sSZSBufferSize; }
	static void setSZSBufferSize(u32 size) { sSZSBufferSize = size; }
	void resume() { OSResumeThread(mThread); }

	static JKRAram* sAramObject;
	static OSMessageQueue sMessageQueue;
	static JSUList<JKRAMCommand> sAramCommandList;
	static u32 sSZSBufferSize;
	static OSMessage sMessageBuffer[4];

	// _00     = VTBL
	// _00-_7C = JKRThread
	u32 mAudioMemoryPtr;    // _7C
	u32 mAudioMemorySize;   // _80
	u32 mGraphMemoryPtr;    // _84
	u32 mGraphMemorySize;   // _88
	u32 mUserMemoryPtr;     // _8C
	u32 mUserMemorySize;    // _90
	JKRAramHeap* mAramHeap; // _94
	u32 mStackArray[3];     // 98
};

struct JKRAramArchive : public JKRArchive {
	JKRAramArchive(); // unused
	JKRAramArchive(s32 entryNum, EMountDirection mountDir);

	virtual ~JKRAramArchive();                                                                    // _08
	virtual size_t getExpandedResSize(const void* resource) const;                                // _3C
	virtual void* fetchResource(SDIFileEntry* entry, u32* pSize);                                 // _40
	virtual void* fetchResource(void* data, u32 compressedSize, SDIFileEntry* entry, u32* pSize); // _44

	bool open(s32 entryNum);

	static u32 fetchResource_subroutine(u32 srcAram, u32 size, u8* buf, u32 expandSize, int compression);
	static u32 fetchResource_subroutine(u32 srcAram, u32 size, JKRHeap* heap, int compression, u8** pBuf);

	// _00     = VTBL
	// _00-_5C = JKRArchive
	JKRCompression mCompression;     // _5C
	EMountDirection mMountDirection; // _60
	JKRAramBlock* mBlock;            // _64
	JKRFile* mDvdFile;               // _68
};

// Size: 0x98
struct JKRAMCommand : public ARQRequest {
	typedef void (*Callback)(JKRAMCommand*);

	JKRAMCommand();

	~JKRAMCommand();

	// ARQRequest _00;            // _00
	JSULink<JKRAMCommand> _20;        // _20
	JSULink<JKRAMCommand> _30;        // _30
	s32 mDirection;                   // _40
	u32 mLength;                      // _44
	u32 mSource;                      // _48
	u32 mDestination;                 // _4C
	JKRAramBlock* mAramBlock;         // _50
	u8 _54[4];                        // _54
	Callback mCallback;               // _58
	OSMessageQueue* _5C;              // _5C
	s32 _60;                          // _60
	JKRDecompCommand* mDecompCommand; // _64
	OSMessageQueue mMessageQueue;     // _68
	OSMessage mMessage;               // _88
	void* _8C;                        // _8C
	void* _90;                        // _90
	void* _94;                        // _94
};

typedef struct JSUFileInputStream;

struct JKRAramStreamCommand {
	enum ECommandType {
		ECT_UNK   = 0,
		ECT_READ  = 1,
		ECT_WRITE = 2,
	};

	JKRAramStreamCommand();

	ECommandType type;             // _00
	u32 mAddress;                  // _04
	u32 mSize;                     // _08
	u32 _0C;                       // _0C
	JSUFileInputStream* mStream;   // _10
	u32 mOffset;                   // _14
	u32* mReturnSize;              // _18
	u8* mTransferBuffer;           // _1C
	u32 mTransferBufferSize;       // _20
	JKRHeap* mHeap;                // _24
	bool mAllocatedTransferBuffer; // _28
	u32 _2C;                       // _2C
	OSMessageQueue mMessageQueue;  // _30
	void* mMessage;                // _50
	u32 _54;                       // _54
	u32 _58;                       // _58
};

struct JKRAramStream : public JKRThread {
	JKRAramStream(s32 prio);

	virtual ~JKRAramStream(); // _08
	virtual void* run();      // _0C

	static JKRAramStream* create(s32 prio);

	static u32 readFromAram();
	static s32 writeToAram(JKRAramStreamCommand* cmd);
	static JKRAramStreamCommand* write_StreamToAram_Async(JSUFileInputStream* stream, JKRAramBlock* block, u32 size, u32 offset,
	                                                      u32* pSize);
	static JKRAramStreamCommand* write_StreamToAram_Async(JSUFileInputStream* stream, u32 addr, u32 size, u32 offset, u32* pSize);
	static JKRAramStreamCommand* sync(JKRAramStreamCommand* cmd, BOOL isNonBlocking);
	static void setTransBuffer(u8* buf, u32 bufSize, JKRHeap* heap);

	static JKRAramStream* sAramStreamObject;
	static void* sMessageBuffer[4]; // OSMessage
	static OSMessageQueue sMessageQueue;

	static u8* transBuffer;
	static JKRHeap* transHeap;
	static u32 transSize;

	// _00     = VTBL
	// _00-_7C = JKRThread
};

struct JKRAramPiece {
	JKRAramPiece(); // unused/inlined

	~JKRAramPiece(); // unused/inlined

	static void doneDMA(u32 cmdAddr);
	static bool orderSync(int direction, u32 src, u32 dest, u32 length, JKRAramBlock* block);
	static void sendCommand(JKRAMCommand* cmd);
	static void startDMA(JKRAMCommand* cmd);

	static OSMutex mMutex;
	static JSUList<JKRAMCommand> sAramPieceCommandList;

	static void lock() { OSLockMutex(&mMutex); }
	static void unlock() { OSUnlockMutex(&mMutex); }
};

int JKRDecompressFromAramToMainRam(u32 src, void* dst, u32 srcLength, u32 dstLength, u32 offset, u32* resourceSize);

inline JKRAramStream* JKRCreateAramStreamManager(s32 priority) { return JKRAramStream::create(priority); }

inline JKRAramBlock* JKRAllocFromAram(u32 size, JKRAramHeap::EAllocMode allocMode)
{
	return JKRAram::getAramHeap()->alloc(size, allocMode);
}

inline void JKRFreeToAram(JKRAramBlock* block) { JKRAram::getAramHeap()->free(block); }

inline JKRAramBlock* JKRMainRamToAram(u8* buf, u32 bufSize, u32 alignedSize, JKRExpandSwitch expandSwitch, u32 fileSize, JKRHeap* heap,
                                      int id, u32* pSize)
{
	return JKRAram::mainRamToAram(buf, bufSize, alignedSize, expandSwitch, fileSize, heap, id, pSize);
}

inline void JKRAramToMainRam(u32 addr, u8* buf, u32 size, JKRExpandSwitch expandSwitch, u32 maxExpandSize, JKRHeap* heap, int id,
                             u32* pSize)
{
	JKRAram::aramToMainRam(addr, buf, size, expandSwitch, maxExpandSize, heap, id, pSize);
}

inline BOOL JKRAramPcs(int direction, u32 source, u32 destination, u32 length, JKRAramBlock* block)
{
	return JKRAramPiece::orderSync(direction, source, destination, length, block);
}

extern OSMutex decompMutex;

#endif
