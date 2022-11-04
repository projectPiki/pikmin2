#ifndef _JUTFADER_H
#define _JUTFADER_H

#include "JSystem/JGeometry.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"

/*
    __vt__8JUTFader:
    .4byte 0
    .4byte 0
    .4byte __dt__8JUTFaderFv
    .4byte startFadeIn__8JUTFaderFi
    .4byte startFadeOut__8JUTFaderFi
    .4byte draw__8JUTFaderFv
*/

struct JUTFader {
	enum EStatus { Status_Out = 0, Status_In, Status_FadingIn, Status_FadingOut };

	JUTFader(int, int, int, int, JUtility::TColor);

	/**
	 * @reifiedAddress{8002D0FC}
	 * @reifiedFile{JSystem/JUT/JUTFader.cpp}
	 */
	virtual ~JUTFader() { }                  // _08 (weak)
	virtual bool startFadeIn(int duration);  // _0C
	virtual bool startFadeOut(int duration); // _10
	virtual void draw();                     // _14

	void control();

	// unused/inlined:
	void start(int);
	void setStatus(EStatus, int);

	// _00 VTBL
	EStatus m_status;            // _04 - current status
	u16 m_ticksTarget;           // _08 - ticks (calls to control()) to run a fade in/out for
	u16 m_ticksRun;              // _0A - ticks the current fade has run
	JUtility::TColor m_color;    // _0C - color of fade
	JGeometry::TBox2f m_viewBox; // _10 - ortho box to render within
	int _20;                     // _20 - ???
	EStatus _24;                 // _24 - ???

	// u8 filler[0x28 - 0xC];
};

#endif
