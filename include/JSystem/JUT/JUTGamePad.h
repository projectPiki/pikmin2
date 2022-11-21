#ifndef _JSYSTEM_JUT_JUTGAMEPAD_H
#define _JSYSTEM_JUT_JUTGAMEPAD_H

#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
#include "Dolphin/pad.h"
#include "types.h"

struct JUTGamePad : public JKRDisposer {
	enum EPadPort { PORT_0 = 0, PORT_1, PORT_2, PORT_3, PORT_INVALID = 0xFFFFFFFF };
	enum EStickMode { MODE_0 = 0, MODE_1 };
	enum EWhichStick { STICK_0 = 0, STICK_1 };
	enum EButton {
		False            = 0x0,
		PRESS_DPAD_LEFT  = 0x1,
		PRESS_DPAD_RIGHT = 0x2,
		PRESS_DPAD_DOWN  = 0x4,
		PRESS_DPAD_UP    = 0x8,
		PRESS_Z          = 0x10,
		PRESS_R          = 0x20,
		PRESS_L          = 0x40,
		UNKNOWN_8        = 0x80,
		PRESS_A          = 0x100,
		PRESS_B          = 0x200,
		PRESS_X          = 0x400,
		PRESS_Y          = 0x800,
		PRESS_START      = 0x1000,
		UNKNOWN_14       = 0x2000,
		UNKNOWN_15       = 0x4000,
		UNKNOWN_16       = 0x8000,
		UNKNOWN_17       = 0x10000,
		UNKNOWN_18       = 0x20000,
		UNKNOWN_19       = 0x40000,
		UNKNOWN_20       = 0x80000,
		UNKNOWN_21       = 0x100000,
		UNKNOWN_22       = 0x200000,
		UNKNOWN_23       = 0x400000,
		UNKNOWN_24       = 0x800000,
		UNKNOWN_25       = 0x100000,
		UNKNOWN_26       = 0x200000,
		UNKNOWN_27       = 0x400000,
		UNKNOWN_28       = 0x800000,
		UNKNOWN_29       = 0x1000000,
		UNKNOWN_30       = 0x2000000,
		UNKNOWN_31       = 0x4000000,
		UNKNOWN_32       = 0x8000000
	};

	struct CButton {
		/**
		 * @reifiedAddress{8002EAA4}
		 * @reifiedFile{JSystem/JUT/JUTGamePad.cpp}
		 */
		CButton() { clear(); }

		void clear();
		void setRepeat(u32, u32, u32);
		void update(PADStatus const*, u32);

		u32 m_mask;        // _00
		u32 m_buttonDown;  // _04
		u32 m_buttonUp;    // _08
		u8 m_analogA;      // _0C
		u8 m_analogB;      // _0D
		u8 m_triggerLeft;  // _0E
		u8 m_triggerRight; // _0F
		f32 m_analogL;     // _10
		f32 m_analogR;     // _14
		u32 _18;           // _18
		u32 _1C;           // _1C
		u32 _20;           // _20
		u32 _24;           // _24
		u32 _28;           // _28
		u32 _2C;           // _2C
	};

	struct CRumble {
		enum ERumble {};

		/** @fabricated */
		CRumble(JUTGamePad* pad) { clear(pad); }

		void clear(JUTGamePad* pad);
		static void setEnabled(u32);
		void stopMotor(int, bool);
		void update(s16);

		// unused/inlined:
		void clear();
		void startMotor(int);
		void triggerPatternedRumble(u32);
		void setPatternedRumble(s16, u16, void*);
		void startPatternedRumble(void*, ERumble, u32);
		void stopPatternedRumble(s16);
		void stopPatternedRumbleAtThePeriod();

		u32 _00; // _00
		u32 _04; // _04
		u32 _08; // _08
		u32 _0C; // _0C
		u32 _10; // _10

		static u8 mStatus[4];
		static u32 mEnabled;
		static const u32 sChannelMask[4];
	};

	struct CStick {
		/**
		 * @reifiedAddress{8002EA88}
		 * @reifiedFile{JSystem/JUT/JUTGamePad.cpp}
		 */
		CStick() { clear(); }

		void clear();
		u32 getButton(u32);
		u32 update(s8, s8, EStickMode, EWhichStick, u32);

		f32 m_xPos;     // _00
		f32 m_yPos;     // _04
		f32 m_stickMag; // _08
		s16 _0C;        // _0C
		u8 _0E;         // _0E
		u8 _0F;         // _0F

		static const float sPressPoint;
		static const float sReleasePoint;
	};

	struct C3ButtonReset {
		typedef void (*Callback)(EPadPort, u32);
		static const u32 sResetPattern;
		static const u32 sResetMaskPattern;
		static Callback sCallback;
		static u32 sCallbackArg;
		static s64 sThreshold;
		static bool sResetSwitchPushing;
		static bool sResetOccurred;
		static EPadPort sResetOccurredPort;
	};

	/** TODO: Figure out the actual type */
	struct JUTGamePad_0x90 {
		virtual ~JUTGamePad_0x90();         // _08
		virtual void getStatus(PADStatus&); // _0C
		virtual void virtual_10();          // _10

