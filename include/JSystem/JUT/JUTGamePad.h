#ifndef _JSYSTEM_JUT_JUTGAMEPAD_H
#define _JSYSTEM_JUT_JUTGAMEPAD_H

#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
#include "Dolphin/pad.h"

struct JUTGamePad : public JKRDisposer {
	enum EPadPort { PORT_0 = 0, PORT_1, PORT_2, PORT_3, PORT_INVALID = 0xFFFFFFFF };
	enum EStickMode { MODE_0 = 0, MODE_1 };
	enum EWhichStick { STICK_0 = 0, STICK_1 };

	struct CButton {
		void clear();
		void setRepeat(u32, u32, u32);
		void update(PADStatus const*, u32);

		u32 m_mask;       // _00
		u32 m_buttonDown; // _04
		u32 m_buttonUp;   // _08
		u8 _0C;           // _0C
		u8 _0D;           // _0D
		u8 _0E;           // _0E
		u8 _0F;           // _0F
		f32 _10;          // _10
		f32 _14;          // _14
		u32 _18;          // _18
		u32 _1C;          // _1C
		u32 _20;          // _20
		u32 _24;          // _24
		u32 _28;          // _28
		u32 _2C;          // _2C
	};

	struct CRumble {
		void clear(JUTGamePad*);
		void setEnabled(u32);
		void stopMotor(int, bool);
		void update(short);

		u32 _00; // _00
		u32 _04; // _04
		u32 _08; // _08
		u32 _0C; // _0C
		u32 _10; // _10
	};

	struct CStick {
		void clear();
		void getButton(u32);
		void update(s8, s8, EStickMode, EWhichStick, u32);

		f32 m_xPos;     // _00
		f32 m_yPos;     // _04
		f32 m_stickMag; // _08
		u16 _0C;        // _0C
		u8 _0E;         // _0E
		u8 _0F;         // _0F
	};

	static JSUPtrList mPadList;
	static CButton mPadButton[PAD_MAX_CONTROLLERS];
	static CButton mPadMStick[PAD_MAX_CONTROLLERS];
	static CButton mPadSStick[PAD_MAX_CONTROLLERS];

	// Tells us how many pads are connected to X port? (mPadAssign[x])
	static u32* mPadAssign;

	static BOOL sRumbleSupported;
	static PADStatus mPadStatus[PAD_MAX_CONTROLLERS];

	JUTGamePad(EPadPort);
	virtual ~JUTGamePad(); // _08

	// _00 VTBL
	JUTGamePad::CButton m_padButton; // _18
	JUTGamePad::CStick m_padMStick;  // _48
	JUTGamePad::CStick m_padSStick;  // _58
	JUTGamePad::CRumble m_padRumble; // _68
	u16 m_portNum;                   // _7C, -1 for INVALID
	u8 m_padError;                   // _7E
	JSUPtrLink m_padListLink;        // _80
	u32 _90;                         // _90
	u32 _94;                         // _94
	u8 m_toReset;                    // _98
	u64 m_osResetTime;               // _A0
	u8 _A8;                          // _A8
};

#endif