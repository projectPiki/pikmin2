#ifndef _GAME_TIMEMGR_H
#define _GAME_TIMEMGR_H

/*
    __vt__Q24Game7TimeMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game7TimeMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct TimeMgr : public CNode {
	virtual ~TimeMgr(); // _08 (weak)

	TimeMgr();
	void init();
	void setTime(float);
	void setStartTime();
	void setEndTime();
	void updateSlot();
	void getSunGaugeRatio();
	void update();
	void isDayOver();
	void isDayTime();
	void getRealDayTime();
	void loadSettingFile(char*);
};
} // namespace Game

#endif
