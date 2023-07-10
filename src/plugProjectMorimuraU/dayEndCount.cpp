#include "Morimura/DayEndCount.h"
#include "trig.h"
#include "PSSystem/PSSystemIF.h"
#include "SoundID.h"

static const char name[] = "dayEndCount";

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804901E8
    lbl_804901E8:
        .4byte 0x64617945
        .4byte 0x6E64436F
        .4byte 0x756E7400
    .global lbl_804901F4
    lbl_804901F4:
        .4byte 0x44617945
        .4byte 0x6E64436F
        .4byte 0x756E7400
        .4byte 0x636F756E
        .4byte 0x742E626C
        .4byte 0x6F000000
    .global lbl_8049020C
    lbl_8049020C:
        .4byte 0x64617945
        .4byte 0x6E64436F
        .4byte 0x756E742E
        .4byte 0x63707000
    .global lbl_8049021C
    lbl_8049021C:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80490228
    lbl_80490228:
        .4byte 0x6368616C
        .4byte 0x6C656E67
        .4byte 0x65456E64
        .4byte 0x436F756E
        .4byte 0x74000000
        .4byte 0x6368616C
        .4byte 0x6C656E67
        .4byte 0x65456E64
        .4byte 0x436F756E
        .4byte 0x74317000
        .4byte 0x6368616C
        .4byte 0x6C656E67
        .4byte 0x65456E64
        .4byte 0x436F756E
        .4byte 0x74327000
    .global lbl_80490264
    lbl_80490264:
        .4byte 0x7265735F
        .4byte 0x67726F75
        .4byte 0x6E642E73
        .4byte 0x7A730000
        .4byte 0x73637265
        .4byte 0x656E4F62
        .4byte 0x6A2E6800

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global deTagName__8Morimura
    deTagName__8Morimura:
        .4byte 0x63643030
        .4byte 0x63643031
        .4byte 0x63643032
        .4byte 0x63643033
        .4byte 0x63643034
        .4byte 0x63643035
        .4byte 0x63643036
        .4byte 0x63643037
        .4byte 0x63643038
        .4byte 0x63643039
        .4byte 0x63643130
    .global __vt__Q28Morimura15TCountDownScene
    __vt__Q28Morimura15TCountDownScene:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q28Morimura15TCountDownSceneFv
        .4byte getOwnerID__Q28Morimura15TCountDownSceneFv
        .4byte getMemberID__Q28Morimura15TCountDownSceneFv
        .4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q28Morimura15TCountDownSceneCFv
        .4byte doCreateObj__Q28Morimura15TCountDownSceneFP10JKRArchive
        .4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q26Screen9SceneBaseFv
        .4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
        .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q28Morimura15TCountDownSceneFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q26Screen9SceneBaseFv .global
   __vt__Q28Morimura20TChallengeEndCount2p
    __vt__Q28Morimura20TChallengeEndCount2p:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Morimura20TChallengeEndCount2pFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q28Morimura20TChallengeEndCount2pFv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte doStart__Q28Morimura12TDayEndCountFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q28Morimura18TChallengeEndCountFP10JKRArchive
        .4byte doUpdateFadein__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdate__Q28Morimura20TChallengeEndCount2pFv
        .4byte doUpdateFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
        .4byte doDraw__Q28Morimura12TDayEndCountFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte getDispMemberBase__Q28Morimura12TDayEndCountFv
    .global __vt__Q28Morimura20TChallengeEndCount1p
    __vt__Q28Morimura20TChallengeEndCount1p:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Morimura20TChallengeEndCount1pFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q28Morimura20TChallengeEndCount1pFv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte doStart__Q28Morimura12TDayEndCountFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q28Morimura18TChallengeEndCountFP10JKRArchive
        .4byte doUpdateFadein__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdate__Q28Morimura20TChallengeEndCount1pFv
        .4byte doUpdateFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
        .4byte doDraw__Q28Morimura12TDayEndCountFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte getDispMemberBase__Q28Morimura12TDayEndCountFv
    .global __vt__Q28Morimura18TChallengeEndCount
    __vt__Q28Morimura18TChallengeEndCount:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Morimura18TChallengeEndCountFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q28Morimura18TChallengeEndCountFv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte doStart__Q28Morimura12TDayEndCountFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q28Morimura18TChallengeEndCountFP10JKRArchive
        .4byte doUpdateFadein__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdate__Q28Morimura12TDayEndCountFv
        .4byte doUpdateFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
        .4byte doDraw__Q28Morimura12TDayEndCountFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte getDispMemberBase__Q28Morimura12TDayEndCountFv
    .global __vt__Q28Morimura12TDayEndCount
    __vt__Q28Morimura12TDayEndCount:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Morimura12TDayEndCountFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q28Morimura12TDayEndCountFv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte doStart__Q28Morimura12TDayEndCountFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q28Morimura12TDayEndCountFP10JKRArchive
        .4byte doUpdateFadein__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdate__Q28Morimura12TDayEndCountFv
        .4byte doUpdateFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
        .4byte doDraw__Q28Morimura12TDayEndCountFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte getDispMemberBase__Q28Morimura12TDayEndCountFv
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global mWaitTime__Q28Morimura12TDayEndCount
    mWaitTime__Q28Morimura12TDayEndCount:
        .float 0.4
    .global mAlphaMax__Q28Morimura12TDayEndCount
    mAlphaMax__Q28Morimura12TDayEndCount:
        .byte 0xC8
    .global mWaitAlpha__Q28Morimura12TDayEndCount
    mWaitAlpha__Q28Morimura12TDayEndCount:
        .byte 0x64
        .byte 0x0
        .byte 0x0
    .global mWaitScale__Q28Morimura12TDayEndCount
    mWaitScale__Q28Morimura12TDayEndCount:
        .float 0.2
    .global mStopScale__Q28Morimura12TDayEndCount
    mStopScale__Q28Morimura12TDayEndCount:
        .float 1.0
    .global mScaleMax__Q28Morimura12TDayEndCount
    mScaleMax__Q28Morimura12TDayEndCount:
        .float 2.0
    .global m2pScale__Q28Morimura12TDayEndCount
    m2pScale__Q28Morimura12TDayEndCount:
        .float 0.75
    .global m2pOffsetY__Q28Morimura12TDayEndCount
    m2pOffsetY__Q28Morimura12TDayEndCount:
        .float 170.0
    .global mColor__Q28Morimura12TDayEndCount
    mColor__Q28Morimura12TDayEndCount:
        .4byte 0x00FF00FF
    .global mNumberColor__Q28Morimura12TDayEndCount
    mNumberColor__Q28Morimura12TDayEndCount:
        .4byte 0xFF6400FF

    .section .sbss # 0x80514D80 - 0x80516360
    .global mColorTest__Q28Morimura12TDayEndCount
    mColorTest__Q28Morimura12TDayEndCount:
        .skip 0x1
    .global mTestChangeColor__Q28Morimura12TDayEndCount
    mTestChangeColor__Q28Morimura12TDayEndCount:
        .skip 0x1
    .global mCountDownType__Q28Morimura12TDayEndCount
    mCountDownType__Q28Morimura12TDayEndCount:
        .skip 0x6

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E1F8
    lbl_8051E1F8:
        .float 1.0
    .global lbl_8051E1FC
    lbl_8051E1FC:
        .4byte 0x00000000
    .global lbl_8051E200
    lbl_8051E200:
        .4byte 0x3F666666
    .global lbl_8051E204
    lbl_8051E204:
        .4byte 0x41C80000
    .global lbl_8051E208
    lbl_8051E208:
        .4byte 0x38D1B717
    .global lbl_8051E20C
    lbl_8051E20C:
        .4byte 0x3C23D70A
    .global lbl_8051E210
    lbl_8051E210:
        .4byte 0x41200000
    .global lbl_8051E214
    lbl_8051E214:
        .4byte 0x3F8CCCCD
    .global lbl_8051E218
    lbl_8051E218:
        .4byte 0x41300000
    .global lbl_8051E21C
    lbl_8051E21C:
        .float 0.5
    .global lbl_8051E220
    lbl_8051E220:
        .4byte 0x42C80000
    .global lbl_8051E224
    lbl_8051E224:
        .4byte 0x437F0000
    .global lbl_8051E228
    lbl_8051E228:
        .4byte 0x41490FDB
    .global lbl_8051E22C
    lbl_8051E22C:
        .4byte 0xC3A2F983
    .global lbl_8051E230
    lbl_8051E230:
        .4byte 0x43A2F983
    .global lbl_8051E234
    lbl_8051E234:
        .4byte 0x40A00000
    .global lbl_8051E238
    lbl_8051E238:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051E240
    lbl_8051E240:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051E248
    lbl_8051E248:
        .4byte 0x40C90FDB
    .global lbl_8051E24C
    lbl_8051E24C:
        .4byte 0x42100000
    .global lbl_8051E250
    lbl_8051E250:
        .4byte 0x43B40000
    .global lbl_8051E254
    lbl_8051E254:
        .4byte 0x42A00000
