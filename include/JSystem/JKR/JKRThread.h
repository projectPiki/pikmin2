#ifndef _JSYSTEM_JKR_JKRTHREAD_H
#define _JSYSTEM_JKR_JKRTHREAD_H

#include "Dolphin/os.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

struct JKRThreadSwitch {
	void loopProc();
};

struct JKRThread : public JKRDisposer {
	JKRThread(unsigned long stackSize, int msgCount, int threadPriority);
	JKRThread(JKRHeap*, unsigned long stackSize, int msgCount, int threadPriority);
	JKRThread(OSThread*, int);

	virtual ~JKRThread(); // _08
	virtual void* run();  // _0C (weak)

	void setCommon_mesgQueue(JKRHeap*, int);
	BOOL setCommon_heapSpecified(JKRHeap*, unsigned long, int);
	static void* start(void*);

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
	virtual ~JKRTask();  // _08
	virtual void* run(); // _0C

	static JKRTask* create(int, int, unsigned long, JKRHeap*);

	void request(RequestCallback*, void*, void*);

	// u32 _78;			 // _78
	JSULink<JKRTask> _7C; // _7C
	u8 _8C[8];            // _8C
	OSMessageQueue* _94;  // _94

	static JSUList<JKRTask> sTaskList;
};

#endif
