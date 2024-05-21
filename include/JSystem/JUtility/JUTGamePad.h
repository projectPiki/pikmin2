#ifndef _JSYSTEM_JUT_JUTGAMEPAD_H
#define _JSYSTEM_JUT_JUTGAMEPAD_H

#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
#include "Dolphin/pad.h"
#include "types.h"

struct JUTGamePadRecordBase {
	JUTGamePadRecordBase();

	virtual ~JUTGamePadRecordBase();             // _08
	virtual void getStatus(PADStatus* pad)  = 0; // _0C
	virtual void virtual_10(PADStatus* pad) = 0; // _10

	// _00 = VTBL
	bool mIsActive; // _04
};

struct JUTGamePad : public JKRDisposer {
	enum EPadPort {
		PORT_INVALID = -1,
		PORT_0       = 0,
		PORT_1       = 1,
		PORT_2       = 2,
		PORT_3       = 3,
	};

	enum EStickMode {
		MODE_0 = 0,
		MODE_1 = 1,
	};

	enum EWhichStick {
		STICK_Main = 0,
		STICK_Sub  = 1,
	};

	enum EButton {
		False = 0x0,

		PRESS_DPAD_LEFT  = 0x1,
		PRESS_DPAD_RIGHT = 0x2,
		PRESS_DPAD_DOWN  = 0x4,
		PRESS_DPAD_UP    = 0x8,

		PRESS_Z = 0x10,
		PRESS_R = 0x20,
		PRESS_L = 0x40,

		PRESS_A     = 0x100,
		PRESS_B     = 0x200,
		PRESS_X     = 0x400,
		PRESS_Y     = 0x800,
		PRESS_START = 0x1000,

		ANALOG_LEFT  = 0x1000000,
		ANALOG_RIGHT = 0x2000000,
		ANALOG_DOWN  = 0x4000000,
		ANALOG_UP    = 0x8000000,

		CSTICK_LEFT  = 0x10000,
		CSTICK_RIGHT = 0x20000,
		CSTICK_DOWN  = 0x40000,
		CSTICK_UP    = 0x80000,

		PRESS_DPAD = (PRESS_DPAD_LEFT | PRESS_DPAD_RIGHT | PRESS_DPAD_DOWN | PRESS_DPAD_UP),

		PRESS_LEFT  = (PRESS_DPAD_LEFT | ANALOG_LEFT),
		PRESS_RIGHT = (PRESS_DPAD_RIGHT | ANALOG_RIGHT),
		PRESS_DOWN  = (PRESS_DPAD_DOWN | ANALOG_DOWN),
		PRESS_UP    = (PRESS_DPAD_UP | ANALOG_UP),

		PRESS_ABXYLRZ = (PRESS_A | PRESS_B | PRESS_X | PRESS_Y | PRESS_L | PRESS_R | PRESS_Z),
	};

	struct CButton {
		CButton() { clear(); }

		void clear();
		void setRepeat(u32, u32, u32);
		void update(PADStatus const*, u32);

		u32 mButton;      // _00
		u32 mButtonDown;  // _04, pressed buttons
		u32 mButtonUp;    // _08, released buttons
		u8 mAnalogA;      // _0C
		u8 mAnalogB;      // _0D
		u8 mTriggerLeft;  // _0E
		u8 mTriggerRight; // _0F
		f32 mAnalogL;     // _10
		f32 mAnalogR;     // _14
		u32 mRepeat;      // _18
		u32 mRepeatCount; // _1C
		u32 mRepeatStart; // _20
		u32 mRepeatMask;  // _24
		u32 mRepeatDelay; // _28
		u32 mRepeatRate;  // _2C
	};

	struct CRumble {
		enum ERumble {
			RUMBLE_Unk0 = 0,
			RUMBLE_Unk1 = 1,
			RUMBLE_Unk2 = 2,
		};

		CRumble(JUTGamePad* pad) { clear(pad); }

		void clear(JUTGamePad* pad);
		static void setEnabled(u32);
		static void stopMotor(int, bool);
		void update(s16);

