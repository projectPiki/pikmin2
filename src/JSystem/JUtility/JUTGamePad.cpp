#include "JSystem/JUtility/JUTGamePad.h"
#include "Dolphin/os.h"
#include "Dolphin/pad.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JSystem.h"
#include "types.h"

u32 JUTGamePad::CRumble::sChannelMask[PAD_MAX_CONTROLLERS] = { 0x80000000, 0x40000000, 0x20000000, 0x10000000 };
u32 channel_mask[PAD_MAX_CONTROLLERS]                      = { 0x80000000, 0x40000000, 0x20000000, 0x10000000 };

JUTGamePad::EStickMode JUTGamePad::sStickMode    = MODE_1;
int JUTGamePad::sClampMode                       = 1;
float JUTGamePad::CStick::sPressPoint            = 0.5f;
float JUTGamePad::CStick::sReleasePoint          = 0.25f;
u32 JUTGamePad::C3ButtonReset::sResetPattern     = 0x1600;
u32 JUTGamePad::C3ButtonReset::sResetMaskPattern = 0xFFFF;

JSUList<JUTGamePad> JUTGamePad::mPadList(false);
PADStatus JUTGamePad::mPadStatus[PAD_MAX_CONTROLLERS];
JUTGamePad::CButton JUTGamePad::mPadButton[PAD_MAX_CONTROLLERS];
JUTGamePad::CStick JUTGamePad::mPadMStick[PAD_MAX_CONTROLLERS];
JUTGamePad::CStick JUTGamePad::mPadSStick[PAD_MAX_CONTROLLERS];
JSUPtrList JUTGamePadLongPress::sPatternList(false);

bool JUTGamePad::mListInitialized = false;
s8 JUTGamePad::mPadAssign[4];
s32 JUTGamePad::sSuppressPadReset;
// u8 JUTGamePad::sErrorReport;
// u32 JUTGamePad::sSamplingRate;
s32 JUTGamePad::sAnalogMode;
u32 JUTGamePad::sRumbleSupported;
u8 JUTGamePad::CRumble::mStatus[4];
u32 JUTGamePad::CRumble::mEnabled;
JUTGamePad::C3ButtonReset::Callback JUTGamePad::C3ButtonReset::sCallback;
u32 JUTGamePad::C3ButtonReset::sCallbackArg;
s64 JUTGamePad::C3ButtonReset::sThreshold = (OS_TIMER_CLOCK / 60 * 30);
bool JUTGamePad::C3ButtonReset::sResetSwitchPushing;
bool JUTGamePad::C3ButtonReset::sResetOccurred;
JUTGamePad::EPadPort JUTGamePad::C3ButtonReset::sResetOccurredPort;

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JUTGamePad_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global sChannelMask__Q210JUTGamePad7CRumble
    sChannelMask__Q210JUTGamePad7CRumble:
        .4byte 0x80000000
        .4byte 0x40000000
        .4byte 0x20000000
        .4byte 0x10000000
    .global channel_mask
    channel_mask:
        .4byte 0x80000000
        .4byte 0x40000000
        .4byte 0x20000000
        .4byte 0x10000000
    .global __vt__10JUTGamePad
    __vt__10JUTGamePad:
        .4byte 0
        .4byte 0
        .4byte __dt__10JUTGamePadFv
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global mPadList__10JUTGamePad
    mPadList__10JUTGamePad:
        .skip 0x188
    .global mPadStatus__10JUTGamePad
    mPadStatus__10JUTGamePad:
        .skip 0x30
    .global mPadButton__10JUTGamePad
    mPadButton__10JUTGamePad:
        .skip 0xC0
    .global mPadMStick__10JUTGamePad
    mPadMStick__10JUTGamePad:
        .skip 0x40
    .global mPadSStick__10JUTGamePad
    mPadSStick__10JUTGamePad:
        .skip 0x40
    .global sPatternList__19JUTGamePadLongPress
    sPatternList__19JUTGamePadLongPress:
        .skip 0x28

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sStickMode__10JUTGamePad
    sStickMode__10JUTGamePad:
        .4byte 1
    .global sClampMode__10JUTGamePad
    sClampMode__10JUTGamePad:
        .4byte 1
    .global sPressPoint__Q210JUTGamePad6CStick
    sPressPoint__Q210JUTGamePad6CStick:
        .float 0.5
    .global sReleasePoint__Q210JUTGamePad6CStick
    sReleasePoint__Q210JUTGamePad6CStick:
        .float 0.25
    .global sResetPattern__Q210JUTGamePad13C3ButtonReset
    sResetPattern__Q210JUTGamePad13C3ButtonReset:
        .4byte 0x00001600
    .global sResetMaskPattern__Q210JUTGamePad13C3ButtonReset
    sResetMaskPattern__Q210JUTGamePad13C3ButtonReset:
        .4byte 0x0000ffff

    .section .sbss # 0x80514D80 - 0x80516360
    .global mListInitialized__10JUTGamePad
    mListInitialized__10JUTGamePad:
        .skip 0x4
    .global mPadAssign__10JUTGamePad
    mPadAssign__10JUTGamePad:
        .skip 0x4
    .global sSuppressPadReset__10JUTGamePad
    sSuppressPadReset__10JUTGamePad:
        .skip 0x4
    .global sAnalogMode__10JUTGamePad
    sAnalogMode__10JUTGamePad:
        .skip 0x4
    .global sRumbleSupported__10JUTGamePad
    sRumbleSupported__10JUTGamePad:
        .skip 0x4
    .global mStatus__Q210JUTGamePad7CRumble
    mStatus__Q210JUTGamePad7CRumble:
        .skip 0x4
    .global mEnabled__Q210JUTGamePad7CRumble
    mEnabled__Q210JUTGamePad7CRumble:
        .skip 0x4
    .global sCallback__Q210JUTGamePad13C3ButtonReset
    sCallback__Q210JUTGamePad13C3ButtonReset:
        .skip 0x4
    .global sCallbackArg__Q210JUTGamePad13C3ButtonReset
    sCallbackArg__Q210JUTGamePad13C3ButtonReset:
        .skip 0x8
    .global sThreshold__Q210JUTGamePad13C3ButtonReset
    sThreshold__Q210JUTGamePad13C3ButtonReset:
        .skip 0x4
    .global lbl_80514F5C
    lbl_80514F5C:
        .skip 0x4
    .global sResetSwitchPushing__Q210JUTGamePad13C3ButtonReset
    sResetSwitchPushing__Q210JUTGamePad13C3ButtonReset:
        .skip 0x1
    .global sResetOccurred__Q210JUTGamePad13C3ButtonReset
    sResetOccurred__Q210JUTGamePad13C3ButtonReset:
        .skip 0x3
    .global sResetOccurredPort__Q210JUTGamePad13C3ButtonReset
    sResetOccurredPort__Q210JUTGamePad13C3ButtonReset:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516660
    lbl_80516660:
        .4byte 0x43160000
        .4byte 0x00000000
    .global lbl_80516668
    lbl_80516668:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516670
    lbl_80516670:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80516678
    lbl_80516678:
        .4byte 0x3FE00000
        .4byte 0x00000000
    .global lbl_80516680
    lbl_80516680:
        .4byte 0x40080000
        .4byte 0x00000000
    .global lbl_80516688
    lbl_80516688:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80516690
    lbl_80516690:
        .float 1.0
    .global lbl_80516694
    lbl_80516694:
        .4byte 0x4622F984
*/

/*
 * --INFO--
 * Address:	8002D458
 * Size:	0000D4
 * __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
 */
