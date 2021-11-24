#ifndef _GAMEFLOW_H
#define _GAMEFLOW_H

#include "types.h"

struct SectionInfo;
struct ISection;
struct Section;
struct JKRHeap;

struct ISectionMgr {
	ISectionMgr() { }

	virtual void run() = 0;
	virtual ISection* getCurrentSection();
};

struct GameFlow : public ISectionMgr {
	GameFlow();

	virtual void run();
	virtual ISection* getCurrentSection();

	void setSection();
	SectionInfo* getSectionInfo(int);

	static ISection* createSection(JKRHeap*);
	static u32 mActiveSectionFlag;

	Section* m_section; // _04
};

#endif
