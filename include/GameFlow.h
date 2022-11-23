#ifndef _GAMEFLOW_H
#define _GAMEFLOW_H

#include "types.h"
#include "Section.h"

struct ISection;
struct Section;
struct JKRHeap;

struct GameFlow : public ISectionMgr {
	GameFlow();
	~GameFlow(); // unused and not virtual

	virtual void run();                    // _08
	virtual ISection* getCurrentSection(); // _0C (weak)

	void setSection();
	void* getSectionInfo(int);

	static ISection* createSection(JKRHeap*);

	static u32 mActiveSectionFlag;

	// _00 VTBL
	Section* m_section; // _04
};

#endif