		// unused/inlined:
		void clear();
		void startMotor(int);
		void triggerPatternedRumble(u32);
		void setPatternedRumble(s16, u16, void*);
		void startPatternedRumble(void*, ERumble, u32);
		void stopPatternedRumble(s16);
		void stopPatternedRumbleAtThePeriod();

		void stopMotorHard(int portNo) { stopMotor(portNo, true); }

		static bool isEnabled(u32 mask) { return mEnabled & mask; }
		static bool isEnabledPort(int port) { return isEnabled(sChannelMask[port]); }
		static bool isEnabledPort(int port, u32 mask) { return (sChannelMask[port] & mask) != 0; }

		static u8 mStatus[4];
		static u32 mEnabled;
		static u32 sChannelMask[4];

		u32 mFrame;      // _00
		u32 mLength;     // _04
		u8* mData;       // _08
		u32 mFrameCount; // _0C
		u8* _10;         // _10
	};

	struct CStick {
		CStick() { clear(); }

		void clear();
		u32 getButton(u32 buttons);
		u32 update(s8 x_val, s8 y_val, JUTGamePad::EStickMode mode, JUTGamePad::EWhichStick stick, u32 buttons);

		static f32 sPressPoint;
		static f32 sReleasePoint;

		f32 mXPos;     // _00
		f32 mYPos;     // _04
		f32 mStickMag; // _08
		s16 mAngle;    // _0C
		s8 _0E;        // _0E
		s8 _0F;        // _0F
	};

	struct C3ButtonReset {
		C3ButtonReset() { mIsReset = false; }

		typedef void (*Callback)(EPadPort, u32);

		static u32 sResetPattern;
		static u32 sResetMaskPattern;
		static Callback sCallback;
		static u32 sCallbackArg;
		static OSTime sThreshold;
		static bool sResetSwitchPushing;
		static bool sResetOccurred;
		static EPadPort sResetOccurredPort;

		bool mIsReset; // _00
	};

	/** TODO: Figure out the actual type */
	struct JUTGamePad_0x90 {
		virtual ~JUTGamePad_0x90();         // _08
		virtual void getStatus(PADStatus&); // _0C
		virtual void virtual_10();          // _10

		// VTBL _00
		u8 _04;
	};

	JUTGamePad(); // unused/inlined
	JUTGamePad(EPadPort);

	virtual ~JUTGamePad(); // _08

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
	void resetButtonRepeat();
	void addButtonRepeat(u32);
	void removeButtonRepeat(u32);
	void clearButtonRepeat(bool);

	static JUTGamePad* getGamePad(s32);

	inline bool isConnected() const { return (mPortNum >= 0 && mPortNum < 4); }
	inline bool isButtonDown(u32 buttons) { return mButton.mButtonDown & buttons; }
	inline bool isButtonHeld(u32 buttons) { return mButton.mButton & buttons; }

	inline bool isMoveLeft()
	{
		if (isButtonHeld(PRESS_DPAD_LEFT) || mMStick.mXPos < -0.5f) {
			return true;
		} else {
			return false;
		}
	}
	inline bool isMoveRight()
	{
		if (isButtonHeld(PRESS_DPAD_RIGHT) || mMStick.mXPos > 0.5f) {
			return true;
		} else {
			return false;
		}
	}
	inline bool isMoveUp()
	{
		if (isButtonHeld(PRESS_DPAD_UP) || mMStick.mYPos > 0.5f) {
			return true;
		} else {
			return false;
		}
	}
	inline bool isMoveDown()
	{
		if (isButtonHeld(PRESS_DPAD_DOWN) || mMStick.mYPos < -0.5f) {
			return true;
		} else {
			return false;
		}
	}

