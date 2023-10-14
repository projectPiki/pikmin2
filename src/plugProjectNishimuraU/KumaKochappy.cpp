#include "Game/Entities/KumaKochappy.h"
#include "Game/Entities/KumaChappy.h"
#include "Game/EnemyIterator.h"
#include "Game/generalEnemyMgr.h"
#include "Game/ChappyRelation.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {

/*
 * --INFO--
 * Address:	802E7050
 * Size:	000148
 */
KumaKochappy::Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createChappyRelation();
}

/*
 * --INFO--
 * Address:	802E7198
 * Size:	000004
 */
void KumaKochappy::Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802E719C
 * Size:	000068
 */
void KumaKochappy::Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_Cullable);
	setNearestParent();
	mFsm->start(this, KUMAKOCHAPPY_Wait, nullptr);
	resetZukanAnimationFrame();
}

/*
 * --INFO--
 * Address:	802E7204
 * Size:	000044
 */
void KumaKochappy::Obj::onKill(CreatureKillArg* killArg)
{
	releaseParent();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802E7248
 * Size:	00004C
 */
void KumaKochappy::Obj::doUpdate()
{
	updateHomePosition();
	mFsm->exec(this);
	mMouthSlots.update();
}

/*
 * --INFO--
 * Address:	802E7294
 * Size:	000004
 */
void KumaKochappy::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802E7298
 * Size:	000020
 */
void KumaKochappy::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802E72B8
 * Size:	00004C
 */
void KumaKochappy::Obj::setFSM(KumaKochappy::FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	802E7304
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	802E73AC
 * Size:	000088
 */
bool KumaKochappy::Obj::pressCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (isAlive() && !isEvent(0, EB_Bittered) && getStateID() > KUMAKOCHAPPY_Press) {
		mFsm->transit(this, KUMAKOCHAPPY_Press, nullptr);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	802E7434
 * Size:	00002C
 */
bool KumaKochappy::Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* part) { pressCallBack(creature, damage, part); }

/*
 * --INFO--
 * Address:	802E7460
 * Size:	000028
 */
void KumaKochappy::Obj::startCarcassMotion() { startMotion(KUMAKOCHAPPYANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	802E7488
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	802E7514
 * Size:	000064
 */
void KumaKochappy::Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "asiL", 4.0f);
	mWalkSmokeMgr.setup(1, mModel, "asiR", 4.0f);
}

/*
 * --INFO--
 * Address:	802E7578
 * Size:	000008
 */
WalkSmokeEffect::Mgr* KumaKochappy::Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/*
 * --INFO--
 * Address:	802E7580
 * Size:	000078
 */
void KumaKochappy::Obj::resetZukanAnimationFrame()
{
	if (gameSystem && gameSystem->isZukanMode()) {
		setMotionFrame(randWeightFloat(50.0f));
	}
}

/*
 * --INFO--
 * Address:	802E75F8
 * Size:	000380
 */
KumaChappy::Obj* KumaKochappy::Obj::setNearestParent()
{
	KumaChappy::Obj* parent = nullptr;
	KumaChappy::Mgr* mgr    = static_cast<KumaChappy::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_KumaChappy));
	if (mgr) {
		f32 searchRad   = C_PARMS->mGeneral.mSearchDistance.mValue;
		f32 searchAngle = C_PARMS->mGeneral.mSearchAngle.mValue;
		f32 dist        = SQUARE(searchRad);

		EnemyIterator<KumaChappy::Obj> iter((Container<KumaChappy::Obj>*)(GenericContainer*)(mgr), nullptr, nullptr);
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

/*
 * --INFO--
 * Address:	802E79C4
 * Size:	0001A8
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

/*
 * --INFO--
 * Address:	802E7B6C
 * Size:	00001C
 */
void KumaKochappy::Obj::updateHomePosition() { mHomePosition = mPosition; }

/*
 * --INFO--
 * Address:	802E7B88
 * Size:	000038
 */
Creature* KumaKochappy::Obj::getSearchedTarget()
{
	return EnemyFunc::getNearestPikminOrNavi(this, C_PARMS->mGeneral.mViewAngle.mValue, C_PARMS->mGeneral.mSightRadius.mValue, nullptr,
	                                         nullptr, nullptr);
}

/*
 * --INFO--
 * Address:	802E7BC0
 * Size:	000070
 */
void KumaKochappy::Obj::createChappyRelation()
{
	mParentRelation = new ChappyRelation(this);
	mParentRelation->clearRelations();
}

/*
 * --INFO--
 * Address:	802E7C30
 * Size:	000024
 */
void KumaKochappy::Obj::releaseParent() { mParentRelation->del(); }

/*
 * --INFO--
 * Address:	802E7C54
 * Size:	00000C
 */
ChappyRelation* KumaKochappy::Obj::getParentRelation() { return static_cast<ChappyRelation*>(mParentRelation->mParent); }

/*
 * --INFO--
 * Address:	802E7C60
 * Size:	00003C
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

/*
 * --INFO--
 * Address:	802E7C9C
 * Size:	0000A0
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