		// VTBL _00
		u8 _04;
	};

	static JSUPtrList mPadList;
	static CButton mPadButton[PAD_MAX_CONTROLLERS];
	static CStick mPadMStick[PAD_MAX_CONTROLLERS];
	static CStick mPadSStick[PAD_MAX_CONTROLLERS];

	static bool mListInitialized;

	// Tells us how many pads are connected to X port? (mPadAssign[x])
	static s8 mPadAssign[PAD_MAX_CONTROLLERS];

	static s32 sSuppressPadReset;
	static s32 sAnalogMode;

	static u32 sRumbleSupported;
	static PADStatus mPadStatus[PAD_MAX_CONTROLLERS];

	static const EStickMode sStickMode;
	static const int sClampMode;

	JUTGamePad(); // unused/inlined
	JUTGamePad(EPadPort);
	virtual ~JUTGamePad(); // _08

	static void initList();
	static void init();
	static u32 read();
	static void checkResetSwitch();
	static void clearForReset();
	static bool recalibrate(u32);

	void clear();
	void assign();
	void checkResetCallback(s64);
	void update();
	void setButtonRepeat(u32, u32, u32);

	// unused/inlined:
	void setStatus(u32, char, char, char, char, u8, u8, u8, u8, u32, PADStatus*);
	void setStatus_PADStatus(const PADStatus*, u32, PADStatus*, u32);
	void setStatus_data(const void*, u32, PADStatus*);
	void setStatus_sticks_subroutine(PADStatus*);
	static JUTGamePad* getGamePad(int);
	void resetButtonRepeat();
	void addButtonRepeat(u32);
	void removeButtonRepeat(u32);
	void clearButtonRepeat(bool);

	// #define JUTGamePadIsConnected(pad) ((0 <= pad->m_portNum && pad->m_portNum < 4))
	/** @fabricated */
	inline bool isConnected() const { return (0 <= m_portNum && m_portNum < 4); }
	inline bool isButtonDown(u32 buttons) { return m_padButton.m_buttonDown & buttons; }

	// _00 VTBL
	JUTGamePad::CButton m_padButton;   // _18
	JUTGamePad::CStick m_padMStick;    // _48
	JUTGamePad::CStick m_padSStick;    // _58
	JUTGamePad::CRumble m_padRumble;   // _68
	s16 m_portNum;                     // _7C, -1 for INVALID
	u8 m_padError;                     // _7E
	JSULink<JUTGamePad> m_padListLink; // _80
	JUTGamePad_0x90* _90;              // _90
	JUTGamePad_0x90* _94;              // _94
	u8 m_toReset;                      // _98
	s64 m_osResetTime;                 // _A0
	u8 _A8;                            // _A8
};

struct JUTGamePadLongPress {
	typedef void (*Callback)(int, JUTGamePadLongPress*, void*);

	JUTGamePadLongPress(); // unused/inlined

	void checkCallback(int, u32);

	// unused/inlined:
	void add(u32, u32, u32, Callback, void*, JKRHeap*);
	void remove(JUTGamePadLongPress*);

	static JSUPtrList sPatternList;

	u8 _00[0x10];        // _00 - unknown
	u8 _10;              // _10
	u8 _11;              // _11
	u32 _14;             // _14
	u32 _18;             // _18
	u32 _1C;             // _1C
	u8 _20[4];           // _20
	u64 m_time[4];       // _28
	u8 _48[4];           // _48
	Callback m_callback; // _4C
	u32 _50;             // _50
};

// entirely unused/inlined
struct JUTGamePadRecordBase {
	JUTGamePadRecordBase();

	virtual ~JUTGamePadRecordBase(); // _08
	// chances are, these are (do_read, do_write) or (do_readFixed, do_writeFixed)
	virtual void virtual_0C() = 0; // _0C
	virtual void virtual_10() = 0; // _10
};

// entirely unused/inlined
struct JUTGamePadRecord : public JUTGamePadRecordBase {
	JUTGamePadRecord();
	virtual ~JUTGamePadRecord(); // _08
	// chances are, these are whichever pair aren't _0C and _10
	virtual void virtual_14() = 0; // _14
	virtual void virtual_18() = 0; // _18

	void setPart(uint);
	void calculateDataSizePerFrame(u8);
	void do_readFixed(const void*, PADStatus*);
	void do_writeFixed(const PADStatus*, void*);
};

// entirely unused/inlined. May or may not extend JUTGamePadRecord instead of JUTGamePadRecordBase directly
struct JUTGamePadRecordFixed : public JUTGamePadRecordBase {
	enum EOrigin {};

	JUTGamePadRecordFixed();
	virtual ~JUTGamePadRecordFixed(); // _08
	// chances are, these are whichever pair aren't _0C and _10
	virtual void virtual_14() = 0; // _14
	virtual void virtual_18() = 0; // _18

	void setBuffer(void*, u32);
	void setDataEnd(void*);
	void setDataSize(u32);
	void clear();
	void seek(int, EOrigin);
	void do_read(PADStatus*);
	void do_write(const PADStatus*);
};

#endif