	inline u32 getButton() const { return mButton.mButton; }
	inline u32 getButtonDown() const { return mButton.mButtonDown; }
	inline u32 getButtonUp() const { return mButton.mButtonUp; }
	inline f32 getMainStickX() const { return mMStick.mXPos; }
	inline f32 getMainStickY() const { return mMStick.mYPos; }
	inline f32 getMainStickValue() const { return mMStick.mStickMag; }
	inline s16 getMainStickAngle() const { return mMStick.mAngle; }
	inline f32 getSubStickX() const { return mSStick.mXPos; }
	inline f32 getSubStickY() const { return mSStick.mYPos; }
	inline f32 getSubStickValue() const { return mSStick.mStickMag; }
	inline s16 getSubStickAngle() const { return mSStick.mAngle; }
	inline u8 getAnalogA() const { return mButton.mAnalogA; }
	inline u8 getAnalogB() const { return mButton.mAnalogB; }
	inline u8 getAnalogL() const { return mButton.mAnalogL; }
	inline u8 getAnalogR() const { return mButton.mAnalogR; }
	inline s8 getErrorStatus() const { return mError; }
	inline s16 getPortNum() const { return mPortNum; }
	inline JUTGamePadRecordBase* getPadReplay() const { return mPadReplay; }
	inline JUTGamePadRecordBase* getPadRecord() const { return mPadRecord; }
	inline void stopMotorWaveHard() { mRumble.stopPatternedRumble(mPortNum); }

	inline bool isPushing3ButtonReset() const
	{
		bool isPushingReset = false;

		if (mPortNum != -1 && mButtonReset.mIsReset != false) {
			isPushingReset = true;
		}

		return isPushingReset;
	}

	static void setAnalogMode(u32 mode)
	{
		sAnalogMode = mode;
		PADSetAnalogMode(mode);
	}

	static void clearResetOccurred() { C3ButtonReset::sResetOccurred = false; }

	static void setResetCallback(C3ButtonReset::Callback callback, void* param_0)
	{
		C3ButtonReset::sCallback    = callback;
		C3ButtonReset::sCallbackArg = (u32)param_0;
	}

	void initList();
	static void init();
	static u32 read();
	static void checkResetSwitch();
	static void clearForReset();
	static bool recalibrate(u32);

	static JSUList<JUTGamePad> mPadList;
	static CButton mPadButton[PAD_MAX_CONTROLLERS];
	static CStick mPadMStick[PAD_MAX_CONTROLLERS];
	static CStick mPadSStick[PAD_MAX_CONTROLLERS];
	static bool mListInitialized;
	static s8 mPadAssign[PAD_MAX_CONTROLLERS]; // how many pads are connected to X port?
	static s32 sSuppressPadReset;
	static s32 sAnalogMode;
	static u32 sRumbleSupported;
	static PADStatus mPadStatus[PAD_MAX_CONTROLLERS];
	static EStickMode sStickMode;
	static int sClampMode;

	// _00 = VTBL
	JUTGamePad::CButton mButton;      // _18
	JUTGamePad::CStick mMStick;       // _48
	JUTGamePad::CStick mSStick;       // _58
	JUTGamePad::CRumble mRumble;      // _68
	s16 mPortNum;                     // _7C, -1 for INVALID
	u8 mError;                        // _7E
	JSULink<JUTGamePad> mListLink;    // _80
	JUTGamePadRecordBase* mPadRecord; // _90
	JUTGamePadRecordBase* mPadReplay; // _94
	C3ButtonReset mButtonReset;       // _98
	OSTime mOsResetTime;              // _A0
	u8 _A8;                           // _A8
};

struct JUTGamePadLongPress {
	typedef void (*Callback)(int, JUTGamePadLongPress*, void*);

	JUTGamePadLongPress(); // unused/inlined

	void checkCallback(int, u32);

	// unused/inlined:
	void add(u32, u32, u32, Callback, void*, JKRHeap*);
	void remove(JUTGamePadLongPress*);

	u32 getMaskPattern() const { return mMaskPattern; }
	u32 getPattern() const { return mPattern; }

	static JSUList<JUTGamePadLongPress> sPatternList;

	u8 _00[0x10];           // _00, unknown
	bool mIsValid;          // _10
	bool _11;               // _11
	u32 mPattern;           // _14
	u32 mMaskPattern;       // _18
	u32 _1C;                // _1C
	u8 mLongPressStatus[4]; // _20
	OSTime mTimer[4];       // _28
	u8 _48[4];              // _48
	Callback mCallback;     // _4C
	u32 _50;                // _50
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
