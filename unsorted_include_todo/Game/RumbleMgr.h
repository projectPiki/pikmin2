#ifndef _GAME_RUMBLEMGR_H
#define _GAME_RUMBLEMGR_H

/*
    __vt__Q24Game9RumbleMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game9RumbleMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct RumbleMgr : public CNode {
	virtual ~RumbleMgr(); // _08 (weak)

	RumbleMgr();
	void loadResource();
	void init();
	void update();
	void startRumble(int, Vector3<float>&, int);
	void startRumble(int, int);
	void stopRumble(int, int);
	void stopRumble(int);
	void isRumbleUpdateOn();
	void setZukanRumble(Controller*, Vector3<float>*);
	void isStartAndEnd(int*, int);
	void readRumbleParms(char*);
	void readRumbleData(char*);
};
} // namespace Game

#endif
