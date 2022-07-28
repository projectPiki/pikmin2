#ifndef _JSYSTEM_JUT_JUTGAMEPAD_H
#define _JSYSTEM_JUT_JUTGAMEPAD_H

#include "BitFlag.h"
#include "JSystem/JKR/JKRDisposer.h"

struct CButton {
	#define PRESS_DPAD_LEFT (0x1)
	#define PRESS_DPAD_RIGHT (0x2)
	#define PRESS_DPAD_DOWN (0x4)
	#define PRESS_DPAD_UP (0x8)
	#define PRESS_Z (0x10)
	#define PRESS_R (0x20)
	#define PRESS_L (0x40)
	#define PRESS_A (0x100)
	#define PRESS_B (0x200)
	#define PRESS_X (0x400)
	#define PRESS_Y (0x800)
	#define PRESS_START (0x1000)

	BitFlag<u32> m_buttons;
	BitFlag<u32> m_press;
	unknown m_input;
	unknown _0C;
	float m_analogL;
	unknown _14;
	unknown _18;
	unknown _1C;
	unknown _20;
	unknown _24;
	unknown _28;
	unknown _2C;
};

struct CStick {
	float x;          // _00
	float z;          // _04
	float deflection; // _08
	unknown _0C;      // _0C
};

struct CRumble {
	unknown _00; // _00
	unknown _04; // _04
	unknown _08; // _08
	unknown _0C; // _0C
	unknown _10; // _10
};

struct JUTGamePad : public JKRDisposer {
	enum EPadPort { PORT_0 = 0, PORT_1, PORT_2, PORT_3, PORT_INVALID = 0xFFFFFFFF };

	JUTGamePad(EPadPort);

	virtual ~JUTGamePad(); // _00

	CButton m_buttons;    // _18
	CStick m_analogStick; // _48
	CStick m_cStick;      // _58
	CRumble m_rumble;     // _68
	u16 m_port;           // _7C
	u16 _7E;              // _7E
	JSUPtrLink m_ptrLink; // _80
	unknown _90;          // _90
	unkptr _94;           // _94
	unknown _98;          // _98
	unknown _9C;          // _9C
	unknown _A0;          // _A0
	unknown _A4;          // _A4
	unknown _A8;          // _A8
	unknown _AC;          // _AC	
};

#endif
