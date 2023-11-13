#include "types.h"
#include "P2JME/TSequenceProcessor.h"
#include "P2JME/P2JME.h"
#include "P2Macros.h"
#include "SoundID.h"
#include "System.h"
#include "PSSystem/PSSystemIF.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A8B0
    lbl_8049A8B0:
        .4byte 0x6D657373
        .4byte 0x61676553
        .4byte 0x65717565
        .4byte 0x6E63652E
        .4byte 0x63707000
    .global lbl_8049A8C4
    lbl_8049A8C4:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q25P2JME18TSequenceProcessor
    __vt__Q25P2JME18TSequenceProcessor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q25P2JME18TSequenceProcessorFv
        .4byte do_reset__Q28JMessage10TProcessorFv
        .4byte do_character__Q25P2JME18TSequenceProcessorFi
        .4byte do_tag__Q25P2JME18TSequenceProcessorFUlPCvUl
        .4byte do_systemTagCode__Q25P2JME18TSequenceProcessorFUsPCvUl
        .4byte do_select_begin__Q28JMessage10TProcessorFUl
        .4byte do_select_end__Q28JMessage10TProcessorFv
        .4byte do_select_separate__Q28JMessage10TProcessorFv
        .4byte do_reset___Q28JMessage18TSequenceProcessorFPCc
        .4byte do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv
        .4byte do_begin___Q28JMessage18TSequenceProcessorFPCvPCc
        .4byte do_end___Q28JMessage18TSequenceProcessorFv
        .4byte do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl
        .4byte do_systemTagCode___Q28JMessage18TSequenceProcessorFUsPCvUl
        .4byte do_begin__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte do_end__Q25P2JME18TSequenceProcessorFv
        .4byte do_isReady__Q25P2JME18TSequenceProcessorFv
        .4byte do_jump_isReady__Q25P2JME18TSequenceProcessorFv
        .4byte do_jump__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte do_branch_query__Q25P2JME18TSequenceProcessorFUs
        .4byte do_branch_queryResult__Q25P2JME18TSequenceProcessorFv
        .4byte do_branch__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte doResetAbtnWaitSE__Q25P2JME18TSequenceProcessorFv
        .4byte doCharacterSEStart__Q25P2JME18TSequenceProcessorFv
        .4byte doCharacterSE__Q25P2JME18TSequenceProcessorFi
        .4byte doCharacterSEEnd__Q25P2JME18TSequenceProcessorFv
        .4byte doFastForwardSE__Q25P2JME18TSequenceProcessorFv
        .4byte reset__Q25P2JME18TSequenceProcessorFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520868
    lbl_80520868:
        .4byte 0x00000000
    .global lbl_8052086C
    lbl_8052086C:
        .4byte 0x3DE147AE
    .global lbl_80520870
    lbl_80520870:
        .float 1.0
    .global lbl_80520874
    lbl_80520874:
        .4byte 0x41200000
    .global lbl_80520878
    lbl_80520878:
        .4byte 0x40200000
    .global lbl_8052087C
    lbl_8052087C:
        .4byte 0x42C80000
    .global lbl_80520880
    lbl_80520880:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80520888
    lbl_80520888:
        .float 0.5
        .4byte 0x00000000
*/

