#include "og/newScreen/Floor.h"
#include "JSystem/J3D/J3DSys.h"
#include "og/newScreen/TitleMsg.h"
#include "og/Screen/AlphaMgr.h"
#include "og/Screen/anime.h"
#include "og/Screen/callbackNodes.h"
#include "System.h"
#include "TParticle2dMgr.h"
#include "Dolphin/rand.h"
#include "trig.h"

namespace og {
namespace newScreen {

u64 vsRuleMsgId[6] = {
	'2021_00', // "An advisory: You can't carry your own Gyro Block."
	'2022_00', // "An advisory: Pikmin lost to opposing Pikmin will become seeds."
	'2023_00', // "An advisory: Roulette creatures vanish when you defeat them."
	'2024_00', // "An advisory: Use your sprays wisely to turn the tide of battle!"
	'2025_00', // "An advisory: You can't pluck, throw, or spray while engaging enemy Pikmin."
	'2026_00'  // "An advisory: Get a clover for one roulette spin. You can store up to four."
};

/**
 * __ct
 * @note Address: 0x8031A3C8
 * @note Size: 0xE8
 */
ObjFloor::ObjFloor(const char* name)
    : mFadeLevel(0.0f)
    , mAlpha(0.0f)
{
	mName         = name;
	mDisp         = nullptr;
	mScreenName   = nullptr;
	mScreenFont   = nullptr;
	mSublevelPane = nullptr;
	mTimer        = msVal.mFinishWaitTime;
	mDoFadeout    = false;
	mColor.set(0, 0, 0, 255);
	mDoEnd            = 0;
	mBackgroundAlpha  = 0.0f;
	mSublevelXoffs    = 0.0f;
	mSublevelYoffs    = 0.0f;
	mCounterFloor     = nullptr;
	mAnims            = nullptr;
	mScreenRules      = nullptr;
	mRuleMesgPane     = nullptr;
	mIsButtonShown    = false;
	mButtonPane       = nullptr;
	mLoadingPane      = nullptr;
	mButtonAlphaTimer = 1.0f;
	sprintf(mTextTag, "");
}

/**
 * @note Address: 0x8031A4B0
 * @note Size: 0xAC
 */
ObjFloor::~ObjFloor() { }

/**
 * @note Address: N/A
 * @note Size: 0x90
 * True if caveID is a story cave, false otherwise
 */
bool newScreen::ObjFloor::isFLOOR()
{
	bool ret = false;
	switch (mDisp->mCaveID) {
	case 't_01':
	case 't_02':
	case 't_03':
	case 'f_01':
	case 'f_02':
	case 'f_03':
	case 'f_04':
	case 'y_01':
	case 'y_02':
	case 'y_03':
	case 'y_04':
	case 'l_01':
	case 'l_02':
	case 'l_03':
		ret = true;
	}
	return ret;
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 * True if caveID is a Challenge Mode level, false otherwise
 */
bool newScreen::ObjFloor::isCHALLENGE()
{
	bool ret = false;
	switch (mDisp->mCaveID) {
	case 'c_00':
	case 'c_01':
	case 'c_02':
	case 'c_03':
	case 'c_04':
	case 'c_05':
	case 'c_06':
	case 'c_07':
	case 'c_08':
	case 'c_09':
	case 'c_10':
	case 'c_11':
	case 'c_12':
	case 'c_13':
	case 'c_14':
	case 'c_15':
	case 'c_16':
	case 'c_17':
	case 'c_18':
	case 'c_19':
	case 'c_20':
	case 'c_21':
	case 'c_22':
	case 'c_23':
	case 'c_24':
	case 'c_25':
	case 'c_26':
	case 'c_27':
	case 'c_28':
	case 'c_29':
	case '_uni':
		ret = true;
	}
	return ret;
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 * True if caveID is a VS stage, false otherwise
 */
inline bool newScreen::ObjFloor::isVS()
{
	bool ret = false;
	switch (mDisp->mCaveID) {
	case 'vs00':
	case 'vs01':
	case 'vs02':
	case 'vs03':
	case 'vs04':
	case 'vs05':
	case 'vs06':
	case 'vs07':
	case 'vs08':
	case 'vs09':
		ret = true;
	}
	return ret;
}

/**
 * @note Address: 0x8031A55C
 * @note Size: 0x460
 */
void ObjFloor::setCaveMsgID(u32 caveid, char* buffer)
{
	char* cave_msg;
	switch (caveid) {
	case 't_01':              // tutorial
		cave_msg = "8395_00"; // "Emergence Cave"
		break;
	case 't_02':
		cave_msg = "8399_00"; // "Subterranean Complex"
		break;
	case 't_03':
		cave_msg = "8400_00"; // "Frontier Cavern"
		break;
	case 'f_01':              // forest
		cave_msg = "8396_00"; // "Hole of Beasts"
		break;
	case 'f_02':
		cave_msg = "8398_00"; // "White Flower Garden"
		break;
	case 'f_03':
		cave_msg = "8401_00"; // "Bulblax Kingdom"
		break;
	case 'f_04':
		cave_msg = "8410_00"; // "Snagret Hole"
		break;
	case 'y_01':              // yakushima
		cave_msg = "8397_00"; // "Citadel of Spiders"
		break;
	case 'y_02':
		cave_msg = "8402_00"; // "Glutton's Kitchen"
		break;
	case 'y_03':
		cave_msg = "8403_00"; // "Shower Room"
		break;
	case 'y_04':
		cave_msg = "8411_00"; // "Submerged Castle"
		break;
	case 'l_01':              // last
		cave_msg = "8412_00"; // "Cavern of Chaos"
		break;
	case 'l_02':
		cave_msg = "8413_00"; // "Hole of Heroes"
		break;
	case 'l_03':
		cave_msg = "8414_00"; // "Dream Den"
		break;
	case 'c_00':              // challenge mode stages
		cave_msg = "4900_00"; // "Explorer's Cave"
		break;
	case 'c_01':
		cave_msg = "4901_00"; // "Brawny Abyss"
		break;
	case 'c_02':
		cave_msg = "4902_00"; // "Concrete Maze"
		break;
	case 'c_03':
		cave_msg = "4903_00"; // "Creator's Garden"
		break;
	case 'c_04':
		cave_msg = "4904_00"; // "The Giant's Bath"
		break;
	case 'c_05':
		cave_msg = "4905_00"; // "Lost Toy Box"
		break;
	case 'c_06':
		cave_msg = "4906_00"; // "Twilight Garden"
		break;
	case 'c_07':
		cave_msg = "4907_00"; // "Cavernous Abyss"
		break;
	case 'c_08':
		cave_msg = "4908_00"; // "Secret Testing Range"
		break;
	case 'c_09':
		cave_msg = "4909_00"; // "Emperor's Realm"
		break;
	case 'c_10':
		cave_msg = "4910_00"; // "Cryptic Cavern"
		break;
	case 'c_11':
		cave_msg = "4911_00"; // "Red Chasm"
		break;
	case 'c_12':
		cave_msg = "4912_00"; // "Collector's Room"
		break;
	case 'c_13':
		cave_msg = "4913_00"; // "Hidden Garden"
		break;
	case 'c_14':
		cave_msg = "4914_00"; // "Trampled Garden"
		break;
	case 'c_15':
		cave_msg = "4915_00"; // "Hot House"
		break;
	case 'c_16':
		cave_msg = "4916_00"; // "Breeding Ground"
		break;
	case 'c_17':
		cave_msg = "4917_00"; // "Green Hole"
		break;
	case 'c_18':
		cave_msg = "4918_00"; // "Hazard Training"
		break;
	case 'c_19':
		cave_msg = "4919_00"; // "Three Color Training"
		break;
	case 'c_20':
		cave_msg = "4920_00"; // "Novice Training"
		break;
	case 'c_21':
		cave_msg = "4921_00"; // "Snack Pit"
		break;
	case 'c_22':
		cave_msg = "4922_00"; // "Sniper Room"
		break;
	case 'c_23':
		cave_msg = "4923_00"; // "Dweevil Nest"
		break;
	case 'c_24':
		cave_msg = "4924_00"; // "Cave of Snarls"
		break;
	case 'c_25':
		cave_msg = "4925_00"; // "Abduction Den"
		break;
	case 'c_26':
		cave_msg = "4926_00"; // "Bully Den"
		break;
	case 'c_27':
		cave_msg = "4927_00"; // "Subterranean Lair"
		break;
	case 'c_28':
		cave_msg = "4928_00"; // "Cave of Pain"
		break;
	case 'c_29':
		cave_msg = "4929_00"; // "Rumbling Grotto"
		break;
	case 'vs00':              // versus stages
		cave_msg = "4770_00"; // "Battle Field"
		break;
	case 'vs01':
		cave_msg = "4771_00"; // "Colosseum"
		break;
	case 'vs02':
		cave_msg = "4772_00"; // "Carpet Plain"
		break;
	case 'vs03':
		cave_msg = "4773_00"; // "Hostile Territory"
		break;
	case 'vs04':
		cave_msg = "4774_00"; // "War Path"
		break;
	case 'vs05':
		cave_msg = "4775_00"; // "Rusty Gulch"
		break;
	case 'vs06':
		cave_msg = "4776_00"; // "Brawl Yard"
		break;
	case 'vs07':
		cave_msg = "4777_00"; // "Angle Maze"
		break;
	case 'vs08':
		cave_msg = "4778_00"; // "Dim Labyrinth"
		break;
	case 'vs09':
		cave_msg = "4779_00"; // "Tile Lands"
		break;
	case '_uni':              // test id
		cave_msg = "9996_00"; // "Test Message 9996"
		break;
	default:
		cave_msg = "8395_00"; // "Emergence Cave"
	}
	sprintf(buffer, "%s", cave_msg);
}

/**
 * @note Address: 0x8031A9BC
 * @note Size: 0x8C0
 */
void ObjFloor::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberFloor* disp = static_cast<og::Screen::DispMemberFloor*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_FLOOR)) {
		mDisp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		mDisp = new og::Screen::DispMemberFloor;

	} else {
		JUT_PANICLINE(452, "ERR! in ObjFloor Create失敗！\n");
	}