*/

namespace Morimura {

u32 deTagName[COUNTDOWN_NUMBERS] = { 'cd00', 'cd01', 'cd02', 'cd03', 'cd04', 'cd05', 'cd06', 'cd07', 'cd08', 'cd09', 'cd10' };

/*
 * --INFO--
 * Address:	80344088
 * Size:	0000E0
 */
TDayEndCount::TDayEndCount()
    : TTestBase("DayEndCount")
    , mScreenObj(nullptr)
    , mCurrNumberPane(nullptr)
    , mNumberPaneList(nullptr)
    , mTextPane(nullptr)
    , mCurrNumberValue(-1)
    , mMode(false)
{
	mSoundEnabled = true;
	mIsChallenge  = false;
	mScale        = 1.0f;
	mOffsetY      = 0.0f;

	mColor.set(0, 255, 0, 255);
	mTestChangeColor = false;
}

/*
 * --INFO--
 * Address:	80344214
 * Size:	0002EC
 */
void TDayEndCount::doCreate(JKRArchive* arc)
{
	mArchive  = arc;
	mAlphaMax = 200;

	og::Screen::DispMemberGround* dispfull = static_cast<og::Screen::DispMemberGround*>(getDispMember());
	if (dispfull->isID(OWNER_OGA, MEMBER_GROUND)) {
		mDispMember = &dispfull->mDayEndCount;
	} else if (dispfull->isID(OWNER_OGA, MEMBER_CHALLENGE_1P)) {
		mDispMember = &dispfull->mDayEndCount;
	} else if (dispfull->isID(OWNER_OGA, MEMBER_CHALLENGE_2P)) {
		mDispMember = &dispfull->mDayEndCount;
	} else {
		mDispMember = new og::Screen::DispMemberDayEndCount;
		mIsSection  = true;
	}

	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set("count.blo", 0x20000, arc);
	mTextPane = static_cast<J2DPicture*>(mScreenObj->search('gath'));
	P2ASSERTLINE(90, mTextPane);
	mTextPanePos.x = mTextPane->mOffset.x;
	mTextPanePos.y = mTextPane->mOffset.y;

	mNumberPaneList = new J2DPane*[COUNTDOWN_NUMBERS];
	for (int i = 0; i < COUNTDOWN_NUMBERS; i++) {
		mNumberPaneList[i] = mScreenObj->search(deTagName[i]);
		P2ASSERTLINE(100, mNumberPaneList[i]);
		mNumberPaneList[i]->setAlpha(0);
	}

	J2DPicture* pane = static_cast<J2DPicture*>(mScreenObj->search('cd10'));
	P2ASSERTLINE(105, pane);
	pane->setBasePosition(J2DPOS_Center);
	mNumberPanePos.x = pane->mOffset.x;
	mNumberPanePos.y = pane->mOffset.y + 25.0f;
	for (u8 i = 0; i < 4; i++) {
		JGeometry::TVec2<s16>* color = pane->_112;
		mTexCoords2[i]               = color[i];
		mTexCoords1[i]               = mTexCoords2[i];
	}
	reset();
}

/*
 * --INFO--
 * Address:	80344500
 * Size:	000A88
 */
bool TDayEndCount::doUpdate()
{
	if (mIsSection) {
		mDispMember->mCurrSunRatio += 0.0001f;
		if (1.0f < mDispMember->mCurrSunRatio) {
			mDispMember->mCurrSunRatio = mDispMember->mDuration;
		}
		if (mDispMember->mCurrSunRatio < mDispMember->mDuration) {
			mDispMember->mCurrSunRatio = mDispMember->mDuration;
		}
	}

	f32 calc = (1.0f - mDispMember->mCurrSunRatio) / (1.0f - mDispMember->mDuration);
	if (mIsSection || calc > 0.01f) {
		return true;
	}

	calc *= 10.0f;
	if (calc > 10.0f) {
		reset();
		return false;
	}

	f32 calc2 = calc * 1.1f;
	if (calc2 >= 11.0f) {
		calc2 = 11.0f;
	}
	if (calc2 < 0.0f) {
		calc2 = 0.0f;
	}
	int id = calc2;
	if (id > 9)
		id = 10;
	int i = id;
	if (mCurrNumberValue != i) {
		while (i + 1 < COUNTDOWN_NUMBERS) {
			J2DPane* pane = mScreenObj->search(deTagName[i]);
			P2ASSERTLINE(164, pane);
			pane->hide();
			i++;
		}
		mCurrNumberValue = i;
		mCurrNumberPane  = static_cast<J2DPicture*>(mScreenObj->search(deTagName[i]));
		P2ASSERTLINE(172, mCurrNumberPane);
		mCurrNumberPane->show();
		mDoPlaySE = true;
	}

	f32 scale = 1.0f;
	f32 calc3 = 1.0f - (calc2 - id);
	if (calc3 > 0.3f) {
		if (calc3 > 0.7f) {
			mCurrNumberPane->setOffset(mNumberPanePos.x, mNumberPanePos.y + mOffsetY);
			scale = calc3 * 3.33333f + -1.333333f;
		} else {
			mCurrNumberPane->setOffset(mNumberPanePos.x, mNumberPanePos.y + mOffsetY);
		}
	} else {
		u32 alpha = mCurrNumberPane->getAlpha();
		scale     = mCurrNumberPane->mScale.x;
		if (mMode) {
			mCurrNumberPane->add((mNumberPanePos.x - mCurrNumberPane->mOffset.x) * scale,
			                     (mNumberPanePos.y - mCurrNumberPane->mOffset.y) * scale + mOffsetY);
		} else {
			mCurrNumberPane->setOffset(mNumberPanePos.x, mNumberPanePos.y + mOffsetY);
		}
	}

	if (scale == 1.0f && mSoundEnabled && mDoPlaySE) {
		P2ASSERTLINE(228, PSSystem::spSysIF);
		PSSystem::spSysIF->playSystemSe(PSSE_SY_DAYEND_COUNTDOWN, 0);
		mDoPlaySE = false;
	}

	if (mMode) {
		u8 alpha = mFadeFraction * mWaitAlpha;
		for (int i = 0; i < mCurrNumberValue; i++) {
			mNumberPaneList[i]->setAlpha(alpha);
		}
	}
	mScreenObj->scaleScreen(mScale);
	if (mIsChallenge || mTestChangeColor) {
		mCurrNumberPane->setWhite(mNumberColor);
	}

	mScreenObj->update();
	return false;

	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stmw     r24, 0xe0(r1)
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	mr       r28, r3
	cmplwi   r0, 0
	beq      lbl_80344578
	lwz      r3, 0x7c(r28)
	lfs      f1, lbl_8051E208@sda21(r2)
	lfs      f2, 8(r3)
	lfs      f0, lbl_8051E1F8@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 8(r3)
	lwz      r3, 0x7c(r28)
	lfs      f1, 8(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80344560
	lfs      f0, 0xc(r3)
	stfs     f0, 8(r3)

lbl_80344560:
	lwz      r3, 0x7c(r28)
	lfs      f0, 8(r3)
	lfs      f1, 0xc(r3)
	fcmpo    cr0, f0, f1
	bge      lbl_80344578
	stfs     f1, 8(r3)

lbl_80344578:
	lwz      r3, 0x7c(r28)
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	lfs      f2, lbl_8051E1F8@sda21(r2)
	lfs      f1, 8(r3)
	cmplwi   r0, 0
	lfs      f0, 0xc(r3)
	fsubs    f1, f2, f1
	fsubs    f0, f2, f0
	fdivs    f1, f1, f0
	bne      lbl_803445B4
	lfs      f0, lbl_8051E20C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803445B4
	li       r3, 1
	b        lbl_80344F64

lbl_803445B4:
	lfs      f0, lbl_8051E210@sda21(r2)
	fmuls    f2, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_803445D8
	mr       r3, r28
	bl       reset__Q28Morimura12TDayEndCountFv
	li       r3, 0
	b        lbl_80344F64

lbl_803445D8:
	lfs      f1, lbl_8051E214@sda21(r2)
	lfs      f0, lbl_8051E218@sda21(r2)
	fmuls    f30, f2, f1
	fcmpo    cr0, f30, f0
	cror     2, 1, 2
	bne      lbl_803445F4
	fmr      f30, f0

lbl_803445F4:
	lfs      f0, lbl_8051E1FC@sda21(r2)
	fcmpo    cr0, f30, f0
	cror     2, 0, 2
	bne      lbl_80344608
	fmr      f30, f0

lbl_80344608:
	fctiwz   f0, f30
	stfd     f0, 0x30(r1)
	lwz      r31, 0x34(r1)
	cmpwi    r31, 0xa
	blt      lbl_80344620
	li       r31, 0xa

lbl_80344620:
	lwz      r0, 0x90(r28)
	cmpw     r0, r31
	beq      lbl_8034470C
	addi     r24, r31, 1
	lis      r5, deTagName__8Morimura@ha
	lis      r4, lbl_8049020C@ha
	lis      r3, lbl_8049021C@ha
	slwi     r6, r24, 2
	addi     r0, r5, deTagName__8Morimura@l
	add      r25, r0, r6
	addi     r27, r4, lbl_8049020C@l
	addi     r30, r3, lbl_8049021C@l
	li       r29, 0
	b        lbl_8034469C

lbl_80344658:
	lwz      r3, 0x80(r28)
	li       r5, 0
	lwz      r6, 0(r25)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r26, r3, r3
	bne      lbl_80344690
	mr       r3, r27
	mr       r5, r30
	li       r4, 0xa4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80344690:
	stb      r29, 0xb0(r26)
	addi     r25, r25, 4
	addi     r24, r24, 1

lbl_8034469C:
	cmpwi    r24, 0xb
	blt      lbl_80344658
	stw      r31, 0x90(r28)
	lis      r4, deTagName__8Morimura@ha
	slwi     r0, r31, 2
	li       r5, 0
	lwz      r3, 0x80(r28)
	addi     r4, r4, deTagName__8Morimura@l
	lwzx     r6, r4, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x84(r28)
	lwz      r0, 0x84(r28)
	cmplwi   r0, 0
	bne      lbl_803446FC
	lis      r3, lbl_8049020C@ha
	lis      r5, lbl_8049021C@ha
	addi     r3, r3, lbl_8049020C@l
	li       r4, 0xac
	addi     r5, r5, lbl_8049021C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803446FC:
	lwz      r3, 0x84(r28)
	li       r0, 1
	stb      r0, 0xb0(r3)
	stb      r0, 0xc8(r28)

lbl_8034470C:
	xoris    r3, r31, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	lfd      f1, lbl_8051E238@sda21(r2)
	stw      r0, 0x30(r1)
	lfs      f4, lbl_8051E1F8@sda21(r2)
	lfd      f0, 0x30(r1)
	lfs      f5, mWaitTime__Q28Morimura12TDayEndCount@sda21(r13)
	fsubs    f3, f0, f1
	lfs      f2, lbl_8051E21C@sda21(r2)
	fsubs    f1, f4, f5
	lbz      r30, mAlphaMax__Q28Morimura12TDayEndCount@sda21(r13)
	fadds    f0, f4, f5
	lfs      f31, mStopScale__Q28Morimura12TDayEndCount@sda21(r13)
	fsubs    f3, f30, f3
	lfs      f8, mScaleMax__Q28Morimura12TDayEndCount@sda21(r13)
	fmuls    f5, f2, f1
	fmuls    f0, f2, f0
	fsubs    f7, f4, f3
	fcmpo    cr0, f7, f5
	bge      lbl_80344830
	stw      r30, 0x34(r1)
	lwz      r3, 0x84(r28)
	stw      r0, 0x30(r1)
	lfd      f1, lbl_8051E240@sda21(r2)
	lfd      f0, 0x30(r1)
	lbz      r4, 0xb2(r3)
	fsubs    f0, f0, f1
	mr       r30, r4
	fdivs    f0, f0, f5
	fmuls    f0, f7, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r5, 0x3c(r1)
	clrlwi   r0, r5, 0x18
	cmplw    r0, r4
	ble      lbl_803447A4
	mr       r30, r5

lbl_803447A4:
	fdivs    f0, f31, f5
	lfs      f1, 0xcc(r3)
	fmuls    f0, f7, f0
	fmr      f31, f1
	fcmpo    cr0, f0, f1
	ble      lbl_803447C0
	fmr      f31, f0

lbl_803447C0:
	lbz      r0, 0x94(r28)
	cmplwi   r0, 0
	beq      lbl_80344804
	lfs      f1, 0xb8(r28)
	lfs      f0, 0xd4(r3)
	lfs      f2, 0xbc(r28)
	fsubs    f3, f1, f0
	lfs      f1, 0xd8(r3)
	lwz      r12, 0(r3)
	fsubs    f2, f2, f1
	lfs      f0, 0xd0(r28)
	lwz      r12, 0x14(r12)
	fmuls    f1, f3, f31
	fmadds   f2, f2, f31, f0
	mtctr    r12
	bctrl
	b        lbl_803448D8

lbl_80344804:
	lfs      f2, 0xbc(r28)
	lfs      f1, 0xd0(r28)
	lfs      f0, 0xb8(r28)
	fadds    f1, f2, f1
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_803448D8

lbl_80344830:
	fcmpo    cr0, f7, f0
	ble      lbl_803448AC
	stw      r30, 0x3c(r1)
	fsubs    f3, f4, f0
	fsubs    f1, f31, f8
	lfd      f5, lbl_8051E240@sda21(r2)
	fsubs    f0, f0, f4
	stw      r0, 0x38(r1)
	lfs      f2, 0xbc(r28)
	lfd      f4, 0x38(r1)
	fdivs    f6, f1, f0
	lfs      f1, 0xd0(r28)
	lwz      r3, 0x84(r28)
	lfs      f0, 0xb8(r28)
	stfs     f0, 0xd4(r3)
	fadds    f1, f2, f1
	fsubs    f4, f4, f5
	fsubs    f0, f8, f6
	stfs     f1, 0xd8(r3)
	fdivs    f2, f4, f3
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	fneg     f1, f2
	fmadds   f31, f6, f7, f0
	fmadds   f0, f1, f7, f2
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r30, 0x34(r1)
	mtctr    r12
	bctrl
	b        lbl_803448D8

lbl_803448AC:
	lfs      f2, 0xbc(r28)
	lfs      f1, 0xd0(r28)
	lwz      r3, 0x84(r28)
	lfs      f0, 0xb8(r28)
	fadds    f1, f2, f1
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_803448D8:
	lfs      f0, lbl_8051E1F8@sda21(r2)
	fcmpu    cr0, f0, f31
	bne      lbl_8034493C
	lbz      r0, 0xc9(r28)
	cmplwi   r0, 0
	beq      lbl_8034493C
	lbz      r0, 0xc8(r28)
	cmplwi   r0, 0
	beq      lbl_8034493C
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80344924
	lis      r3, lbl_8049020C@ha
	lis      r5, lbl_8049021C@ha
	addi     r3, r3, lbl_8049020C@l
	li       r4, 0xe4
	addi     r5, r5, lbl_8049021C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80344924:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1818
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	li       r0, 0
	stb      r0, 0xc8(r28)

lbl_8034493C:
	cmpwi    r31, 0
	mr       r29, r30
	blt      lbl_80344958
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 0x64
	bgt      lbl_80344958
	li       r29, 0x64

lbl_80344958:
	lbz      r0, mAlphaMax__Q28Morimura12TDayEndCount@sda21(r13)
	clrlwi   r3, r30, 0x18
	li       r4, -1
	cmplw    r3, r0
	stw      r4, 0x28(r1)
	bge      lbl_80344AE4
	lbz      r0, mColorTest__Q28Morimura12TDayEndCount@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80344AE4
	cmpwi    r31, 3
	bgt      lbl_803449A4
	li       r5, 0xff
	li       r4, 0x64
	addi     r3, r13, mColor__Q28Morimura12TDayEndCount@sda21
	li       r0, 0
	stb      r5, mColor__Q28Morimura12TDayEndCount@sda21(r13)
	stb      r4, 1(r3)
	stb      r0, 2(r3)
	b        lbl_803449DC

lbl_803449A4:
	cmpwi    r31, 6
	bgt      lbl_803449C8
	li       r4, 0xff
	addi     r3, r13, mColor__Q28Morimura12TDayEndCount@sda21
	li       r0, 0
	stb      r4, mColor__Q28Morimura12TDayEndCount@sda21(r13)
	stb      r4, 1(r3)
	stb      r0, 2(r3)
	b        lbl_803449DC

lbl_803449C8:
	li       r0, 0xff
	addi     r3, r13, mColor__Q28Morimura12TDayEndCount@sda21
	stb      r0, mColor__Q28Morimura12TDayEndCount@sda21(r13)
	stb      r0, 1(r3)
	stb      r0, 2(r3)

lbl_803449DC:
	lis      r7, 0x4330
	clrlwi   r0, r29, 0x18
	stw      r0, 0x3c(r1)
	addi     r3, r13, mColor__Q28Morimura12TDayEndCount@sda21
	lbz      r6, mColor__Q28Morimura12TDayEndCount@sda21(r13)
	li       r0, 0xff
	stw      r7, 0x38(r1)
	addi     r4, r1, 0x1c
	lfd      f5, lbl_8051E240@sda21(r2)
	lfd      f1, 0x38(r1)
	lfs      f0, lbl_8051E220@sda21(r2)
	fsubs    f2, f1, f5
	lbz      r5, 1(r3)
	lbz      r3, 2(r3)
	lfs      f1, lbl_8051E1F8@sda21(r2)
	fdivs    f2, f2, f0
	stw      r6, 0x34(r1)
	lfs      f3, lbl_8051E224@sda21(r2)
	stw      r7, 0x30(r1)
	lfd      f0, 0x30(r1)
	stw      r5, 0x4c(r1)
	fsubs    f6, f2, f1
	stw      r7, 0x48(r1)
	fsubs    f4, f0, f5
	lfd      f0, 0x48(r1)
	fsubs    f2, f1, f6
	stw      r3, 0x5c(r1)
	fsubs    f1, f0, f5
	stw      r7, 0x58(r1)
	fmuls    f3, f3, f2
	lfd      f0, 0x58(r1)
	stb      r0, 0x27(r1)
	fsubs    f0, f0, f5
	fmadds   f2, f4, f6, f3
	fmadds   f1, f1, f6, f3
	fmadds   f0, f0, f6, f3
	fctiwz   f2, f2
	fctiwz   f1, f1
	fctiwz   f0, f0
	stfd     f2, 0x40(r1)
	stfd     f1, 0x50(r1)
	lwz      r5, 0x44(r1)
	stfd     f0, 0x60(r1)
	lwz      r3, 0x54(r1)
	lwz      r0, 0x64(r1)
	stb      r5, 0x24(r1)
	stb      r3, 0x25(r1)
	stb      r0, 0x26(r1)
	lwz      r0, 0x24(r1)
	stw      r0, 0x20(r1)
	lbz      r6, 0x20(r1)
	lbz      r5, 0x21(r1)
	lbz      r3, 0x22(r1)
	lbz      r0, 0x23(r1)
	stb      r6, 0x28(r1)
	stb      r5, 0x29(r1)
	stb      r3, 0x2a(r1)
	stb      r0, 0x2b(r1)
	lwz      r0, 0x28(r1)
	stw      r0, 0x1c(r1)
	lwz      r3, 0x8c(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl
	b        lbl_80344B2C

lbl_80344AE4:
	lwz      r0, mColor__Q28Morimura12TDayEndCount@sda21(r13)
	addi     r4, r1, 0x14
	stw      r0, 0x18(r1)
	lbz      r6, 0x18(r1)
	lbz      r5, 0x19(r1)
	lbz      r3, 0x1a(r1)
	lbz      r0, 0x1b(r1)
	stb      r6, 0x28(r1)
	stb      r5, 0x29(r1)
	stb      r3, 0x2a(r1)
	stb      r0, 0x2b(r1)
	lwz      r0, 0x28(r1)
	stw      r0, 0x14(r1)
	lwz      r3, 0x8c(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl

lbl_80344B2C:
	lis      r3, 0x4330
	clrlwi   r0, r30, 0x18
	stw      r0, 0x64(r1)
	lbz      r0, mAlphaMax__Q28Morimura12TDayEndCount@sda21(r13)
	stw      r3, 0x60(r1)
	lfd      f3, lbl_8051E240@sda21(r2)
	lfd      f0, 0x60(r1)
	stw      r0, 0x5c(r1)
	fsubs    f2, f0, f3
	lfs      f4, lbl_8051E228@sda21(r2)
	stw      r3, 0x58(r1)
	lfs      f0, lbl_8051E1FC@sda21(r2)
	lfd      f1, 0x58(r1)
	fmuls    f2, f4, f2
	lwz      r3, 0x84(r28)
	fsubs    f1, f1, f3
	fdivs    f2, f2, f1
	fcmpo    cr0, f2, f0
	bge      lbl_80344BA4
	lfs      f0, lbl_8051E22C@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_80344BC8

lbl_80344BA4:
	lfs      f0, lbl_8051E230@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_80344BC8:
	lfs      f0, lbl_8051E1FC@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_80344BD8
	fneg     f2, f2

lbl_80344BD8:
	lfs      f0, lbl_8051E230@sda21(r2)
	lis      r5, 0x4330
	lha      r0, 0xa6(r28)
	lis      r4, sincosTable___5JMath@ha
	fmuls    f0, f2, f0
	lfs      f4, lbl_8051E234@sda21(r2)
	xoris    r0, r0, 0x8000
	lha      r6, 0xa8(r28)
	stw      r0, 0x6c(r1)
	fmuls    f1, f4, f1
	fctiwz   f3, f0
	stw      r5, 0x68(r1)
	xoris    r6, r6, 0x8000
	lfd      f0, lbl_8051E238@sda21(r2)
	lfd      f2, 0x68(r1)
	addi     r4, r4, sincosTable___5JMath@l
	stfd     f3, 0x38(r1)
	fsubs    f2, f2, f0
	lwz      r0, 0x3c(r1)
	fsubs    f2, f2, f1
	stw      r6, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	stw      r5, 0x40(r1)
	add      r4, r4, r0
	lfs      f3, 4(r4)
	fctiwz   f2, f2
	lfd      f5, 0x40(r1)
	fmuls    f4, f4, f3
	stw      r5, 0x88(r1)
	fsubs    f3, f5, f0
	stfd     f2, 0x70(r1)
	fsubs    f2, f3, f4
	lwz      r0, 0x74(r1)
	stw      r5, 0x78(r1)
	fctiwz   f2, f2
	sth      r0, 0x96(r28)
	stw      r5, 0xa8(r1)
	stfd     f2, 0x30(r1)
	lwz      r0, 0x34(r1)
	stw      r5, 0x98(r1)
	sth      r0, 0x98(r28)
	lha      r0, 0xaa(r28)
	lha      r4, 0xac(r28)
	xoris    r0, r0, 0x8000
	stw      r5, 0xb8(r1)
	xoris    r4, r4, 0x8000
	stw      r0, 0x8c(r1)
	stw      r4, 0x7c(r1)
	lfd      f2, 0x88(r1)
	lfd      f3, 0x78(r1)
	fsubs    f2, f2, f0
	fsubs    f3, f3, f0
	fadds    f2, f2, f1
	fsubs    f3, f3, f4
	fctiwz   f2, f2
	fctiwz   f3, f3
	stfd     f2, 0x90(r1)
	lwz      r0, 0x94(r1)
	stfd     f3, 0x80(r1)
	lwz      r4, 0x84(r1)
	sth      r0, 0x9a(r28)
	sth      r4, 0x9c(r28)
	lha      r0, 0xae(r28)
	lha      r4, 0xb0(r28)
	xoris    r0, r0, 0x8000
	stw      r0, 0xac(r1)
	xoris    r0, r4, 0x8000
	stw      r0, 0x9c(r1)
	lfd      f2, 0xa8(r1)
	lfd      f3, 0x98(r1)
	fsubs    f2, f2, f0
	fsubs    f3, f3, f0
	fadds    f2, f2, f1
	fadds    f3, f3, f4
	fctiwz   f2, f2
	fctiwz   f3, f3
	stfd     f2, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	stfd     f3, 0xa0(r1)
	lwz      r4, 0xa4(r1)
	sth      r0, 0x9e(r28)
	sth      r4, 0xa0(r28)
	lha      r0, 0xb4(r28)
	xoris    r0, r0, 0x8000
	stw      r0, 0xbc(r1)
	lfd      f2, 0xb8(r1)
	fsubs    f2, f2, f0
	fadds    f2, f2, f4
	fctiwz   f2, f2
	stfd     f2, 0xc0(r1)
	lwz      r6, 0xc4(r1)
	lha      r0, 0xb2(r28)
	addi     r4, r28, 0x96
	stw      r5, 0xc8(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0xcc(r1)
	lfd      f2, 0xc8(r1)
	fsubs    f0, f2, f0
	fsubs    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	sth      r0, 0xa2(r28)
	sth      r6, 0xa4(r28)
	bl       "setTexCoord__10J2DPictureFPCQ29JGeometry8TVec2<s>"
	lbz      r0, 0x94(r28)
	cmplwi   r0, 0
	beq      lbl_80344DF4
	lbz      r3, mWaitAlpha__Q28Morimura12TDayEndCount@sda21(r13)
	lis      r0, 0x4330
	stw      r0, 0xd0(r1)
	li       r26, 0
	lfd      f2, lbl_8051E240@sda21(r2)
	li       r25, 0
	stw      r3, 0xd4(r1)
	lfs      f0, 0x40(r28)
	lfd      f1, 0xd0(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0xc8(r1)
	lwz      r24, 0xcc(r1)
	b        lbl_80344DE8

lbl_80344DC4:
	lwz      r3, 0x88(r28)
	mr       r4, r24
	lwzx     r3, r3, r25
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r25, r25, 4
	addi     r26, r26, 1

lbl_80344DE8:
	lwz      r0, 0x90(r28)
	cmpw     r26, r0
	blt      lbl_80344DC4

lbl_80344DF4:
	lfs      f2, 0xcc(r28)
	lfs      f1, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f0, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fmuls    f1, f2, f1
	lwz      r3, 0x80(r28)
	fmuls    f0, f2, f0
	stfs     f1, 0x138(r3)
	stfs     f0, 0x13c(r3)
	lbz      r0, 0xca(r28)
	cmplwi   r0, 0
	bne      lbl_80344E2C
	lbz      r0, mTestChangeColor__Q28Morimura12TDayEndCount@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80344E74

lbl_80344E2C:
	lwz      r0, mNumberColor__Q28Morimura12TDayEndCount@sda21(r13)
	addi     r4, r1, 0x10
	stw      r0, 8(r1)
	lbz      r6, 8(r1)
	lbz      r5, 9(r1)
	lbz      r3, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r6, 0xc(r1)
	stb      r5, 0xd(r1)
	stb      r3, 0xe(r1)
	stb      r0, 0xf(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 0x10(r1)
	lwz      r3, 0x84(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl

lbl_80344E74:
	clrlwi   r3, r30, 0x18
	lis      r0, 0x4330
	stw      r3, 0xd4(r1)
	lwz      r3, 0x84(r28)
	stw      r0, 0xd0(r1)
	lfd      f2, lbl_8051E240@sda21(r2)
	lfd      f1, 0xd0(r1)
	lfs      f0, 0x40(r28)
	fsubs    f1, f1, f2
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0xc8(r1)
	lwz      r4, 0xcc(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0xcc(r28)
	lwz      r3, 0x84(r28)
	fmuls    f0, f31, f0
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc4(r28)
	lfs      f1, 0xd0(r28)
	lwz      r3, 0x8c(r28)
	lfs      f0, 0xc0(r28)
	fadds    f1, f2, f1
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	clrlwi   r3, r29, 0x18
	lis      r0, 0x4330
	stw      r3, 0xc4(r1)
	lwz      r3, 0x8c(r28)
	stw      r0, 0xc0(r1)
	lfd      f2, lbl_8051E240@sda21(r2)
	lfd      f1, 0xc0(r1)
	lfs      f0, 0x40(r28)
	fsubs    f1, f1, f2
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r4, 0xbc(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x80(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r3, 0

lbl_80344F64:
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	lmw      r24, 0xe0(r1)
	lwz      r0, 0x124(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	80344F88
 * Size:	000078
 */
void TDayEndCount::doDraw(Graphics& gfx)
{
	if (mDispMember->mCurrSunRatio <= mDispMember->mDuration) {
		gfx.mPerspGraph.setPort();
		mScreenObj->draw(gfx, gfx.mPerspGraph);
	}
}

/*
 * --INFO--
 * Address:	80345000
 * Size:	000414
 */
void TDayEndCount::reset()
{
	mColor.set(255, 255, 255, 255);

	mTextPane->setWhite(mColor);
	mTextPane->setAlpha(0);
	J2DPane* pane = mScreenObj->search('cd10');
	P2ASSERTLINE(359, pane);
	if (mMode) {
		pane->updateScale(mWaitScale);
		pane->setAlpha(0);
	} else {
		pane->updateScale(0.0f);
		pane->setAlpha(0);
	}

	for (int i = 0; i < 10; i++) {
		f32 pos       = (TAU * (36.0f * i)) / 360.0f;
		J2DPane* pane = mScreenObj->search(deTagName[i]);
		P2ASSERTLINE(374, pane);
		if (mMode) {
			pane->setBasePosition(J2DPOS_Center);
			pane->setOffset(pikmin2_sinf(pos) * 80.0f + mNumberPanePos.x, -(pikmin2_cosf(pos) * 80.0f - mNumberPanePos.y));
			pane->show();
			pane->updateScale(mWaitScale * mScale);
			pane->setAlpha(0);
		} else {
			pane->setOffset(mNumberPanePos.x, mNumberPanePos.y);
			pane->hide();
			pane->updateScale(0.0f);
			pane->setAlpha(0);
		}
	}
	mCurrNumberPane = static_cast<J2DPicture*>(pane);

	mTexCoords1[0] = mTexCoords2[0];
	mTexCoords1[1] = mTexCoords2[1];
	mTexCoords1[2] = mTexCoords2[2];
	mTexCoords1[3] = mTexCoords2[3];
	mDoPlaySE      = true;
}

/*
 * --INFO--
 * Address:	80345414
 * Size:	000104
 */
TChallengeEndCount::TChallengeEndCount()
{
	mName        = "challengeEndCount";
	mIsChallenge = true;
}

/*
 * --INFO--
 * Address:	803455DC
 * Size:	000040
 */
void TChallengeEndCount::doCreate(JKRArchive* arc)
{
	TDayEndCount::doCreate(arc);
	mAlphaMax = 128;
	mTextPane->hide();
}

/*
 * --INFO--
 * Address:	8034561C
 * Size:	00013C
 */
TChallengeEndCount1p::TChallengeEndCount1p()
{
	mName    = "challengeEndCount1p";
	mScale   = m2pScale;
	mOffsetY = -m2pOffsetY;
}

/*
 * --INFO--
 * Address:	80345834
 * Size:	000034
 */
bool TChallengeEndCount1p::doUpdate()
{
	mScale   = m2pScale;
	mOffsetY = -m2pOffsetY;
	TDayEndCount::doUpdate();
}

/*
 * --INFO--
 * Address:	80345868
 * Size:	00013C
 */
TChallengeEndCount2p::TChallengeEndCount2p()
{
	mName         = "challengeEndCount2p";
	mScale        = m2pScale;
	mOffsetY      = m2pOffsetY;
	mSoundEnabled = false;
}

/*
 * --INFO--
 * Address:	803459A4
 * Size:	000030
 */
bool TChallengeEndCount2p::doUpdate()
{
	mScale   = m2pScale;
	mOffsetY = m2pOffsetY;
	TDayEndCount::doUpdate();
}

/*
 * --INFO--
 * Address:	803459D4
 * Size:	00048C
 */
void TCountDownScene::doCreateObj(JKRArchive* arc)
{
	switch (TDayEndCount::mCountDownType) {
	case 0: {
		TDayEndCount* scene = new TDayEndCount;
		registObj(scene, arc);
		mObject = scene;
		break;
	}
	case 1: {
		TChallengeEndCount* scene = new TChallengeEndCount;
		registObj(scene, arc);
		mObject = scene;
		break;
	}
	case 2: {
		TChallengeEndCount1p* scene = new TChallengeEndCount1p;
		registObj(scene, arc);
		mObject = scene;

		mChallengeEndCount2p = new TChallengeEndCount2p;
		registObj(mChallengeEndCount2p, arc);
		break;
	}
	}
}

/*
 * --INFO--
 * Address:	80345E60
 * Size:	000064
 */
bool TCountDownScene::doStart(Screen::StartSceneArg* arg)
{
	if (Screen::SceneBase::doStart(arg) && mChallengeEndCount2p) {
		return mChallengeEndCount2p->start(arg);
	}
}

/*
 * --INFO--
 * Address:	80345F64
 * Size:	00000C
 */
void TTestBase::doUpdateFadeinFinish() { mCanInput = true; }

}; // namespace Morimura
