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

/*
 * --INFO--
 * Address:	803E85D8
 * Size:	000150
 */
Chappy::TMgr::TMgr()
    : CNode("ChappyMgr")
{
	mAnimator = new TAnimator;
	mObject   = new TUnit;
}

/*
 * --INFO--
 * Address:	803E8728
 * Size:	000050
 */
void Chappy::TMgr::setArchive(JKRArchive* arc)
{
	mParams.loadSettingFile(arc, "param/param_chappy.txt");
	mAnimator->setArchive(arc);
}

/*
 * --INFO--
 * Address:	803E8778
 * Size:	000028
 */
void Chappy::TMgr::initUnit() { mObject->init(this); }

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
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

/*
 * --INFO--
 * Address:	803E87A0
 * Size:	000068
 */
Chappy::TAnimator::TAnimator() { mModelData = nullptr; }

/*
 * --INFO--
 * Address:	803E8808
 * Size:	000128
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

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
J3DModel* Chappy::TAnimator::newJ3DModel() { return new J3DModel(mModelData, 0x20000, 1); }

/*
 * --INFO--
 * Address:	803E8930
 * Size:	000008
 */
void Chappy::TUnit::setController(Controller* control) { mControl = control; }

/*
 * --INFO--
 * Address:	803E8938
 * Size:	0000F4
 */
void Chappy::TUnit::init(TMgr* mgr)
{
	mManager = mgr;
	mModel   = mManager->mAnimator->newJ3DModel();
	mAnim.setAnimFolder(&mManager->mAnimator->mAnimFolder);

	mPos      = titleMgr->getPosOutOfViewField();
	mParms[0] = mManager->mParams.mWalkSpeed.mValue;
	mParms[1] = mManager->mParams.mScale.mValue;
	mParms[4] = mManager->mParams.mCullRadius.mValue;
	mParms[2] = mManager->mParams.mCollRadius.mValue;
	mParms[3] = mManager->mParams.mPikiReactRadius.mValue;
}

/*
 * --INFO--
 * Address:	803E8A2C
 * Size:	000054
 */
void Chappy::TUnit::startZigzagWalk(Vector2f& pos1, Vector2f& pos2)
{
	mPos       = pos1;
	mTargetPos = pos2;
	mActionID  = CHAPPYACT_NULL;
	_48        = 0;
	startAIState_(CHAPPYAI_5);
}

/*
 * --INFO--
 * Address:	803E8A80
 * Size:	000030
 */
void Chappy::TUnit::goHome()
{
	if (mStateID != 0) {
		startAIState_(CHAPPYAI_6);
	}
}

/*
 * --INFO--
 * Address:	803E8AB0
 * Size:	000024
 */
void Chappy::TUnit::outOfCalc() { startAIState_(CHAPPYAI_Inactive); }

/*
 * --INFO--
 * Address:	803E8AD4
 * Size:	000014
 */
bool Chappy::TUnit::isCalc() { return mStateID != CHAPPYAI_Inactive; }

/*
 * --INFO--
 * Address:	803E8AE8
 * Size:	000014
 */
bool Chappy::TUnit::isController() { return (u8)(mStateID == CHAPPYAI_Controlled); }

/*
 * --INFO--
 * Address:	803E8AFC
 * Size:	000318
 */
