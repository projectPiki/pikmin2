#ifndef _JUTGAMEPAD_H
#define _JUTGAMEPAD_H

/*
    __vt__10JUTGamePad:
    .4byte 0
    .4byte 0
    .4byte __dt__10JUTGamePadFv
*/

struct JUTGamePad {
	virtual ~JUTGamePad(); // _08

	JUTGamePad(JUTGamePad::EPadPort);
	void initList();
	void init();
	void clear();
	void read();
	void assign();
	void checkResetCallback(long long);
	void update();
	void checkResetSwitch();
	void clearForReset();
	void setButtonRepeat(unsigned long, unsigned long, unsigned long);
	void recalibrate(unsigned long);
};

#endif