namespace P2JME {

/*
 * --INFO--
 * Address:	80437844
 * Size:	000084
 */
TSequenceProcessor::TSequenceProcessor(const JMessage::TReference* ref, JMessage::TControl* control)
    : JMessage::TSequenceProcessor(ref, control)
    , _50(0.0f)
    , mController1(0)
    , mController2(0)
    , _5C(0)
    , _60(0)
    , _64(0)
{
	mFlags.clear();

	_4C = 0.11f;
}

/*
 * --INFO--
 * Address:	804378C8
 * Size:	000034
 */
void TSequenceProcessor::do_begin(const void* arg0, const char* arg1)
{
	mFlags.unset(8);
	_4C = 0.11f;
	_50 = _4C;
	_5C = 0;
	_60 = 0;
	_64 = 0;
	_6C = false;
}

/*
 * --INFO--
 * Address:	804378FC
 * Size:	000004
 */
void TSequenceProcessor::do_end() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void TSequenceProcessor::tagColor(void const*, u32)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void TSequenceProcessor::tagSize(void const*, u32)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void TSequenceProcessor::tagRuby(void const*, u32)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void TSequenceProcessor::tagFont(void const*, u32)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80437900
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	804379A4
 * Size:	000008
 */
bool TSequenceProcessor::do_systemTagCode(u16, const void*, u32) { return false; }

/*
 * --INFO--
 * Address:	804379AC
 * Size:	0001D8
 */
bool TSequenceProcessor::do_isReady()
{
	bool check = false;

	if (mFlags.isSet(1)) {
		return false;
	}

	if (mFlags.isSet(2)) {
		_50 -= sys->mDeltaTime;
		if (_50 <= 0.0f) {
			bool checkVars = (mController1 || mController2);
			P2ASSERTLINE(381, checkVars);

			if ((mController1 && (mController1->mButton.mButtonDown & PAD_BUTTON_A))
			    || (mController2 && (mController2->mButton.mButtonDown & PAD_BUTTON_A))) {
				resetAbtnWait();
				mFlags.unset(8);
			}
		}
	} else {
		f32 frameCount = 1.0f;
		if (mFlags.isSet(8)) {
			frameCount = 10.0f;
		} else if ((mController1 && (mController1->mButton.mButtonDown & PAD_BUTTON_B))
		           || (mController2 && (mController2->mButton.mButtonDown & PAD_BUTTON_B))) {
			doFastForwardSE();
			mFlags.set(8);
		} else if ((mController1 && (mController1->getButton() & PAD_BUTTON_A))
		           || (mController2 && (mController2->getButton() & PAD_BUTTON_A))) {
			frameCount = 2.5f;
		}

		_50 = -((frameCount * sys->mDeltaTime) - _50);
		if (_50 <= 0.0f) {
			check = true;
		}
	}
	return check;
}

/*
 * --INFO--
 * Address:	80437B88
 * Size:	000008
 */
bool TSequenceProcessor::do_jump_isReady() { return false; }

/*
 * --INFO--
 * Address:	80437B90
 * Size:	00000C
 */
void TSequenceProcessor::do_jump(const void* arg0, const char* arg1) { _50 = _4C; }

/*
 * --INFO--
 * Address:	80437B9C
 * Size:	000004
 */
void TSequenceProcessor::do_branch_query(u16) { }

/*
 * --INFO--
 * Address:	80437BA0
 * Size:	000008
 */
int TSequenceProcessor::do_branch_queryResult() { return -1; }

/*
 * --INFO--
 * Address:	80437BA8
 * Size:	00000C
 */
void TSequenceProcessor::do_branch(const void* arg0, const char* arg1) { _50 = _4C; }

/*
 * --INFO--
 * Address:	80437BB4
 * Size:	0000A8
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

	_50 += _4C;
	if (argCheck) {
		if (_5C == 0) {
			doCharacterSEStart();
		} else {
			doCharacterSE(arg0);
		}
		_5C += 1;
	}
}

/*
 * --INFO--
 * Address:	80437C64
 * Size:	0000F4
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
			_4C = 0.11f;
		} else {
			_4C = (f32)byte / 100.0f;
		}
		_50 = _4C;
		break;
	case 2:
		_6C = *(s8*)arg1;
		break;
	default:
		P2ASSERTLINE(633, 0);
		break;
	}

	return true;
}

/*
 * --INFO--
 * Address:	80437D58
 * Size:	00004C
 */
void TSequenceProcessor::setAbtnWait()
{
	mFlags.set(2);
	_50 = 0.5f;
	mFlags.unset(4);
	doCharacterSEEnd();
}

/*
 * --INFO--
 * Address:	80437DA8
 * Size:	000060
 */
void TSequenceProcessor::resetAbtnWait()
{
	doResetAbtnWaitSE();
	mFlags.unset(2);
	_50 = _4C;
	mFlags.set(4);
	_5C = 0;
}

/*
 * --INFO--
 * Address:	80437E08
 * Size:	00002C
 */
void TSequenceProcessor::doResetAbtnWaitSE() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0); }

/*
 * --INFO--
 * Address:	80437E34
 * Size:	000018
 */
void TSequenceProcessor::reset()
{
	for (int i = 0; i < 4; i++) {
		mFlags.byteView[i] = 0;
	}
}

} // namespace P2JME
