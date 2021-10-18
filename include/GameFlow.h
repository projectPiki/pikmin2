#ifndef _GAMEFLOW_H
#define _GAMEFLOW_H

#include "types.h"

struct ISectionMgr {
	ISectionMgr() { }

	virtual void run() = 0;
	virtual void getCurrentSection();
};

struct GameFlow : public ISectionMgr {
	GameFlow();

	virtual void run();
	virtual void getCurrentSection();

	void setSection();
	void getSectionInfo(int);

	static void createSection(struct JKRHeap*);
	static u32 mActiveSectionFlag;

	struct Section* m_section; // _04
};

#endif