	mScreenFont = new P2DScreen::Mgr_tuning;
	if (sys->mRegion == System::LANG_Japanese) {
		mScreenFont->set("new_font_0.blo", 0x1040000, arc);
	} else {
		mScreenFont->set("new_font_0_eng_pal.blo", 0x1040000, arc);
	}

	mScreenName = new P2DScreen::Mgr_tuning;
	mScreenName->set("font_name.blo", 0x1040000, arc);

	if (isVS()) { // needs fixing
		mScreenRules = new P2DScreen::Mgr_tuning;
		mScreenRules->set("vs_title_rule_window.blo", 0x1040000, arc);
		mRuleMesgPane = og::Screen::TagSearch(mScreenRules, 'Trule_m5');
		mButtonPane   = og::Screen::TagSearch(mScreenRules, 'Pabutton');
		mLoadingPane  = og::Screen::TagSearch(mScreenRules, 'Tloading');
		mButtonPane->hide();
		mLoadingPane->show();

		for (int i = 0; i < 6; i++) {
			u64 tag           = 'Nsub_i00' + i % 10 + (i / 10 * 0x100);
			mRulesPaneList[i] = og::Screen::TagSearch(mScreenRules, tag);
			mRulesPaneList[i]->hide();
		}
		int ruleMsgIndex;
		if (msVal.mDoUseSetRuleMsgIndex) {
			ruleMsgIndex = msVal.mRuleMsgIndex;
		} else {
			ruleMsgIndex = randFloat() * 6.0f;
		}

		mRuleMesgPane->setMsgID(vsRuleMsgId[ruleMsgIndex]);
		mRulesPaneList[ruleMsgIndex]->show();
		mButtonAlpha = new og::Screen::AlphaMgr;
	} else {
		mScreenRules  = nullptr;
		mRuleMesgPane = nullptr;
	}

