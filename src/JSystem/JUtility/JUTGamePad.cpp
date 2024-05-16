#include "JSystem/JUtility/JUTGamePad.h"
#include "JSystem/JMath.h"

u32 JUTGamePad::CRumble::sChannelMask[PAD_MAX_CONTROLLERS] = { 0x80000000, 0x40000000, 0x20000000, 0x10000000 };
static u32 channel_mask[PAD_MAX_CONTROLLERS]               = { 0x80000000, 0x40000000, 0x20000000, 0x10000000 };

JUTGamePad::EStickMode JUTGamePad::sStickMode    = MODE_1;
int JUTGamePad::sClampMode                       = 1;
f32 JUTGamePad::CStick::sPressPoint              = 0.5f;
f32 JUTGamePad::CStick::sReleasePoint            = 0.25f;
u32 JUTGamePad::C3ButtonReset::sResetPattern     = 0x1600;
u32 JUTGamePad::C3ButtonReset::sResetMaskPattern = 0xFFFF;

JSUList<JUTGamePad> JUTGamePad::mPadList(false);
PADStatus JUTGamePad::mPadStatus[PAD_MAX_CONTROLLERS];
JUTGamePad::CButton JUTGamePad::mPadButton[PAD_MAX_CONTROLLERS];
JUTGamePad::CStick JUTGamePad::mPadMStick[PAD_MAX_CONTROLLERS];
JUTGamePad::CStick JUTGamePad::mPadSStick[PAD_MAX_CONTROLLERS];

bool JUTGamePad::mListInitialized = false;
s8 JUTGamePad::mPadAssign[4];
s32 JUTGamePad::sSuppressPadReset;
s32 JUTGamePad::sAnalogMode;
u32 JUTGamePad::sRumbleSupported;
u8 JUTGamePad::CRumble::mStatus[4];
u32 JUTGamePad::CRumble::mEnabled;
JUTGamePad::C3ButtonReset::Callback JUTGamePad::C3ButtonReset::sCallback;
u32 JUTGamePad::C3ButtonReset::sCallbackArg;
OSTime JUTGamePad::C3ButtonReset::sThreshold = (OSTime)((OS_TIMER_CLOCK) / 60) * 30;
bool JUTGamePad::C3ButtonReset::sResetSwitchPushing;
bool JUTGamePad::C3ButtonReset::sResetOccurred;
JUTGamePad::EPadPort JUTGamePad::C3ButtonReset::sResetOccurredPort;
JSUList<JUTGamePadLongPress> JUTGamePadLongPress::sPatternList(false);

/**
 * @note Address: 0x8002D458
 * @note Size: 0xD4
 * __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
 */
JUTGamePad::JUTGamePad(EPadPort portNum)
    : mRumble(this)
    , mListLink(this)
{
	mPortNum = portNum;

	if (mPortNum >= 0) {
		mPadAssign[portNum]++;
	}

	initList();
	mPadList.append(&mListLink);
	update();
	mPadRecord = nullptr;
	mPadReplay = nullptr;
	clear();
}

/**
 * @note Address: N/A
 * @note Size: 0xA8
 */
JUTGamePad::JUTGamePad()
    : mRumble(this)
    , mListLink(this)
{
	mPortNum = -1;
	initList();
	mPadList.append(&mListLink);
	mPadRecord = nullptr;
	mPadReplay = nullptr;
	clear();
}

/**
 * @note Address: 0x8002D52C
 * @note Size: 0xAC
 * __dt__10JUTGamePadFv
 */
JUTGamePad::~JUTGamePad()
{
	if (mPortNum >= 0) {
		mPadAssign[mPortNum]--;
		mPortNum = -1;
	}

	mPadList.remove(&mListLink);
}

/**
 * @note Address: 0x8002D5D8
 * @note Size: 0x3C
 */
void JUTGamePad::initList()
{
	if (mListInitialized) {
		return;
	}

	mPadList.initiate();
	mListInitialized = true;
}

/**
 * @note Address: 0x8002D614
 * @note Size: 0x38
 * init__10JUTGamePadFv
 */
void JUTGamePad::init()
{
	PADSetSpec(PAD_SPEC_5);
	setAnalogMode(PAD_MODE_3);
	PADInit();
}

