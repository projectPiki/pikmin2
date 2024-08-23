#include "ebi/title/Entities/TKogane.h"
#include "ebi/title/TTitle.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "Controller.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "nans.h"

namespace ebi {
namespace title {
namespace Kogane {

static const int padding[]    = { 0, 0, 0 };
static const char className[] = "ebiP2TitleKogane";

/**
 * @note Address: 0x803E7358
 * @note Size: 0x148
 */
TMgr::TMgr()
    : CNode("KoganeMgr")
{
	mAnimator = new TAnimator;
	mObject   = new TUnit;
}

/**
 * @note Address: 0x803E74A0
 * @note Size: 0x50
 */
void TMgr::setArchive(JKRArchive* arc)
{
	mParams.loadSettingFile(arc, "param/param_kogane.txt");
	mAnimator->setArchive(arc);
}

/**
 * @note Address: 0x803E74F0
 * @note Size: 0x28
 */
void TMgr::initUnit() { mObject->init(this); }

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void TAnimFolder::load(J3DModelData* modelData, JKRArchive* arc)
{
	mAnims[0].load(modelData, arc, "kogane/kogane_move.bck");
	mAnims[0].mMode = 1;
	mAnims[1].load(modelData, arc, "kogane/kogane_wait.bck");
	mAnims[1].mMode = 1;
}

/**
 * @note Address: 0x803E7518
 * @note Size: 0x68
 */
TAnimator::TAnimator() { mModelData = nullptr; }

/**
 * @note Address: 0x803E7580
 * @note Size: 0x11C
 */
void TAnimator::setArchive(JKRArchive* arc)
{
	void* file = arc->getResource("kogane/kogane_title.bmd");
	P2ASSERTLINE(0x75, file);
	mModelData = J3DModelLoaderDataBase::load(file, 0x240030);

	for (u16 i = 0; i < mModelData->getShapeNum(); i++) {
		mModelData->getShapeNodePointer(i)->setTexMtxLoadType(0x2000);
	}

	mModelData->newSharedDisplayList(0x40000);
	mModelData->makeSharedDL();
	mAnimFolder.load(mModelData, arc);
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
J3DModel* TAnimator::newJ3DModel() { return new J3DModel(mModelData, 0x20000, 1); }

/**
 * @note Address: 0x803E769C
 * @note Size: 0x8
 */
void TUnit::setController(Controller* ctrl) { mControl = ctrl; }

/**
 * @note Address: 0x803E76A4
 * @note Size: 0xF4
 */
void TUnit::init(TMgr* mgr)
{
	mManager = mgr;
	mModel   = mManager->mAnimator->newJ3DModel();
	mAnim.setAnimFolder(&mManager->mAnimator->mAnimFolder);

	mPosition = titleMgr->getPosOutOfViewField();
	mParms[0] = mManager->mParams.mWalkSpeed();
	mParms[1] = mManager->mParams.mScale();
	mParms[4] = mManager->mParams.mCullRadius();
	mParms[2] = mManager->mParams.mCollRadius();
	mParms[3] = mManager->mParams.mPikiReactRadius();
}

/**
 * @note Address: 0x803E7798
 * @note Size: 0x4C
 */
void TUnit::startZigzagWalk(Vector2f& pos, Vector2f& targetPos)
{
	mPosition  = pos;
	mTargetPos = targetPos;
	mActionID  = KOGANEACT_NULL;
	startState(KSTATE_ZigZagWalk);
}

/**
 * @note Address: 0x803E77E4
 * @note Size: 0x30
 */
void TUnit::goHome()
{
	if (mStateID != KSTATE_Inactive) {
		startState(KSTATE_GoHome);
	}
}

/**
 * @note Address: 0x803E7814
 * @note Size: 0x24
 */
void TUnit::outOfCalc() { startState(KSTATE_Inactive); }

/**
 * @note Address: 0x803E7838
 * @note Size: 0x14
 */
bool TUnit::isCalc() { return (bool)mStateID != 0; }

/**
 * @note Address: 0x803E784C
 * @note Size: 0x14
 */
bool TUnit::isController() { return (u8)(mStateID == KSTATE_Controlled); };

/**
 * @note Address: 0x803E7860
 * @note Size: 0x2D0
 */
void TUnit::startState(enumState state)
{

	mStateID = state;
	switch (state) {
	case KSTATE_Inactive:
		mPosition = title::titleMgr->getPosOutOfViewField();

	case KSTATE_Controlled:
		u32 time  = mManager->mParams.mControlStateTime.mValue / sys->mDeltaTime;
		mCounter  = time;
		mCounter2 = time;
		break;
	case KSTATE_Wait:
		f32 max, min;
		min       = mManager->mParams.mMinWaitTime.mValue;
		max       = mManager->mParams.mMaxWaitTime.mValue;
		u32 time2 = ((max - min) * randEbisawaFloat() + min) / sys->mDeltaTime;
		mCounter  = time2;
		mCounter2 = time2;
		break;
	case KSTATE_Turn:
		f32 angle    = mManager->mParams.mWalkRandomAngle.mValue;
		f32 line     = JMath::atanTable_.atan2_(mTargetPos.y - mPosition.y, mTargetPos.x - mPosition.x);
		f32 test     = angle * DEG2RAD * PI * (randEbisawaFloat() * 2.0f + -1.0f) + line;
		mTargetAngle = Vector2f(cosf(test), sinf(test));
		break;
	case KSTATE_Walk:
		f32 max2, min2;
		max2 = mManager->mParams.mMaxMoveTime.mValue;
		min2 = mManager->mParams.mMinMoveTime.mValue;

		u32 time3 = ((max2 - min2) * randEbisawaFloat() + min2) / sys->mDeltaTime;
		mCounter  = time3;
		mCounter2 = time3;
		break;

	case KSTATE_ZigZagWalk:
		Vector2f negPos(-mPosition.x, -mPosition.y);
		f32 len = _sqrtf(negPos.x * negPos.x + negPos.y * negPos.y);
		if (len != 0.0f) {
			f32 norm = 1.0f / len;
			negPos.x *= norm;
			negPos.y *= norm;
		}
		mAngle = negPos;
		break;
	}
};

/**
 * @note Address: 0x803E7B30
 * @note Size: 0x734
 */
void TUnit::update()
{
	if (!isCalc())
		return;

	if ((mStateID != KSTATE_Inactive) && (mStateID != KSTATE_GoHome) && (mStateID != KSTATE_ZigZagWalk)) {
		if (mControl && mControl->mSStick.mStickMag > 0.7f) {
			startState(KSTATE_Controlled);
		}
	}

	int actionId = mActionID;
	switch (mStateID) {
	case KSTATE_Controlled: {
		if (mCounter != 0) {
			mCounter--;
		}
		mActionID = KOGANEACT_0;
		if (mControl != nullptr) {
			f32 stickX = mControl->mSStick.mXPos;
			if (FABS(stickX) > 0.7f) {
				Vector2f newAng(mAngle.y, -mAngle.x);
				mAngle = mAngle + newAng * (stickX * mManager->mParams.mTurnRate.mValue);

				mAngle.normalise();
				mActionID = KOGANEACT_1;
			}

			f32 stickY = mControl->mSStick.mYPos;
			if (stickY > 0.7f) {
				f32 paramProd = stickY * mParms[0];
				mPosition     = mPosition + mAngle * paramProd;
				mActionID     = KOGANEACT_2;
			}
		}
		if (mCounter == 0) {
			startState(KSTATE_GoHome);
		}

	} break;

	case KSTATE_Wait: {
		mActionID = KOGANEACT_0;
		if (mCounter != 0) {
			mCounter--;
		}
		if (mCounter == 0) {
			startState(KSTATE_Turn);
		}
	} break;

	case KSTATE_Turn: {
		mActionID   = KOGANEACT_1;
		f32 product = 60.0f * sys->mDeltaTime * 0.5f * 0.1f;
		mAngle      = mAngle + mTargetAngle * product;
		mAngle.normalise();

		Vector2f diff = mAngle - mTargetAngle;
		f32 len       = _lenVec2D(diff);

		if (len < 0.1f) {
			startState(KSTATE_Walk);
		}
	} break;

	case KSTATE_Walk: {
		mActionID = KOGANEACT_2;
		if (mCounter != 0) {
			mCounter--;
		}
		if (mCounter == 0) {
			startState(KSTATE_Wait);
		} else {
			mPosition = mPosition + mAngle * mParms[0];
		}

	} break;

	case KSTATE_ZigZagWalk: {
		mActionID = KOGANEACT_2;
		mAngle.normalise();

		mPosition = mPosition + mAngle * mParms[0];
	} break;

	case KSTATE_GoHome: {
		mActionID = KOGANEACT_2;
		mAngle.normalise();
		mPosition = mPosition + mAngle * mParms[0];
	} break;
	}

	switch (mStateID) {
	case KSTATE_Inactive:
		mPosition = titleMgr->getPosOutOfViewField();

	case KSTATE_ZigZagWalk:
		if (titleMgr->isInViewField(this)) {
			startState(KSTATE_Walk);
		}
		break;

	case KSTATE_GoHome:
		if (titleMgr->isOutViewField(this)) {
			startState(KSTATE_Inactive);
		}
		break;

	default:
		titleMgr->inViewField(this);
		break;
	}

	if (mActionID != actionId) // Check if action has changed since begining of function call
	{
		switch (mActionID) {
		case KOGANEACT_1: {
			mAnim.init(0, 1.0);
			mAnim.play();
		} break;

		case KOGANEACT_2: {
			mAnim.init(0, 1.0);
			mAnim.play();
		} break;

		case KOGANEACT_0: {
			mAnim.init(1, 1.0);
			mAnim.play();
		} break;
		}
	}

	calcModelBaseMtx_();
	if (mAnim.mAnimRes != nullptr) {
		switch (mAnim.mState) {
		case 1:
			mAnim.mAnimStartTime += mAnim.mTimeStep * mAnim.mAnimRes->mTimeScale;
			if (mAnim.mAnimStartTime > mAnim.mAnimRes->mLoopEnd) {
				mAnim.mAnimStartTime -= mAnim.mAnimRes->mLoopEnd - mAnim.mAnimRes->mLoopStart;
			}
			break;

		case 2:
			mAnim.mAnimStartTime += mAnim.mTimeStep * mAnim.mAnimRes->mTimeScale;
			if (mAnim.mAnimStartTime >= mAnim.mAnimRes->mStopFrame) {
				mAnim.mAnimStartTime = mAnim.mAnimRes->mStopFrame;
				mAnim.mState         = 3;
			}
			break;

		case 0:
		case 3:
		case 4:
			break;
		}
	}

	J3DModel* model = mModel;
	if (mAnim.mAnimRes != nullptr) {
		mAnim.mAnimRes->mAnimTransform->mCurrentFrame      = mAnim.mAnimStartTime;
		model->mModelData->mJointTree.mJoints[0]->mMtxCalc = mAnim.mAnimRes->mAnmCalcMtx;
	}

	mModel->calc();
	mModel->entry();
	return mModel->viewCalc();
}

} // namespace Kogane
} // namespace title
} // namespace ebi