	if (mScreenName) {
		J2DPane* fc_c = mScreenName->search('fc_c');
		if (fc_c->getParentPane()) {
			fc_c->getParentPane()->removeChild(fc_c);
		}
		mCounterFloor = og::Screen::setCallBack_CounterRV(mScreenName, 'fc_r', 'fc_l', 'fc_l', &mDisp->mSublevel, 3, 2, false, arc);
		mCounterFloor->setCenteringMode(Screen::CallBack_CounterRV::ECM_UNKNOWN_2);
	}

	og::Screen::setAlphaScreen(mScreenName);

	if (mScreenRules) {
		og::Screen::setAlphaScreen(mScreenRules);
	}

	if (mScreenRules) {
		og::Screen::setCallBackMessage(mScreenRules);
	}

	if (mScreenRules) {
		mAnims = new og::Screen::AnimGroup(2);
		registAnimGroupScreen(mAnims, arc, mScreenRules, "vs_title_rule_window.btk", 1.0f);
		registAnimGroupScreen(mAnims, arc, mScreenRules, "vs_title_rule_window_02.btk", 1.0f);
		mAnims->setFrame(0.0f);
		mAnims->setRepeat(true);
		mAnims->setSpeed(1.0f);
		mAnims->start();
	}

	int caveType = 0;
	int caveID   = mDisp->mCaveID;

	if (isFLOOR()) {
		caveType = FLOOR_Challenge;
	} else if (isCHALLENGE()) {
		caveType = FLOOR_Story;
	} else if (isVS()) {
		caveType = FLOOR_Versus;
	}

