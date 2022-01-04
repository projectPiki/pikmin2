#ifndef _JSYSTEM_JKR_JKRTHREAD_H
#define _JSYSTEM_JKR_JKRTHREAD_H

#include "Dolphin/os.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSU/JSUList.h"
#include "types.h"

struct JKRThread : public JKRDisposer {
	JKRThread(u32 stackSize, int msgCount, int threadPriority);

	virtual ~JKRThread(); // _00
	virtual void run();   // _04

	JSUPtrLink m_link;         // _18
	JKRHeap* m_heap;           // _28
	OSThread* m_thread;        // _2C
	OSMessageQueue m_msgQueue; // _28
	u8 _48[4];                 // _48
	u8 _4C[4];                 // _4C
	u8 _50[4];                 // _50
	int _54;                   // _54
	void* m_stack;             // _58
	u32 m_stackSize;           // _5C
	u8 _60;                    // _60
	u32 _64;                   // _64
	u32 _68;                   // _68
	u32 _6C;                   // _6C
	u32 _70;                   // _70
	u32 _74;                   // _74
};

#endif
