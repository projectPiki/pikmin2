#include "Game/Entities/ElecHiba.h"
#include "Game/GameSystem.h"
#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace ElecHiba {

/**
 * @note Address: 0x8026F258
 * @note Size: 0x150
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/**
 * @note Address: 0x8026F3A8
 * @note Size: 0x38
 */
void Obj::birth(Vector3f& position, f32 faceDirection)
{
	EnemyBase::birth(position, faceDirection);
	mWaitTimer             = 0.0f;
	mTeamList.mChildObjPtr = this;
}

/**
 * @note Address: 0x8026F3E0
 * @note Size: 0x80
 */
void Obj::setInitialSetting(EnemyInitialParamBase* param)
{
	InitialParam* parms = static_cast<InitialParam*>(param);
	if (mTeamList.mChild) {
		setElecHibaPosition(parms, 1.0f);
		FOREACH_NODE(TeamList, mTeamList.mChild, node)
		{
			Obj* temp = node->mChildObjPtr;
			temp->setInitialSetting(parms);
		}
	} else {
		setElecHibaPosition(parms, -1.0f);
	}
}

/**
 * @note Address: 0x8026F460
 * @note Size: 0x144
 */
void Obj::onInit(CreatureInitArg* args)
{
	EnemyBase::onInit(args);
	disableEvent(0, EB_PlatformCollEnabled);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DeathEffectEnabled);
	hardConstraintOn();
	enableEvent(0, EB_BitterImmune);

	setEmotionNone();
	shadowMgr->killShadow(this);
	mWaitTimer     = 0.0f;
	mIsLivingThing = true;
	setupLodParms();
	if (mTeamList.mChild) {
		FOREACH_NODE(TeamList, mTeamList.mChild, node)
		{
			Obj* temp = node->mChildObjPtr;
			temp->init(nullptr);
		}
	}
	setVersusHibaOnOff();
	mVersusHibaType = VHT_Neutral;
	resetAttrHitCount();

	f32 r = randWeightFloat(C_PROPERPARMS.mWaitTime.mValue);
	WaitStateArg arg;
	arg.mWaitTimer = r;
	mFsm->start(this, ELECHIBA_Wait, &arg);
}

/**
 * @note Address: 0x8026F5A4
 * @note Size: 0x40
 */
void Obj::doUpdate()
{
	if (mTeamList.mChild) {
		mFsm->exec(this);
	}
}

/**
 * @note Address: 0x8026F5E4
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics& gfx)
{
}

/**
 * @note Address: 0x8026F5E8
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x8026F608
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x8026F654
 * @note Size: 0x38
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mPosition;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 1.0f;
	shadowParam.mSize                     = 1.0f;
}

/**
 * @note Address: 0x8026F68C
 * @note Size: 0xCC
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if ((creature) && !creature->isNavi()) {
		if (mIsVersusModeHiba) {
			if (creature->isPiki()) {
				Piki* piki         = static_cast<Piki*>(creature);
				TeamList* listHead = static_cast<TeamList*>(mTeamList.mParent);
				if (listHead) {
					listHead->mChildObjPtr->addAttrAttackCount(piki);
				} else {
					addAttrAttackCount(piki);
				}
			}
		} else {
			addDamageMyself(damage);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8026F758
 * @note Size: 0x30
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/**
 * @note Address: 0x8026F788
 * @note Size: 0x30
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/**
 * @note Address: 0x8026F7B8
 * @note Size: 0x34
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage)
{
	damageCallBack(creature, damage, nullptr);
	return true;
}

/**
 * @note Address: 0x8026F7EC
 * @note Size: 0x100
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& param)
{
	Obj* childObj = getChildObjPtr();
	if (childObj) {
		param.mPosition = childObj->getPosition();

		param.mPosition.x += mPosition.x;
		param.mPosition.y += mPosition.y;
		param.mPosition.z += mPosition.z;

		param.mPosition *= 0.5f;

		param.mPosition.y += C_GENERALPARMS.mLifeMeterHeight.mValue;

		param.mCurrHealthRatio = mHealth / mMaxHealth;

		param.mRadius = 10.0f;
	} else {
		param.mIsGaugeShown = false;
	}
}

/**
 * @note Address: 0x8026F8EC
 * @note Size: 0x4C
 */
bool Obj::injure()
{
	if (!(isEvent(0, EB_Invulnerable))) {
		mHealth -= mInstantDamage;
		if (mHealth < 0.0f) {
			mHealth = 0.0f;
		}
	}
	mInstantDamage = 0.0f;
	disableEvent(0, EB_TakingDamage);
	return true;
}

/**
 * @note Address: 0x8026F938
 * @note Size: 0x1C
 */