	setCaveMsgID(mDisp->mCaveID, mTextTag);

	switch (caveType) {
	case FLOOR_Challenge:
		mTitle           = new TitleMsgDrop(mScreenFont, mScreenName->search('title'), mTextTag);
		mTitle->mYOffset = msVal.mChallengeTitleYOffset;
		break;

	case FLOOR_Story:
		TitleMsgWave* msg = new TitleMsgWave(mScreenFont, mScreenName->search('title'), mTextTag);
		msg->setParam(msVal.mScaleParm1, msVal.mScaleParm2, msVal.mScaleParm3, msVal.mScaleParm4);
		msg->mYOffset = msVal.mStoryTitleYOffset;
		mTitle        = msg;
		break;

	case FLOOR_Versus:
		mTitle           = new TitleMsgClash(mScreenFont, mScreenName->search('title'), mTextTag);
		mTitle->mYOffset = msVal.mVsTitleYOffset;
		break;

	default:
		mTitle = new TitleMsg(mScreenFont, mScreenName->search('title'), mTextTag);
		break;
	}

	mTitle->setCentering(TitleMsg::ECM_2);
	mTitle->init();

	mSublevelMsg = new TitleMsg(mScreenFont, mScreenName->search('chika'), "8382_00"); // "Sublevel"
	mSublevelMsg->setCentering(TitleMsg::ECM_1);

	mSublevelPane  = mScreenName->search('kaisuu');
	mSublevelXoffs = mSublevelPane->mOffset.x;
	mSublevelYoffs = mSublevelPane->mOffset.y;
}

/**
 * @note Address: 0x8031B280
 * @note Size: 0x598
 */
bool newScreen::ObjFloor::commonUpdate()
{
	bool ret                             = false;
	og::Screen::DispMemberFloor* disp    = nullptr;
	og::Screen::DispMemberBase* baseDisp = getDispMember();
	if (baseDisp->isID(OWNER_OGA, MEMBER_FLOOR)) {
		disp = static_cast<og::Screen::DispMemberFloor*>(baseDisp);
	}

	bool vs = isVS();
	if (vs && disp && !mIsButtonShown && disp->mEnableButton) {
		mIsButtonShown = true;
		mButtonPane->show();
		mButtonAlpha->setBlinkArea(0.5f, 1.0f);
		mButtonAlpha->blink(1.0f);
	}

	if (mScreenRules) {
		if (mIsButtonShown) {
			u8 alphaCalc = mButtonAlpha->calc();
			mButtonPane->setAlpha(alphaCalc);
			if (mButtonAlphaTimer > 0.0f) {
				mButtonAlphaTimer -= sys->mDeltaTime / 0.5f;
				if (mButtonAlphaTimer < 0.0f) {
					mButtonAlphaTimer = 0.0f;
				}
			}
			mLoadingPane->setAlpha(mButtonAlphaTimer * 255.0f);
		}
		mAnims->update();
	}

	if (!vs) {
		f32 subX = mSublevelXoffs + msVal.mSublevelXOffset;
		f32 subY = mSublevelYoffs + msVal.mSublevelYOffset;
		if (disp->mSublevel < 10) {
			subX += msVal.mSublevel2DigitXOffset;
		}
		mSublevelPane->setOffset(subX, subY);
		mSublevelPane->updateScale(msVal.mSublevelScale);
	}

	if (mScreenRules) {
		mScreenRules->update();
	}

	int caveType = 0;
	int caveID   = mDisp->mCaveID;

	if (isFLOOR()) {
		caveType = FLOOR_Story;
	} else if (isCHALLENGE()) {
		caveType = FLOOR_Challenge;
	} else if (isVS()) {
		caveType = FLOOR_Versus;
	}

	mTitle->setColor(msVal.mColors1[caveType], msVal.mColors2[caveType]);
	mSublevelMsg->setColor(msVal.mColors1[caveType], msVal.mColors2[caveType]);

	J2DPictureEx* pic = mCounterFloor->mPic1;
	pic->setWhite(msVal.mColors1[caveType]);
	pic->setBlack(msVal.mColors2[caveType]);

	if (vs) {
		mScreenName->setXY(msVal.mVsNameXOffset, msVal.mVsNameYOffset);
		mScreenName->scaleScreen(msVal.mVsNameScale);
	} else {
		mScreenName->setXY(msVal.mStandardNameXOffset, msVal.mStandardNameYOffset);
		mScreenName->scaleScreen(msVal.mStandardNameScale);
	}
	mScreenName->update();
	mTitle->update();
	mSublevelMsg->update();

	if (mDoFadeout) {
		mTimer -= sys->mDeltaTime;
		if (mTimer < 0.0f)
			ret = true;
	} else {
		og::Screen::DispMemberFloor* disp2 = static_cast<og::Screen::DispMemberFloor*>(getDispMember());
		if (disp2->isID(OWNER_OGA, MEMBER_FLOOR)) {
			if (disp2->mDoEnd) {
				mDoFadeout = true;
				mDoEnd     = true;
				mTitle->end();
			}
			if (disp2->mDoForceEnd) {
				mDoEnd = true;
			}
		}
	}
	return ret;
}

/**
 * @note Address: 0x8031B820
 * @note Size: 0x20
 */
bool newScreen::ObjFloor::doUpdate() { return commonUpdate(); }

/**
 * @note Address: 0x8031B840
 * @note Size: 0x19C
 */
void ObjFloor::doDraw(Graphics& gfx)
{
	j3dSys.reinitGX();
	drawBG(gfx);

	J2DPerspGraph* graf = &gfx.mPerspGraph;

	if (mScreenRules) {
		mScreenRules->setAlpha(mAlpha * 255.0f);
		mScreenRules->draw(gfx, *graf);
	}
	gfx.mPerspGraph.setPort();
	particle2dMgr->draw(2, 0);
	mScreenName->setAlpha(mAlpha * 255.0f);
	mScreenName->draw(gfx, *graf);
	graf->setPort();

	if (!isVS()) {
		mSublevelPane->show();
	} else {
		mSublevelPane->hide();
	}

	graf->setPort();
	j3dSys.reinitGX();
}

/**
 * @note Address: 0x8031B9DC
 * @note Size: 0x34
 */
bool newScreen::ObjFloor::doStart(::Screen::StartSceneArg const* arg)
{
	mFadeLevel = 0.0f;
	mAlpha     = 0.0f;
	particle2dMgr->killAll();
	return true;
}

/**
 * @note Address: 0x8031BA10
 * @note Size: 0x10
 */
bool newScreen::ObjFloor::doEnd(::Screen::EndSceneArg const* arg)
{
	mFadeLevel = 0.0f;
	return true;
}

/**
 * @note Address: 0x8031BA20
 * @note Size: 0x4
 */
void ObjFloor::doUpdateFadeinFinish() { }

/**
 * @note Address: 0x8031BA24
 * @note Size: 0x30
 */
void ObjFloor::doUpdateFinish()
{
	mFadeLevel = 0.0f;
	particle2dMgr->killGroup(2);
}

/**
 * @note Address: 0x8031BA54
 * @note Size: 0x4
 */
void ObjFloor::doUpdateFadeoutFinish() { }

/**
 * @note Address: 0x8031BA58
 * @note Size: 0x74
 */
bool newScreen::ObjFloor::doUpdateFadein()
{
	bool result = false;
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > msVal.mFadeinTime) {
		mFadeLevel = msVal.mFadeinTime;
		result     = true;
	}
	mAlpha = mFadeLevel / msVal.mFadeinTime;
	commonUpdate();
	return result;
}

