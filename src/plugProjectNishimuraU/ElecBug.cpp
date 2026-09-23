#include "types.h"
#include "Dolphin/rand.h"
#include "Game/Entities/ElecBug.h"

namespace Game {
namespace ElecBug {

/**
 * @note Address: 0x8027AC88
 * @note Size: 0x138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/**
 * @note Address: 0x8027ADC0
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
}

/**
 * @note Address: 0x8027ADC4
 * @note Size: 0xA4
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	enableEvent(0, EB_Invulnerable);
	mInactiveTimer = randWeightFloat(10.0f);
	mStateTimer    = 0.0f;
	mPartner       = nullptr;
	setupEffect();
	mFsm->start(this, ELECBUG_Turn, nullptr);
}

/**
 * @note Address: 0x8027AE68
 * @note Size: 0x44
 */
void Obj::onKill(CreatureKillArg* arg)
{
	finishPartnerAndEffect();
	EnemyBase::onKill(arg);
}

/**
 * @note Address: 0x8027AEAC
 * @note Size: 0x48
 */
void Obj::doUpdate()
{
	mInactiveTimer += sys->mDeltaTime;
	mFsm->exec(this);
}

/**
 * @note Address: 0x8027AEF4
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics& gfx)
{
}

/**
 * @note Address: 0x8027AEF8
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x8027AF18
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x8027AF64
 * @note Size: 0x80
 */
void Obj::getShadowParam(ShadowParam& param)
{
	Matrixf* bodyJointMtx = mModel->getJoint("body")->getWorldMatrix();
	param.mPosition       = bodyJointMtx->getColumn(3);
	param.mPosition.y -= 5.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 15.0f;
	param.mSize                     = 15.0f;
}

/**
 * @note Address: 0x8027AFE4
 * @note Size: 0x1E4
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (event.mCollidingCreature && !isEvent(0, EB_Bittered)) {
		int stateID = getStateID();
		if (stateID == ELECBUG_Discharge || stateID == ELECBUG_ChildDischarge) {
			if (event.mCollidingCreature->isPiki() || event.mCollidingCreature->isNavi()) {
				Vector3f sep = event.mCollidingCreature->getPosition();
				Vector3f::getFlatDirectionFromTo(mPosition, sep);
				Vector3f dir = Vector3f(sep.x * C_GENERALPARMS.mSearchDistance(), C_GENERALPARMS.mSearchHeight(),
				                        sep.z * C_GENERALPARMS.mSearchDistance());

				if (event.mCollidingCreature->isNavi()) {
					dir.y = 0.0f;
				}

				InteractDenki denki(this, C_GENERALPARMS.mAttackDamage(), &dir);
				event.mCollidingCreature->stimulate(denki);
			}
		}
	}

	setCollEvent(event);
}

/**
 * @note Address: 0x8027B1C8
 * @note Size: 0x1BC
 */
bool Obj::pressCallBack(Creature* source, f32 damage, CollPart* part)
{
	if (isAlive() && !isEvent(0, EB_Bittered) && source && source->isPiki()) {
		int stateID = getStateID();
		if (stateID >= ELECBUG_Wait && stateID <= ELECBUG_ChildDischarge) {
			mFsm->transit(this, ELECBUG_Reverse, nullptr);

			if (stateID == ELECBUG_Discharge || stateID == ELECBUG_ChildDischarge) {
				Vector3f sep = source->getPosition();
				Vector3f::getFlatDirectionFromTo(mPosition, sep);
				Vector3f dir(sep.x * C_GENERALPARMS.mSearchDistance(), C_GENERALPARMS.mSearchHeight(),
				             sep.z * C_GENERALPARMS.mSearchDistance());
				InteractDenki denki(this, C_GENERALPARMS.mAttackDamage(), &dir);
				source->stimulate(denki);
			}

			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x8027B384
 * @note Size: 0x2C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	return pressCallBack(creature, damage, collpart);
}

/**
 * @note Address: 0x8027B3B0
 * @note Size: 0xC0
 */
bool Obj::earthquakeCallBack(Creature* source, f32 damage)
{
	if (isAlive() && !isEvent(0, EB_Bittered) && source && source->isPiki()) {
		int stateID = getStateID();
		if (stateID >= ELECBUG_Wait && stateID <= ELECBUG_ChildDischarge) {
			mFsm->transit(this, ELECBUG_Reverse, nullptr);
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x8027B470
 * @note Size: 0x40
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	disableEvent(0, EB_Invulnerable);
	finishPartnerAndEffect();
}

/**
 * @note Address: 0x8027B4B0
 * @note Size: 0x40
 */
void Obj::doFinishStoneState()
{
	if (getStateID() != ELECBUG_Reverse) {
		enableEvent(0, EB_Invulnerable);
	}
}

/**
 * @note Address: 0x8027B4F0
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x8027B524
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x8027B558
 * @note Size: 0x28
 */
void Obj::startCarcassMotion()
{
	startMotion(ELECBUGANIM_Carry, nullptr);
}

/**
 * @note Address: 0x8027B580
 * @note Size: 0x20
 */
void Obj::doStartMovie()
{
	effectDrawOff();
}

/**
 * @note Address: 0x8027B5A0
 * @note Size: 0x20
 */
void Obj::doEndMovie()
{
	effectDrawOn();
}

/**
 * @note Address: 0x8027B5C0
 * @note Size: 0x1A4
 */
void Obj::setTargetPosition()
{
	Vector3f homePos  = mHomePosition;
	f32 randAngle     = randWeightFloat(TAU);
	f32 radDiff       = C_GENERALPARMS.mTerritoryRadius() - C_GENERALPARMS.mHomeRadius();
	f32 randDist      = C_GENERALPARMS.mHomeRadius() + randWeightFloat(radDiff);
	mTargetPosition.x = randDist * sinf(randAngle) + homePos.x;
	mTargetPosition.y = homePos.y;
	mTargetPosition.z = randDist * cosf(randAngle) + homePos.z;
}

/**
 * @note Address: 0x8027B764
 * @note Size: 0x1C
 */
void Obj::resetPartnerPtr()
{
	if (mPartner) {
		mPartner->mPartner = nullptr;
		mPartner           = nullptr;
	}
}

/**
 * @note Address: 0x8027B780
 * @note Size: 0x70
 */
bool Obj::isBecomeChargeState()
{
	if (isAlive() && !isEvent(0, EB_Bittered)) {
		int stateID = getStateID();
		if (stateID >= ELECBUG_Wait && stateID <= ELECBUG_Move) {
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x8027B7F0
 * @note Size: 0x30
 */
void Obj::startChargeState(Obj* beetle)
{
	mPartner = beetle;
	beetle->startChildChargeState(this);
}

/**
 * @note Address: 0x8027B820
 * @note Size: 0x44
 */
bool Obj::startChildChargeState(Obj* beetle)
{
	mPartner = beetle;
	mFsm->transit(this, ELECBUG_ChildCharge, nullptr);
	return true;
}

/**
 * @note Address: 0x8027B864
 * @note Size: 0x44
 */
void Obj::createEffect()
{
	mEffectObj = new efx::TDnkmsEffect;
}

/**
 * @note Address: 0x8027BC50
 * @note Size: 0x10
 */
void Obj::setupEffect()
{
	mEffectObj->mPosition = &mPosition;
}

/**
 * @note Address: 0x8027BC60
 * @note Size: 0x40
 */
void Obj::startChargeEffect()
{
	mEffectObj->startCharge();
}

/**
 * @note Address: 0x8027BCA0
 * @note Size: 0xC0
 */
void Obj::startDischargeEffect(Obj* partner)
{
	mEffectObj->startDischarge(&partner->mPosition);
}

/**
 * @note Address: 0x8027BD60
 * @note Size: 0xA4
 */
void Obj::finishPartnerAndEffect()
{
	if (mPartner) {
		mPartner->mPartner = nullptr;
		mPartner           = nullptr;
	}

	mEffectObj->fade();
}

/**
 * @note Address: 0x8027BE04
 * @note Size: 0x8C
 */
void Obj::effectDrawOn()
{
	mEffectObj->effectDrawOn();
}

/**
 * @note Address: 0x8027BE90
 * @note Size: 0x8C
 */
void Obj::effectDrawOff()
{
	mEffectObj->effectDrawOff();
}

/**
 * @note Address: 0x8027BF1C
 * @note Size: 0x4D0
 */
void Obj::checkInteract(Obj* partner)
{
	Vector3f currentPos = getPosition();
	Vector3f partnerPos = partner->getPosition();

	Vector3f separationVec = partnerPos - currentPos;
	separationVec.normalise();

	Vector3f yAxis(0.0f, 1.0f, 0.0f);

	Vector3f crossVec = yAxis;
	crossVec.CP(separationVec);
	crossVec.normalise();

	Vector3f perpVec = separationVec;
	perpVec.CP(crossVec);
	perpVec.normalise();

	f32 distance = currentPos.distance(partnerPos);

	Vector3f searchDirection(crossVec);
	searchDirection.y = C_GENERALPARMS.mSearchHeight();
	searchDirection.z *= C_GENERALPARMS.mSearchDistance();
	searchDirection.x *= C_GENERALPARMS.mSearchDistance();

	Vector3f middle;
	middle.setMiddle(currentPos, partnerPos);
	Sys::Sphere searchSphere(middle, distance);

	CellIteratorArg iterArg(searchSphere);
	iterArg.mOptimise = true;

	CellIterator iter(iterArg);
	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);

		// Skip if the creature is not alive or is neither a Navi nor a Piki
		if (!creature->isAlive() || (!creature->isNavi() && !creature->isPiki())) {
			continue;
		}

		// Calculate the separation vector from the creature to the current object
		Vector3f creatureSepVec = creature->getPosition() - currentPos;

		// Check if the creature is in the same general direction
		f32 dotCross = crossVec.dot(creatureSepVec);
		f32 abs      = absVal(dotCross);

		if (!(abs < 10.0f)) {
			continue;
		}

		// Check if the creature is within the distance range
		f32 dotSeparation = separationVec.dot(creatureSepVec);
		if (dotSeparation < distance && dotSeparation > 0.0f) {
			// Check if the creature is within a certain perpendicular distance
			f32 dotPerp = perpVec.dot(creatureSepVec);

			if (absVal(dotPerp) < 15.0f) {
				// Calculate the direction for interaction
				Vector3f interactionDir = searchDirection;
				f32 interactionScale    = dotCross / abs;
				interactionDir.x        = interactionScale * interactionDir.x;
				interactionDir.z        = interactionScale * interactionDir.z;

				// Perform the interaction with the calculated attack damage
				f32 attackDamage = C_GENERALPARMS.mAttackDamage.mValue;
				InteractDenki interaction(this, attackDamage, &interactionDir);
				creature->stimulate(interaction);
			}
		}
	}
}
} // namespace ElecBug
} // namespace Game