void Chappy::TUnit::startAIState_(enumAIState state)
{
	if (mStateID == state) {
		if (mStateID == CHAPPYAI_Controlled) {
			u32 time  = mManager->mParams.mControlledTime.mValue / sys->mDeltaTime;
			mCounter  = time;
			mCounter2 = time;
		} else {
			return;
		}
	}

	mStateID = state;

	switch (state) {
	case CHAPPYAI_Inactive:
		mPos = title::titleMgr->getPosOutOfViewField();

	case CHAPPYAI_Controlled:
		u32 time  = mManager->mParams.mControlledTime.mValue / sys->mDeltaTime;
		mCounter  = time;
		mCounter2 = time;
		break;

	case CHAPPYAI_Wait:
		f32 max, min;
		min       = mManager->mParams.mMinWaitTime.mValue;
		max       = mManager->mParams.mMaxWaitTime.mValue;
		u32 time2 = ((max - min) * randEbisawaFloat() + min) / sys->mDeltaTime;
		mCounter  = time2;
		mCounter2 = time2;
		break;

	case CHAPPYAI_Turn:
		f32 angle    = mManager->mParams.mWalkAngleRand.mValue;
		f32 line     = JMath::atanTable_.atan2_(mTargetPos.y - mPos.y, mTargetPos.x - mPos.x);
		f32 test     = angle * DEG2RAD * PI * (randEbisawaFloat() * 2.0f + -1.0f) + line;
		mTargetAngle = Vector2f(pikmin2_cosf(test), pikmin2_sinf(test));
		break;

	case CHAPPYAI_Walk:
		f32 max2, min2;
		max2 = mManager->mParams.mMaxWalkTime.mValue;
		min2 = mManager->mParams.mMinWalkTime.mValue;

		u32 time3 = ((max2 - min2) * randEbisawaFloat() + min2) / sys->mDeltaTime;
		mCounter  = time3;
		mCounter2 = time3;
		break;

	case CHAPPYAI_5:
		Vector2f negPos(-mPos.x, -mPos.y);
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

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void Chappy::TUnit::startAction_(Chappy::TUnit::enumAction actionID)
{
	mActionID = actionID;
	switch (mActionID) {
	case CHAPPYACT_0:
		mAnim.init(1, 1.0f);
		mAnim._04 = 0.1f;
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

/*
 * --INFO--
 * Address:	803E8E14
 * Size:	000A64
 */
void Chappy::TUnit::update()
{
	if (!isCalc())
		return;

	int id = mStateID;
	if (id != CHAPPYAI_Inactive && id != CHAPPYAI_6 && id != CHAPPYAI_5) {
		Controller* control = mControl;
		bool check          = false;
		if (control) {
			if (control->mSStick.mStickMag > 0.7f) {
				check = true;
			} else if (control->mButton.mButtonDown & Controller::PRESS_Z) {
				check = true;
			}
		}
		if (check) {
			startAIState_(CHAPPYAI_Controlled);
		}
	}

	bool buttonDown = false;
	f32 stickX      = 0.0f;
	f32 stickY      = stickX;

	if (mCounter) {
		mCounter--;
	}

	switch (mStateID) {
	case CHAPPYAI_Controlled: {
		Controller* control = mControl;
		if (control) {
			stickX     = control->mSStick.mXPos;
			stickY     = control->mSStick.mYPos;
			buttonDown = (control->mButton.mButtonDown & Controller::PRESS_Z) == Controller::PRESS_Z;
		}
		if (mCounter == 0) {
			startAIState_(CHAPPYAI_6);
		}
		break;
	}

	case CHAPPYAI_Wait:
		stickX     = 0.0f;
		buttonDown = false;
		stickY     = stickX;
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
			stickY     = 0.0f;
			stickX     = 1.0f;
			buttonDown = false;
		} else {
			stickY     = 0.0f;
			stickX     = -1.0f;
			buttonDown = false;
		}
		break;

	case CHAPPYAI_Walk:
		if (mCounter != 0) {
			stickX     = 0.0f;
			buttonDown = false;
			stickY     = 1.0f;
		} else {
			stickX     = 0.0f;
			stickY     = 0.0f;
			buttonDown = 0;
			if (mAnim._08 == 3) {
				bool check = false;
				for (int i = 0; i < 500; i++) {
					EGECircle2f circle;
					circle.mRadius = mManager->mParams.mHitRadius.mValue;
					f32 factor     = mManager->mParams.mHitOffset.mValue;
					circle.mCenter = mPos + (mAngle * factor);
					Vector2f pos   = Vector2f(titleMgr->mPikminMgr.getUnit(i)->mPos);
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
		stickX     = 0.0f;
		stickY     = 0.0f;
		buttonDown = true;
		if (mAnim._08 == 3) {
			startAIState_(CHAPPYAI_Turn);
		}
		break;

	case CHAPPYAI_5:
		stickX     = 0.0f;
		buttonDown = false;
		stickY     = 1.0f;
		break;

	case CHAPPYAI_6:
		stickX     = 0.0f;
		buttonDown = false;
		stickY     = 1.0f;
		break;
	}

	enumAction actionID;
	if (_48) {
		actionID = CHAPPYACT_0;
	} else {
		actionID = CHAPPYACT_0;
		if (FABS(stickX) > 0.7f) {
			actionID = CHAPPYACT_1;
		}
		if (stickY > 0.7f) {
			actionID = CHAPPYACT_4;
		}
		if (buttonDown == 1) {
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
			_48 = true;
			if (mAnim._08 == 3) {
				_48 = false;
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
		if (_48 != 0) {
			constant = 0.3f;
		}
		f32 cParm = constant * mParms[0];
		mPos      = mPos + Vector2f(mAngle.x, mAngle.y) * cParm;
	} break;
	case CHAPPYACT_2: {
		f32 anim00 = mAnim._00;
		if (8.0f < anim00 && anim00 < 10.f) {
			int idx = 0;
			EGECircle2f circle;
			circle.mRadius = mManager->mParams.mHitRadius.mValue;
			f32 factor     = mManager->mParams.mHitOffset.mValue;
			circle.mCenter = mPos + (mAngle * factor);
			for (int i = 0; i < 500; i++) {
				Pikmin::TUnit* pikUnit = titleMgr->mPikminMgr.getUnit(i);
				Vector2f pos           = Vector2f(pikUnit->mPos);
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
		mPos = titleMgr->getPosOutOfViewField();
	case CHAPPYAI_5:
		if (titleMgr->isInViewField(this)) {
			startAIState_(CHAPPYAI_Walk);
		}
		break;
	case CHAPPYAI_6:
		if (titleMgr->isOutViewField(this)) {
			startAIState_(CHAPPYAI_Inactive);
		}
		break;
	default:
		titleMgr->inViewField(this);
		break;
	}
	calcModelBaseMtx_();
	if (mAnim._0C != nullptr) {
		switch (mAnim._08) {
		case 1:
			mAnim._00 += mAnim._04 * mAnim._0C->float_0x18;
			if (mAnim._00 > mAnim._0C->mLoopEnd) {
				mAnim._00 -= mAnim._0C->mLoopEnd - mAnim._0C->mLoopStart;
			}
			break;

		case 2:
			mAnim._00 += mAnim._04 * mAnim._0C->float_0x18;
			if (mAnim._00 >= mAnim._0C->float_0xC) {
				mAnim._00 = mAnim._0C->float_0xC;
				mAnim._08 = 3;
			}
			break;

		case 0:
		case 3:
		case 4:
			break;
		}
	}

	J3DModel* model = mModel;
	if (mAnim._0C != nullptr) {
		mAnim._0C->pAnmTransform_0x0->mCurrentFrame        = mAnim._00;
		model->mModelData->mJointTree.mJoints[0]->mMtxCalc = mAnim._0C->pMtxCalcAnm_0x4;
	}
	mModel->calc();
	mModel->entry();
	mModel->viewCalc();
}

} // namespace title
} // namespace ebi
