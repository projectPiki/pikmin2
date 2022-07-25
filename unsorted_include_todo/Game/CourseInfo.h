#ifndef _GAME_COURSEINFO_H
#define _GAME_COURSEINFO_H

/*
    __vt__Q24Game10CourseInfo:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game10CourseInfoFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct CourseInfo : public CNode {
	virtual ~CourseInfo(); // _08 (weak)

	CourseInfo();
	void dump();
	void read(Stream&);
	void getOtakaraNum(ID32&);
	void getOtakaraNum(int);
	void getCaveIndex_FromID(ID32&);
	void getCaveinfoFilename_FromID(ID32&);
	void getCaveID_FromIndex(int);
	void getCaveNum();
};
} // namespace Game

#endif
