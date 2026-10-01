#include "nans.h"
#include "P2JME/Movie.h"
#include "P2JME/P2JME.h"
#include "JSystem/J2D/J2DAnmLoader.h"
#include "PSSystem/PSSystemIF.h"
#include "trig.h"
#include "Game/MoviePlayer.h"
#include "Game/gamePlayData.h"
#include "Game/GameSystem.h"

static const int unusedArray[] = { 0, 0, 0 };
static const char name[]       = "movieMessage";

namespace P2JME {
namespace Movie {

/**
 * @note Address: N/A
 * @note Size: 0xB8
 */
WindowPane::WindowPane()
{
	mState           = WINDOWPANE_Inactive;
	mTimer           = 0.0f;
	mInitialPosition = Vector3f::zero;
	mNewPosition     = Vector3f::zero;
	mCurrPosition    = Vector3f::zero;
}

/**
 * @note Address: 0x80434F5C
 * @note Size: 0x20
 */
void WindowPane::doInit()
{
	mInitialPosition = Vector3f(mPane->mTranslateX, mPane->mTranslateY, 0.0f);
}

/**
 * @note Address: 0x80434F7C
 * @note Size: 0x164
 */
void WindowPane::update()
{
	switch (mState) {
	case WINDOWPANE_Inactive:
	case WINDOWPANE_4:
		mPane->hide();
		break;
	case WINDOWPANE_Appear:
		mTimer += sys->mDeltaTime;
		if (mTimer > mMaxTime) {
			mTimer = mMaxTime;
			if (mCurrPosition.length() < 10.0f) {
				mState = WINDOWPANE_2;
			}
		}
		mCurrAngle = (mTimer / mMaxTime) * 180.0f + 90.0f;
		break;
	case WINDOWPANE_Finish:
		mTimer += sys->mDeltaTime;
		if (mTimer > mMaxTime) {
			mState = WINDOWPANE_4;
			mTimer = mMaxTime;
		}
		mCurrAngle = (1.0f - mTimer / mMaxTime) * 180.0f + 90.0f;
		break;
	}
	moveWindow(false);
}

/**
 * @note Address: 0x804350E0
 * @note Size: 0x278
 * TODO: match!!!
 */
void WindowPane::moveWindow(bool flag)
{
	f32 xoff = 500.0f;
	Vector2f startPosition(mInitialPosition.x + xoff, mInitialPosition.y);
	f32 angleRadians = TORADIANS(mCurrAngle);

	Vector3f offset = Vector3f(sinf(angleRadians) * 500.0f + startPosition.x, cosf(angleRadians) * 500.0f + startPosition.y, 0.0f);

	if (flag) {
		mNewPosition  = offset;
		mCurrPosition = Vector3f(0.0f);
	} else {
		Vector3f diff = offset - mNewPosition;
		diff *= 0.2f;
		mCurrPosition += diff;
		mCurrPosition *= 0.72f;
		mNewPosition += mCurrPosition;
	}

	mPane->setOffset(mNewPosition.x, mNewPosition.y);

	f32 newangle = JMAAtan2Radian(mNewPosition.x - startPosition.x, mNewPosition.y - startPosition.y);
	f32 scale    = roundAng(mCurrAngle);
	f64 newScale = fabs((scale - 270.0f) / 180.f);
	scale        = (f32)newScale + 1.0f;
	mPane->setAngle(newangle * RAD2DEG + 90.0f);
	mPane->updateScale(scale);
}

/**
 * @note Address: 0x80435358
 * @note Size: 0x48
 */
void WindowPane::open(f32 duration)
{
	mPane->show();
	mState     = WINDOWPANE_Appear;
	mTimer     = 0.0f;
	mMaxTime   = duration;
	mCurrAngle = 90.0f;
	moveWindow(true);
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void WindowPane::close(f32 duration)
{
	mPane->show();
	mState     = WINDOWPANE_Finish;
	mTimer     = 0.0f;
	mMaxTime   = duration;
	mCurrAngle = 90.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
AbtnPane::AbtnPane(u8 state)
{
	mState       = state;
	mAnimAlpha   = 0.0f;
	mAppearAlpha = 0.0f;
	mAnimAlpha   = -(state / 255.0f);
}

/**
 * @note Address: 0x804353A0
 * @note Size: 0x54
 */
void AbtnPane::doInit()
{
	mPane->setAlpha(0);
	mPane->show();
	mState = 0;
}

/**
 * @note Address: 0x804353F4
 * @note Size: 0x170
 */
void AbtnPane::update()
{
	f32 one   = 1.0f;
	f32 alpha = (mAnimAlpha * TAU) / one;
	alpha     = cosf(alpha);
	alpha     = (1.0f - alpha) * 0.5f;
	switch (mState) {
	case 0:
		mAppearAlpha += -(sys->mDeltaTime * 2.0f);
		if (mAppearAlpha < 0.0f) {
			mAppearAlpha = 0.0f;
		}
		break;
	case 1:
		mAppearAlpha += sys->mDeltaTime * 2.0f;
		if (mAppearAlpha > 1.0f) {
			mAppearAlpha = 1.0f;
		}
		break;
	}

	mAnimAlpha += sys->mDeltaTime;
	if (mAnimAlpha > 1.0f) {
		mAnimAlpha = 0.0f;
	}

	J2DPane* pane = mPane;
	alpha         = alpha * 255.0f * mAppearAlpha;
	pane->setAlphaFromFloat(alpha);
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
PodIconScreen::PodIconScreen()
    : mState(-1)
    , mAnmColor(nullptr)
    , mAnmColorTimer(0.0f)
    , mAnmTrans(nullptr)
    , mAnmTransTimer(0.0f)
    , mAnmTexPattern(nullptr)
    , mAnmTexPatternTimer(0.0f)
{
	u16 y = sys->getRenderModeHeight();
	u16 x = sys->getRenderModeWidth();
	mInitialPos.set(x * 0.75f, y, 100.0f);
	reset();
	hide();
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void PodIconScreen::setTrans()
{
	if (Game::playData->isStoryFlag(Game::STORY_DebtPaid)) {
		setXY(mInitialPos.x - 250.0f, mInitialPos.y - 25.0f);
	} else {
		setXY(mInitialPos.x - 250.0f, mInitialPos.y - 10.0f);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x168
 */
void PodIconScreen::reset()
{
	mMomentum.set(1.0f, randFloat(), 0.0f);
	mMomentum.normalise();
	mPosition.set(0.0f, 0.0f, 0.0f);
	setTrans();
}

/**
 * @note Address: N/A
 * @note Size: 0x178
 */
void PodIconScreen::appear()
{
	reset();
	show();
	mState = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x1E0
 */
void PodIconScreen::disappear()
{
	switch (int(randFloat() * 2.0f)) {
	case 0: {
		_GXRenderModeObj* renderObj = System::getRenderModeObj();
		u16 efbHeight               = renderObj->efbHeight;
		renderObj                   = System::getRenderModeObj();
		u16 fbWidth                 = renderObj->fbWidth;
		mPosition.x                 = (randFloat() * 0.5f + 0.3f) * fbWidth;
		mPosition.y                 = -efbHeight * 1.25f;
		mPosition.z                 = 100.0f;
		break;
	}
	case 1: {
		_GXRenderModeObj* renderObj = System::getRenderModeObj();
		u16 efbHeight               = renderObj->efbHeight;
		renderObj                   = System::getRenderModeObj();
		u16 fbWidth                 = renderObj->fbWidth;
		mPosition.x                 = (randFloat() * 0.5f + 0.3f) * fbWidth;
		mPosition.y                 = efbHeight * 0.65f;
		mPosition.z                 = 100.0f;
	}
	}
	f32 momentumY = randFloat();
	mMomentum.x   = randFloat() * 0.5f + 0.5f;
	mMomentum.y   = momentumY;
	mMomentum.z   = 0.0f;
	mMomentum.normalise();
	mState = 2;
}

void PodIconScreen::set(JKRArchive* arc)
{
	bool didLoad = J2DScreen::set("pod.blo", 0x40000, arc);
	P2ASSERTLINE(428, didLoad);

	void* file = arc->getResource("anim/pod.btp");
	P2ASSERTLINE(433, file);
	mAnmTexPattern = static_cast<J2DAnmTexPattern*>(J2DAnmLoaderDataBase::load(file));
	P2ASSERTLINE(435, mAnmTexPattern);
	setAnimation(mAnmTexPattern);

	file = arc->getResource("anim/pod.bck");
	P2ASSERTLINE(440, file);
	mAnmTrans = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	P2ASSERTLINE(442, mAnmTrans);
	setAnimation(mAnmTrans);

	file = arc->getResource("anim/pod.bpk");
	P2ASSERTLINE(447, file);
	mAnmColor = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));
	P2ASSERTLINE(449, mAnmColor);
	setAnimation(mAnmColor);
}

/**
 * Scales vec by 1/len, i.e. normalises it given its precomputed length.
 */
inline Vector3f scaleByInverse(const Vector3f& vec, f32 len)
{
	f32 norm = 1.0f / len;
	return vec * norm;
}

/**
 * @note Address: 0x80435564
 * @note Size: 0x438
 */
void PodIconScreen::update()
{
	if (mState != -1) {
		mAnmTexPatternTimer += 1.0f;
		if (mAnmTexPatternTimer >= mAnmTexPattern->getFrameMax()) {
			mAnmTexPatternTimer -= mAnmTexPattern->getFrameMax();
		}
		mAnmTexPattern->setFrame(mAnmTexPatternTimer);

		mAnmTransTimer += 1.0f;
		if (mAnmTransTimer >= mAnmTrans->getFrameMax()) {
			mAnmTransTimer -= mAnmTrans->getFrameMax();
		}
		mAnmTrans->setFrame(mAnmTransTimer);

		mAnmColorTimer += 1.0f;
		if (mAnmColorTimer >= mAnmColor->getFrameMax()) {
			mAnmColorTimer -= mAnmColor->getFrameMax();
		}
		mAnmColor->setFrame(mAnmColorTimer);

		animation();

		Vector3f diff = mPosition - mInitialPos;
		f32 length    = diff.length();

		if (length > 1.0E-4f) {
			Vector3f newDiff;
			newDiff = scaleByInverse(diff, length);

			f32 alignmentWeight = newDiff.dot(mMomentum);
			alignmentWeight     = 1.0f + alignmentWeight;
			alignmentWeight *= 0.5f;
			f32 movementDistance = 0.35f * (length * (alignmentWeight * alignmentWeight));
			f32 momentumScale    = ((1.0f - alignmentWeight) + 1.0f) * 0.2f;

			newDiff.x *= momentumScale;
			newDiff.y *= momentumScale;
			newDiff.z *= momentumScale;

			mMomentum += newDiff;

			mMomentum.normalise();

			mInitialPos.x += mMomentum.x * movementDistance;
			mInitialPos.y += mMomentum.y * movementDistance;
			mInitialPos.z += mMomentum.z * movementDistance;
		}

		f32 scale = mInitialPos.z / 20.0f;
		if (scale < 0.5f) {
			scale = 0.5f;
		}

		scale += 1.0f;
		setTrans();
		scaleScreen(scale);

		if (length < 10.0f) {
			switch (mState) {
			case 0:
				mState = 1;
				break;
			case 2:
				mState = 3;
				break;
			}
		}

		if (mState == 0 || mState == 1) {
			PSSystem::spSysIF->playSystemSe(PSSE_POD_PC, 0);
		}
	}
	P2DScreen::Mgr::update();
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
MessageWindowScreen::MessageWindowScreen()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x26C
 */
void MessageWindowScreen::set(JKRArchive* arc)
{
	bool didLoad = J2DScreen::set("mg_window.blo", 0, arc);
	P2ASSERTLINE(554, didLoad);
	mWindowPane = new WindowPane;
	addCallBack('mgnull00', mWindowPane);
	mAButton = new AbtnPane(0);
	addCallBack('mg_abtn_', mAButton);
	mArrowPane = new AbtnPane(0);
	addCallBack('mg_yaji', mArrowPane);
	search('mg_yaji1')->setInfluencedAlpha(true, false);
	search('PICT_001')->setInfluencedAlpha(true, false);
}

/**
 * @note Address: 0x8043599C
 * @note Size: 0x80
 */
TControl::TControl()
    : mMessageWindow(nullptr)
    , mPodIcon(nullptr)
    , mPaneMgDemo(nullptr)
    , mIsActive(false)
    , mModeFlag(MODEFLAG_Inactive)
{
	mFlags.clear();
	mFlags.set(ControlFlag_UnsuspendOnFinish);
}

// I genuinely can't see a way to reduce the inline burden here and still make it match
// this seems very artificial but idk how else to get this working :(
#pragma push
#pragma inline_max_size(1024)
/**
 * @note Address: 0x80435A8C
 * @note Size: 0x7B0
 */
bool TControl::onInit()
{
	sys->heapStatusStart("P2JME::Movie::TControl::onInit", nullptr);
	if (gP2JMEMgr) {
		setFont(gP2JMEMgr->mFont);
		setRubyFont(gP2JMEMgr->mFont);
	}
	sys->heapStatusStart("PMT_onInit_arc", nullptr);

	JKRArchive* arc = JKRMountArchive("new_screen/cmn/message_window.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	if (arc) {
		mMessageWindow = new MessageWindowScreen;
		mMessageWindow->set(arc);

		J2DPane* demo = mMessageWindow->search('mg_demo_');
		P2ASSERTLINE(632, demo);
		P2ASSERTLINE(633, demo->getTypeID() == PANETYPE_TextBox);
		mPaneMgDemo = demo;
		mTextRenderProc->setTextBoxInfo(mPaneMgDemo);
	}

	sys->heapStatusStart("podIcon", nullptr);

	char* path;
	if (Game::playData->isStoryFlag(Game::STORY_DebtPaid)) {
		path = "new_screen/cmn/gold_pod_for_message_window.szs";
	} else {
		path = "new_screen/cmn/pod_for_message_window.szs";
	}
	arc = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	if (arc) {
		mPodIcon = new PodIconScreen;
		mPodIcon->set(arc);
	} else {
		JUT_PANICLINE(658, "%s is not found.\n", path);
	}

	sys->heapStatusEnd("podIcon");
	sys->heapStatusEnd("PMT_onInit_arc");
	sys->heapStatusStart("PMT_onInit_initRenderingProcessor", nullptr);
	initRenderingProcessor(1024); // max 1024 characters can be animated at once
	sys->heapStatusEnd("PMT_onInit_initRenderingProcessor");
	sys->heapStatusEnd("P2JME::Movie::TControl::onInit");
	return 1;
}
#pragma pop

/**
 * @note Address: 0x8043623C
 * @note Size: 0x38
 */
void TControl::reset()
{
	Window::TControl::reset();
	setMode(MODEFLAG_Inactive);
}

/**
 * @note Address: 0x80436274
 * @note Size: 0x4E0
 */
TControl::EModeFlag TControl::setMode(EModeFlag mode)
{
	EModeFlag oldMode = mModeFlag;
	mModeFlag         = mode;
	switch (mode) {
	case MODEFLAG_Inactive:
		mIsActive = false;
		mMessageWindow->mWindowPane->mPane->hide();
		mSequenceProc->setFlag(TSequenceProcessor::SeqProc_IsActive);
		break;
	case MODEFLAG_Start:
		PSSystem::spSysIF->playSystemSe(PSSE_MP_SHIP_CALLING_01, 0);
		mMessageWindow->open(0.5f);
		mPodIcon->appear();
		mSequenceProc->setFlag(TSequenceProcessor::SeqProc_IsActive);
		break;
	case MODEFLAG_Writing:
		mSequenceProc->resetFlag(TSequenceProcessor::SeqProc_IsActive);
		break;
	case MODEFLAG_Finish:
		PSSystem::spSysIF->playSystemSe(PSSE_MP_SHIP_PERIOD_01, 0);
		WindowPane* windowPane = mMessageWindow->mWindowPane;
		windowPane->mPane->show();
		windowPane->mState           = 3;
		windowPane->mTimer           = 0.0f;
		windowPane->mMaxTime         = 0.5f;
		PodIconScreen* podIconScreen = mPodIcon;
		switch (int(randFloat() * 2.0f)) {
		case 0: {
			_GXRenderModeObj* renderObj = System::getRenderModeObj();
			u16 efbHeight               = renderObj->efbHeight;
			renderObj                   = System::getRenderModeObj();
			u16 fbWidth                 = renderObj->fbWidth;
			f32 ratio                   = randFloat() * 0.5f + 0.3f;
			podIconScreen->mPosition.x  = ratio * fbWidth;
			podIconScreen->mPosition.y  = -efbHeight * 1.25f;
			podIconScreen->mPosition.z  = 100.0f;
			break;
		}
		case 1: {
			_GXRenderModeObj* renderObj = System::getRenderModeObj();
			u16 efbHeight               = renderObj->efbHeight;
			renderObj                   = System::getRenderModeObj();
			u16 fbWidth                 = renderObj->fbWidth;
			f32 ratio                   = randFloat() * 0.5f + 0.3f;
			podIconScreen->mPosition.x  = ratio * fbWidth;
			podIconScreen->mPosition.y  = efbHeight * 0.65f;
			podIconScreen->mPosition.z  = 100.0f;
		}
		}
		f32 momentumY              = randFloat();
		podIconScreen->mMomentum.x = randFloat() * 0.5f + 0.5f;
		podIconScreen->mMomentum.y = momentumY;
		podIconScreen->mMomentum.z = 0.0f;
		podIconScreen->mMomentum.normalise();
		podIconScreen->mState = 2;
		break;
	}
	return oldMode;
}

/**
 * @note Address: 0x80436754
 * @note Size: 0x24
 */
void MessageWindowScreen::open(f32 duration)
{
	mWindowPane->open(duration);
}

/**
 * @note Address: 0x80436778
 * @note Size: 0x228
 */
bool TControl::update(Controller* pad1, Controller* pad2)
{
	bool ret = Window::TControl::update(pad1, pad2); // matching bs when this is bool
	if (mFlags.isSet(ControlFlag_UnsuspendOnFinish) && Game::moviePlayer && Game::moviePlayer->isFlag(Game::MVP_IsFinished)) {
		if (mIsActive) {
			reset();
			Game::moviePlayer->unsuspend(1, false);
		}
		return true;
	} else {
		if (mMessageWindow) {
			mMessageWindow->update();
		}
		if (mPodIcon) {
			mPodIcon->update();
		}

		switch (mModeFlag) {
		case MODEFLAG_Inactive:
			if (ret) {
				if (Game::gameSystem) {
					mIsPaused = Game::gameSystem->setPause(1, "message", 3);
				}
				setMode(MODEFLAG_Start);
				mIsActive = true;
			} else {
				mIsActive = false;
			}
			break;
		case MODEFLAG_Start:
			if (mMessageWindow->mWindowPane->mState == 2) {
				setMode(MODEFLAG_Writing);
			}
			break;
		case MODEFLAG_Writing:
			if (mStatus.isSet(2)) {
				setMode(MODEFLAG_Finish);
			}
			break;
		case MODEFLAG_Finish:
			if (mMessageWindow->mWindowPane->mState == 4 && mPodIcon->mState == 3) {
				reset();
				if (mFlags.isSet(ControlFlag_UnsuspendOnFinish) && Game::moviePlayer) {
					Game::moviePlayer->unsuspend(1, true);
				}
			}
		}

		if (mSequenceProc->isFlag(TSequenceProcessor::SeqProc_IsWaitingPressA)) { // done writing, can press A
			MessageWindowScreen* window = mMessageWindow;
			window->mAButton->mState    = 1;
			window->mArrowPane->mState  = 1;
		} else {
			MessageWindowScreen* window = mMessageWindow;
			window->mAButton->mState    = 0;
			window->mArrowPane->mState  = 0;
		}
		return mIsActive;
	}

	return ret;
}

/**
 * @note Address: 0x804369A0
 * @note Size: 0xCC
 */
void TControl::draw(Graphics& gfx)
{
	if (mMessageWindow && mModeFlag != MODEFLAG_Inactive) {
		gfx.mPerspGraph.setPort();
		mMessageWindow->draw(gfx, gfx.mPerspGraph);
		if (mPaneMgDemo) {
			Mtx* mtx = &gfx.mPerspGraph.mPosMtx;
			P2JME::TControl::draw(mPaneMgDemo->mGlobalMtx, *mtx);
			GXLoadPosMtxImm(*mtx, 0);
		}
		mPodIcon->draw(gfx, gfx.mPerspGraph);
	}
}

} // namespace Movie
} // namespace P2JME
