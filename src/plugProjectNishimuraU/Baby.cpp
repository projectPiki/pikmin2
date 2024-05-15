#include "Game/Entities/Baby.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/GameSystem.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "Game/EnemyFunc.h"
#include "efx/TBaby.h"

namespace Game {
namespace Baby {

/**
 * @note Address: 0x8028D470
 * @note Size: 0x140
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;

	setFSM(new FSM);
	createEffect();
}

/**
 * @note Address: 0x8028D5B0
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x8028D5B4
 * @note Size: 0xB8
 */
void Obj::onInit(CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	disableEvent(0, EB_Cullable);
	disableEvent(0, EB_LeaveCarcass);
	setupEffect();
	resetRandTargetPosition();

	if (gameSystem && gameSystem->isZukanMode()) {
		mFsm->start(this, BABY_Move, nullptr);
		resetZukanAnimationFrame();
	} else {
		mFsm->start(this, BABY_Born, nullptr);
	}
}

/**
 * @note Address: 0x8028D66C
 * @note Size: 0x48
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mMouthSlots.update();
}

/**
 * @note Address: 0x8028D6B4
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x8028D6B8
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8028D6D8
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x8028D724
 * @note Size: 0x68
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition = mPosition;
	param.mPosition.y += 2.5f;

	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);

	if (isEvent(1, EB2_Earthquake)) {
		param.mBoundingSphere.mRadius = 50.0f;
	} else {
		param.mBoundingSphere.mRadius = 10.0f;
	}

	param.mSize = 10.0f;
}

/**
 * @note Address: 0x8028D78C
 * @note Size: 0x74
 */
bool Obj::pressCallBack(Creature* obj, f32 damage, CollPart* part)
{
	if (obj && !isEvent(0, EB_Bittered) && getStateID() > 2) {
		mFsm->transit(this, BABY_Press, nullptr);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8028D800
 * @note Size: 0x74
 */
bool Obj::hipdropCallBack(Creature* obj, f32 damage, CollPart* part)
{

	if (obj && !isEvent(0, EB_Bittered) && getStateID() > 2) {
		mFsm->transit(this, BABY_Press, nullptr);
		return true;
	} else {
		return false;
	}
}

/**
 * @note Address: 0x8028D874
 * @note Size: 0x20
 */
void Obj::doStartStoneState() { EnemyBase::doStartStoneState(); }

/**
 * @note Address: 0x8028D894
 * @note Size: 0x5C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (getStateID() == BABY_Born) {
		mFsm->transit(this, BABY_Move, nullptr);
	}
}

/**
 * @note Address: 0x8028D8F0
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x8028D924
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x8028D958
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x8028D978
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x8028D998
 * @note Size: 0x8C
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(1);
	mMouthSlots.setup(0, mModel, "kamu");
	f32 size = 20.0f;
	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.getSlot(i)->mRadius = size;
	}
}

/**
 * @note Address: 0x8028DA24
 * @note Size: 0x8C
 */
int Obj::getSlotPikiNum()
{
	int slotnum       = 0;
	MouthSlots* slots = getMouthSlots();
	int max           = slots->getMax();

	for (int i = 0; i < max; i++) {
		if (slots->getSlot(i)->mStuckCreature) {
			slotnum++;
		}
	}
	return slotnum;
}

/**
 * @note Address: 0x8028DAB0
 * @note Size: 0x8
 */
MouthSlots* Obj::getMouthSlots() { return &mMouthSlots; }

/**
 * @note Address: 0x8028DAB8
 * @note Size: 0x1C
 */
void Obj::resetRandTargetPosition() { mTargetPos = mPosition; }

/**
 * @note Address: 0x8028DAD4
 * @note Size: 0x74
 */
void Obj::resetZukanAnimationFrame()
{
	f32 frame = getMotionFrameMax();
	setMotionFrame(randWeightFloat(frame));
}

/**
 * @note Address: 0x8028DB48
 * @note Size: 0x20C
 */
void Obj::moveNoTarget()
{
	if (gameSystem && gameSystem->isZukanMode()) {
		if (sqrDistanceXZ(mPosition, mTargetPos) < 500.0f) {
			f32 randomAngle = randWeightFloat(100.0f) + 50.0f;
			f32 angleToHome = JMath::atanTable_.atan2_(mPosition.x - mHomePosition.x, mPosition.z - mHomePosition.z);
			angleToHome     = randWeightFloat(PI) + angleToHome + HALF_PI;

			mTargetPos.x = randomAngle * sinf(angleToHome) + mHomePosition.x;
			mTargetPos.y = mHomePosition.y;
			mTargetPos.z = randomAngle * cosf(angleToHome) + mHomePosition.z;
		}
		Parms* parms = C_PARMS;
		EnemyFunc::walkToTarget(this, mTargetPos, parms->mGeneral.mMoveSpeed.mValue, parms->mGeneral.mTurnSpeed.mValue,
		                        parms->mGeneral.mMaxTurnAngle.mValue);
	} else {
		mTargetVelocity = Vector3f(0.0f);
	}
}

/**
 * @note Address: 0x8028DD54
 * @note Size: 0xF4
 */
void Obj::createHoney()
{
	Parms* parms = C_PARMS;
	if (randWeightFloat(1.0f) < parms->mProperParms.mNectarChance.mValue) {
		ItemHoney::InitArg arg(HONEY_Y, false);

		ItemHoney::Item* item = ItemHoney::mgr->birth();
		if (item) {
			item->init(&arg);
			item->setPosition(mPosition, false);
			Vector3f velocity(0.0f, 250.0f, 0.0f);
			item->setVelocity(velocity);
		}
	}
}

/**
 * @note Address: 0x8028DE48
 * @note Size: 0xB4
 */
void Obj::createEffect() { mEfxBabyBorn = new efx::TBabyBorn(&mPosition); }

/**
 * @note Address: 0x8028DEFC
 * @note Size: 0x4
 */
void Obj::setupEffect() { }

/**
 * @note Address: 0x8028DF00
 * @note Size: 0x34
 */
void Obj::createBornEffect() { mEfxBabyBorn->create(nullptr); }

/**
 * @note Address: 0x8028DF34
 * @note Size: 0x30
 */
void Obj::effectDrawOn() { mEfxBabyBorn->endDemoDrawOn(); }

/**
 * @note Address: 0x8028DF64
 * @note Size: 0x30
 */
void Obj::effectDrawOff() { mEfxBabyBorn->startDemoDrawOff(); }

} // namespace Baby
} // namespace Game
