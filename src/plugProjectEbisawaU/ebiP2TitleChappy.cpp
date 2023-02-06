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

// not sure why these are here - possibly structs declared in the file?????
// it's just easier to declare this as a fake func.
static const char* parmStr = "Parms";

static void fakeEbiTitleChappyFunc(char* format)
{
	Parm<f32> mScale(nullptr, 'b000', "ÉXÉPÅ[Éã", 2.0f, 0.0f, 10.0f);
	Parm<f32> mCullRadius(nullptr, 'b001', "ÉJÉäÉìÉOîºåa", 100.0f, 0.0f, 500.0f);
	Parm<f32> mCollRadius(nullptr, 'b002', "ÉRÉäÉWÉáÉìîºåa", 150.0f, 0.0f, 500.0f);
	Parm<f32> mPikiReactRadius(nullptr, 'b003', "ÉsÉNÉ~ÉìîΩâûîºåa", 300.0f, 0.0f, 500.0f);
	Parm<f32> mHitOffset(nullptr, 'ch20', "ìñÇΩÇËOffset", 80.0f, 0.0f, 500.0f);
	Parm<f32> mHitRadius(nullptr, 'ch21', "ìñÇΩÇËîºåa", 100.0f, 0.0f, 500.0f);
	Parm<f32> mWalkAngleRand(nullptr, 'ch00', "ï‡çsÉâÉìÉ_ÉÄäpìx", 30.0f, 0.0f, 90.0f);
	Parm<f32> mWalkSpeed(nullptr, 'ch01', "ï‡çsë¨ìx", 8.0f, 0.0f, 100.0f);
	Parm<f32> mTurnSpeed(nullptr, 'ch23', "ê˘âÒê´î\x5C", 0.05f, 0.0f, 1.0f); // x5C literal required for match
	Parm<f32> mMinWaitTime(nullptr, 'ch10', "ë“Çøéûä‘ç≈è¨(ïb)", 0.3f, 0.0f, 10.0f);
	Parm<f32> mMaxWaitTime(nullptr, 'ch11', "ë“Çøéûä‘ç≈ëÂ(ïb)", 1.0f, 0.0f, 10.0f);
	Parm<f32> mMinWalkTime(nullptr, 'ch12', "à⁄ìÆéûä‘ç≈è¨(ïb)", 0.5f, 0.0f, 10.0f);
	Parm<f32> mMaxWalkTime(nullptr, 'ch13', "à⁄ìÆéûä‘ç≈ëÂ(ïb)", 1.5f, 0.0f, 10.0f);
	Parm<f32> mControlledTime(nullptr, 'ch22', "ÉRÉìÉgÉçÅ[ÉâèÛë‘éûä‘(ïb)", 5.0f, 0.0f, 60.0f);
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
		u32 time2 = ((max - min) * randFloat() + min) / sys->mDeltaTime;
		mCounter  = time2;
		mCounter2 = time2;
		break;

	case CHAPPYAI_Turn:
		f32 angle    = mManager->mParams.mWalkAngleRand.mValue;
		f32 line     = JMath::atanTable_.atan2_(mTargetPos.y - mPos.y, mTargetPos.x - mPos.x);
		f32 test     = angle * DEG2RAD * PI * (randFloat() * 2.0f + -1.0f) + line;
		mTargetAngle = Vector2f(pikmin2_cosf(test), pikmin2_sinf(test));
		break;

	case CHAPPYAI_Walk:
		f32 max2, min2;
		max2 = mManager->mParams.mMaxWalkTime.mValue;
		min2 = mManager->mParams.mMinWalkTime.mValue;

		u32 time3 = ((max2 - min2) * randFloat() + min2) / sys->mDeltaTime;
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
	case CHAPPYAI_Wait: {
		Controller* control = mControl;
		if (control) {
			stickX     = control->mSStick.mXPos;
			stickY     = control->mSStick.mYPos;
			buttonDown = control->mButton.mButtonDown & Controller::PRESS_Z;
		}
		if (mCounter == 0) {
			startAIState_(CHAPPYAI_6);
		}
		break;
	}

	case CHAPPYAI_Turn:
		stickX     = 0.0f;
		buttonDown = false;
		stickY     = stickX;
		if (mCounter == 0) {
			startAIState_(CHAPPYAI_Turn);
		}
		break;

	case CHAPPYAI_Walk:
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

	case CHAPPYAI_4:
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

	case CHAPPYAI_5:
		stickX     = 0.0f;
		stickY     = 0.0f;
		buttonDown = true;
		if (mAnim._08 == 3) {
			startAIState_(CHAPPYAI_Turn);
		}
		break;

	case CHAPPYAI_6:
		stickX     = 0.0f;
		buttonDown = false;
		stickY     = 1.0f;
		break;

	case CHAPPYAI_Controlled:
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
		if (mActionID >= 1 && mActionID < 5) {
			mAnim.playStopEnd();
			_48 = true;
			if (mAnim._08 == 3) {
				startAction_(CHAPPYACT_0);
			}
		} else if (actionID != mActionID) {
			startAction_(actionID);
		}
	}

	// more stuff here still.

	mModel->calc();
	mModel->entry();
	/*
stwu     r1, -0x80(r1)
mflr     r0
stw      r0, 0x84(r1)
stfd     f31, 0x70(r1)
psq_st   f31, 120(r1), 0, qr0
stfd     f30, 0x60(r1)
psq_st   f30, 104(r1), 0, qr0
stfd     f29, 0x50(r1)
psq_st   f29, 88(r1), 0, qr0
stw      r31, 0x4c(r1)
stw      r30, 0x48(r1)
stw      r29, 0x44(r1)
stw      r28, 0x40(r1)
lwz      r12, 0(r3)
mr       r30, r3
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_803E9840
lwz      r0, 0x68(r30)
cmpwi    r0, 0
beq      lbl_803E8ECC
cmpwi    r0, 6
beq      lbl_803E8ECC
cmpwi    r0, 5
beq      lbl_803E8ECC
lwz      r3, 0x44(r30)
li       r4, 0
cmplwi   r3, 0
beq      lbl_803E8EB8
lfs      f1, 0x60(r3)
lfs      f0, lbl_8051FDE4@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_803E8EA8
li       r4, 1
b        lbl_803E8EB8

lbl_803E8EA8:
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x1b, 0x1b
beq      lbl_803E8EB8
li       r4, 1

lbl_803E8EB8:
clrlwi.  r0, r4, 0x18
beq      lbl_803E8ECC
mr       r3, r30
li       r4, 7
bl
startAIState___Q43ebi5title6Chappy5TUnitFQ53ebi5title6Chappy5TUnit11enumAIState

lbl_803E8ECC:
lfs      f31, lbl_8051FD68@sda21(r2)
li       r31, 0
lwz      r3, 0x3c(r30)
fmr      f30, f31
cmplwi   r3, 0
beq      lbl_803E8EEC
addi     r0, r3, -1
stw      r0, 0x3c(r30)

lbl_803E8EEC:
lwz      r0, 0x68(r30)
cmplwi   r0, 7
bgt      lbl_803E914C
lis      r3, lbl_804E9E8C@ha
slwi     r0, r0, 2
addi     r3, r3, lbl_804E9E8C@l
lwzx     r0, r3, r0
mtctr    r0
bctr
.global  lbl_803E8F10

lbl_803E8F10:
lwz      r3, 0x44(r30)
cmplwi   r3, 0
beq      lbl_803E8F2C
lwz      r0, 0x1c(r3)
lfs      f31, 0x58(r3)
lfs      f30, 0x5c(r3)
rlwinm   r31, r0, 0x1c, 0x1f, 0x1f

lbl_803E8F2C:
lwz      r0, 0x3c(r30)
cmplwi   r0, 0
bne      lbl_803E914C
mr       r3, r30
li       r4, 6
bl
startAIState___Q43ebi5title6Chappy5TUnitFQ53ebi5title6Chappy5TUnit11enumAIState
b        lbl_803E914C
.global  lbl_803E8F48

lbl_803E8F48:
lfs      f31, lbl_8051FD68@sda21(r2)
li       r31, 0
lwz      r0, 0x3c(r30)
fmr      f30, f31
cmplwi   r0, 0
bne      lbl_803E914C
mr       r3, r30
li       r4, 2
bl
startAIState___Q43ebi5title6Chappy5TUnitFQ53ebi5title6Chappy5TUnit11enumAIState
b        lbl_803E914C
.global  lbl_803E8F70

lbl_803E8F70:
lis      r3, atanTable___5JMath@ha
lfs      f1, 0x10(r30)
lfs      f2, 0xc(r30)
addi     r3, r3, atanTable___5JMath@l
bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
fmr      f29, f1
lis      r3, atanTable___5JMath@ha
lfs      f1, 0x38(r30)
addi     r3, r3, atanTable___5JMath@l
lfs      f2, 0x34(r30)
bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
fsubs    f2, f29, f1
lfs      f1, lbl_8051FDE8@sda21(r2)
lfs      f0, lbl_8051FDEC@sda21(r2)
b        lbl_803E8FB0

lbl_803E8FAC:
fadds    f2, f2, f1

lbl_803E8FB0:
fcmpo    cr0, f2, f0
blt      lbl_803E8FAC
lfs      f1, lbl_8051FDE8@sda21(r2)
lfs      f0, lbl_8051FDC8@sda21(r2)
b        lbl_803E8FC8

lbl_803E8FC4:
fsubs    f2, f2, f1

lbl_803E8FC8:
fcmpo    cr0, f2, f0
cror     2, 1, 2
beq      lbl_803E8FC4
fabs     f1, f2
lfs      f0, lbl_8051FDF0@sda21(r2)
frsp     f1, f1
fcmpo    cr0, f1, f0
bge      lbl_803E8FF8
mr       r3, r30
li       r4, 3
bl
startAIState___Q43ebi5title6Chappy5TUnitFQ53ebi5title6Chappy5TUnit11enumAIState
b        lbl_803E914C

lbl_803E8FF8:
lfs      f0, lbl_8051FD68@sda21(r2)
fcmpo    cr0, f2, f0
ble      lbl_803E9014
fmr      f30, f0
lfs      f31, lbl_8051FD70@sda21(r2)
li       r31, 0
b        lbl_803E914C

lbl_803E9014:
fmr      f30, f0
lfs      f31, lbl_8051FD6C@sda21(r2)
li       r31, 0
b        lbl_803E914C
.global  lbl_803E9024

lbl_803E9024:
lwz      r0, 0x3c(r30)
cmplwi   r0, 0
beq      lbl_803E9040
lfs      f31, lbl_8051FD68@sda21(r2)
li       r31, 0
lfs      f30, lbl_8051FD70@sda21(r2)
b        lbl_803E914C

lbl_803E9040:
lfs      f31, lbl_8051FD68@sda21(r2)
li       r31, 0
lwz      r0, 0x58(r30)
fmr      f30, f31
cmpwi    r0, 3
bne      lbl_803E914C
li       r29, 0
li       r28, 0

lbl_803E9060:
lwz      r5, 0x4c(r30)
mr       r4, r28
lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
lfs      f0, 0x108(r5)
addi     r3, r3, 0x154
stfs     f0, 0x34(r1)
lfs      f4, 0xe0(r5)
lfs      f1, 0x10(r30)
lfs      f0, 0xc(r30)
fmuls    f2, f1, f4
lfs      f3, 8(r30)
fmuls    f0, f0, f4
lfs      f1, 4(r30)
fadds    f2, f3, f2
fadds    f0, f1, f0
stfs     f2, 0x30(r1)
stfs     f0, 0x2c(r1)
bl       getUnit__Q43ebi5title6Pikmin4TMgrFl
lfs      f1, 8(r3)
addi     r4, r1, 0x18
lfs      f0, 4(r3)
addi     r3, r1, 0x2c
stfs     f0, 0x18(r1)
stfs     f1, 0x1c(r1)
bl       "isOut__Q23ebi11EGECircle2fFR10Vector2<f>"
clrlwi.  r0, r3, 0x18
bne      lbl_803E90D4
li       r29, 1
b        lbl_803E90E0

lbl_803E90D4:
addi     r28, r28, 1
cmpwi    r28, 0x1f4
blt      lbl_803E9060

lbl_803E90E0:
clrlwi.  r0, r29, 0x18
beq      lbl_803E90F8
mr       r3, r30
li       r4, 4
bl
startAIState___Q43ebi5title6Chappy5TUnitFQ53ebi5title6Chappy5TUnit11enumAIState
b        lbl_803E914C

lbl_803E90F8:
mr       r3, r30
li       r4, 2
bl
startAIState___Q43ebi5title6Chappy5TUnitFQ53ebi5title6Chappy5TUnit11enumAIState
b        lbl_803E914C
.global  lbl_803E9108

lbl_803E9108:
lfs      f31, lbl_8051FD68@sda21(r2)
li       r31, 1
lwz      r0, 0x58(r30)
fmr      f30, f31
cmpwi    r0, 3
bne      lbl_803E914C
mr       r3, r30
li       r4, 2
bl
startAIState___Q43ebi5title6Chappy5TUnitFQ53ebi5title6Chappy5TUnit11enumAIState
b        lbl_803E914C
.global  lbl_803E9130

lbl_803E9130:
lfs      f31, lbl_8051FD68@sda21(r2)
li       r31, 0
lfs      f30, lbl_8051FD70@sda21(r2)
b        lbl_803E914C
.global  lbl_803E9140

lbl_803E9140:
lfs      f31, lbl_8051FD68@sda21(r2)
li       r31, 0
lfs      f30, lbl_8051FD70@sda21(r2)
.global  lbl_803E914C

lbl_803E914C:
lbz      r0, 0x48(r30)
cmplwi   r0, 0
beq      lbl_803E9160
li       r3, 0
b        lbl_803E919C

lbl_803E9160:
fabs     f1, f31
lfs      f0, lbl_8051FDE4@sda21(r2)
li       r3, 0
frsp     f1, f1
fcmpo    cr0, f1, f0
ble      lbl_803E917C
li       r3, 1

lbl_803E917C:
lfs      f0, lbl_8051FDE4@sda21(r2)
fcmpo    cr0, f30, f0
ble      lbl_803E918C
li       r3, 4

lbl_803E918C:
clrlwi   r0, r31, 0x18
cmplwi   r0, 1
bne      lbl_803E919C
li       r3, 2

lbl_803E919C:
lwz      r0, 0x6c(r30)
cmpw     r0, r3
beq      lbl_803E9390
cmpwi    r0, 1
bge      lbl_803E91B4
b        lbl_803E92BC

lbl_803E91B4:
cmpwi    r0, 5
bge      lbl_803E92BC
addi     r3, r30, 0x50
bl       playStopEnd__Q23ebi11E3DAnimCtrlFv
li       r0, 1
stb      r0, 0x48(r30)
lwz      r0, 0x58(r30)
cmpwi    r0, 3
bne      lbl_803E9390
li       r3, 0
stb      r3, 0x48(r30)
lwz      r0, 0x6c(r30)
cmpwi    r0, 0
beq      lbl_803E9390
stw      r3, 0x6c(r30)
lwz      r0, 0x6c(r30)
cmpwi    r0, 2
beq      lbl_803E927C
bge      lbl_803E9210
cmpwi    r0, 0
beq      lbl_803E9220
bge      lbl_803E9244
b        lbl_803E9390

lbl_803E9210:
cmpwi    r0, 4
beq      lbl_803E9260
bge      lbl_803E9390
b        lbl_803E92A0

lbl_803E9220:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 1
bl       init__Q23ebi11E3DAnimCtrlFlf
lfs      f0, lbl_8051FDE0@sda21(r2)
addi     r3, r30, 0x50
stfs     f0, 0x54(r30)
bl       play__Q23ebi11E3DAnimCtrlFv
b        lbl_803E9390

lbl_803E9244:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 1
bl       init__Q23ebi11E3DAnimCtrlFlf
addi     r3, r30, 0x50
bl       play__Q23ebi11E3DAnimCtrlFv
b        lbl_803E9390

lbl_803E9260:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 0
bl       init__Q23ebi11E3DAnimCtrlFlf
addi     r3, r30, 0x50
bl       play__Q23ebi11E3DAnimCtrlFv
b        lbl_803E9390

lbl_803E927C:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 2
bl       init__Q23ebi11E3DAnimCtrlFlf
addi     r3, r30, 0x50
bl       play__Q23ebi11E3DAnimCtrlFv
li       r0, 0
stw      r0, 0x64(r30)
b        lbl_803E9390

lbl_803E92A0:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 3
bl       init__Q23ebi11E3DAnimCtrlFlf
addi     r3, r30, 0x50
bl       play__Q23ebi11E3DAnimCtrlFv
b        lbl_803E9390

lbl_803E92BC:
cmpw     r3, r0
beq      lbl_803E9390
stw      r3, 0x6c(r30)
lwz      r0, 0x6c(r30)
cmpwi    r0, 2
beq      lbl_803E9354
bge      lbl_803E92E8
cmpwi    r0, 0
beq      lbl_803E92F8
bge      lbl_803E931C
b        lbl_803E9390

lbl_803E92E8:
cmpwi    r0, 4
beq      lbl_803E9338
bge      lbl_803E9390
b        lbl_803E9378

lbl_803E92F8:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 1
bl       init__Q23ebi11E3DAnimCtrlFlf
lfs      f0, lbl_8051FDE0@sda21(r2)
addi     r3, r30, 0x50
stfs     f0, 0x54(r30)
bl       play__Q23ebi11E3DAnimCtrlFv
b        lbl_803E9390

lbl_803E931C:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 1
bl       init__Q23ebi11E3DAnimCtrlFlf
addi     r3, r30, 0x50
bl       play__Q23ebi11E3DAnimCtrlFv
b        lbl_803E9390

lbl_803E9338:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 0
bl       init__Q23ebi11E3DAnimCtrlFlf
addi     r3, r30, 0x50
bl       play__Q23ebi11E3DAnimCtrlFv
b        lbl_803E9390

lbl_803E9354:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 2
bl       init__Q23ebi11E3DAnimCtrlFlf
addi     r3, r30, 0x50
bl       play__Q23ebi11E3DAnimCtrlFv
li       r0, 0
stw      r0, 0x64(r30)
b        lbl_803E9390

lbl_803E9378:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 3
bl       init__Q23ebi11E3DAnimCtrlFlf
addi     r3, r30, 0x50
bl       play__Q23ebi11E3DAnimCtrlFv

lbl_803E9390:
lwz      r0, 0x6c(r30)
cmpwi    r0, 2
beq      lbl_803E94D4
bge      lbl_803E93B0
cmpwi    r0, 0
beq      lbl_803E968C
bge      lbl_803E93BC
b        lbl_803E968C

lbl_803E93B0:
cmpwi    r0, 4
beq      lbl_803E9478
b        lbl_803E968C

lbl_803E93BC:
fabs     f1, f31
lfs      f0, lbl_8051FDE4@sda21(r2)
frsp     f1, f1
fcmpo    cr0, f1, f0
ble      lbl_803E93D8
fmr      f2, f31
b        lbl_803E93DC

lbl_803E93D8:
lfs      f2, lbl_8051FD68@sda21(r2)

lbl_803E93DC:
lwz      r3, 0x4c(r30)
lfs      f5, 0xc(r30)
lfs      f0, 0x180(r3)
lfs      f4, 0x10(r30)
fneg     f1, f5
fmuls    f3, f2, f0
lfs      f0, lbl_8051FD68@sda21(r2)
fmuls    f2, f4, f3
fmuls    f1, f1, f3
fadds    f2, f5, f2
fadds    f1, f4, f1
stfs     f2, 0xc(r30)
stfs     f1, 0x10(r30)
lfs      f3, 0xc(r30)
lfs      f2, 0x10(r30)
fmuls    f1, f3, f3
fmuls    f2, f2, f2
fadds    f1, f1, f2
fcmpo    cr0, f1, f0
ble      lbl_803E9444
fmadds   f2, f3, f3, f2
fcmpo    cr0, f2, f0
ble      lbl_803E9448
frsqrte  f0, f2
fmuls    f2, f0, f2
b        lbl_803E9448

lbl_803E9444:
fmr      f2, f0

lbl_803E9448:
lfs      f0, lbl_8051FD68@sda21(r2)
fcmpu    cr0, f0, f2
beq      lbl_803E968C
lfs      f1, lbl_8051FD70@sda21(r2)
lfs      f0, 0xc(r30)
fdivs    f1, f1, f2
fmuls    f0, f0, f1
stfs     f0, 0xc(r30)
lfs      f0, 0x10(r30)
fmuls    f0, f0, f1
stfs     f0, 0x10(r30)
b        lbl_803E968C

lbl_803E9478:
lfs      f0, lbl_8051FDE4@sda21(r2)
fcmpo    cr0, f30, f0
ble      lbl_803E948C
fmr      f2, f30
b        lbl_803E9490

lbl_803E948C:
lfs      f2, lbl_8051FDA8@sda21(r2)

lbl_803E9490:
lbz      r0, 0x48(r30)
cmplwi   r0, 0
beq      lbl_803E94A0
lfs      f2, lbl_8051FDA8@sda21(r2)

lbl_803E94A0:
lfs      f1, 0x14(r30)
lfs      f0, 0xc(r30)
fmuls    f4, f2, f1
lfs      f2, 0x10(r30)
lfs      f1, 4(r30)
lfs      f3, 8(r30)
fmuls    f0, f0, f4
fmuls    f2, f2, f4
fadds    f0, f1, f0
fadds    f1, f3, f2
stfs     f0, 4(r30)
stfs     f1, 8(r30)
b        lbl_803E968C

lbl_803E94D4:
lfs      f29, 0x50(r30)
lfs      f0, lbl_8051FDA0@sda21(r2)
fcmpo    cr0, f0, f29
bge      lbl_803E9590
lfs      f0, lbl_8051FD80@sda21(r2)
fcmpo    cr0, f29, f0
bge      lbl_803E9590
lwz      r3, 0x4c(r30)
li       r28, 0
lfs      f0, 0x108(r3)
stfs     f0, 0x28(r1)
lfs      f4, 0xe0(r3)
lfs      f1, 0x10(r30)
lfs      f0, 0xc(r30)
fmuls    f2, f1, f4
lfs      f3, 8(r30)
fmuls    f0, f0, f4
lfs      f1, 4(r30)
fadds    f2, f3, f2
fadds    f0, f1, f0
stfs     f2, 0x24(r1)
stfs     f0, 0x20(r1)

lbl_803E952C:
lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
mr       r4, r28
addi     r3, r3, 0x154
bl       getUnit__Q43ebi5title6Pikmin4TMgrFl
mr       r0, r3
addi     r3, r1, 0x20
mr       r29, r0
addi     r4, r1, 0x10
lfs      f1, 8(r29)
lfs      f0, 4(r29)
stfs     f0, 0x10(r1)
stfs     f1, 0x14(r1)
bl       "isOut__Q23ebi11EGECircle2fFR10Vector2<f>"
clrlwi.  r0, r3, 0x18
bne      lbl_803E9584
mr       r3, r29
bl       beAttacked__Q43ebi5title6Pikmin5TUnitFv
clrlwi.  r0, r3, 0x18
beq      lbl_803E9584
lwz      r3, 0x64(r30)
addi     r0, r3, 1
stw      r0, 0x64(r30)

lbl_803E9584:
addi     r28, r28, 1
cmpwi    r28, 0x1f4
blt      lbl_803E952C

lbl_803E9590:
fctiwz   f0, f29
stfd     f0, 0x38(r1)
lwz      r0, 0x3c(r1)
cmpwi    r0, 0xa
bne      lbl_803E968C
lwz      r0, 0x64(r30)
cmpwi    r0, 0
bne      lbl_803E968C
lwz      r0, 0x6c(r30)
cmpwi    r0, 3
beq      lbl_803E968C
li       r0, 3
stw      r0, 0x6c(r30)
lwz      r0, 0x6c(r30)
cmpwi    r0, 2
beq      lbl_803E9650
bge      lbl_803E95E4
cmpwi    r0, 0
beq      lbl_803E95F4
bge      lbl_803E9618
b        lbl_803E968C

lbl_803E95E4:
cmpwi    r0, 4
beq      lbl_803E9634
bge      lbl_803E968C
b        lbl_803E9674

lbl_803E95F4:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 1
bl       init__Q23ebi11E3DAnimCtrlFlf
lfs      f0, lbl_8051FDE0@sda21(r2)
addi     r3, r30, 0x50
stfs     f0, 0x54(r30)
bl       play__Q23ebi11E3DAnimCtrlFv
b        lbl_803E968C

lbl_803E9618:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 1
bl       init__Q23ebi11E3DAnimCtrlFlf
addi     r3, r30, 0x50
bl       play__Q23ebi11E3DAnimCtrlFv
b        lbl_803E968C

lbl_803E9634:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 0
bl       init__Q23ebi11E3DAnimCtrlFlf
addi     r3, r30, 0x50
bl       play__Q23ebi11E3DAnimCtrlFv
b        lbl_803E968C

lbl_803E9650:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 2
bl       init__Q23ebi11E3DAnimCtrlFlf
addi     r3, r30, 0x50
bl       play__Q23ebi11E3DAnimCtrlFv
li       r0, 0
stw      r0, 0x64(r30)
b        lbl_803E968C

lbl_803E9674:
lfs      f1, lbl_8051FD70@sda21(r2)
addi     r3, r30, 0x50
li       r4, 3
bl       init__Q23ebi11E3DAnimCtrlFlf
addi     r3, r30, 0x50
bl       play__Q23ebi11E3DAnimCtrlFv

lbl_803E968C:
lwz      r0, 0x68(r30)
cmpwi    r0, 5
beq      lbl_803E96D0
bge      lbl_803E96A8
cmpwi    r0, 0
beq      lbl_803E96B4
b        lbl_803E9718

lbl_803E96A8:
cmpwi    r0, 7
bge      lbl_803E9718
b        lbl_803E96F4

lbl_803E96B4:
lwz      r4, titleMgr__Q23ebi5title@sda21(r13)
addi     r3, r1, 8
bl       getPosOutOfViewField__Q33ebi5title9TTitleMgrFv
lfs      f0, 8(r1)
stfs     f0, 4(r30)
lfs      f0, 0xc(r1)
stfs     f0, 8(r30)

lbl_803E96D0:
lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
mr       r4, r30
bl       isInViewField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase
clrlwi.  r0, r3, 0x18
beq      lbl_803E9724
mr       r3, r30
li       r4, 3
bl
startAIState___Q43ebi5title6Chappy5TUnitFQ53ebi5title6Chappy5TUnit11enumAIState
b        lbl_803E9724

lbl_803E96F4:
lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
mr       r4, r30
bl       isOutViewField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase
clrlwi.  r0, r3, 0x18
beq      lbl_803E9724
mr       r3, r30
li       r4, 0
bl
startAIState___Q43ebi5title6Chappy5TUnitFQ53ebi5title6Chappy5TUnit11enumAIState
b        lbl_803E9724

lbl_803E9718:
lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
mr       r4, r30
bl       inViewField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase

lbl_803E9724:
mr       r3, r30
bl       calcModelBaseMtx___Q33ebi5title8TObjBaseFv
lwz      r3, 0x5c(r30)
cmplwi   r3, 0
beq      lbl_803E97D0
lwz      r0, 0x58(r30)
cmpwi    r0, 2
beq      lbl_803E9798
bge      lbl_803E97D0
cmpwi    r0, 0
beq      lbl_803E97D0
bge      lbl_803E975C
b        lbl_803E97D0
b        lbl_803E97D0

lbl_803E975C:
lfs      f2, 0x54(r30)
lfs      f1, 0x18(r3)
lfs      f0, 0x50(r30)
fmadds   f0, f2, f1, f0
stfs     f0, 0x50(r30)
lwz      r3, 0x5c(r30)
lfs      f1, 0x50(r30)
lfs      f2, 0x14(r3)
fcmpo    cr0, f1, f2
ble      lbl_803E97D0
lfs      f0, 0x10(r3)
fsubs    f0, f2, f0
fsubs    f0, f1, f0
stfs     f0, 0x50(r30)
b        lbl_803E97D0

lbl_803E9798:
lfs      f2, 0x54(r30)
lfs      f1, 0x18(r3)
lfs      f0, 0x50(r30)
fmadds   f0, f2, f1, f0
stfs     f0, 0x50(r30)
lwz      r3, 0x5c(r30)
lfs      f0, 0x50(r30)
lfs      f1, 0xc(r3)
fcmpo    cr0, f0, f1
cror     2, 1, 2
bne      lbl_803E97D0
stfs     f1, 0x50(r30)
li       r0, 3
stw      r0, 0x58(r30)

lbl_803E97D0:
lwz      r3, 0x5c(r30)
lwz      r4, 0x28(r30)
cmplwi   r3, 0
beq      lbl_803E9804
lfs      f0, 0x50(r30)
lwz      r3, 0(r3)
stfs     f0, 8(r3)
lwz      r3, 4(r4)
lwz      r4, 0x5c(r30)
lwz      r3, 0x28(r3)
lwz      r0, 4(r4)
lwz      r3, 0(r3)
stw      r0, 0x54(r3)

lbl_803E9804:
lwz      r3, 0x28(r30)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r30)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r30)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl

lbl_803E9840:
psq_l    f31, 120(r1), 0, qr0
lfd      f31, 0x70(r1)
psq_l    f30, 104(r1), 0, qr0
lfd      f30, 0x60(r1)
psq_l    f29, 88(r1), 0, qr0
lfd      f29, 0x50(r1)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r29, 0x44(r1)
lwz      r0, 0x84(r1)
lwz      r28, 0x40(r1)
mtlr     r0
addi     r1, r1, 0x80
blr
	*/
}

