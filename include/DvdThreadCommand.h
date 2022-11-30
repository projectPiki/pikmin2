#ifndef _DVDTHREADCOMMAND_H
#define _DVDTHREADCOMMAND_H

#include "JSystem/JSupport/JSUList.h"
#include "Dolphin/os.h"
#include "AppThread.h"
#include "types.h"

struct JKRArchive;
struct JKRHeap;

struct DvdThreadCommand {
	DvdThreadCommand();

	~DvdThreadCommand() {};

	u32 _00;                          // _00
	u32 m_loadType;                   // _04
	char* m_arcPath;                  // _08
	JKRArchive* m_mountedArchive;     // _0C
	s32 _10;                          // _10
	u32 m_modeFlags;                  // _14
	s32 m_mode;                       // _18
	char m_os;                        // _1C
	u8 _1D[0x16];                     // _1D
	JKRHeap* m_heap;                  // _34
	OSMessageQueue m_msgQueue;        // _38
	void* m_msgBuffer;                // _58
	JSULink<DvdThreadCommand> m_link; // _5C
};

struct DvdThread : public AppThread {
	struct ESyncBlockFlag {
		// might be an enum? size 0x4?
	};

	DvdThread(u32, int, int);

	virtual ~DvdThread(); // _08 (weak)
	virtual void* run();  // _0C

	void loadArchive(DvdThreadCommand*);
	void loadFile(DvdThreadCommand*);
	void sendCommand(DvdThreadCommand*);
	void sync(DvdThreadCommand*, ESyncBlockFlag);
	void syncAll(ESyncBlockFlag);

	// _00 		= VTBL
	// _00-_7C 	= AppThread
	JSUPtrList _7C; // _7C
};

#endif
