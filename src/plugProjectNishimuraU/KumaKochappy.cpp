#include "Game/Entities/KumaKochappy.h"
#include "Game/Entities/KumaChappy.h"
#include "Game/EnemyIterator.h"
#include "Game/generalEnemyMgr.h"
#include "Game/ChappyRelation.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {

/**
 * @note Address: 0x802E7050
 * @note Size: 0x148
 */
KumaKochappy::Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createChappyRelation();
}

/**
 * @note Address: 0x802E7198
 * @note Size: 0x4
 */
void KumaKochappy::Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x802E719C
 * @note Size: 0x68
 */
void KumaKochappy::Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_Cullable);
	setNearestParent();
	mFsm->start(this, KUMAKOCHAPPY_Wait, nullptr);
	resetZukanAnimationFrame();
}

/**
 * @note Address: 0x802E7204
 * @note Size: 0x44
 */
void KumaKochappy::Obj::onKill(CreatureKillArg* killArg)
{
	releaseParent();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x802E7248
 * @note Size: 0x4C
 */
void KumaKochappy::Obj::doUpdate()
{
	updateHomePosition();
	mFsm->exec(this);
	mMouthSlots.update();
}

/**
 * @note Address: 0x802E7294
 * @note Size: 0x4
 */
void KumaKochappy::Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x802E7298
 * @note Size: 0x20
 */
void KumaKochappy::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x802E72B8
 * @note Size: 0x4C
 */
void KumaKochappy::Obj::setFSM(KumaKochappy::FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802E7304
 * @note Size: 0xA8
 */
void KumaKochappy::Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* worldMat       = mModel->getJoint("ago")->getWorldMatrix();
	shadowParam.mPosition   = Vector3f(worldMat->mMatrix.mtxView[0][3], worldMat->mMatrix.mtxView[1][3], worldMat->mMatrix.mtxView[2][3]);
	shadowParam.mPosition.y = mPosition.y + 5.0f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);

	if (isEvent(1, EB2_Earthquake)) {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	} else {
		shadowParam.mBoundingSphere.mRadius = 20.0f;
	}

	shadowParam.mSize = 10.0f;
}

/**
 * @note Address: 0x802E73AC
 * @note Size: 0x88
 */
bool KumaKochappy::Obj::pressCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (isAlive() && !isEvent(0, EB_Bittered) && getStateID() > KUMAKOCHAPPY_Press) {
		mFsm->transit(this, KUMAKOCHAPPY_Press, nullptr);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x802E7434
 * @note Size: 0x2C
 */
bool KumaKochappy::Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* part) { pressCallBack(creature, damage, part); }

/**
 * @note Address: 0x802E7460
 * @note Size: 0x28
 */
void KumaKochappy::Obj::startCarcassMotion() { startMotion(KUMAKOCHAPPYANIM_Carry, nullptr); }

/**
 * @note Address: 0x802E7488
 * @note Size: 0x8C
 */
void KumaKochappy::Obj::initMouthSlots()
{
	mMouthSlots.alloc(1);
	mMouthSlots.setup(0, mModel, "kamu");
	f32 size = 15.0f;
	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.getSlot(i)->mRadius = size;
	}
}

/**
 * @note Address: 0x802E7514
 * @note Size: 0x64
 */
void KumaKochappy::Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "asiL", 4.0f);
	mWalkSmokeMgr.setup(1, mModel, "asiR", 4.0f);
}

/**
 * @note Address: 0x802E7578
 * @note Size: 0x8
 */
WalkSmokeEffect::Mgr* KumaKochappy::Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/**
 * @note Address: 0x802E7580
 * @note Size: 0x78
 */
void KumaKochappy::Obj::resetZukanAnimationFrame()
{
	if (gameSystem && gameSystem->isZukanMode()) {
		setMotionFrame(randWeightFloat(50.0f));
	}
}

/**
 * @note Address: 0x802E75F8
 * @note Size: 0x380
 */