/*
 * --INFO--
 * Address:	803E9878
 * Size:	0003A4
 */
Chappy::TParam::TParam()
    : mScale(this, 'b000', "ÉXÉPÅ[Éã", 2.0f, 0.0f, 10.0f)
    , mCullRadius(this, 'b001', "ÉJÉäÉìÉOîºåa", 100.0f, 0.0f, 500.0f)
    , mCollRadius(this, 'b002', "ÉRÉäÉWÉáÉìîºåa", 150.0f, 0.0f, 500.0f)
    , mPikiReactRadius(this, 'b003', "ÉsÉNÉ~ÉìîΩâûîºåa", 300.0f, 0.0f, 500.0f)
    , mHitOffset(this, 'ch20', "ìñÇΩÇËOffset", 80.0f, 0.0f, 500.0f)
    , mHitRadius(this, 'ch21', "ìñÇΩÇËîºåa", 100.0f, 0.0f, 500.0f)
    , mWalkAngleRand(this, 'ch00', "ï‡çsÉâÉìÉ_ÉÄäpìx", 30.0f, 0.0f, 90.0f)
    , mWalkSpeed(this, 'ch01', "ï‡çsë¨ìx", 8.0f, 0.0f, 100.0f)
    , mTurnSpeed(this, 'ch23', "ê˘âÒê´î\x5C", 0.05f, 0.0f, 1.0f) // x5C literal required for match
    , mMinWaitTime(this, 'ch10', "ë“Çøéûä‘ç≈è¨(ïb)", 0.3f, 0.0f, 10.0f)
    , mMaxWaitTime(this, 'ch11', "ë“Çøéûä‘ç≈ëÂ(ïb)", 1.0f, 0.0f, 10.0f)
    , mMinWalkTime(this, 'ch12', "à⁄ìÆéûä‘ç≈è¨(ïb)", 0.5f, 0.0f, 10.0f)
    , mMaxWalkTime(this, 'ch13', "à⁄ìÆéûä‘ç≈ëÂ(ïb)", 1.5f, 0.0f, 10.0f)
    , mControlledTime(this, 'ch22', "ÉRÉìÉgÉçÅ[ÉâèÛë‘éûä‘(ïb)", 5.0f, 0.0f, 60.0f)
{
}

/*
 * --INFO--
 * Address:	803E9C1C
 * Size:	000008
 */
// u32 Chappy::TUnit::getCreatureType() { return 0x6; }

/*
 * --INFO--
 * Address:	803E9C24
 * Size:	000014
 */
E3DAnimRes* Chappy::TAnimFolder::getAnimRes(long id) { return &mAnims[id]; }

} // namespace title
} // namespace ebi
