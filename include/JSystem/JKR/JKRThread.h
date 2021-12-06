#ifndef _JSYSTEM_JKR_JKRTHREAD_H
#define _JSYSTEM_JKR_JKRTHREAD_H

#include "Dolphin/os.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSU/JSUPtrLink.h"
#include "types.h"

struct JKRThread : public JKRDisposer {
	JKRThread(unsigned long, int, int);

	virtual ~JKRThread(); // _00
	virtual void run();   // _04

	JSUPtrLink _18;                // _18
	JKRHeap* _28;                  // _28
	OSThread* m_osThread;          // _2C
	OSMessageQueue m_messageQueue; // _30
	u8 _50[4];                     // _50
	int _54;                       // _54
	int _58;                       // _58
	int _5C;                       // _5C
	u8 _60;                        // _60
	u32 _64;                       // _64
	u32 _68;                       // _68
	u32 _6C;                       // _6C
	u32 _70;                       // _70
	u32 _74;                       // _74
};

#endif
