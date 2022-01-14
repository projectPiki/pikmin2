#ifndef _DVDTHREADCOMMAND_H
#define _DVDTHREADCOMMAND_H

#include "JSystem/JSU/JSUList.h"
#include "types.h"

struct JKRArchive;
struct JKRHeap;

struct DvdThreadCommand {
	DvdThreadCommand();

	~DvdThreadCommand();

	u32 _00;                      // _00
	u32 m_loadType;               // _04
	char* m_arcPath;              // _08
	JKRArchive* m_mountedArchive; // _0C
	s32 _10;                      // _10
	u32 m_modeFlags;              // _14
	s32 m_mode;                   // _18
	char m_os;                    // _1C
	u8 _1D[0x16];                 // _1D
	JKRHeap* m_heap;              // _34
	u8 _38[0x8];                  // _38
	s32* _40;                     // _40
	u8 _44[0x18];                 // _44
	JSUPtrLink m_link;            // _5C
};

#endif
