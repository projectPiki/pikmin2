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
void TMgr::initUnit()
{
	mObject->init(this);
}

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
TAnimator::TAnimator()
{
	mModelData = nullptr;
}

/**
 * @note Address: 0x803E7580
 * @note Size: 0x11C
 */
void TAnimator::setArchive(JKRArchive* arc)
{
	void* file = arc->getResource("kogane/kogane_title.bmd");
	P2ASSERTLINE(117, file);
	mModelData = J3DModelLoaderDataBase::load(file, J3DMLF_UseUniqueMaterials | J3DMLF_UseSingleSharedDL | J3DMLF_UsePostTexMtx
	                                                    | J3DMLF_UseImmediateMtx);

	for (u16 i = 0; i < mModelData->getShapeNum(); i++) {
		mModelData->getShapeNodePointer(i)->setTexMtxLoadType(0x2000);
	}

	mModelData->newSharedDisplayList(J3DMLF_UseSingleSharedDL);
	mModelData->makeSharedDL();
	mAnimFolder.load(mModelData, arc);
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
J3DModel* TAnimator::newJ3DModel()
{
	return new J3DModel(mModelData, 0x20000, 1);
}

/**
 * @note Address: 0x803E769C
 * @note Size: 0x8
 */
void TUnit::setController(Controller* ctrl)
{
	mControl = ctrl;
}

/**
 * @note Address: 0x803E76A4
 * @note Size: 0xF4
 */
void TUnit::init(TMgr* mgr)
{
	mManager = mgr;
	mModel   = mManager->mAnimator->newJ3DModel();
	mAnim.setAnimFolder(&mManager->mAnimator->mAnimFolder);

	mPosition        = titleMgr->getPosOutOfViewField();
	mMoveSpeed       = mManager->mParams.mWalkSpeed.mValue;
	mScale           = mManager->mParams.mScale.mValue;
	mCullRadius      = mManager->mParams.mCullRadius.mValue;
	mCollRadius      = mManager->mParams.mCollRadius.mValue;
	mPikiReactRadius = mManager->mParams.mPikiReactRadius.mValue;
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
void TUnit::outOfCalc()
{
	startState(KSTATE_Inactive);
}

/**
 * @note Address: 0x803E7838
 * @note Size: 0x14
 */
bool TUnit::isCalc()
{
	return (bool)mStateID != 0;
}

/**
 * @note Address: 0x803E784C
 * @note Size: 0x14
 */
bool TUnit::isController()
{
	return (u8)(mStateID == KSTATE_Controlled);
};

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
		mCounter.setValue(mManager->mParams.mControlStateTime.mValue);
		break;
	case KSTATE_Wait:
		f32 max, min;
		min = mManager->mParams.mMinWaitTime.mValue;
		max = mManager->mParams.mMaxWaitTime.mValue;
		mCounter.setValue(((max - min) * randEbisawaFloat() + min));
		break;
	case KSTATE_Turn:
		f32 angle    = mManager->mParams.mWalkRandomAngle.mValue;
		f32 line     = JMAAtan2Radian(mTargetPos.y - mPosition.y, mTargetPos.x - mPosition.x);
		f32 test     = angle * DEG2RAD * PI * (randEbisawaFloat() * 2.0f + -1.0f) + line;
		mTargetAngle = Vector2f(cosf(test), sinf(test));
		break;
	case KSTATE_Walk:
		f32 max2, min2;
		max2 = mManager->mParams.mMaxMoveTime.mValue;
		min2 = mManager->mParams.mMinMoveTime.mValue;
		mCounter.setValue(((max2 - min2) * randEbisawaFloat() + min2));
		break;

	case KSTATE_ZigZagWalk:
		Vector2f negPos(-mPosition.x, -mPosition.y);
		negPos.normalise();
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
		mCounter.update();
		mActionID = KOGANEACT_Wait;
		if (mControl != nullptr) {
			f32 stickX = mControl->mSStick.mXPos;
			if (FABS(stickX) > 0.7f) {
				Vector2f newAng(mAngle.y, -mAngle.x);
				mAngle = mAngle + newAng * (stickX * mManager->mParams.mTurnRate.mValue);
				mAngle.normalise();
				mActionID = KOGANEACT_Turn;
			}

			f32 stickY = mControl->mSStick.mYPos;
			if (stickY > 0.7f) {
				f32 paramProd = stickY * mMoveSpeed;
				mPosition     = mPosition + mAngle * paramProd;
				mActionID     = KOGANEACT_Move;
			}
		}
		if (mCounter.isZero()) {
			startState(KSTATE_GoHome);
		}

	} break;

	case KSTATE_Wait: {
		mActionID = KOGANEACT_Wait;
		mCounter.update();
		if (mCounter.isZero()) {
			startState(KSTATE_Turn);
		}
	} break;

	case KSTATE_Turn: {
		mActionID   = KOGANEACT_Turn;
		f32 product = 60.0f * sys->mDeltaTime * 0.5f * 0.1f;
		mAngle      = mAngle + mTargetAngle * product;
		mAngle.normalise();

		Vector2f diff = mAngle - mTargetAngle;
		if (diff.length() < 0.1f) {
			startState(KSTATE_Walk);
		}
	} break;

	case KSTATE_Walk: {
		mActionID = KOGANEACT_Move;
		mCounter.update();
		if (mCounter.isZero()) {
			startState(KSTATE_Wait);
		} else {
			mPosition = mPosition + mAngle * mMoveSpeed;
		}

	} break;

	case KSTATE_ZigZagWalk: {
		mActionID = KOGANEACT_Move;
		mAngle.normalise();

		mPosition = mPosition + mAngle * mMoveSpeed;
	} break;

	case KSTATE_GoHome: {
		mActionID = KOGANEACT_Move;
		mAngle.normalise();
		mPosition = mPosition + mAngle * mMoveSpeed;
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
		case KOGANEACT_Turn: {
			mAnim.init(0, 1.0);
			mAnim.play();
		} break;

		case KOGANEACT_Move: {
			mAnim.init(0, 1.0);
			mAnim.play();
		} break;

		case KOGANEACT_Wait: {
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
		mAnim.mAnimRes->mAnimTransform->setFrame(mAnim.mAnimStartTime);
		model->mModelData->getJointNodePointer(0)->mMtxCalc = mAnim.mAnimRes->mAnmCalcMtx;
	}

	mModel->calc();
	mModel->entry();
	return mModel->viewCalc();
}

} // namespace Kogane
} // namespace title
} // namespace ebi
