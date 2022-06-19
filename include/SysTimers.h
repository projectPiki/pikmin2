#ifndef _SYSTIMERS_H
#define _SYSTIMERS_H

#include "CNode.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "types.h"

/**
 * @size{0x3C}
 */
struct TimerInf : public JKRDisposer {
	virtual ~TimerInf(); // _00

	char* m_name; // _18
	u8 _1C[4];    // _1C
	float _20;    // _20
	float _24;    // _24
	float _28;    // _28
	float _2C;    // _2C
	unknown _30;  // _30
	int _34;      // _34
	u8 _38;       // _38
};

/**
 * @size{0x28}
 */
struct SysTimers : public CNode {
	SysTimers();
	TimerInf* get(int);
	void reset();
	void newFrame();
	void remove(TimerInf*);
	void _start(char*, bool);
	void _stop(char*);

	// Inlined/Unused:
	void showTimes() {};
	void draw(struct J2DGrafContext&) {};

	int _18;                 // _18
	int m_infoCount;         // _1C
	struct TimerInf* m_info; // _20
	float _24;               // _24

	static u8 drawFlag;
};

#endif