/**
 * @note Address: 0x8031BACC
 * @note Size: 0x88
 */
bool newScreen::ObjFloor::doUpdateFadeout()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;

	if (mFadeLevel > msVal.mFadeoutTime) {
		mFadeLevel = msVal.mFadeoutTime;
		if (!mDoEnd) {
			check = true;
		}
	}
	mAlpha = 1.0f - mFadeLevel / msVal.mFadeoutTime;
	commonUpdate();
	return check;
}

/**
 * @note Address: 0x8031BB54
 * @note Size: 0x168
 */
void ObjFloor::drawBG(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	if (mDoEnd) {
		mBackgroundAlpha += sys->mDeltaTime;
		f32 temp = 1.0f - mBackgroundAlpha / msVal.mMaxAlpha;
		if (temp > 0.0f) {
			mColor.a = temp * 255.0f;
		} else {
			mColor.a = 0;
			mDoEnd   = false;
		}
	}

	if (mColor.a != 0) {
		graf->setPort();
		u16 w = System::getRenderModeObj()->fbWidth;
		u16 h = System::getRenderModeObj()->efbHeight;
		graf->setColor(mColor);
		GXSetAlphaUpdate(GX_FALSE);

		f32 offs = 0.0f;
		JGeometry::TBox2f box(0.0f, 0.0f, offs + w, offs + h);
		graf->fillBox(box);
	}
}

ObjFloor::StaticValues ObjFloor::msVal;

} // namespace newScreen
} // namespace og
