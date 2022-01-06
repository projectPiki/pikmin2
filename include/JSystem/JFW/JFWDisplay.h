#ifndef _JSYSTEM_JFW_JFWDISPLAY_H
#define _JSYSTEM_JFW_JFWDISPLAY_H

#include "JSystem/JUtility.h"
#include "JSystem/JUT/JUTXfb.h"

struct JUTFader;
struct JKRHeap;

struct JFWDisplay {
	// all ctors are unused/inlined
	JFWDisplay(JKRHeap*, JUTXfb::EXfbNumber, bool);

	virtual void beginRender(); // _00
	virtual void endRender();   // _04
	virtual void endFrame();    // _08
	virtual ~JFWDisplay();      // _0C
	// virtual void _10() = 0;     // _10
	// virtual void _14() = 0;     // _14

	JFWDisplay* createManager(_GXRenderModeObj* const, JKRHeap);

	// Unused/inlined:
	void ctor_subroutine(bool);

	// _00 VTBL
	JUTFader* m_fader;    // _04
	JUtility::TColor _08; // _08
	u32 _0C;              // _0C
	JUTXfb* m_Xfb;        // _10
	u16 _14;              // _14
	u32 _18;              // _18

	/// PikDecomp calls this "fpsDivider".
	u16 m_secondsPer60Frames; // _1C

	u32 _20;   // _20
	bool _24;  // _24
	u16 _26;   // _26
	float _28; // _28
	int _2C;   // _2C
	int _30;   // _30
	int _34;   // _34
	u16 _38;   // _38
	u8 _3A;    // _3A

	static JFWDisplay* sManager;
};

#endif
