#include "P2JME/TSequenceProcessor.h"
#include "P2JME/P2JME.h"
#include "P2Macros.h"
#include "SoundID.h"
#include "System.h"
#include "PSSystem/PSSystemIF.h"

namespace P2JME {

/**
 * @note Address: 0x80437844
 * @note Size: 0x84
 */
TSequenceProcessor::TSequenceProcessor(const JMessage::TReference* ref, JMessage::TControl* control)
    : JMessage::TSequenceProcessor(ref, control)
    , mPageFinishWaitTimer(0.0f)
    , mController1(nullptr)
    , mController2(nullptr)
    , mCharactersWritten(0)
    , mUnused0(0)
    , mUnused1(0)
{
	mFlags.clear();

	mPageFinishWaitDuration = 0.11f;
}

/**
 * @note Address: 0x804378C8
 * @note Size: 0x34
 */
void TSequenceProcessor::do_begin(const void* arg0, const char* arg1)
{
	resetFlag(SeqProc_IsForceFinish);
	mPageFinishWaitDuration = 0.11f;
	mPageFinishWaitTimer    = mPageFinishWaitDuration;
	mCharactersWritten      = 0;
	mUnused0                = 0;
	mUnused1                = 0;
	mFastSeType             = false;
}

/**
 * @note Address: 0x804378FC
 * @note Size: 0x4
 */
void TSequenceProcessor::do_end()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
// void TSequenceProcessor::tagColor(void const*, u32)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
// void TSequenceProcessor::tagSize(void const*, u32)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
// void TSequenceProcessor::tagRuby(void const*, u32)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
// void TSequenceProcessor::tagFont(void const*, u32)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80437900
 * @note Size: 0xA4
 */
bool TSequenceProcessor::do_tag(u32 arg0, const void* arg1, u32 arg2)
{
	bool check = false;
	u8 argByte = (u8)(arg0 >> 0x10U);

	if (argByte < 0xC0) { // 192
		u16 argShort = (u16)arg0;
		switch ((int)argByte) {
		case 2:
			check = tagControl(argShort, arg1, arg2);
			break;
		default:
			check = true;
			break;
		}
	} else if (argByte == 0xFF) {
		switch ((u16)arg0) {
		case 0:
			check = true;
			break;
		case 1:
			check = true;
			break;
		case 2:
			check = true;
			break;
		case 3:
			check = true;
			break;
		}
	}
	return check;
}

/**
 * @note Address: 0x804379A4
 * @note Size: 0x8
 */
bool TSequenceProcessor::do_systemTagCode(u16, const void*, u32)
{
	return false;
}

/**
 * @note Address: 0x804379AC
 * @note Size: 0x1D8
 */
bool TSequenceProcessor::do_isReady()
{
	bool check = false;

	if (isFlag(SeqProc_IsActive)) {
		return false;
	}

	if (isFlag(SeqProc_IsWaitingPressA)) {
		mPageFinishWaitTimer -= sys->mDeltaTime;
		if (mPageFinishWaitTimer <= 0.0f) {
			bool checkVars = (mController1 || mController2);
			P2ASSERTLINE(381, checkVars);

			if ((mController1 && (mController1->getButtonDown() & Controller::PRESS_A))
			    || (mController2 && (mController2->getButtonDown() & Controller::PRESS_A))) {
				resetAbtnWait();
				resetFlag(SeqProc_IsForceFinish);
			}
		}
	} else {
		f32 frameCount = 1.0f;
		if (isFlag(SeqProc_IsForceFinish)) {
			frameCount = 10.0f;
		} else if ((mController1 && (mController1->getButtonDown() & Controller::PRESS_B))
		           || (mController2 && (mController2->getButtonDown() & Controller::PRESS_B))) {
			doFastForwardSE();
			setFlag(SeqProc_IsForceFinish);
		} else if ((mController1 && (mController1->getButton() & Controller::PRESS_A))
		           || (mController2 && (mController2->getButton() & Controller::PRESS_A))) {
			frameCount = 2.5f;
		}

		mPageFinishWaitTimer = -((frameCount * sys->mDeltaTime) - mPageFinishWaitTimer);
		if (mPageFinishWaitTimer <= 0.0f) {
			check = true;
		}
	}
	return check;
}

/**
 * @note Address: 0x80437B88
 * @note Size: 0x8
 */
bool TSequenceProcessor::do_jump_isReady()
{
	return false;
}

/**
 * @note Address: 0x80437B90
 * @note Size: 0xC
 */
void TSequenceProcessor::do_jump(const void* arg0, const char* arg1)
{
	mPageFinishWaitTimer = mPageFinishWaitDuration;
}

/**
 * @note Address: 0x80437B9C
 * @note Size: 0x4
 */
void TSequenceProcessor::do_branch_query(u16)
{
}

/**
 * @note Address: 0x80437BA0
 * @note Size: 0x8
 */
int TSequenceProcessor::do_branch_queryResult()
{
	return -1;
}

/**
 * @note Address: 0x80437BA8
 * @note Size: 0xC
 */
void TSequenceProcessor::do_branch(const void* arg0, const char* arg1)
{
	mPageFinishWaitTimer = mPageFinishWaitDuration;
}

/**
 * @note Address: 0x80437BB4
 * @note Size: 0xA8
 */
void TSequenceProcessor::do_character(int arg0)
{
	bool argCheck = true;

	if ((!(arg0 & 0xFFFF0000) && !(arg0 & 0xFF00))) {
		switch (arg0) {
		case 0xA:
			argCheck = false;
		}
	}

	mPageFinishWaitTimer += mPageFinishWaitDuration;
	if (argCheck) {
		if (mCharactersWritten == 0) {
			doCharacterSEStart();
		} else {
			doCharacterSE(arg0);
		}
		mCharactersWritten++;
	}
}

/**
 * @note Address: 0x80437C64
 * @note Size: 0xF4
 */
bool TSequenceProcessor::tagControl(u16 arg0, const void* arg1, u32 arg2)
{
	switch (arg0) {
	case 0:
		P2ASSERTLINE(608, !arg2);
		setAbtnWait();
		break;
	case 1:
		u8 byte = (s8) * ((s8*)arg1);
		if (byte == 0xFF) {
			mPageFinishWaitDuration = 0.11f;
		} else {
			mPageFinishWaitDuration = (f32)byte / 100.0f;
		}
		mPageFinishWaitTimer = mPageFinishWaitDuration;
		break;
	case 2:
		mFastSeType = *(s8*)arg1;
		break;
	default:
		P2ASSERTLINE(633, false);
		break;
	}

	return true;
}

/**
 * @note Address: 0x80437D58
 * @note Size: 0x4C
 */
void TSequenceProcessor::setAbtnWait()
{
	setFlag(SeqProc_IsWaitingPressA);
	mPageFinishWaitTimer = 0.5f;
	resetFlag(SeqProc_IsWriting);
	doCharacterSEEnd();
}

/**
 * @note Address: 0x80437DA8
 * @note Size: 0x60
 */
void TSequenceProcessor::resetAbtnWait()
{
	doResetAbtnWaitSE();
	resetFlag(SeqProc_IsWaitingPressA);
	mPageFinishWaitTimer = mPageFinishWaitDuration;
	setFlag(SeqProc_IsWriting);
	mCharactersWritten = 0;
}

/**
 * @note Address: 0x80437E08
 * @note Size: 0x2C
 */
void TSequenceProcessor::doResetAbtnWaitSE()
{
	PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
}

/**
 * @note Address: 0x80437E34
 * @note Size: 0x18
 */
void TSequenceProcessor::reset()
{
	mFlags.clear();
}

} // namespace P2JME
