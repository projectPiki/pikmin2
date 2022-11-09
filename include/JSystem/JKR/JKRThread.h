#ifndef _JSYSTEM_JKR_JKRTHREAD_H
#define _JSYSTEM_JKR_JKRTHREAD_H

#include "Dolphin/os.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

struct JKRThread;
struct JUTConsole;
struct JUTFont;

struct JKRThreadName_ {
};

struct JKRThreadSwitch {
	typedef void (*Callback)(OSThread*, OSThread*);
	JKRThreadSwitch(JKRHeap*); // unused/inlined
	~JKRThreadSwitch();        // unused/inlined

	// vtable is optimized out. Was 14 bytes large.
	virtual void v_08(); // _08
	virtual void v_0C(); // _0C
	virtual void v_10(); // _10

	void loopProc();

	// unused/inlined:
	void createManager(JKRHeap*);
	void enter(OSThread*, JKRHeap*, int);
	void enter(JKRThread*, int);
	Callback setPreCallback(Callback);
	Callback setPostCallback(Callback);
	void callback(OSThread*, OSThread*);
	void resetAll();
	void draw(JKRThreadName_*);
	void draw(JKRThreadName_*, JUTConsole*);
	void createConsole(JUTFont*, int, JKRHeap*);
};

struct JKRThread : public JKRDisposer {
	JKRThread(unsigned long stackSize, int msgCount, int threadPriority);
	JKRThread(JKRHeap*, unsigned long stackSize, int msgCount, int threadPriority);
	JKRThread(OSThread*, int);

	virtual ~JKRThread();                   // _08
	virtual void* run() { return nullptr; } // _0C (weak)

	void setCommon_mesgQueue(JKRHeap*, int);
	BOOL setCommon_heapSpecified(JKRHeap*, unsigned long, int);
	static void* start(void*);

	// unused/inlined:
	void searchThread(OSThread*);
	void searchThreadLoad(OSThread*);
	void dump();

	JSULink<JKRThread> m_link; // _18
	JKRHeap* m_heap;           // _28
	OSThread* m_thread;        // _2C
	OSMessageQueue m_msgQueue; // _30
	OSMessage* m_msgBuffer;    // _50
	int m_msgCount;            // _54
	void* m_stack;             // _58
	u32 m_stackSize;           // _5C
	u8 _60;                    // _60
	u32 _64;                   // _64
	u32 _68;                   // _68
	u32 _6C;                   // _6C
	u32 _70;                   // _70
	u32 _74;                   // _74
	u32 _78;                   // _78

	static JSUList<JKRThread> sThreadList;
};

/**
 * @size{0x98}
 */
struct JKRTask : public JKRThread {
	typedef void RequestCallback(void*);

	JKRTask(int, int, u32); // unused/inlined

	virtual ~JKRTask();  // _08
	virtual void* run(); // _0C

	void request(RequestCallback*, void*, void*);

	static JKRTask* create(int, int, unsigned long, JKRHeap*);

	// unused/inlined:
	void searchBlank();
	void requestJam(RequestCallback, void*, void*);
	void cancelAll();
	void createTaskEndMessageQueue(int, JKRHeap*);
	void destroyTaskEndMessageQueue();
	void waitQueueMessageBlock(OSMessageQueue*, int*);
	void waitQueueMessage(OSMessageQueue*, int*);

	static void destroy(JKRTask*);

	// u32 _78;			 // _78
	JSULink<JKRTask> _7C; // _7C
	void* _8C;            // _8C - ptr to array with elements of size 0xc
	u32 _90;              // _90 - element count of _8C
	OSMessageQueue* _94;  // _94

	static JSUList<JKRTask> sTaskList;
};

/** @unused */
struct JKRIdleThread : JKRThread {
	// vtable is optimized out. Was 14 bytes large.
	virtual ~JKRIdleThread(); // _08
	virtual void* run();      // _0C
	virtual void v_10();      // _10

	void destroy() { }

	static void create(JKRHeap*, int, u32);

	static JKRIdleThread* sThread;
};

#endif