KumaChappy::Obj* KumaKochappy::Obj::setNearestParent()
{
	KumaChappy::Obj* parent = nullptr;
	KumaChappy::Mgr* mgr    = static_cast<KumaChappy::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_KumaChappy));
	if (mgr) {
		f32 searchRad   = C_GENERALPARMS.mSearchDistance.mValue;
		f32 searchAngle = C_GENERALPARMS.mSearchAngle.mValue;
		f32 dist        = SQUARE(searchRad);

		EnemyIterator<KumaChappy::Obj> iter(mgr, nullptr, nullptr);
		CI_LOOP(iter)
		{
			EnemyBase* currEnemy      = *iter;
			KumaChappy::Obj* currBear = static_cast<KumaChappy::Obj*>(currEnemy); // necessary for an extra register load

			if (currBear->isAlive()) {
				if (FABS(getAngDist(currBear)) <= searchAngle) {
					Vector3f bearPos = currBear->getPosition();
					f32 bearDist     = sqrDistanceXZ(mPosition, bearPos);
					if (bearDist < dist) {
						parent = currBear;
						dist   = bearDist;
					}
				}
			}
		}
	}

	addParentEnemy(parent);
	return parent;
}

/**
 * @note Address: 0x802E79C4
 * @note Size: 0x1A8
 */
Vector3f* KumaKochappy::Obj::setTargetParentPosition()
{
	setNearestParent();

	if (mParentRelation->mParent) {
		KumaChappy::Obj* parent = static_cast<KumaChappy::Obj*>(getParentRelation()->mOwner);
		if (parent) {
			int idx = 0;
			getEnemyIndex(idx);

			Vector3f parentPos      = parent->getPosition();
			mTargetParentPosition.x = mPosition.x - parentPos.x;
			mTargetParentPosition.y = 0.0f;
			mTargetParentPosition.z = mPosition.z - parentPos.z;

			mTargetParentPosition.normalise();

			f32 factor = 10.0f * idx + 15.0f;

			mTargetParentPosition *= factor;

			mTargetParentPosition.x += parentPos.x;
			mTargetParentPosition.y = parentPos.y;
			mTargetParentPosition.z += parentPos.z;

			return &mTargetParentPosition;
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x802E7B6C
 * @note Size: 0x1C
 */
void KumaKochappy::Obj::updateHomePosition() { mHomePosition = mPosition; }

/**
 * @note Address: 0x802E7B88
 * @note Size: 0x38
 */
Creature* KumaKochappy::Obj::getSearchedTarget()
{
	return EnemyFunc::getNearestPikminOrNavi(this, C_GENERALPARMS.mViewAngle.mValue, C_GENERALPARMS.mSightRadius.mValue, nullptr, nullptr,
	                                         nullptr);
}

/**
 * @note Address: 0x802E7BC0
 * @note Size: 0x70
 */
void KumaKochappy::Obj::createChappyRelation()
{
	mParentRelation = new ChappyRelation(this);
	mParentRelation->clearRelations();
}

/**
 * @note Address: 0x802E7C30
 * @note Size: 0x24
 */
void KumaKochappy::Obj::releaseParent() { mParentRelation->del(); }

/**
 * @note Address: 0x802E7C54
 * @note Size: 0xC
 */
ChappyRelation* KumaKochappy::Obj::getParentRelation() { return static_cast<ChappyRelation*>(mParentRelation->mParent); }

/**
 * @note Address: 0x802E7C60
 * @note Size: 0x3C
 */
int KumaKochappy::Obj::getEnemyIndex(int& idx)
{
	int count           = 0;
	ChappyRelation* rel = static_cast<ChappyRelation*>(getParentRelation()->mChild);
	while (rel) {
		if (rel == mParentRelation) {
			idx = count;
		}
		rel = static_cast<ChappyRelation*>(rel->mNext);
		count++;
	}

	return -1;
}

/**
 * @note Address: 0x802E7C9C
 * @note Size: 0xA0
 */
void KumaKochappy::Obj::addParentEnemy(KumaChappy::Obj* parent)
{
	if (parent) {
		if (parent->getChappyRelation() != getParentRelation()) {
			releaseParent();
			parent->getChappyRelation()->add(mParentRelation);
		}

	} else if (getParentRelation()) {
		releaseParent();
	}
}
} // namespace Game