Obj* Obj::getChildObjPtr()
{
	if (mTeamList.mChild) {
		return static_cast<TeamList*>(mTeamList.mChild)->mChildObjPtr;
	}
	return nullptr;
}

/**
 * @note Address: 0x8026F954
 * @note Size: 0x170
 */
void Obj::setElecHibaPosition(InitialParam* param, f32 p1)
{
	Vector3f initPos = mBirthPosition;
	f32 theta        = HALF_PI + getFaceDir();
	f32 distance     = param->mSeperation / 2;

	Vector3f finalPos = Vector3f((p1 * distance) * sinf(theta) + initPos.x, initPos.y, (p1 * distance) * cosf(theta) + initPos.z);
	finalPos.y        = mapMgr->getMinY(finalPos);
	setPosition(finalPos, false);
}

/**
 * @note Address: 0x8026FAC4
 * @note Size: 0x5C8
 */
void Obj::interactDenkiAttack(Vector3f& position)
{
	Vector3f normSep(0.5f * (position.x + mPosition.x), 0.5f * (position.y + mPosition.y), 0.5f * (position.z + mPosition.z));
	Vector3f origin(mPosition.x, mPosition.y, mPosition.z);

	Vector3f forwardVec(sinf(mFaceDir), 0.0f, cosf(mFaceDir));

	Vector3f rightVec = position - origin;
	rightVec.normalise();

	Vector3f upVec;
	upVec = forwardVec.cross(rightVec);
	upVec.normalise();

	f32 distance = position.distance(origin);

	f32 attackRange = C_GENERALPARMS.mMaxAttackRange();
	origin.y += C_GENERALPARMS.mMaxAttackAngle();
	f32 totalRange = distance + attackRange;
	f32 negRange   = -attackRange;
	f32 searchX, searchHeight, searchZ;
	searchZ      = forwardVec.z * C_GENERALPARMS.mSearchDistance();
	searchHeight = C_GENERALPARMS.mSearchHeight();
	searchX      = forwardVec.x * C_GENERALPARMS.mSearchDistance();
	Sys::Sphere sphere(normSep, 0.5f * (totalRange - negRange));

	CellIteratorArg iterArg(sphere);
	iterArg.mOptimise = true;

	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
			Vector3f creatureSep = creature->getPosition() - origin;
			f32 dotProd1         = forwardVec.dot(creatureSep);
			f32 adj              = absVal(dotProd1);

			if (adj < C_GENERALPARMS.mAttackRadius()) {
				f32 dotProd = rightVec.dot(creatureSep);
				if (dotProd < totalRange && dotProd > negRange) {
					if (absVal(upVec.dot(creatureSep)) < C_GENERALPARMS.mAttackHitAngle()) {
						if (mVersusHibaType == VHT_Neutral) {

							f32 directionScale = dotProd1 / adj;
							Vector3f attackDirection;
							attackDirection.y = 0.0f;
							attackDirection.x = directionScale;
							attackDirection.z = directionScale;
							attackDirection.z *= searchZ;
							attackDirection.x *= searchX;
							if (creature->isPiki()) {
								attackDirection.y = searchHeight;
							}
							InteractDenki zap(this, C_GENERALPARMS.mAttackDamage(), &attackDirection);
							creature->stimulate(zap);

						} else if (mVersusHibaType == VHT_Red) {
							InteractFire fire(this, C_GENERALPARMS.mAttackDamage());
							creature->stimulate(fire);

						} else if (mVersusHibaType == VHT_Blue) {
							InteractBubble bubble(this, C_GENERALPARMS.mAttackDamage());
							creature->stimulate(bubble);
						}
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x8027008C
 * @note Size: 0x4C
 */
void Obj::addDamageMyself(f32 damage)
{
	if (!(isEvent(0, EB_Invulnerable))) {
		enableEvent(0, EB_TakingDamage);
		TeamList* listHead = static_cast<TeamList*>(mTeamList.mParent);
		if (listHead) {
			listHead->mChildObjPtr->damageIncrement(damage);
		} else {
			damageIncrement(damage);
		}
	}
}

/**
 * @note Address: 0x802700D8
 * @note Size: 0x2C
 */
void Obj::damageIncrement(f32 damage)
{
	mInstantDamage += damage;
	if (!isEvent(0, EB_FlickEnabled)) {
		return;
	}
	mFlickTimer += 1.0f;
}

/**
 * @note Address: 0x80270104
 * @note Size: 0x24
 */
void Obj::setupLodParms()
{
	mLodParm.mFar        = C_PROPERPARMS.mLodNear.mValue;
	mLodParm.mClose      = C_PROPERPARMS.mLodMiddle.mValue;
	mLodParm.mIsCylinder = false;
}

/**
 * @note Address: 0x80270128
 * @note Size: 0x38
 */
void Obj::updateEfxLod()
{
	if (mEfxDenkiHibaMgr) {
		mEfxDenkiHibaMgr->setRateLOD(mLod.isFlag(AILOD_IsMid | AILOD_IsFar));
	}
}

/**
 * @note Address: 0x80270160
 * @note Size: 0xDC
 */
void Obj::createEffect(bool check)
{
	if (check) {
		mEfxDenkiHibaMgr = new efx::TDenkiHibaMgr;
	} else {
		mEfxDenkiHibaMgr = nullptr;
	}
}

/**
 * @note Address: 0x80270418
 * @note Size: 0x110
 */
void Obj::startChargeEffect(Creature* creature)
{
	if (mEfxDenkiHibaMgr) {
		Vector3f creaturePos = creature->getPosition();
		efx::ArgDenkiHiba denkiHibaArg(mPosition, creaturePos);
		mEfxDenkiHibaMgr->create(&denkiHibaArg);
	}
}

/**
 * @note Address: 0x80270528
 * @note Size: 0x38
 */
void Obj::finishChargeEffect()
{
	if (mEfxDenkiHibaMgr) {
		mEfxDenkiHibaMgr->fade();
	}
}

/**
 * @note Address: 0x80270560
 * @note Size: 0x70
 */
void Obj::startDisChargeEffect()
{
	efx::TDenkiHibaMgr* efxMgr = mEfxDenkiHibaMgr;
	if (efxMgr) {
		int type = mVersusHibaType;
		if (type == VHT_Neutral) {
			efxMgr->createHiba(VHT_Neutral);
			return;
		}

		if (type == VHT_Red) {
			efxMgr->createHiba(VHT_Red);
			return;
		}

		if (type == VHT_Blue) {
			efxMgr->createHiba(VHT_Blue);
			return;
		}
	}
}

/**
 * @note Address: 0x802705D0
 * @note Size: 0x38
 */
void Obj::finishDisChargeEffect()
{
	if (mEfxDenkiHibaMgr) {
		mEfxDenkiHibaMgr->fade();
	}
}

/**
 * @note Address: 0x80270608
 * @note Size: 0x44
 */
void Obj::generatorKill()
{
	if (mGenerator) {
		mGenerator->informDeath(this);
		mGenerator = nullptr;
	}
}

/**
 * @note Address: 0x8027064C
 * @note Size: 0x6C
 */
void Obj::setVersusHibaOnOff()
{
	if ((gameSystem && gameSystem->isVersusMode()) && (Cave::randMapMgr && Cave::randMapMgr->isVersusHiba())) {
		mIsVersusModeHiba = true;
		return;
	}

	mIsVersusModeHiba = false;
}

/**
 * @note Address: 0x802706B8
 * @note Size: 0x2C
 */
void Obj::setVersusHibaType()
{
	if (mRedAttrAttackCount != mBlueAttrAttackCount) {
		if (mRedAttrAttackCount > mBlueAttrAttackCount) {
			mVersusHibaType = VHT_Red;
			return;
		}
		mVersusHibaType = VHT_Blue;
	}
}

/**
 * @note Address: 0x802706E4
 * @note Size: 0x10
 */
void Obj::resetAttrHitCount()
{
	mRedAttrAttackCount  = 0;
	mBlueAttrAttackCount = 0;
}

/**
 * @note Address: 0x802706F4
 * @note Size: 0x70
 */
void Obj::addAttrAttackCount(Piki* piki)
{
	int type = piki->getKind();
	if (type == Red) {
		mRedAttrAttackCount++;
	} else if (type == Blue) {
		mBlueAttrAttackCount++;
	}
	if (getStateID() == ELECHIBA_Attack) {
		mWaitTimer = 0.0f;
	}
}

/**
 * @note Address: 0x80270764
 * @note Size: 0x40
 */
bool Obj::isWaitFinish()
{
	if ((mWaitTimer > C_PROPERPARMS.mActiveTime.mValue) && (mVersusHibaType || (mRedAttrAttackCount != mBlueAttrAttackCount))) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x802707A4
 * @note Size: 0x58
 */
bool Obj::isAttackFinish()
{
	if (mWaitTimer > C_PROPERPARMS.mActiveTime.mValue || (mVersusHibaType == VHT_Red && (mBlueAttrAttackCount > mRedAttrAttackCount))
	    || (mVersusHibaType == VHT_Blue && (mRedAttrAttackCount > mBlueAttrAttackCount))) {
		return true;
	}
	return false;
}

} // namespace ElecHiba
} // namespace Game
