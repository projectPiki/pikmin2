#ifndef _CARRYINFOLIST_H
#define _CARRYINFOLIST_H

struct CarryInfoList {
	~CarryInfoList();

	void draw(struct Graphics&);
	void init();
	void isFinish();
	void update();
};

#endif
