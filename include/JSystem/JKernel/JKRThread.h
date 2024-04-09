#ifndef _JSYSTEM_JKR_JKRTHREAD_H
#define _JSYSTEM_JKR_JKRTHREAD_H

#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"

struct JKRThread;
struct JUTConsole;
struct JUTFont;

struct JKRThreadName_ {
};

struct JKRThreadSwitch {
	typedef void (*Callback)(OSThread*, OSThread*);
	JKRThreadSwitch(JKRHeap*); // unused/inlined

	// vtable is optimized out. Was 14 bytes large.
	virtual void draw(JKRThreadName_*, JUTConsole*); // _08
	virtual void draw(JKRThreadName_*);              // _0C
	virtual ~JKRThreadSwitch();                      // _10

	void loopProc();

	// unused/inlined:
	void createManager(JKRHeap*);
	void enter(OSThread*, JKRHeap*, int);
	void enter(JKRThread*, int);
	Callback setPreCallback(Callback);
	Callback setPostCallback(Callback);
	void callback(OSThread*, OSThread*);
	void resetAll();
	void createConsole(JUTFont*, int, JKRHeap*);

	static OSTime getTotalStart() { return sTotalStart; }

	// _00 VTBL
	u8 _04[8];           // _04 - unknown/padding
	int _0C;             // _0C
	int _10;             // _10
	u8 _14[4];           // _14 - unknown/padding
	u64 _18;             // _18
	JUTConsole* _20;     // _20
	JKRThreadName_* _24; // _24

	static JKRThreadSwitch* sManager;
	static u32 sTotalCount;
	static OSTime sTotalStart;
};

struct JKRThread : public JKRDisposer {
	struct TLoad {
		inline TLoad()
		{
			mSwitchCount = 0;
			mCost        = 0;
			mLastTick    = 0;
			mIsValid     = false;
			mThreadID    = 0;
		}

		bool isValid() const { return mIsValid; }
		u32 getCost() const { return mCost; }
		u32 getCount() const { return mSwitchCount; }
		int getId() const { return mThreadID; }

		void setValid(bool valid) { mIsValid = valid; }
		void setId(int id) { mThreadID = id; }
		void setCurrentTime() { mLastTick = OSGetTick(); }

		void resetCost() { mCost = 0; }
		void resetCount() { mSwitchCount = 0; }

		void incCount() { mSwitchCount++; }
		void addCurrentCost() { mCost = mCost + (OSGetTick() - mLastTick); }

		void clear()
		{
			resetCount();
			resetCost();
			mLastTick = 0;
		}

		bool mIsValid;    // _00
		u32 mCost;        // _04
		u32 mSwitchCount; // _08
		u32 mLastTick;    // _0C
		int mThreadID;    // _10
	};

	JKRThread(u32 stackSize, int msgCount, int threadPriority);
	JKRThread(JKRHeap*, u32 stackSize, int msgCount, int threadPriority);
	JKRThread(OSThread*, int);

	virtual ~JKRThread();                   // _08
	virtual void* run() { return nullptr; } // _0C (weak)

	void setCommon_mesgQueue(JKRHeap*, int);
	BOOL setCommon_heapSpecified(JKRHeap*, u32, int);
	static void* start(void*);

	// unused/inlined:
	static TLoad* searchThread(OSThread*);
	static TLoad* searchThreadLoad(OSThread*);
	void dump();

	OSThread* getThreadRecord() const { return mThread; }
	void* getStack() const { return mStack; }
	TLoad* getLoadInfo() { return &mLoadInfo; }
	JKRHeap* getCurrentHeap() const { return mCurrentHeap; }
	s32 getCurrentHeapError() const { return mCurrentHeapError; }

	void setCurrentHeap(JKRHeap* heap)
	{
		if (!heap) {
			heap = JKRHeap::getCurrentHeap();
		}

		mCurrentHeap = heap;
	}

	void resume() { OSResumeThread(mThread); }
	BOOL sendMessage(OSMessage message) { return OSSendMessage(&mMsgQueue, message, OS_MESSAGE_NOBLOCK); }
	void sendMessageBlock(OSMessage message) { OSSendMessage(&mMsgQueue, message, OS_MESSAGE_BLOCK); }
	OSMessage waitMessage()
	{
		OSMessage message;
		OSReceiveMessage(&mMsgQueue, &message, OS_MESSAGE_NOBLOCK);
		return message;
	}

	OSMessage waitMessage(BOOL* received)
	{
		OSMessage message;
		BOOL rv = OSReceiveMessage(&mMsgQueue, &message, OS_MESSAGE_NOBLOCK);
		if (received) {
			*received = rv;
		}
		return message;
	}
	OSMessage waitMessageBlock()
	{
		OSMessage message;
		OSReceiveMessage(&mMsgQueue, &message, OS_MESSAGE_BLOCK);
		return message;
	}

	static JSUList<JKRThread>& getList() { return (JSUList<JKRThread>&)sThreadList; }

	static JSUList<JKRThread> sThreadList;

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	JSULink<JKRThread> mLink; // _18
	JKRHeap* mHeap;           // _28
	OSThread* mThread;        // _2C
	OSMessageQueue mMsgQueue; // _30
	OSMessage* mMsgBuffer;    // _50
	int mMsgCount;            // _54
	void* mStack;             // _58
	u32 mStackSize;           // _5C
	TLoad mLoadInfo;          // _60
	JKRHeap* mCurrentHeap;    // _74
	int mCurrentHeapError;    // _78
};

/**
 * @size{0x98}
 */
struct JKRTask : public JKRThread {
	typedef void (*RequestCallback)(void*);
	/**
	 * @fabricated
	 * @size{0xC}
	 */
	struct Message {
		RequestCallback _00;
		void* _04;
		void* _08;
	};

	JKRTask(int msgCount, int threadPriority, size_t stackSize); // unused/inlined

	virtual ~JKRTask();  // _08
	virtual void* run(); // _0C

	bool request(RequestCallback, void*, void*);

	static JKRTask* create(int, int, size_t, JKRHeap*);

	// unused/inlined:
	Message* searchBlank();
	void requestJam(RequestCallback, void*, void*);
	void cancelAll();
	void createTaskEndMessageQueue(int, JKRHeap*);
	void destroyTaskEndMessageQueue();
	void waitQueueMessageBlock(OSMessageQueue*, int*);
	void waitQueueMessage(OSMessageQueue*, int*);

	OSMessage waitMessageBlock()
	{
		OSMessage msg;
		OSReceiveMessage(&mMsgQueue, &msg, OS_MESSAGE_BLOCK);
		return msg;
	}

	static void destroy(JKRTask*);

	static JSUList<JKRTask> sTaskList;
	static OSMessageQueue sEndMsgQueue;

	// _00     = VTBL
	// _00-_7C = JKRThread
	JSULink<JKRTask> _7C; // _7C
	Message* _8C;         // _8C - ptr to array with elements of size 0xc
	int _90;              // _90 - element count of _8C
	OSMessageQueue* _94;  // _94
};

/** @unused */
struct JKRIdleThread : public JKRThread {
	// vtable is optimized out. Was 14 bytes large.
	virtual ~JKRIdleThread(); // _08
	virtual void* run();      // _0C
	virtual void v_10();      // _10

	void destroy() { }

	static void create(JKRHeap*, int, u32);

	static JKRIdleThread* sThread;
};

#endif