JUTGamePad::JUTGamePad(JUTGamePad::EPadPort portNum)
    : JKRDisposer()
    , mButton()
    , mMStick()
    , mSStick()
    , mRumble(this)
    , mListLink(this)
{
	mPortNum = portNum;
	if (0 <= mPortNum) {
		mPadAssign[portNum]++;
	}
	initList();
	mPadList.append(&mListLink);
	update();
	mPadRecord = nullptr;
	mPadReplay = nullptr;
	clear();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__11JKRDisposerFv
	lis      r4, __vt__10JUTGamePad@ha
	addi     r3, r30, 0x18
	addi     r0, r4, __vt__10JUTGamePad@l
	stw      r0, 0(r30)
	bl       clear__Q210JUTGamePad7CButtonFv
	addi     r3, r30, 0x48
	bl       clear__Q210JUTGamePad6CStickFv
	addi     r3, r30, 0x58
	bl       clear__Q210JUTGamePad6CStickFv
	mr       r4, r30
	addi     r3, r30, 0x68
	bl       clear__Q210JUTGamePad7CRumbleFP10JUTGamePad
	mr       r4, r30
	addi     r3, r30, 0x80
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x98(r30)
	sth      r31, 0x7c(r30)
	lha      r0, 0x7c(r30)
	cmpwi    r0, 0
	blt      lbl_8002D4E0
	addi     r5, r13, mPadAssign__10JUTGamePad@sda21
	lbzx     r4, r5, r31
	addi     r0, r4, 1
	stbx     r0, r5, r31

lbl_8002D4E0:
	bl       initList__10JUTGamePadFv
	lis      r3, mPadList__10JUTGamePad@ha
	addi     r4, r30, 0x80
	addi     r3, r3, mPadList__10JUTGamePad@l
	bl       append__10JSUPtrListFP10JSUPtrLink
	mr       r3, r30
	bl       update__10JUTGamePadFv
	li       r0, 0
	mr       r3, r30
	stw      r0, 0x90(r30)
	stw      r0, 0x94(r30)
	bl       clear__10JUTGamePadFv
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSULink<JUTGamePad>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
// JUTGamePad::JUTGamePad()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8002D52C
 * Size:	0000AC
 * __dt__10JUTGamePadFv
 */
JUTGamePad::~JUTGamePad()
{
	if (0 <= mPortNum) {
		mPadAssign[mPortNum]--;
		mPortNum = -1;
	}
	mPadList.remove(&mListLink);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8002D5BC
	lis      r3, __vt__10JUTGamePad@ha
	addi     r0, r3, __vt__10JUTGamePad@l
	stw      r0, 0(r30)
	lha      r5, 0x7c(r30)
	extsh.   r0, r5
	blt      lbl_8002D57C
	addi     r4, r13, mPadAssign__10JUTGamePad@sda21
	li       r0, -1
	lbzx     r3, r4, r5
	addi     r3, r3, -1
	stbx     r3, r4, r5
	sth      r0, 0x7c(r30)

lbl_8002D57C:
	lis      r3, mPadList__10JUTGamePad@ha
	addi     r4, r30, 0x80
	addi     r3, r3, mPadList__10JUTGamePad@l
	bl       remove__10JSUPtrListFP10JSUPtrLink
	addic.   r0, r30, 0x80
	beq      lbl_8002D5A0
	addi     r3, r30, 0x80
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8002D5A0:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_8002D5BC
	mr       r3, r30
	bl       __dl__FPv

lbl_8002D5BC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002D5D8
 * Size:	00003C
 */
void JUTGamePad::initList()
{
	if (mListInitialized == false) {
		mPadList.initiate();
		mListInitialized = true;
	}
}

/*
 * --INFO--
 * Address:	8002D614
 * Size:	000038
 * init__10JUTGamePadFv
 */
void JUTGamePad::init()
{
	PADSetSpec(5);
	sAnalogMode = PAD_MODE_3;
	PADSetAnalogMode(PAD_MODE_3);
	PADInit();
}

/*
 * --INFO--
 * Address:	8002D64C
 * Size:	000014
 * clear__10JUTGamePadFv
 */
void JUTGamePad::clear()
{
	mButtonReset.mIsReset = false;
	_A8                   = 1;
}

/*
 * --INFO--
 * Address:	8002D660
 * Size:	0002C8
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
	default:
		break;
	}
	u32 v1 = 0;
	for (int i = 0; i < PAD_MAX_CONTROLLERS; i++) {
		if (mPadStatus[i].err == 0) {
			u32 main = mPadMStick[i].update(mPadStatus[i].stickX, mPadStatus[i].stickY, sStickMode, STICK_Main, mPadButton[i].mButton);
			u32 sub  = mPadSStick[i].update(mPadStatus[i].substickX, mPadStatus[i].substickY, sStickMode, STICK_Sub, mPadButton[i].mButton);
			mPadButton[i].update(&mPadStatus[i], main << 0x18 | sub << 0x10);
		} else if (mPadStatus[i].err == -1) {
			mPadMStick[i].update(0, 0, sStickMode, STICK_Main, 0);
			mPadSStick[i].update(0, 0, sStickMode, STICK_Sub, 0);
			mPadButton[i].update(nullptr, 0);
			if ((sSuppressPadReset & 0x80000000U >> i) == 0) {
				v1 |= 0x80000000U >> i;
			}
		} else {
			mPadButton[i].mButtonDown = 0;
			mPadButton[i].mButtonUp   = 0;
			mPadButton[i].mRepeat     = 0;
		}
	}
	for (JSUPtrLink* link = mPadList.getFirstLink(); link != nullptr; link = link->getNext()) {
		JUTGamePad* pad = static_cast<JUTGamePad*>(link->getObjectPtr());
		if (pad->mPadReplay != nullptr && pad->mPadReplay->mIsActive) {
			PADStatus status;
			pad->mPadReplay->getStatus(&status);
			u32 main = pad->mMStick.update(status.stickX, status.stickY, sStickMode, STICK_Main, pad->mPadButton->mButton);
			u32 sub  = pad->mSStick.update(status.substickX, status.substickY, sStickMode, STICK_Sub, pad->mPadButton->mButton);
			pad->mPadButton->update(&status, main << 0x18 | sub << 0x10);
		} else {
			if (pad->mPortNum == PORT_INVALID) {
				pad->assign();
			}
			pad->update();
		}
		if (pad->mPadRecord != nullptr && pad->mPadRecord->mIsActive && 0 <= pad->mPortNum && mPadStatus[pad->mPortNum].err == 0) {
			pad->mPadRecord->virtual_10();
		}
	}
	if (v1 != 0) {
		PADReset(v1);
	}
	checkResetSwitch();
	return sRumbleSupported;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r3, mPadStatus__10JUTGamePad@ha
	stw      r0, 0x44(r1)
	addi     r3, r3, mPadStatus__10JUTGamePad@l
	stmw     r24, 0x20(r1)
	bl       PADRead
	lwz      r0, sClampMode__10JUTGamePad@sda21(r13)
	stw      r3, sRumbleSupported__10JUTGamePad@sda21(r13)
	cmpwi    r0, 2
	beq      lbl_8002D6AC
	bge      lbl_8002D6B8
	cmpwi    r0, 1
	bge      lbl_8002D69C
	b        lbl_8002D6B8

lbl_8002D69C:
	lis      r3, mPadStatus__10JUTGamePad@ha
	addi     r3, r3, mPadStatus__10JUTGamePad@l
	bl       PADClamp
	b        lbl_8002D6B8

lbl_8002D6AC:
	lis      r3, mPadStatus__10JUTGamePad@ha
	addi     r3, r3, mPadStatus__10JUTGamePad@l
	bl       PADClampCircle

lbl_8002D6B8:
	lis      r6, mPadStatus__10JUTGamePad@ha
	lis      r5, mPadButton__10JUTGamePad@ha
	lis      r4, mPadMStick__10JUTGamePad@ha
	lis      r3, mPadSStick__10JUTGamePad@ha
	addi     r29, r6, mPadStatus__10JUTGamePad@l
	addi     r28, r5, mPadButton__10JUTGamePad@l
	addi     r27, r4, mPadMStick__10JUTGamePad@l
	addi     r26, r3, mPadSStick__10JUTGamePad@l
	li       r31, 0
	li       r24, 0
	lis      r30, 0x8000

lbl_8002D6E4:
	lbz      r3, 0xa(r29)
	srw      r25, r30, r24
	extsb.   r0, r3
	bne      lbl_8002D74C
	lbz      r4, 2(r29)
	mr       r3, r27
	lbz      r5, 3(r29)
	li       r7, 0
	lwz      r6, sStickMode__10JUTGamePad@sda21(r13)
	lwz      r8, 0(r28)
	bl
update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl
	lbz      r4, 4(r29)
	slwi     r25, r3, 0x18
	lbz      r5, 5(r29)
	mr       r3, r26
	lwz      r6, sStickMode__10JUTGamePad@sda21(r13)
	li       r7, 1
	lwz      r8, 0(r28)
	bl
update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl
	slwi     r0, r3, 0x10
	mr       r3, r28
	or       r25, r25, r0
	mr       r4, r29
	mr       r5, r25
	bl       update__Q210JUTGamePad7CButtonFPC9PADStatusUl
	b        lbl_8002D7C4

lbl_8002D74C:
	extsb    r0, r3
	cmpwi    r0, -1
	bne      lbl_8002D7B4
	lwz      r6, sStickMode__10JUTGamePad@sda21(r13)
	mr       r3, r27
	li       r4, 0
	li       r5, 0
	li       r7, 0
	li       r8, 0
	bl
update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl
	lwz      r6, sStickMode__10JUTGamePad@sda21(r13)
	mr       r3, r26
	li       r4, 0
	li       r5, 0
	li       r7, 1
	li       r8, 0
	bl
update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl
	mr       r3, r28
	li       r4, 0
	li       r5, 0
	bl       update__Q210JUTGamePad7CButtonFPC9PADStatusUl
	lwz      r0, sSuppressPadReset__10JUTGamePad@sda21(r13)
	and.     r0, r0, r25
	bne      lbl_8002D7C4
	or       r31, r31, r25
	b        lbl_8002D7C4

lbl_8002D7B4:
	li       r0, 0
	stw      r0, 4(r28)
	stw      r0, 8(r28)
	stw      r0, 0x18(r28)

lbl_8002D7C4:
	addi     r24, r24, 1
	addi     r28, r28, 0x30
	cmpwi    r24, 4
	addi     r27, r27, 0x10
	addi     r26, r26, 0x10
	addi     r29, r29, 0xc
	blt      lbl_8002D6E4
	lis      r3, mPadList__10JUTGamePad@ha
	lwz      r30, mPadList__10JUTGamePad@l(r3)
	b        lbl_8002D8F4

lbl_8002D7EC:
	lwz      r4, 0(r30)
	lwz      r3, 0x94(r4)
	cmplwi   r3, 0
	beq      lbl_8002D880
	lbz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_8002D880
	lwz      r12, 0(r3)
	addi     r4, r1, 8
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r8, 0(r30)
	li       r7, 0
	lbz      r4, 0xa(r1)
	lbz      r5, 0xb(r1)
	addi     r3, r8, 0x48
	lwz      r6, sStickMode__10JUTGamePad@sda21(r13)
	lwz      r8, 0x18(r8)
	bl
update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl
	lwz      r8, 0(r30)
	slwi     r24, r3, 0x18
	lbz      r4, 0xc(r1)
	li       r7, 1
	lbz      r5, 0xd(r1)
	addi     r3, r8, 0x58
	lwz      r6, sStickMode__10JUTGamePad@sda21(r13)
	lwz      r8, 0x18(r8)
	bl
update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl
	slwi     r0, r3, 0x10
	lwz      r3, 0(r30)
	or       r24, r24, r0
	addi     r4, r1, 8
	mr       r5, r24
	addi     r3, r3, 0x18
	bl       update__Q210JUTGamePad7CButtonFPC9PADStatusUl
	b        lbl_8002D89C

lbl_8002D880:
	lha      r0, 0x7c(r4)
	cmpwi    r0, -1
	bne      lbl_8002D894
	mr       r3, r4
	bl       assign__10JUTGamePadFv

lbl_8002D894:
	lwz      r3, 0(r30)
	bl       update__10JUTGamePadFv

lbl_8002D89C:
	lwz      r4, 0(r30)
	lwz      r3, 0x90(r4)
	cmplwi   r3, 0
	beq      lbl_8002D8F0
	lbz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_8002D8F0
	lha      r4, 0x7c(r4)
	extsh.   r0, r4
	blt      lbl_8002D8F0
	mulli    r5, r4, 0xc
	lis      r4, mPadStatus__10JUTGamePad@ha
	addi     r0, r4, mPadStatus__10JUTGamePad@l
	add      r4, r0, r5
	lbz      r0, 0xa(r4)
	extsb.   r0, r0
	bne      lbl_8002D8F0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8002D8F0:
	lwz      r30, 0xc(r30)

lbl_8002D8F4:
	cmplwi   r30, 0
	bne      lbl_8002D7EC
	cmplwi   r31, 0
	beq      lbl_8002D90C
	mr       r3, r31
	bl       PADReset

lbl_8002D90C:
	bl       checkResetSwitch__10JUTGamePadFv
	lmw      r24, 0x20(r1)
	lwz      r0, 0x44(r1)
	lwz      r3, sRumbleSupported__10JUTGamePad@sda21(r13)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JUTGamePad::setStatus(u32, char, char, char, char, u8, u8, u8, u8, u32, PADStatus*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void JUTGamePad::setStatus_PADStatus(const PADStatus*, u32, PADStatus*, u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void JUTGamePad::setStatus_data(const void*, u32, PADStatus*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void JUTGamePad::setStatus_sticks_subroutine(PADStatus*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002D928
 * Size:	0000A8
 * assign__10JUTGamePadFv
 */
void JUTGamePad::assign()
{
	for (int i = 0; i < 4; i++) {
		if (mPadStatus[i].err == 0 && mPadAssign[i] == 0) {
			mPortNum      = i;
			mPadAssign[i] = 1;
			mPadButton[i].setRepeat(mButton._24, mButton._28, mButton._2C);
			mRumble.clear(this);
			break;
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, mPadStatus__10JUTGamePad@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	li       r0, 4
	addi     r4, r4, mPadStatus__10JUTGamePad@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r13, mPadAssign__10JUTGamePad@sda21
	mtctr    r0

lbl_8002D954:
	lbz      r0, 0xa(r4)
	extsb.   r0, r0
	bne      lbl_8002D9AC
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_8002D9AC
	sth      r5, 0x7c(r31)
	li       r0, 1
	addi     r4, r13, mPadAssign__10JUTGamePad@sda21
	lis      r3, mPadButton__10JUTGamePad@ha
	stbx     r0, r4, r5
	mulli    r6, r5, 0x30
	addi     r0, r3, mPadButton__10JUTGamePad@l
	lwz      r4, 0x3c(r31)
	add      r3, r0, r6
	lwz      r5, 0x40(r31)
	lwz      r6, 0x44(r31)
	bl       setRepeat__Q210JUTGamePad7CButtonFUlUlUl
	mr       r4, r31
	addi     r3, r31, 0x68
	bl       clear__Q210JUTGamePad7CRumbleFP10JUTGamePad
	b        lbl_8002D9BC

lbl_8002D9AC:
	addi     r4, r4, 0xc
	addi     r3, r3, 1
	addi     r5, r5, 1
	bdnz     lbl_8002D954

lbl_8002D9BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002D9D0
 * Size:	00006C
 */
void JUTGamePad::checkResetCallback(s64 p1)
{
	if (p1 >= C3ButtonReset::sThreshold) {
		C3ButtonReset::sResetOccurred     = true;
		C3ButtonReset::sResetOccurredPort = (EPadPort)mPortNum;
		if (C3ButtonReset::sCallback != nullptr) {
			C3ButtonReset::sCallback((EPadPort)mPortNum, C3ButtonReset::sCallbackArg);
		}
	}
}

/*
 * --INFO--
 * Address:	8002DA3C
 * Size:	00032C
 * update__10JUTGamePadFv
 */
void JUTGamePad::update()
{
	if (mPortNum == PORT_INVALID) {
		return;
	}

	if (0 <= mPortNum && mPortNum < 4) {
		mButton = mPadButton[mPortNum];
		mMStick = mPadMStick[mPortNum];
		mSStick = mPadSStick[mPortNum];
		mError  = mPadStatus[mPortNum].err;
	}

	if (_A8 == 0 || C3ButtonReset::sResetPattern != (getButton() & C3ButtonReset::sResetMaskPattern)) {
		mButtonReset.mIsReset = false;
	} else if (C3ButtonReset::sResetOccurred == false) {
		if (mButtonReset.mIsReset == true) {
			checkResetCallback(OSGetTime() - mOsResetTime);
			// u64 time = OSGetTime();
			// if (time < mOsResetTime) {
			// 	C3ButtonReset::sResetOccurred     = true;
			// 	C3ButtonReset::sResetOccurredPort = (EPadPort)mPortNum;
			// 	C3ButtonReset::
			// }
		} else {
			mButtonReset.mIsReset = true;
			mOsResetTime          = OSGetTime();
		}
	}

	for (JSUPtrLink* link = JUTGamePadLongPress::sPatternList.getFirstLink(); link != nullptr; link = link->getNext()) {
		JUTGamePadLongPress* longPress = static_cast<JUTGamePadLongPress*>(link->getObjectPtr());
		if (longPress->mIsValid && 0 <= mPortNum && mPortNum < 4) {
			if ((getButton() & longPress->mMaskPattern) == longPress->mPattern) {
				if (longPress->_20[mPortNum] == 1) {
					longPress->checkCallback(mPortNum, OSGetTime() - longPress->mTimer[mPortNum]);
				} else {
					longPress->_20[mPortNum]    = 1;
					longPress->mTimer[mPortNum] = OSGetTime();
				}
			} else {
				longPress->_20[mPortNum] = 0;
			}
		}
	}
	if (0 <= mPortNum && mPortNum < 4) {
		mRumble.update(mPortNum);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lha      r3, 0x7c(r3)
	cmpwi    r3, -1
	beq      lbl_8002DD48
	extsh.   r0, r3
	blt      lbl_8002DBA4
	cmpwi    r3, 4
	bge      lbl_8002DBA4
	mulli    r4, r3, 0x30
	lis      r3, mPadButton__10JUTGamePad@ha
	lis      r5, mPadMStick__10JUTGamePad@ha
	addi     r0, r3, mPadButton__10JUTGamePad@l
	add      r7, r0, r4
	lis      r4, mPadSStick__10JUTGamePad@ha
	lwz      r6, 0(r7)
	lis      r3, mPadStatus__10JUTGamePad@ha
	addi     r5, r5, mPadMStick__10JUTGamePad@l
	addi     r0, r4, mPadSStick__10JUTGamePad@l
	stw      r6, 0x18(r30)
	addi     r3, r3, mPadStatus__10JUTGamePad@l
	lwz      r4, 4(r7)
	stw      r4, 0x1c(r30)
	lwz      r4, 8(r7)
	stw      r4, 0x20(r30)
	lbz      r4, 0xc(r7)
	stb      r4, 0x24(r30)
	lbz      r4, 0xd(r7)
	stb      r4, 0x25(r30)
	lbz      r4, 0xe(r7)
	stb      r4, 0x26(r30)
	lbz      r4, 0xf(r7)
	stb      r4, 0x27(r30)
	lfs      f0, 0x10(r7)
	stfs     f0, 0x28(r30)
	lfs      f0, 0x14(r7)
	stfs     f0, 0x2c(r30)
	lwz      r4, 0x18(r7)
	stw      r4, 0x30(r30)
	lwz      r4, 0x1c(r7)
	stw      r4, 0x34(r30)
	lwz      r4, 0x20(r7)
	stw      r4, 0x38(r30)
	lwz      r4, 0x24(r7)
	stw      r4, 0x3c(r30)
	lwz      r4, 0x28(r7)
	stw      r4, 0x40(r30)
	lwz      r4, 0x2c(r7)
	stw      r4, 0x44(r30)
	lha      r4, 0x7c(r30)
	slwi     r4, r4, 4
	add      r5, r5, r4
	lfs      f0, 0(r5)
	stfs     f0, 0x48(r30)
	lfs      f0, 4(r5)
	stfs     f0, 0x4c(r30)
	lfs      f0, 8(r5)
	stfs     f0, 0x50(r30)
	lha      r4, 0xc(r5)
	sth      r4, 0x54(r30)
	lbz      r4, 0xe(r5)
	stb      r4, 0x56(r30)
	lbz      r4, 0xf(r5)
	stb      r4, 0x57(r30)
	lha      r4, 0x7c(r30)
	slwi     r4, r4, 4
	add      r4, r0, r4
	lfs      f0, 0(r4)
	stfs     f0, 0x58(r30)
	lfs      f0, 4(r4)
	stfs     f0, 0x5c(r30)
	lfs      f0, 8(r4)
	stfs     f0, 0x60(r30)
	lha      r0, 0xc(r4)
	sth      r0, 0x64(r30)
	lbz      r0, 0xe(r4)
	stb      r0, 0x66(r30)
	lbz      r0, 0xf(r4)
	stb      r0, 0x67(r30)
	lha      r0, 0x7c(r30)
	mulli    r0, r0, 0xc
	add      r3, r3, r0
	lbz      r0, 0xa(r3)
	stb      r0, 0x7e(r30)

lbl_8002DBA4:
	lbz      r0, 0xa8(r30)
	cmplwi   r0, 0
	beq      lbl_8002DBC8
	lwz      r3, 0x18(r30)
	lwz      r0, sResetMaskPattern__Q210JUTGamePad13C3ButtonReset@sda21(r13)
	lwz      r4, sResetPattern__Q210JUTGamePad13C3ButtonReset@sda21(r13)
	and      r0, r3, r0
	cmplw    r4, r0
	beq      lbl_8002DBD4

lbl_8002DBC8:
	li       r0, 0
	stb      r0, 0x98(r30)
	b        lbl_8002DC68

lbl_8002DBD4:
	lbz      r0, sResetOccurred__Q210JUTGamePad13C3ButtonReset@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8002DC68
	lbz      r0, 0x98(r30)
	cmplwi   r0, 1
	bne      lbl_8002DC54
	bl       OSGetTime
	lwz      r0, 0xa4(r30)
	lwz      r5, 0xa0(r30)
	subfc    r6, r0, r4
	lwz      r0, sThreshold__Q210JUTGamePad13C3ButtonReset@sda21(r13)
	subfe    r3, r5, r3
	lwz      r5, lbl_80514F5C@sda21(r13)
	xoris    r4, r3, 0x8000
	xoris    r3, r0, 0x8000
	subfc    r0, r5, r6
	subfe    r3, r3, r4
	subfe    r3, r4, r4
	neg.     r3, r3
	bne      lbl_8002DC68
	li       r0, 1
	lwz      r12, sCallback__Q210JUTGamePad13C3ButtonReset@sda21(r13)
	stb      r0, sResetOccurred__Q210JUTGamePad13C3ButtonReset@sda21(r13)
	cmplwi   r12, 0
	lha      r0, 0x7c(r30)
	stw      r0, sResetOccurredPort__Q210JUTGamePad13C3ButtonReset@sda21(r13)
	beq      lbl_8002DC68
	lha      r3, 0x7c(r30)
	lwz      r4, sCallbackArg__Q210JUTGamePad13C3ButtonReset@sda21(r13)
	mtctr    r12
	bctrl
	b        lbl_8002DC68

lbl_8002DC54:
	li       r0, 1
	stb      r0, 0x98(r30)
	bl       OSGetTime
	stw      r4, 0xa4(r30)
	stw      r3, 0xa0(r30)

lbl_8002DC68:
	lis      r3, sPatternList__19JUTGamePadLongPress@ha
	lwz      r31, sPatternList__19JUTGamePadLongPress@l(r3)
	b        lbl_8002DD24

lbl_8002DC74:
	lwz      r28, 0(r31)
	lbz      r0, 0x10(r28)
	cmplwi   r0, 0
	beq      lbl_8002DD20
	lha      r29, 0x7c(r30)
	extsh.   r0, r29
	blt      lbl_8002DD20
	cmpwi    r29, 4
	bge      lbl_8002DD20
	lwz      r4, 0x18(r30)
	lwz      r3, 0x18(r28)
	lwz      r0, 0x14(r28)
	and      r3, r4, r3
	cmplw    r3, r0
	bne      lbl_8002DD14
	addi     r3, r29, 0x20
	lbzx     r0, r28, r3
	cmplwi   r0, 1
	bne      lbl_8002DCE8
	bl       OSGetTime
	slwi     r5, r29, 3
	lwz      r3, 0(r31)
	addi     r0, r5, 0x28
	add      r5, r28, r0
	lwz      r5, 4(r5)
	subfc    r5, r5, r4
	lha      r4, 0x7c(r30)
	bl       checkCallback__19JUTGamePadLongPressFiUl
	b        lbl_8002DD20

lbl_8002DCE8:
	li       r0, 1
	stbx     r0, r28, r3
	lwz      r29, 0(r31)
	bl       OSGetTime
	lha      r0, 0x7c(r30)
	slwi     r5, r0, 3
	addi     r0, r5, 0x28
	add      r5, r29, r0
	stw      r4, 4(r5)
	stw      r3, 0(r5)
	b        lbl_8002DD20

lbl_8002DD14:
	addi     r0, r29, 0x20
	li       r3, 0
	stbx     r3, r28, r0

lbl_8002DD20:
	lwz      r31, 0xc(r31)

lbl_8002DD24:
	cmplwi   r31, 0
	bne      lbl_8002DC74
	lha      r4, 0x7c(r30)
	extsh.   r0, r4
	blt      lbl_8002DD48
	cmpwi    r4, 4
	bge      lbl_8002DD48
	addi     r3, r30, 0x68
	bl       update__Q210JUTGamePad7CRumbleFs

lbl_8002DD48:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002DD68
 * Size:	000080
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

/*
 * --INFO--
 * Address:	8002DDE8
 * Size:	00002C
 */
void JUTGamePad::clearForReset()
{
	CRumble::setEnabled(0);
	recalibrate(0xF0000000);
}

/*
 * --INFO--
 * Address:	8002DE14
 * Size:	00003C
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
	_1C           = 0;
	_20           = 0;
	_24           = 0;
	_28           = 0;
	_2C           = 0;
}

/*
 * --INFO--
 * Address:	8002DE50
 * Size:	000190
 * update__Q210JUTGamePad7CButtonFPC9PADStatusUl
 */
void JUTGamePad::CButton::update(PADStatus const* status, u32 p2)
{
	p2 |= ((status != nullptr) ? status->button : 0);
	mRepeat = 0;
	if (_28 != 0) {
		if (_24 != 0) {
			u32 v1  = p2 & _24;
			mRepeat = 0;
			if (v1 == 0) {
				_20 = 0;
				_1C = 0;
			} else if (_20 == v1) {
				_1C++;
				if (_1C == _28 || (_1C > _28 && _1C - _28 == ((_1C - _28) / _2C) * _2C)) {
					mRepeat = v1;
				}
			} else {
				mRepeat = v1 & (_20 ^ 0xFFFFFFFF);
				_20     = v1;
				_1C     = 0;
			}
		}
	}
	mButtonDown = p2 & (p2 ^ mButton);
	mButtonUp   = mButton & (p2 ^ mButton);
	mButton     = p2;
	mRepeat     = mRepeat | (_24 ^ 0xFFFFFFFF) & mButtonDown;
	if (status != nullptr) {
		mAnalogA      = status->analogA;
		mAnalogB      = status->analogB;
		mTriggerLeft  = status->triggerLeft;
		mTriggerRight = status->triggerRight;
	} else {
		mAnalogA      = 0;
		mAnalogB      = 0;
		mTriggerLeft  = 0;
		mTriggerRight = 0;
	}
	mAnalogL = (s32)mTriggerLeft / 150.0f;
	mAnalogR = (s32)mTriggerRight / 150.0f;
	/*
	cmplwi   r4, 0
	stwu     r1, -0x20(r1)
	beq      lbl_8002DE64
	lhz      r0, 0(r4)
	b        lbl_8002DE68

lbl_8002DE64:
	li       r0, 0

lbl_8002DE68:
	li       r6, 0
	or       r7, r5, r0
	stw      r6, 0x18(r3)
	lwz      r0, 0x28(r3)
	cmplwi   r0, 0
	beq      lbl_8002DF08
	lwz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8002DF08
	and.     r8, r7, r0
	stw      r6, 0x18(r3)
	bne      lbl_8002DEA4
	stw      r6, 0x20(r3)
	stw      r6, 0x1c(r3)
	b        lbl_8002DF08

lbl_8002DEA4:
	lwz      r5, 0x20(r3)
	cmplw    r5, r8
	bne      lbl_8002DEF0
	lwz      r5, 0x1c(r3)
	addi     r0, r5, 1
	stw      r0, 0x1c(r3)
	lwz      r6, 0x1c(r3)
	lwz      r0, 0x28(r3)
	cmplw    r6, r0
	beq      lbl_8002DEE8
	ble      lbl_8002DF08
	lwz      r5, 0x2c(r3)
	subf     r6, r0, r6
	divwu    r0, r6, r5
	mullw    r0, r0, r5
	subf.    r0, r0, r6
	bne      lbl_8002DF08

lbl_8002DEE8:
	stw      r8, 0x18(r3)
	b        lbl_8002DF08

lbl_8002DEF0:
	li       r0, -1
	xor      r0, r5, r0
	and      r0, r8, r0
	stw      r0, 0x18(r3)
	stw      r8, 0x20(r3)
	stw      r6, 0x1c(r3)

lbl_8002DF08:
	lwz      r0, 0(r3)
	li       r5, -1
	cmplwi   r4, 0
	xor      r0, r7, r0
	and      r0, r7, r0
	stw      r0, 4(r3)
	lwz      r6, 0(r3)
	xor      r0, r7, r6
	and      r0, r6, r0
	stw      r0, 8(r3)
	stw      r7, 0(r3)
	lwz      r6, 0x24(r3)
	lwz      r0, 4(r3)
	xor      r5, r6, r5
	lwz      r6, 0x18(r3)
	and      r0, r5, r0
	or       r0, r6, r0
	stw      r0, 0x18(r3)
	beq      lbl_8002DF78
	lbz      r0, 8(r4)
	stb      r0, 0xc(r3)
	lbz      r0, 9(r4)
	stb      r0, 0xd(r3)
	lbz      r0, 6(r4)
	stb      r0, 0xe(r3)
	lbz      r0, 7(r4)
	stb      r0, 0xf(r3)
	b        lbl_8002DF8C

lbl_8002DF78:
	li       r0, 0
	stb      r0, 0xc(r3)
	stb      r0, 0xd(r3)
	stb      r0, 0xe(r3)
	stb      r0, 0xf(r3)

lbl_8002DF8C:
	lbz      r4, 0xe(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r4, r4, 0x8000
	lfd      f2, lbl_80516668@sda21(r2)
	stw      r4, 0xc(r1)
	lfs      f1, lbl_80516660@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f0, f0, f1
	stfs     f0, 0x10(r3)
	lbz      r0, 0xf(r3)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f0, f0, f1
	stfs     f0, 0x14(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002DFE0
 * Size:	00001C
 * clear__Q210JUTGamePad6CStickFv
 */
void JUTGamePad::CStick::clear()
{
	mXPos     = 0.0f;
	mYPos     = 0.0f;
	mStickMag = 0.0f;
	mAngle    = 0;
}

/*
 * --INFO--
 * Address:	8002DFFC
 * Size:	0002B8
 * update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl
 */
u32 JUTGamePad::CStick::update(s8, s8, JUTGamePad::EStickMode, JUTGamePad::EWhichStick, u32)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r8
	  stw       r30, 0x38(r1)
	  mr        r30, r7
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  lwz       r0, -0x7FC4(r13)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x54
	  bge-      .loc_0x68
	  cmpwi     r0, 0x1
	  bge-      .loc_0x40
	  b         .loc_0x68

	.loc_0x40:
	  cmpwi     r30, 0
	  li        r0, 0x2A
	  bne-      .loc_0x78
	  li        r0, 0x36
	  b         .loc_0x78

	.loc_0x54:
	  cmpwi     r30, 0
	  li        r0, 0x1D
	  bne-      .loc_0x78
	  li        r0, 0x26
	  b         .loc_0x78

	.loc_0x68:
	  cmpwi     r30, 0
	  li        r0, 0x39
	  bne-      .loc_0x78
	  li        r0, 0x45

	.loc_0x78:
	  extsb     r8, r4
	  lis       r7, 0x4330
	  xoris     r3, r0, 0x8000
	  extsb     r0, r5
	  xoris     r8, r8, 0x8000
	  stw       r7, 0x10(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f4, -0x7CF8(r2)
	  stw       r8, 0x14(r1)
	  lfs       f0, -0x7CF0(r2)
	  lfd       f1, 0x10(r1)
	  stw       r3, 0x1C(r1)
	  fsubs     f3, f1, f4
	  stw       r7, 0x18(r1)
	  lfd       f1, 0x18(r1)
	  stw       r0, 0x24(r1)
	  fsubs     f1, f1, f4
	  stw       r7, 0x20(r1)
	  lfd       f2, 0x20(r1)
	  fdivs     f3, f3, f1
	  stw       r3, 0x2C(r1)
	  stw       r7, 0x28(r1)
	  lfd       f1, 0x28(r1)
	  stb       r4, 0xE(r29)
	  stb       r5, 0xF(r29)
	  fsubs     f2, f2, f4
	  stfs      f3, 0x0(r29)
	  fsubs     f1, f1, f4
	  fdivs     f1, f2, f1
	  stfs      f1, 0x4(r29)
	  lfs       f2, 0x0(r29)
	  lfs       f1, 0x4(r29)
	  fmuls     f2, f2, f2
	  fmuls     f1, f1, f1
	  fadds     f4, f2, f1
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x154
	  fsqrte    f1, f4
	  lfd       f3, -0x7CE8(r2)
	  lfd       f2, -0x7CE0(r2)
	  fmul      f0, f1, f1
	  fmul      f1, f3, f1
	  fnmsub    f0, f4, f0, f2
	  fmul      f1, f1, f0
	  fmul      f0, f1, f1
	  fmul      f1, f3, f1
	  fnmsub    f0, f4, f0, f2
	  fmul      f1, f1, f0
	  fmul      f0, f1, f1
	  fmul      f1, f3, f1
	  fnmsub    f0, f4, f0, f2
	  fmul      f0, f1, f0
	  fmul      f4, f4, f0
	  frsp      f4, f4
	  b         .loc_0x1D8

	.loc_0x154:
	  lfd       f0, -0x7CD8(r2)
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x16C
	  lis       r3, 0x8051
	  lfs       f4, 0x48B0(r3)
	  b         .loc_0x1D8

	.loc_0x16C:
	  stfs      f4, 0x8(r1)
	  lis       r0, 0x7F80
	  lwz       r4, 0x8(r1)
	  rlwinm    r3,r4,0,1,8
	  cmpw      r3, r0
	  beq-      .loc_0x194
	  bge-      .loc_0x1C4
	  cmpwi     r3, 0
	  beq-      .loc_0x1AC
	  b         .loc_0x1C4

	.loc_0x194:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x1A4
	  li        r0, 0x1
	  b         .loc_0x1C8

	.loc_0x1A4:
	  li        r0, 0x2
	  b         .loc_0x1C8

	.loc_0x1AC:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x1BC
	  li        r0, 0x5
	  b         .loc_0x1C8

	.loc_0x1BC:
	  li        r0, 0x3
	  b         .loc_0x1C8

	.loc_0x1C4:
	  li        r0, 0x4

	.loc_0x1C8:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x1D8
	  lis       r3, 0x8051
	  lfs       f4, 0x48B0(r3)

	.loc_0x1D8:
	  stfs      f4, 0x8(r29)
	  lfs       f0, -0x7CD0(r2)
	  lfs       f1, 0x8(r29)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x218
	  cmpwi     r6, 0x1
	  bne-      .loc_0x210
	  lfs       f0, 0x0(r29)
	  fdivs     f0, f0, f1
	  stfs      f0, 0x0(r29)
	  lfs       f1, 0x4(r29)
	  lfs       f0, 0x8(r29)
	  fdivs     f0, f1, f0
	  stfs      f0, 0x4(r29)

	.loc_0x210:
	  lfs       f0, -0x7CD0(r2)
	  stfs      f0, 0x8(r29)

	.loc_0x218:
	  lfs       f0, 0x8(r29)
	  lfs       f1, -0x7CF0(r2)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x280
	  lfs       f0, 0x4(r29)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x258
	  lfs       f0, 0x0(r29)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x24C
	  li        r0, 0x4000
	  sth       r0, 0xC(r29)
	  b         .loc_0x280

	.loc_0x24C:
	  li        r0, -0x4000
	  sth       r0, 0xC(r29)
	  b         .loc_0x280

	.loc_0x258:
	  fneg      f2, f0
	  lfs       f1, 0x0(r29)
	  bl        0xA1730
	  frsp      f1, f1
	  lfs       f0, -0x7CCC(r2)
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  sth       r0, 0xC(r29)

	.loc_0x280:
	  cmpwi     r30, 0
	  mr        r3, r29
	  li        r0, 0x10
	  bne-      .loc_0x294
	  li        r0, 0x18

	.loc_0x294:
	  srw       r4, r31, r0
	  bl        .loc_0x2B8
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x2B8:
	*/
}

/*
 * --INFO--
 * Address:	8002E2B4
 * Size:	0000B4
 * getButton__Q210JUTGamePad6CStickFUl
 */
u32 JUTGamePad::CStick::getButton(u32 p1)
{
	p1 &= 0xF;

	if (-sReleasePoint < mXPos && mXPos < sReleasePoint) {
		p1 = p1 & 0xC;
	} else if (mXPos <= -sPressPoint) {
		p1 = p1 & 0xD | 1;
	} else if (mXPos >= sPressPoint) {
		p1 = p1 & 0xE | 2;
	}

	if (-sReleasePoint < mYPos && mYPos < sReleasePoint) {
		p1 = p1 & ~0xC;
	} else if (mYPos <= -sPressPoint) {
		p1 = p1 & ~8 | 4;
	} else if (mYPos >= sPressPoint) {
		p1 = p1 & ~4 | 8;
	}

	return p1;
	/*
	lfs      f1, sReleasePoint__Q210JUTGamePad6CStick@sda21(r13)
	clrlwi   r0, r4, 0x1c
	lfs      f2, 0(r3)
	fneg     f4, f1
	fcmpo    cr0, f4, f2
	bge      lbl_8002E2DC
	fcmpo    cr0, f2, f1
	bge      lbl_8002E2DC
	rlwinm   r0, r0, 0, 0, 0x1d
	b        lbl_8002E310

lbl_8002E2DC:
	lfs      f3, sPressPoint__Q210JUTGamePad6CStick@sda21(r13)
	fneg     f0, f3
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_8002E2FC
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	ori      r0, r0, 1
	b        lbl_8002E310

lbl_8002E2FC:
	fcmpo    cr0, f2, f3
	cror     2, 1, 2
	bne      lbl_8002E310
	rlwinm   r0, r0, 0, 0, 0x1e
	ori      r0, r0, 2

lbl_8002E310:
	lfs      f2, 4(r3)
	fcmpo    cr0, f4, f2
	bge      lbl_8002E32C
	fcmpo    cr0, f2, f1
	bge      lbl_8002E32C
	rlwinm   r0, r0, 0, 0x1e, 0x1b
	b        lbl_8002E360

lbl_8002E32C:
	lfs      f1, sPressPoint__Q210JUTGamePad6CStick@sda21(r13)
	fneg     f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_8002E34C
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	ori      r0, r0, 4
	b        lbl_8002E360

lbl_8002E34C:
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8002E360
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	ori      r0, r0, 8

lbl_8002E360:
	mr       r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 * clear__Q210JUTGamePad7CRumbleFv
 */
void JUTGamePad::CRumble::clear()
{
	// UNUSED FUNCTION
	_00      = 0;
	_04      = 0;
	_08      = 0;
	_0C      = 0;
	_10      = 0;
	mEnabled = 0xF0000000;
}

/*
 * --INFO--
 * Address:	8002E368
 * Size:	000074
 * clear__Q210JUTGamePad7CRumbleFP10JUTGamePad
 */
void JUTGamePad::CRumble::clear(JUTGamePad* pad)
{
	// if (pad->isConnected()) {
	// if (JUTGamePadIsConnected(pad)) {
	if (0 <= pad->mPortNum && pad->mPortNum < 4) {
		mStatus[pad->mPortNum] = 0;
		stopMotor(pad->mPortNum, true);
	}
	clear();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lha      r5, 0x7c(r4)
	extsh.   r0, r5
	blt      lbl_8002E3A8
	cmpwi    r5, 4
	bge      lbl_8002E3A8
	li       r0, 0
	addi     r3, r13, mStatus__Q210JUTGamePad7CRumble@sda21
	stbx     r0, r3, r5
	lha      r3, 0x7c(r4)
	li       r4, 1
	bl       stopMotor__Q210JUTGamePad7CRumbleFib

lbl_8002E3A8:
	li       r3, 0
	lis      r0, 0xf000
	stw      r3, 0(r31)
	stw      r3, 4(r31)
	stw      r3, 8(r31)
	stw      r3, 0xc(r31)
	stw      r3, 0x10(r31)
	stw      r0, mEnabled__Q210JUTGamePad7CRumble@sda21(r13)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JUTGamePad::CRumble::startMotor(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002E3DC
 * Size:	000070
 * stopMotor__Q210JUTGamePad7CRumbleFib
 */
void JUTGamePad::CRumble::stopMotor(int chan, bool p2)
{
	if ((mEnabled & sChannelMask[chan]) != 0) {
		u32 v1 = p2;
		PADControlMotor(chan, getNumBit((u8*)&v1, 6));
	}
	mStatus[chan] = 0;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, sChannelMask__Q210JUTGamePad7CRumble@ha
	stw      r0, 0x14(r1)
	slwi     r0, r3, 2
	addi     r5, r5, sChannelMask__Q210JUTGamePad7CRumble@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r6, mEnabled__Q210JUTGamePad7CRumble@sda21(r13)
	lwzx     r0, r5, r0
	and.     r0, r6, r0
	beq      lbl_8002E438
	clrlwi   r5, r4, 0x18
	li       r0, 2
	neg      r4, r5
	or       r4, r4, r5
	srawi    r4, r4, 0x1f
	and      r0, r0, r4
	clrlwi   r4, r0, 0x18
	bl       PADControlMotor
	li       r0, 0
	addi     r3, r13, mStatus__Q210JUTGamePad7CRumble@sda21
	stbx     r0, r3, r31

lbl_8002E438:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
// void getNumBit(u8*, int)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8002E44C
 * Size:	00025C
 */
void JUTGamePad::CRumble::update(short)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, sChannelMask__Q210JUTGamePad7CRumble@ha
	stw      r0, 0x14(r1)
	addi     r5, r5, sChannelMask__Q210JUTGamePad7CRumble@l
	stw      r31, 0xc(r1)
	extsh    r31, r4
	slwi     r0, r31, 2
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r6, mEnabled__Q210JUTGamePad7CRumble@sda21(r13)
	lwzx     r3, r5, r0
	and      r6, r6, r3
	neg      r3, r6
	or       r3, r3, r6
	rlwinm.  r3, r3, 1, 0x1f, 0x1f
	bne      lbl_8002E4A8
	li       r3, 0
	stw      r3, 0(r30)
	stw      r3, 4(r30)
	stw      r3, 8(r30)
	stw      r3, 0xc(r30)
	stw      r3, 0x10(r30)

lbl_8002E4A8:
	lwz      r3, 4(r30)
	cmplwi   r3, 0
	beq      lbl_8002E690
	lwz      r10, 0(r30)
	cmplw    r10, r3
	blt      lbl_8002E4F4
	lwz      r3, mEnabled__Q210JUTGamePad7CRumble@sda21(r13)
	lwzx     r0, r5, r0
	and.     r0, r3, r0
	beq      lbl_8002E4E8
	mr       r3, r31
	li       r4, 2
	bl       PADControlMotor
	li       r0, 0
	addi     r3, r13, mStatus__Q210JUTGamePad7CRumble@sda21
	stbx     r0, r3, r31

lbl_8002E4E8:
	li       r0, 0
	stw      r0, 4(r30)
	b        lbl_8002E684

lbl_8002E4F4:
	lwz      r9, 0xc(r30)
	cmplwi   r9, 0
	bne      lbl_8002E540
	extsh    r4, r4
	addi     r3, r13, mStatus__Q210JUTGamePad7CRumble@sda21
	lbzx     r3, r3, r4
	cmplwi   r3, 0
	bne      lbl_8002E690
	lwz      r3, mEnabled__Q210JUTGamePad7CRumble@sda21(r13)
	lwzx     r0, r5, r0
	and.     r0, r3, r0
	beq      lbl_8002E690
	mr       r3, r31
	li       r4, 1
	bl       PADControlMotor
	li       r0, 1
	addi     r3, r13, mStatus__Q210JUTGamePad7CRumble@sda21
	stbx     r0, r3, r31
	b        lbl_8002E690

lbl_8002E540:
	divwu    r6, r10, r9
	extsh    r4, r4
	addi     r3, r13, mStatus__Q210JUTGamePad7CRumble@sda21
	lwz      r7, 8(r30)
	lbzx     r4, r3, r4
	li       r8, 0x80
	mullw    r9, r6, r9
	neg      r3, r4
	or       r3, r3, r4
	srwi     r6, r3, 0x1f
	subf     r9, r9, r10
	clrlwi   r3, r9, 0x1d
	sraw     r4, r8, r3
	srawi    r3, r9, 3
	lbzx     r3, r7, r3
	and      r3, r4, r3
	clrlwi   r4, r3, 0x18
	neg      r3, r4
	or       r3, r3, r4
	rlwinm.  r3, r3, 1, 0x1f, 0x1f
	beq      lbl_8002E5C8
	cmplwi   r6, 0
	bne      lbl_8002E5C8
	lwz      r3, mEnabled__Q210JUTGamePad7CRumble@sda21(r13)
	lwzx     r0, r5, r0
	and.     r0, r3, r0
	beq      lbl_8002E684
	mr       r3, r31
	li       r4, 1
	bl       PADControlMotor
	li       r0, 1
	addi     r3, r13, mStatus__Q210JUTGamePad7CRumble@sda21
	stbx     r0, r3, r31
	b        lbl_8002E684

lbl_8002E5C8:
	cmplwi   r3, 0
	bne      lbl_8002E684
	lwz      r7, 0x10(r30)
	li       r4, 0
	cmplwi   r7, 0
	beq      lbl_8002E608
	clrlwi   r3, r9, 0x1d
	li       r4, 0x80
	sraw     r4, r4, r3
	srawi    r3, r9, 3
	lbzx     r3, r7, r3
	and      r3, r4, r3
	clrlwi   r4, r3, 0x18
	neg      r3, r4
	or       r3, r3, r4
	srwi     r4, r3, 0x1f

lbl_8002E608:
	cmplwi   r6, 0
	beq      lbl_8002E654
	lwz      r3, mEnabled__Q210JUTGamePad7CRumble@sda21(r13)
	lwzx     r0, r5, r0
	and.     r0, r3, r0
	beq      lbl_8002E684
	clrlwi   r5, r4, 0x18
	li       r0, 2
	neg      r4, r5
	mr       r3, r31
	or       r4, r4, r5
	srawi    r4, r4, 0x1f
	and      r0, r0, r4
	clrlwi   r4, r0, 0x18
	bl       PADControlMotor
	li       r0, 0
	addi     r3, r13, mStatus__Q210JUTGamePad7CRumble@sda21
	stbx     r0, r3, r31
	b        lbl_8002E684

lbl_8002E654:
	clrlwi.  r3, r4, 0x18
	beq      lbl_8002E684
	lwz      r3, mEnabled__Q210JUTGamePad7CRumble@sda21(r13)
	lwzx     r0, r5, r0
	and.     r0, r3, r0
	beq      lbl_8002E684
	mr       r3, r31
	li       r4, 2
	bl       PADControlMotor
	li       r0, 0
	addi     r3, r13, mStatus__Q210JUTGamePad7CRumble@sda21
	stbx     r0, r3, r31

lbl_8002E684:
	lwz      r3, 0(r30)
	addi     r0, r3, 1
	stw      r0, 0(r30)

lbl_8002E690:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JUTGamePad::CRumble::triggerPatternedRumble(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JUTGamePad::CRumble::setPatternedRumble(short, u16, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void JUTGamePad::CRumble::startPatternedRumble(void*, JUTGamePad::CRumble::ERumble, u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JUTGamePad::CRumble::stopPatternedRumble(short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JUTGamePad::CRumble::stopPatternedRumbleAtThePeriod()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
JUTGamePad* JUTGamePad::getGamePad(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002E6A8
 * Size:	000124
 */
void JUTGamePad::CRumble::setEnabled(u32)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, channel_mask@ha
	lis      r4, sChannelMask__Q210JUTGamePad7CRumble@ha
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	addi     r31, r5, channel_mask@l
	mr       r26, r3
	addi     r29, r4, sChannelMask__Q210JUTGamePad7CRumble@l
	li       r27, 0
	addi     r30, r13, mStatus__Q210JUTGamePad7CRumble@sda21

lbl_8002E6D4:
	lwz      r3, mEnabled__Q210JUTGamePad7CRumble@sda21(r13)
	lwz      r0, 0(r31)
	and.     r0, r3, r0
	bne      lbl_8002E798
	lbz      r0, 0(r30)
	cmplwi   r0, 0
	beq      lbl_8002E710
	lwz      r0, 0(r29)
	and.     r0, r3, r0
	beq      lbl_8002E710
	mr       r3, r27
	li       r4, 0
	bl       PADControlMotor
	li       r0, 0
	stb      r0, 0(r30)

lbl_8002E710:
	lis      r3, mPadList__10JUTGamePad@ha
	addi     r3, r3, mPadList__10JUTGamePad@l
	lwz      r3, 0(r3)
	b        lbl_8002E738

lbl_8002E720:
	lwz      r4, 0(r3)
	lha      r0, 0x7c(r4)
	cmpw     r27, r0
	bne      lbl_8002E734
	b        lbl_8002E744

lbl_8002E734:
	lwz      r3, 0xc(r3)

lbl_8002E738:
	cmplwi   r3, 0
	bne      lbl_8002E720
	li       r4, 0

lbl_8002E744:
	cmplwi   r4, 0
	beq      lbl_8002E798
	lha      r28, 0x7c(r4)
	li       r0, 0
	lis      r3, sChannelMask__Q210JUTGamePad7CRumble@ha
	stw      r0, 0x6c(r4)
	slwi     r0, r28, 2
	addi     r3, r3, sChannelMask__Q210JUTGamePad7CRumble@l
	lwz      r4, mEnabled__Q210JUTGamePad7CRumble@sda21(r13)
	lwzx     r0, r3, r0
	and      r3, r4, r0
	neg      r0, r3
	or       r0, r0, r3
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	beq      lbl_8002E798
	mr       r3, r28
	li       r4, 2
	bl       PADControlMotor
	li       r0, 0
	addi     r3, r13, mStatus__Q210JUTGamePad7CRumble@sda21
	stbx     r0, r3, r28

lbl_8002E798:
	addi     r27, r27, 1
	addi     r30, r30, 1
	cmpwi    r27, 4
	addi     r29, r29, 4
	addi     r31, r31, 4
	blt      lbl_8002E6D4
	rlwinm   r0, r26, 0, 0, 3
	stw      r0, mEnabled__Q210JUTGamePad7CRumble@sda21(r13)
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002E7CC
 * Size:	00001C
 */
void JUTGamePad::CButton::setRepeat(u32 p1, u32 p2, u32 p3)
{
	_20 = 0;
	_1C = 0;
	_24 = p1;
	_28 = p2;
	_2C = p3;
}

/*
 * --INFO--
 * Address:	8002E7E8
 * Size:	00004C
 */
void JUTGamePad::setButtonRepeat(u32 p1, u32 p2, u32 p3)
{
	mButton.setRepeat(p1, p2, p3);
	if (mPortNum < 0) {
		return;
	}
	mPadButton[mPortNum].setRepeat(p1, p2, p3);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JUTGamePad::resetButtonRepeat()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JUTGamePad::addButtonRepeat(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JUTGamePad::removeButtonRepeat(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JUTGamePad::clearButtonRepeat(bool)
{
	// UNUSED FUNCTION
}

#define FLIP_BITS(v) ((~v))

/*
 * --INFO--
 * Address:	8002E834
 * Size:	00008C
 */
bool JUTGamePad::recalibrate(u32 mask)
{
	for (int i = 0; i < 4; i++) {
		if ((sSuppressPadReset & channel_mask[i]) != 0) {
			mask &= -1 ^ channel_mask[i];
		}
	}
	return PADRecalibrate(mask);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, channel_mask@ha
	stw      r0, 0x14(r1)
	addi     r5, r4, channel_mask@l
	li       r0, -1
	lwz      r6, sSuppressPadReset__10JUTGamePad@sda21(r13)
	lwz      r7, 0(r5)
	and.     r4, r6, r7
	beq      lbl_8002E864
	xor      r4, r7, r0
	and      r3, r3, r4

lbl_8002E864:
	lwzu     r7, 4(r5)
	and.     r4, r6, r7
	beq      lbl_8002E878
	xor      r4, r7, r0
	and      r3, r3, r4

lbl_8002E878:
	lwzu     r7, 4(r5)
	and.     r4, r6, r7
	beq      lbl_8002E88C
	xor      r4, r7, r0
	and      r3, r3, r4

lbl_8002E88C:
	lwz      r7, 4(r5)
	and.     r4, r6, r7
	beq      lbl_8002E8A0
	xor      r4, r7, r0
	and      r3, r3, r4

lbl_8002E8A0:
	bl       PADRecalibrate
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
JUTGamePadLongPress::JUTGamePadLongPress()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSULink<JUTGamePadLongPress>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void JUTGamePadLongPress::add(u32, u32, u32, void (*)(int, JUTGamePadLongPress*, void*), void*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void JUTGamePadLongPress::remove(JUTGamePadLongPress*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002E8C0
 * Size:	000064
 */
void JUTGamePadLongPress::checkCallback(int p1, u32 p2)
{
	if (0 <= p1 && p2 >= _1C) {
		_11     = 1;
		_48[p1] = 1;
		if (mCallback != nullptr) {
			mCallback(p1, this, (void*)this->_50);
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
JUTGamePadRecordBase::JUTGamePadRecordBase()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
JUTGamePadRecordBase::~JUTGamePadRecordBase()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
JUTGamePadRecordFixed::JUTGamePadRecordFixed()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JUTGamePadRecordFixed::setBuffer(void*, u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTGamePadRecordFixed::setDataEnd(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JUTGamePadRecordFixed::setDataSize(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JUTGamePadRecord::setPart(uint)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JUTGamePadRecordFixed::clear()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void JUTGamePadRecordFixed::seek(int, JUTGamePadRecordFixed::EOrigin)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void JUTGamePadRecordFixed::do_read(PADStatus*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JUTGamePadRecordFixed::do_write(const PADStatus*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
JUTGamePadRecord::JUTGamePadRecord()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
JUTGamePadRecordFixed::~JUTGamePadRecordFixed()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JUTGamePadRecord::calculateDataSizePerFrame(u8)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JUTGamePadRecord::do_readFixed(const void*, PADStatus*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void JUTGamePadRecord::do_writeFixed(const PADStatus*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
JUTGamePadRecord::~JUTGamePadRecord()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002E924
 * Size:	000110
 */
// void __sinit_JUTGamePad_cpp()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r3, mPadList__10JUTGamePad@ha
// 	li       r4, 0
// 	stw      r0, 0x14(r1)
// 	addi     r3, r3, mPadList__10JUTGamePad@l
// 	bl       __ct__10JSUPtrListFb
// 	lis      r3, mPadList__10JUTGamePad@ha
// 	lis      r4, "__dt__21JSUList<10JUTGamePad>Fv"@ha
// 	lis      r5, lbl_804F03F0@ha
// 	addi     r3, r3, mPadList__10JUTGamePad@l
// 	addi     r4, r4, "__dt__21JSUList<10JUTGamePad>Fv"@l
// 	addi     r5, r5, lbl_804F03F0@l
// 	bl       __register_global_object
// 	lis      r3, mPadButton__10JUTGamePad@ha
// 	lis      r4, __ct__Q210JUTGamePad7CButtonFv@ha
// 	addi     r3, r3, mPadButton__10JUTGamePad@l
// 	li       r5, 0
// 	addi     r4, r4, __ct__Q210JUTGamePad7CButtonFv@l
// 	li       r6, 0x30
// 	li       r7, 4
// 	bl       __construct_array
// 	lis      r3, mPadMStick__10JUTGamePad@ha
// 	lis      r4, __ct__Q210JUTGamePad6CStickFv@ha
// 	addi     r3, r3, mPadMStick__10JUTGamePad@l
// 	li       r5, 0
// 	addi     r4, r4, __ct__Q210JUTGamePad6CStickFv@l
// 	li       r6, 0x10
// 	li       r7, 4
// 	bl       __construct_array
// 	lis      r3, mPadSStick__10JUTGamePad@ha
// 	lis      r4, __ct__Q210JUTGamePad6CStickFv@ha
// 	addi     r3, r3, mPadSStick__10JUTGamePad@l
// 	li       r5, 0
// 	addi     r4, r4, __ct__Q210JUTGamePad6CStickFv@l
// 	li       r6, 0x10
// 	li       r7, 4
// 	bl       __construct_array
// 	lis      r3, 0x800000F8@ha
// 	lis      r4, 0x88888889@ha
// 	lwz      r0, 0x800000F8@l(r3)
// 	addi     r5, r4, 0x88888889@l
// 	lis      r3, sPatternList__19JUTGamePadLongPress@ha
// 	srwi     r4, r0, 2
// 	li       r0, 0x1e
// 	mulhwu   r6, r5, r4
// 	li       r5, 0
// 	addi     r3, r3, sPatternList__19JUTGamePadLongPress@l
// 	li       r4, 0
// 	mullw    r5, r5, r0
// 	srwi     r6, r6, 5
// 	mulhwu   r0, r6, r0
// 	mulli    r6, r6, 0x1e
// 	add      r0, r0, r5
// 	stw      r0, sThreshold__Q210JUTGamePad13C3ButtonReset@sda21(r13)
// 	stw      r6, lbl_80514F5C@sda21(r13)
// 	bl       __ct__10JSUPtrListFb
// 	lis      r3, sPatternList__19JUTGamePadLongPress@ha
// 	lis      r4, "__dt__30JSUList<19JUTGamePadLongPress>Fv"@ha
// 	lis      r5, lbl_804F03FC@ha
// 	addi     r3, r3, sPatternList__19JUTGamePadLongPress@l
// 	addi     r4, r4, "__dt__30JSUList<19JUTGamePadLongPress>Fv"@l
// 	addi     r5, r5, lbl_804F03FC@l
// 	bl       __register_global_object
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8002EA34
 * Size:	000054
 */
// void JSUList<JUTGamePadLongPress>::~JSUList()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_8002EA6C
// 	li       r4, 0
// 	bl       __dt__10JSUPtrListFv
// 	extsh.   r0, r31
// 	ble      lbl_8002EA6C
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_8002EA6C:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8002EA88
 * Size:	00001C
 * __ct__Q210JUTGamePad6CStickFv
 */
// JUTGamePad::CStick::CStick()
// {
// 	/*
// 	lfs      f0, lbl_80516670@sda21(r2)
// 	li       r0, 0
// 	stfs     f0, 0(r3)
// 	stfs     f0, 4(r3)
// 	stfs     f0, 8(r3)
// 	sth      r0, 0xc(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8002EAA4
 * Size:	00003C
 * __ct__Q210JUTGamePad7CButtonFv
 */
// JUTGamePad::CButton::CButton()
// {
// 	/*
// 	li       r0, 0
// 	stw      r0, 0(r3)
// 	stw      r0, 4(r3)
// 	stw      r0, 8(r3)
// 	stw      r0, 0x18(r3)
// 	stb      r0, 0xc(r3)
// 	stb      r0, 0xd(r3)
// 	stb      r0, 0xe(r3)
// 	stb      r0, 0xf(r3)
// 	stw      r0, 0x1c(r3)
// 	stw      r0, 0x20(r3)
// 	stw      r0, 0x24(r3)
// 	stw      r0, 0x28(r3)
// 	stw      r0, 0x2c(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8002EAE0
 * Size:	000054
 * __dt__21JSUList<10JUTGamePad>Fv
 */
// void JSUList<JUTGamePad>::~JSUList()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_8002EB18
// 	li       r4, 0
// 	bl       __dt__10JSUPtrListFv
// 	extsh.   r0, r31
// 	ble      lbl_8002EB18
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_8002EB18:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }
