#ifndef _GAMEFLOW_H
#define _GAMEFLOW_H

/*
    __vt__8GameFlow:
    .4byte 0
    .4byte 0
    .4byte run__8GameFlowFv
    .4byte getCurrentSection__8GameFlowFv
*/

struct GameFlow {
	virtual void run();               // _08
	virtual void getCurrentSection(); // _0C (weak)

	GameFlow();
	void setSection();
	void getSectionInfo(int);
	void createSection(JKRHeap*);
};

#endif
