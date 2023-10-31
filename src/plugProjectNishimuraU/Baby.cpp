#include "Game/Entities/Baby.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/GameSystem.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "Game/EnemyFunc.h"
#include "efx/TBaby.h"

namespace Game {
namespace Baby {

/*
 * --INFO--
 * Address:	8028D470
 * Size:	000140
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;

	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8028D5B0
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8028D5B4
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	8028D66C
 * Size:	000048
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mMouthSlots.update();
}

/*
 * --INFO--
 * Address:	8028D6B4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8028D6B8
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8028D6D8
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	8028D724
 * Size:	000068
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

/*
 * --INFO--
 * Address:	8028D78C
 * Size:	000074
 */
bool Obj::pressCallBack(Creature* obj, f32 damage, CollPart* part)
{
	if (obj && !isEvent(0, EB_Bittered) && getStateID() > 2) {
		mFsm->transit(this, BABY_Press, nullptr);
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	8028D800
 * Size:	000074
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

/*
 * --INFO--
 * Address:	8028D874
 * Size:	000020
 */
void Obj::doStartStoneState() { EnemyBase::doStartStoneState(); }

/*
 * --INFO--
 * Address:	8028D894
 * Size:	00005C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (getStateID() == BABY_Born) {
		mFsm->transit(this, BABY_Move, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8028D8F0
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	8028D924
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	8028D958
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	8028D978
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8028D998
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	8028DA24
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	8028DAB0
 * Size:	000008
 */
MouthSlots* Obj::getMouthSlots() { return &mMouthSlots; }

/*
 * --INFO--
 * Address:	8028DAB8
 * Size:	00001C
 */
void Obj::resetRandTargetPosition() { mTargetPos = mPosition; }

/*
 * --INFO--
 * Address:	8028DAD4
 * Size:	000074
 */
void Obj::resetZukanAnimationFrame()
{
	f32 frame = getMotionFrameMax();
	setMotionFrame(randWeightFloat(frame));
}

/*
 * --INFO--
 * Address:	8028DB48
 * Size:	00020C
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
		Parms* parms = static_cast<Parms*>(mParms);
		EnemyFunc::walkToTarget(this, mTargetPos, parms->mGeneral.mMoveSpeed.mValue, parms->mGeneral.mTurnSpeed.mValue,
		                        parms->mGeneral.mMaxTurnAngle.mValue);
	} else {
		mTargetVelocity = Vector3f(0.0f);
	}
}

/*
 * --INFO--
 * Address:	8028DD54
 * Size:	0000F4
 */
void Obj::createHoney()
{
	Parms* parms = static_cast<Parms*>(mParms);
	if (randWeightFloat(1.0f) < parms->mProperParms.mNectarChance.mValue) {
		ItemHoney::InitArg arg(false, false);

		ItemHoney::Item* item = static_cast<ItemHoney::Item*>(ItemHoney::mgr->birth());
		if (item) {
			item->init(&arg);
			item->setPosition(mPosition, false);
			Vector3f velocity(0.0f, 250.0f, 0.0f);
			item->setVelocity(velocity);
		}
	}
}

/*
 * --INFO--
 * Address:	8028DE48
 * Size:	0000B4
 */
void Obj::createEffect() { mEfxBabyBorn = new efx::TBabyBorn(&mPosition); }

/*
 * --INFO--
 * Address:	8028DEFC
 * Size:	000004
 */
void Obj::setupEffect() { }

/*
 * --INFO--
 * Address:	8028DF00
 * Size:	000034
 */
void Obj::createBornEffect() { mEfxBabyBorn->create(nullptr); }

/*
 * --INFO--
 * Address:	8028DF34
 * Size:	000030
 */
void Obj::effectDrawOn() { mEfxBabyBorn->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	8028DF64
 * Size:	000030
 */
void Obj::effectDrawOff() { mEfxBabyBorn->startDemoDrawOff(); }

} // namespace Baby
} // namespace Game
