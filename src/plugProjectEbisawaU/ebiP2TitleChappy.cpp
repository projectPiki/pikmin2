#include "ebi/title/Entities/TChappy.h"
#include "ebi/title/TTitle.h"
#include "ebi/Geometry.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "Controller.h"
#include "nans.h"

namespace ebi {
namespace title {

static const int unusedTitleChappyArray[] = { 0, 0, 0 };
static const char ebiP2TitleChappyName[]  = "ebiP2TitleChappy";

/**
 * @note Address: 0x803E85D8
 * @note Size: 0x150
 */
Chappy::TMgr::TMgr()
    : CNode("ChappyMgr")
{
	mAnimator = new TAnimator;
	mObject   = new TUnit;
}

/**
 * @note Address: 0x803E8728
 * @note Size: 0x50
 */
void Chappy::TMgr::setArchive(JKRArchive* arc)
{
	mParams.loadSettingFile(arc, "param/param_chappy.txt");
	mAnimator->setArchive(arc);
}

/**
 * @note Address: 0x803E8778
 * @note Size: 0x28
 */
void Chappy::TMgr::initUnit() { mObject->init(this); }

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
void Chappy::TAnimFolder::load(J3DModelData* data, JKRArchive* arc)
{
	mAnims[0].load(data, arc, "chappy/move1.bck");
	mAnims[0].mLoopStart = 5.0f;
	mAnims[0].mLoopEnd   = 34.0f;
	mAnims[0].mMode      = 1;

	mAnims[1].load(data, arc, "chappy/waitact1.bck");
	mAnims[1].mLoopStart = 8.0f;
	mAnims[1].mLoopEnd   = 19.0f;
	mAnims[1].mMode      = 1;

	mAnims[2].load(data, arc, "chappy/attack.bck");
	mAnims[3].load(data, arc, "chappy/waitact2.bck");
}

/**
 * @note Address: 0x803E87A0
 * @note Size: 0x68
 */
Chappy::TAnimator::TAnimator() { mModelData = nullptr; }

/**
 * @note Address: 0x803E8808
 * @note Size: 0x128
 */
void Chappy::TAnimator::setArchive(JKRArchive* arc)
{
	void* file = arc->getResource("chappy/swallow_model.bmd");
	P2ASSERTLINE(122, file);

	mModelData = J3DModelLoaderDataBase::load(file, 0x100000);
	mModelData->newSharedDisplayList(0x40000);
	mModelData->makeSharedDL();

	mAnimFolder.load(mModelData, arc);
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
J3DModel* Chappy::TAnimator::newJ3DModel() { return new J3DModel(mModelData, 0x20000, 1); }

/**
 * @note Address: 0x803E8930
 * @note Size: 0x8
 */
void Chappy::TUnit::setController(Controller* control) { mController = control; }

/**
 * @note Address: 0x803E8938
 * @note Size: 0xF4
 */
void Chappy::TUnit::init(TMgr* mgr)
{
	mManager = mgr;
	mModel   = mManager->mAnimator->newJ3DModel();
	mAnim.setAnimFolder(&mManager->mAnimator->mAnimFolder);

	mPosition = titleMgr->getPosOutOfViewField();
	mParms[0] = mManager->mParams.mWalkSpeed.mValue;
	mParms[1] = mManager->mParams.mScale.mValue;
	mParms[4] = mManager->mParams.mCullRadius.mValue;
	mParms[2] = mManager->mParams.mCollRadius.mValue;
	mParms[3] = mManager->mParams.mPikiReactRadius.mValue;
}

/**
 * @note Address: 0x803E8A2C
 * @note Size: 0x54
 */
void Chappy::TUnit::startZigzagWalk(Vector2f& position, Vector2f& targetPosition)
{
	mPosition       = position;
	mTargetPos      = targetPosition;
	mActionID       = CHAPPYACT_NULL;
	mIsAiControlled = 0;
	startAIState_(CHAPPYAI_EscapeScreen);
}

/**
 * @note Address: 0x803E8A80
 * @note Size: 0x30
 */
void Chappy::TUnit::goHome()
{
	if (mStateID == CHAPPYAI_Inactive) {
		return;
	}

	startAIState_(CHAPPYAI_GoHome);
}

/**
 * @note Address: 0x803E8AB0
 * @note Size: 0x24
 */
void Chappy::TUnit::outOfCalc() { startAIState_(CHAPPYAI_Inactive); }

/**
 * @note Address: 0x803E8AD4
 * @note Size: 0x14
 */
bool Chappy::TUnit::isCalc() { return mStateID != CHAPPYAI_Inactive; }

/**
 * @note Address: 0x803E8AE8
 * @note Size: 0x14
 */
bool Chappy::TUnit::isController() { return (u8)(mStateID == CHAPPYAI_Controlled); }

/**
 * @note Address: 0x803E8AFC
 * @note Size: 0x318
 */
void Chappy::TUnit::startAIState_(enumAIState state)
{
	if (mStateID == state) {
		if (mStateID == CHAPPYAI_Controlled) {
			u32 length = mManager->mParams.mControlledTime.mValue / sys->mDeltaTime;
			mCounter   = length;
			mCounter2  = length;
		} else {
			return;
		}
	}

	mStateID = state;

	switch (state) {
	case CHAPPYAI_Inactive: {
		mPosition = title::titleMgr->getPosOutOfViewField();
	}

	case CHAPPYAI_Controlled: {
		u32 time = mManager->mParams.mControlledTime.mValue / sys->mDeltaTime;

		mCounter  = time;
		mCounter2 = time;
		break;
	}

	case CHAPPYAI_Wait: {
		f32 max, min;
		min = mManager->mParams.mMinWaitTime.mValue;
		max = mManager->mParams.mMaxWaitTime.mValue;

		u32 time = ((max - min) * randEbisawaFloat() + min) / sys->mDeltaTime;

		mCounter  = time;
		mCounter2 = time;
		break;
	}

	case CHAPPYAI_Turn: {
		f32 angle           = mManager->mParams.mWalkAngleRand.mValue;
		f32 angleBetweenPos = JMath::atanTable_.atan2_(mTargetPos.y - mPosition.y, mTargetPos.x - mPosition.x);
		f32 final           = angle * DEG2RAD * PI * (randEbisawaFloat() * 2.0f + -1.0f) + angleBetweenPos;
		mTargetAngle        = Vector2f(cosf(final), sinf(final));
		break;
	}

	case CHAPPYAI_Walk: {
		f32 max, min;
		max = mManager->mParams.mMaxWalkTime.mValue;
		min = mManager->mParams.mMinWalkTime.mValue;

		u32 time  = ((max - min) * randEbisawaFloat() + min) / sys->mDeltaTime;
		mCounter  = time;
		mCounter2 = time;
		break;
	}

	case CHAPPYAI_EscapeScreen: {
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
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x100
 */
void Chappy::TUnit::startAction_(Chappy::TUnit::enumAction actionID)
{
	mActionID = actionID;
	switch (mActionID) {
	case CHAPPYACT_0:
		mAnim.init(1, 1.0f);
		mAnim.mTimeStep = 0.1f;
		mAnim.play();
		break;

	case CHAPPYACT_1:
		mAnim.init(1, 1.0f);
		mAnim.play();
		break;

	case CHAPPYACT_4:
		mAnim.init(0, 1.0f);
		mAnim.play();
		break;

	case CHAPPYACT_2:
		mAnim.init(2, 1.0f);
		mAnim.play();
		mAttacks = 0;
		break;

	case CHAPPYACT_3:
		mAnim.init(3, 1.0f);
		mAnim.play();
		break;
	}
}

/**
 * @note Address: 0x803E8E14
 * @note Size: 0xA64
 */
void Chappy::TUnit::update()
{
	if (!isCalc())
		return;

	int id = mStateID;
	if (id != CHAPPYAI_Inactive && id != CHAPPYAI_GoHome && id != CHAPPYAI_EscapeScreen) {
		Controller* control = mController;
		bool check          = false;
		if (control) {
			if (control->mSStick.mStickMag > 0.7f) {
				check = true;
			} else if (control->getButtonDown() & Controller::PRESS_Z) {
				check = true;
			}
		}
		if (check) {
			startAIState_(CHAPPYAI_Controlled);
		}
	}

	bool isButtonDown = false;
	f32 stickX        = 0.0f;
	f32 stickY        = stickX;

	if (mCounter) {
		mCounter--;
	}

	switch (mStateID) {
	case CHAPPYAI_Controlled: {
		Controller* control = mController;
		if (control) {
			stickX       = control->mSStick.mXPos;
			stickY       = control->mSStick.mYPos;
			isButtonDown = (control->getButtonDown() & Controller::PRESS_Z) == Controller::PRESS_Z;
		}

		if (mCounter == 0) {
			startAIState_(CHAPPYAI_GoHome);
		}
		break;
	}

	case CHAPPYAI_Wait:
		stickX       = 0.0f;
		isButtonDown = false;
		stickY       = stickX;
		if (mCounter == 0) {
			startAIState_(CHAPPYAI_Turn);
		}
		break;

	case CHAPPYAI_Turn:
		f32 initAngle = JMath::atanTable_.atan2_(mAngle.y, mAngle.x);
		f32 angle     = initAngle - JMath::atanTable_.atan2_(mTargetAngle.y, mTargetAngle.x);
		while (angle < -PI) {
			angle += TAU;
		}

		while (angle >= PI) {
			angle -= TAU;
		}

		if (FABS(angle) < 0.09817477f) {
			startAIState_(CHAPPYAI_Walk);
		} else if (angle > 0.0f) {
			stickY       = 0.0f;
			stickX       = 1.0f;
			isButtonDown = false;
		} else {
			stickY       = 0.0f;
			stickX       = -1.0f;
			isButtonDown = false;
		}
		break;

	case CHAPPYAI_Walk:
		if (mCounter != 0) {
			stickX       = 0.0f;
			isButtonDown = false;
			stickY       = 1.0f;
		} else {
			stickX       = 0.0f;
			stickY       = 0.0f;
			isButtonDown = 0;
			if (mAnim.mState == 3) {
				bool check = false;
				for (int i = 0; i < 500; i++) {
					EGECircle2f circle;
					circle.mRadius = mManager->mParams.mHitRadius.mValue;
					f32 factor     = mManager->mParams.mHitOffset.mValue;
					circle.mCenter = mPosition + (mAngle * factor);
					Vector2f pos   = Vector2f(titleMgr->mPikminMgr.getUnit(i)->mPosition);
					if (!circle.isOut(pos)) {
						check = true;
						break;
					}
				}

				if (check) {
					startAIState_(CHAPPYAI_4);
				} else {
					startAIState_(CHAPPYAI_Turn);
				}
			}
		}
		break;

	case CHAPPYAI_4:
		stickX       = 0.0f;
		stickY       = 0.0f;
		isButtonDown = true;
		if (mAnim.mState == 3) {
			startAIState_(CHAPPYAI_Turn);
		}
		break;

	case CHAPPYAI_EscapeScreen:
		stickX       = 0.0f;
		isButtonDown = false;
		stickY       = 1.0f;
		break;

	case CHAPPYAI_GoHome:
		stickX       = 0.0f;
		isButtonDown = false;
		stickY       = 1.0f;
		break;
	}

	enumAction actionID;
	if (mIsAiControlled) {
		actionID = CHAPPYACT_0;
	} else {
		actionID = CHAPPYACT_0;
		if (FABS(stickX) > 0.7f) {
			actionID = CHAPPYACT_1;
		}
		if (stickY > 0.7f) {
			actionID = CHAPPYACT_4;
		}
		if (isButtonDown == 1) {
			actionID = CHAPPYACT_2;
		}
	}

	if (mActionID != actionID) {
		switch (mActionID) {
		case CHAPPYACT_1:
		case CHAPPYACT_2:
		case CHAPPYACT_3:
		case CHAPPYACT_4: {
			mAnim.playStopEnd();
			mIsAiControlled = true;
			if (mAnim.mState == 3) {
				mIsAiControlled = false;
				if (mActionID != 0) {
					startAction_(CHAPPYACT_0);
				}
			}
		} break;
		case CHAPPYACT_0:
		case CHAPPYACT_NULL:
		default:
			if (actionID != mActionID) {
				startAction_(actionID);
			}
			break;
		}
	}

	switch (mActionID) {
	case CHAPPYACT_1: {
		f32 constant = (FABS(stickX) > 0.7f) ? stickX : 0.0f;
		Vector2f newAng(mAngle.y, -mAngle.x);
		mAngle = mAngle + newAng * (constant * mManager->mParams.mTurnSpeed.mValue);
		mAngle.normalise();
	} break;
	case CHAPPYACT_4: {
		f32 constant = (stickY > 0.7f) ? stickY : 0.3f;
		if (mIsAiControlled != 0) {
			constant = 0.3f;
		}
		f32 cParm = constant * mParms[0];
		mPosition = mPosition + Vector2f(mAngle.x, mAngle.y) * cParm;
	} break;
	case CHAPPYACT_2: {
		f32 anim00 = mAnim.mAnimStartTime;
		if (8.0f < anim00 && anim00 < 10.f) {
			int idx = 0;
			EGECircle2f circle;
			circle.mRadius = mManager->mParams.mHitRadius.mValue;
			f32 factor     = mManager->mParams.mHitOffset.mValue;
			circle.mCenter = mPosition + (mAngle * factor);
			for (int i = 0; i < 500; i++) {
				Pikmin::TUnit* pikUnit = titleMgr->mPikminMgr.getUnit(i);
				Vector2f pos           = Vector2f(pikUnit->mPosition);
				if (!circle.isOut(pos)) {
					if (pikUnit->beAttacked()) {
						mAttacks++;
					}
				}
			}
		}
		if ((s32)anim00 == 10 && mAttacks == 0 && mActionID != 3) {
			startAction_(CHAPPYACT_3);
		}

	} break;
	case CHAPPYACT_0:
	case CHAPPYACT_3:
		break;
	}

	switch (mStateID) {
	case CHAPPYAI_Inactive:
		mPosition = titleMgr->getPosOutOfViewField();
	case CHAPPYAI_EscapeScreen:
		if (titleMgr->isInViewField(this)) {
			startAIState_(CHAPPYAI_Walk);
		}
		break;
	case CHAPPYAI_GoHome:
		if (titleMgr->isOutViewField(this)) {
			startAIState_(CHAPPYAI_Inactive);
		}
		break;
	default:
		titleMgr->inViewField(this);
		break;
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
	mModel->viewCalc();
}

} // namespace title
} // namespace ebi
