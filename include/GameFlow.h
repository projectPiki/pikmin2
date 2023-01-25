#ifndef _GAMEFLOW_H
#define _GAMEFLOW_H

#include "types.h"
#include "Section.h"

struct ISection;
struct Section;
struct JKRHeap;

struct SectionInfo {
	char* mName;

	union {
		u8 mSectionId, b, c, d;
		u32 abcd;
	} id;
};

struct GameFlow : public ISectionMgr {
	GameFlow();
	~GameFlow(); // unused and not virtual

	virtual void run();                    // _08
	virtual ISection* getCurrentSection(); // _0C (weak)

	void setSection();

	static void* getSectionInfo(int);
	static ISection* createSection(JKRHeap*);

	static u32 mActiveSectionFlag;

	// _00 VTBL
	Section* mSection; // _04
};

#endif