/**
 * @note Address: 0x8002D64C
 * @note Size: 0x14
 * clear__10JUTGamePadFv
 */
void JUTGamePad::clear()
{
	mButtonReset.mIsReset = false;
	_A8                   = 1;
}

/**
 * @note Address: 0x8002D660
 * @note Size: 0x2C8
 * read__10JUTGamePadFv
 */
u32 JUTGamePad::read()
{
	sRumbleSupported = PADRead(mPadStatus);

	switch (sClampMode) {
	case 1:
		PADClamp(mPadStatus);
		break;
	case 2:
		PADClampCircle(mPadStatus);
		break;
	}

	// Initialize reset mask and iterate over all controllers
	u32 resetMask = 0;
	u32 bitTest;
	for (int i = 0; i < PAD_MAX_CONTROLLERS; i++) {
		bitTest = 0x80000000 >> i;
		if (mPadStatus[i].err == 0) {
			// If no error on the controller, update main and sub sticks and button status
			u32 mainStick = mPadMStick[i].update(mPadStatus[i].stickX, mPadStatus[i].stickY, sStickMode, STICK_Main, mPadButton[i].mButton)
			             << 0x18;
			u32 subStick
			    = mPadSStick[i].update(mPadStatus[i].substickX, mPadStatus[i].substickY, sStickMode, STICK_Sub, mPadButton[i].mButton)
			   << 0x10;

			mainStick |= subStick;

			mPadButton[i].update(&mPadStatus[i], mainStick);
		} else if (mPadStatus[i].err == -1) {
			// If controller error is -1, reset main and sub sticks and button status, and update reset mask if pad reset is not suppressed
			mPadMStick[i].update(0, 0, sStickMode, STICK_Main, 0);
			mPadSStick[i].update(0, 0, sStickMode, STICK_Sub, 0);
			mPadButton[i].update(nullptr, 0);

			if ((sSuppressPadReset & bitTest) == 0) {
				resetMask |= bitTest;
			}
		} else {
			// For other errors, reset button down, up, and repeat status
			mPadButton[i].mButtonDown = 0;
			mPadButton[i].mButtonUp   = 0;
			mPadButton[i].mRepeat     = 0;
		}
	}

	// Iterate over all pads in the pad list, update their status, and execute virtual_10 function if pad record is active and no error on
	// the controller
	JSUListIterator<JUTGamePad> pad(mPadList.getFirst());
	for (; pad != mPadList.getEnd(); pad++) {
		if (pad->mPadReplay != nullptr && pad->mPadReplay->mIsActive) {
			// If pad replay is active, get the current status and update main and sub sticks and button status
			PADStatus status;
			pad->mPadReplay->getStatus(&status);
			u32 mainStick = pad->mMStick.update(status.stickX, status.stickY, sStickMode, STICK_Main, pad->mButton.mButton) << 0x18;
			u32 subStick  = pad->mSStick.update(status.substickX, status.substickY, sStickMode, STICK_Sub, pad->mButton.mButton) << 0x10;
			mainStick |= subStick;
			pad->mButton.update(&status, mainStick);
		} else {
			// If pad replay is not active, assign a new port number if invalid and update the pad
			if (pad->mPortNum == PORT_INVALID) {
				pad->assign();
			}

			pad->update();
		}

		if (pad->mPadRecord != nullptr && pad->mPadRecord->mIsActive) {
			s16 portNum = pad->mPortNum;
			if (portNum >= 0 && mPadStatus[portNum].err == 0) {
				pad->mPadRecord->virtual_10(&mPadStatus[portNum]);
			}
		}
	}

	if (resetMask != 0) {
		PADReset(resetMask);
	}

	checkResetSwitch();
	return sRumbleSupported;
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void JUTGamePad::setStatus(u32, char, char, char, char, u8, u8, u8, u8, u32, PADStatus*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
void JUTGamePad::setStatus_PADStatus(const PADStatus*, u32, PADStatus*, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x12C
 */
void JUTGamePad::setStatus_data(const void*, u32, PADStatus*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void JUTGamePad::setStatus_sticks_subroutine(PADStatus*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8002D928
 * @note Size: 0xA8
 * assign__10JUTGamePadFv
 */
void JUTGamePad::assign()
{
	for (int i = 0; i < PAD_MAX_CONTROLLERS; i++) {
		// is mPadAssign u8?
		if (mPadStatus[i].err == 0 && ((u8*)mPadAssign)[i] == 0) {
			mPortNum      = i;
			mPadAssign[i] = 1;
			mPadButton[i].setRepeat(mButton.mRepeatMask, mButton.mRepeatDelay, mButton.mRepeatRate);
			mRumble.clear(this);
			break;
		}
	}
}

/**
 * @note Address: 0x8002D9D0
 * @note Size: 0x6C
 */
void JUTGamePad::checkResetCallback(OSTime padState)
{
	if (padState >= C3ButtonReset::sThreshold) {
		C3ButtonReset::sResetOccurred     = true;
		C3ButtonReset::sResetOccurredPort = (EPadPort)mPortNum;
		if (C3ButtonReset::sCallback != nullptr) {
			C3ButtonReset::sCallback((EPadPort)mPortNum, C3ButtonReset::sCallbackArg);
		}
	}
}

/**
 * @note Address: 0x8002DA3C
 * @note Size: 0x32C
 * update__10JUTGamePadFv
 */
void JUTGamePad::update()
{
	if (mPortNum == PORT_INVALID) {
		return;
	}

	if (mPortNum >= 0 && mPortNum < PAD_MAX_CONTROLLERS) {
		mButton = mPadButton[mPortNum];
		mMStick = mPadMStick[mPortNum];
		mSStick = mPadSStick[mPortNum];
		mError  = mPadStatus[mPortNum].err;
	}

	if (_A8 == 0 || C3ButtonReset::sResetPattern != (mButton.mButton & C3ButtonReset::sResetMaskPattern)) {
		mButtonReset.mIsReset = false;

	} else if (C3ButtonReset::sResetOccurred == false) {
		if (mButtonReset.mIsReset == true) {
			OSTime diff = OSGetTime() - mOsResetTime;
			checkResetCallback(diff);
		} else {
			mButtonReset.mIsReset = true;
			mOsResetTime          = OSGetTime();
		}
	}

	JSUListIterator<JUTGamePadLongPress> pad = JUTGamePadLongPress::sPatternList.getFirst();
	for (; pad != JUTGamePadLongPress::sPatternList.getEnd(); ++pad) {

		if (!pad->mIsValid)
			continue;

		if (mPortNum >= 0 && mPortNum < PAD_MAX_CONTROLLERS) {
			u32 v = getButton() & pad->mMaskPattern;
			if (v == pad->mPattern) {
				if (pad->mLongPressStatus[mPortNum] == 1) {
					OSTime diff = OSGetTime() - pad->mTimer[mPortNum];
					pad->checkCallback(mPortNum, diff);
				} else {
					pad->mLongPressStatus[mPortNum] = 1;
					pad->mTimer[mPortNum]           = OSGetTime();
				}
			} else {
				pad->mLongPressStatus[mPortNum] = 0;
			}
		}
	}

	if (mPortNum >= 0 && mPortNum < PAD_MAX_CONTROLLERS) {
		mRumble.update(mPortNum);
	}
}

/**
 * @note Address: 0x8002DD68
 * @note Size: 0x80
 */
void JUTGamePad::checkResetSwitch()
{
	if (C3ButtonReset::sResetOccurred) {
		return;
	}
	if (OSGetResetSwitchState()) {
		C3ButtonReset::sResetSwitchPushing = true;
		return;
	}
	if (C3ButtonReset::sResetSwitchPushing == true) {
		C3ButtonReset::sResetOccurred     = true;
		C3ButtonReset::sResetOccurredPort = PORT_INVALID;
		if (C3ButtonReset::sCallback != nullptr) {
			C3ButtonReset::sCallback(PORT_INVALID, C3ButtonReset::sCallbackArg);
		}
	}
	C3ButtonReset::sResetSwitchPushing = false;
}

/**
 * @note Address: 0x8002DDE8
 * @note Size: 0x2C
 */
void JUTGamePad::clearForReset()
{
	CRumble::setEnabled(0);
	recalibrate(0xF0000000);
}

/**
 * @note Address: 0x8002DE14
 * @note Size: 0x3C
 * clear__Q210JUTGamePad7CButtonFv
 */
void JUTGamePad::CButton::clear()
{
	mButton       = 0;
	mButtonDown   = 0;
	mButtonUp     = 0;
	mRepeat       = 0;
	mAnalogA      = 0;
	mAnalogB      = 0;
	mTriggerLeft  = 0;
	mTriggerRight = 0;
	mRepeatCount  = 0;
	mRepeatStart  = 0;
	mRepeatMask   = 0;
	mRepeatDelay  = 0;
	mRepeatRate   = 0;
}

/**
 * @note Address: 0x8002DE50
 * @note Size: 0x190
 * update__Q210JUTGamePad7CButtonFPC9PADStatusUl
 */
void JUTGamePad::CButton::update(PADStatus const* padStatus, u32 stickStatus)
{
	u32 buttons;
	if (padStatus) {
		buttons = padStatus->button;
	} else {
		buttons = 0;
	}

	buttons = stickStatus | buttons;
	mRepeat = 0;

	if (mRepeatDelay != 0 && mRepeatMask != 0) {
		u32 repeatButton = buttons & mRepeatMask;
		mRepeat          = 0;

		if (repeatButton == 0) {
			mRepeatStart = 0;
			mRepeatCount = 0;
		} else if (mRepeatStart == repeatButton) {
			mRepeatCount++;

			if (mRepeatCount == mRepeatDelay || (mRepeatCount > mRepeatDelay && (mRepeatCount - mRepeatDelay) % mRepeatRate == 0)) {
				mRepeat = repeatButton;
			}
		} else {
			mRepeat      = repeatButton & (mRepeatStart ^ ~0);
			mRepeatStart = repeatButton;
			mRepeatCount = 0;
		}
	}

	mButtonDown = buttons & (buttons ^ mButton);
	mButtonUp   = mButton & (buttons ^ mButton);
	mButton     = buttons;
	mRepeat |= (mRepeatMask ^ ~0) & mButtonDown;

	if (padStatus != NULL) {
		mAnalogA      = padStatus->analogA;
		mAnalogB      = padStatus->analogB;
		mTriggerLeft  = padStatus->triggerLeft;
		mTriggerRight = padStatus->triggerRight;
	} else {
		mAnalogA      = 0;
		mAnalogB      = 0;
		mTriggerLeft  = 0;
		mTriggerRight = 0;
	}

	mAnalogL = (s32)mTriggerLeft / 150.0f;
	mAnalogR = (s32)mTriggerRight / 150.0f;
}

/**
 * @note Address: 0x8002DFE0
 * @note Size: 0x1C
 * clear__Q210JUTGamePad6CStickFv
 */
void JUTGamePad::CStick::clear()
{
	mXPos     = 0.0f;
	mYPos     = 0.0f;
	mStickMag = 0.0f;
	mAngle    = 0;
}

/**
 * @note Address: 0x8002DFFC
 * @note Size: 0x2B8
 * update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl
 */
u32 JUTGamePad::CStick::update(s8 x_val, s8 y_val, EStickMode mode, EWhichStick stick, u32 buttons)
{
	s32 clamp;
	switch (sClampMode) {
	case 1:
		clamp = stick == STICK_Main ? 54 : 42;
		break;
	case 2:
		clamp = stick == STICK_Main ? 38 : 29;
		break;
	default:
		clamp = stick == STICK_Main ? 69 : 57;
		break;
	}

	_0E       = x_val;
	_0F       = y_val;
	mXPos     = x_val / (f32)clamp;
	mYPos     = y_val / (f32)clamp;
	mStickMag = dolsqrtfull(SQUARE(mXPos) + SQUARE(mYPos));

	if (mStickMag > 1.0f) {
		if (mode == MODE_1) {
			mXPos /= mStickMag;
			mYPos /= mStickMag;
		}
		mStickMag = 1.0f;
	}

	if (mStickMag > 0.0f) {
		if (mYPos == 0.0f) {
			if (mXPos > 0.0f) {
				mAngle = 0x4000;
			} else {
				mAngle = -0x4000;
			}
		} else {
			// doesn't match with our PI constant, ...6 vs ...7
			mAngle = (0x8000 / 3.1415926f) * (f32)atan2(mXPos, -mYPos);
		}
	}

	u32 buttonType = stick == STICK_Main ? 0x18 : 0x10;
	return getButton(buttons >> buttonType);
}

/**
 * @note Address: 0x8002E2B4
 * @note Size: 0xB4
 * getButton__Q210JUTGamePad6CStickFUl
 */
u32 JUTGamePad::CStick::getButton(u32 buttons)
{
	buttons &= 0xF;

	if (-sReleasePoint < mXPos && mXPos < sReleasePoint) {
		buttons = buttons & ~3;
	} else if (mXPos <= -sPressPoint) {
		buttons = buttons & ~2 | 1;
	} else if (mXPos >= sPressPoint) {
		buttons = buttons & ~1 | 2;
	}

	if (-sReleasePoint < mYPos && mYPos < sReleasePoint) {
		buttons = buttons & ~0xC;
	} else if (mYPos <= -sPressPoint) {
		buttons = buttons & ~8 | 4;
	} else if (mYPos >= sPressPoint) {
		buttons = buttons & ~4 | 8;
	}

	return buttons;
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 * clear__Q210JUTGamePad7CRumbleFv
 */
void JUTGamePad::CRumble::clear()
{
	// UNUSED FUNCTION
	mFrame      = 0;
	mLength     = 0;
	mData       = 0;
	mFrameCount = 0;
	_10         = 0;
	mEnabled    = 0xF0000000;
}

/**
 * @note Address: 0x8002E368
 * @note Size: 0x74
 * clear__Q210JUTGamePad7CRumbleFP10JUTGamePad
 */
void JUTGamePad::CRumble::clear(JUTGamePad* pad)
{
	if (0 <= pad->mPortNum && pad->mPortNum < PAD_MAX_CONTROLLERS) {
		mStatus[pad->mPortNum] = 0;
		stopMotor(pad->mPortNum, true);
	}
	clear();
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void JUTGamePad::CRumble::startMotor(int port)
{
	if (isEnabledPort(port) != 0) {
		PADControlMotor(port, 1);
		mStatus[port] = 1;
	}
}

/**
 * @note Address: 0x8002E3DC
 * @note Size: 0x70
 * stopMotor__Q210JUTGamePad7CRumbleFib
 */
void JUTGamePad::CRumble::stopMotor(int chan, bool doHardStop)
{
	if (isEnabledPort(chan) != 0) {
		u8 command = doHardStop ? PAD_MOTOR_STOP_HARD : PAD_MOTOR_STOP;
		PADControlMotor(chan, command);
		mStatus[chan] = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
static bool getNumBit(u8* data, int bitNo)
{
	u8 bit = (data[bitNo >> 3] & (0x80 >> (bitNo & 7)));
	return bit != 0;
}

/**
 * @note Address: 0x8002E44C
 * @note Size: 0x25C
 */
void JUTGamePad::CRumble::update(s16 port)
{
	if (isEnabledPort(port) == 0) {
		mFrame      = 0;
		mLength     = 0;
		mData       = nullptr;
		mFrameCount = 0;
		_10         = 0;
	}

	if (mLength != 0) {
		if (mFrame >= mLength) {
			stopMotorHard(port);
			mLength = 0;
		} else {
			if (mFrameCount == 0) {
				if (mStatus[port] == 0) {
					startMotor(port);
				}

				return;
			}

			bool enable = getNumBit(mData, mFrame % mFrameCount);
			bool status = mStatus[port];
			if (enable && !status) {
				startMotor(port);
			} else if (!enable) {
				bool hardstop = false;
				if (_10) {
					hardstop = getNumBit(_10, mFrame % mFrameCount);
				}
				if (status) {
					stopMotor(port, hardstop);
				} else if (hardstop) {
					stopMotorHard(port);
				}
			}
		}

		mFrame++;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void JUTGamePad::CRumble::triggerPatternedRumble(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void JUTGamePad::CRumble::setPatternedRumble(s16, u16, void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
void JUTGamePad::CRumble::startPatternedRumble(void*, ERumble, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void JUTGamePad::CRumble::stopPatternedRumble(s16 port)
{
	mLength = 0;
	stopMotor(port, true);
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void JUTGamePad::CRumble::stopPatternedRumbleAtThePeriod()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
JUTGamePad* JUTGamePad::getGamePad(s32 port)
{
	JSUListIterator<JUTGamePad> padLink(mPadList.getFirst());
	for (; padLink != mPadList.getEnd(); ++padLink) {
		if (padLink->mPortNum == port) {
			return padLink.getObject();
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8002E6A8
 * @note Size: 0x124
 */
void JUTGamePad::CRumble::setEnabled(u32 mask)
{
	for (int i = 0; i < PAD_MAX_CONTROLLERS; i++) {
		if ((mEnabled & channel_mask[i]) == 0) {
			if (mStatus[i]) {
				stopMotor(i, false);
			}

			JUTGamePad* padLink = getGamePad(i);
			if (padLink != nullptr) {
				padLink->mRumble.stopPatternedRumble(padLink->mPortNum);
			}
		}
	}
	mEnabled = (mask & (PAD_CHAN3_BIT | PAD_CHAN2_BIT | PAD_CHAN1_BIT | PAD_CHAN0_BIT));
}

/**
 * @note Address: 0x8002E7CC
 * @note Size: 0x1C
 */
void JUTGamePad::CButton::setRepeat(u32 repeatMask, u32 repeatDelay, u32 repeatRate)
{
	mRepeatStart = 0;
	mRepeatCount = 0;
	mRepeatMask  = repeatMask;
	mRepeatDelay = repeatDelay;
	mRepeatRate  = repeatRate;
}

/**
 * @note Address: 0x8002E7E8
 * @note Size: 0x4C
 */
void JUTGamePad::setButtonRepeat(u32 mask, u32 delay, u32 rate)
{
	mButton.setRepeat(mask, delay, rate);
	if (mPortNum < 0) {
		return;
	}
	mPadButton[mPortNum].setRepeat(mask, delay, rate);
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void JUTGamePad::resetButtonRepeat()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void JUTGamePad::addButtonRepeat(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void JUTGamePad::removeButtonRepeat(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void JUTGamePad::clearButtonRepeat(bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8002E834
 * @note Size: 0x8C
 */
bool JUTGamePad::recalibrate(u32 mask)
{
	for (int i = 0; i < PAD_MAX_CONTROLLERS; i++) {
		if ((sSuppressPadReset & channel_mask[i]) != 0) {
			mask &= -1 ^ channel_mask[i];
		}
	}
	return PADRecalibrate(mask);
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
JUTGamePadLongPress::JUTGamePadLongPress()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSULink<JUTGamePadLongPress>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
void JUTGamePadLongPress::add(u32, u32, u32, Callback, void*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xAC
 */
void JUTGamePadLongPress::remove(JUTGamePadLongPress*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8002E8C0
 * @note Size: 0x64
 */
void JUTGamePadLongPress::checkCallback(int p1, u32 p2)
{
	if (0 <= p1 && p2 >= _1C) {
		_11     = 1;
		_48[p1] = 1;
		if (mCallback) {
			mCallback(p1, this, (void*)this->_50);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
JUTGamePadRecordBase::JUTGamePadRecordBase()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
JUTGamePadRecordBase::~JUTGamePadRecordBase()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
JUTGamePadRecordFixed::JUTGamePadRecordFixed()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void JUTGamePadRecordFixed::setBuffer(void*, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JUTGamePadRecordFixed::setDataEnd(void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void JUTGamePadRecordFixed::setDataSize(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void JUTGamePadRecord::setPart(uint)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void JUTGamePadRecordFixed::clear()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
void JUTGamePadRecordFixed::seek(int, EOrigin)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA8
 */
void JUTGamePadRecordFixed::do_read(PADStatus*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void JUTGamePadRecordFixed::do_write(const PADStatus*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
JUTGamePadRecord::JUTGamePadRecord()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
JUTGamePadRecordFixed::~JUTGamePadRecordFixed()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void JUTGamePadRecord::calculateDataSizePerFrame(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void JUTGamePadRecord::do_readFixed(const void*, PADStatus*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
void JUTGamePadRecord::do_writeFixed(const PADStatus*, void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
JUTGamePadRecord::~JUTGamePadRecord()
{
	// UNUSED FUNCTION
}
