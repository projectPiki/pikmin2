#include "types.h"
#include "Game/Entities/KochappyBase.h"
#include "Game/gamePlayData.h"

namespace Game {
namespace KochappyBase {

/*
 * --INFO--
 * Address:	8012DAE8
 * Size:	000148
 */
Obj::Obj()
    : mFsm(nullptr)
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	8012DC30
 * Size:	000068
 */
void Obj::birth(Vector3f& position, f32 p1)
{
	EnemyBase::birth(position, p1);
	mFsm->start(this, KOCHAPPY_Wait, (WaitArg*)'rand');
	mShadowJoint = mModel->getJoint("ago");
	mAlertTime   = 0.0f;
}

/*
 * --INFO--
 * Address:	8012DC98
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8012DC9C
 * Size:	000068
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	mShadowJoint = mModel->getJoint("ago");
	mAlertTime   = 0.0f;
	mFsm->start(this, KOCHAPPY_Wait, (WaitArg*)'rand');
}

/*
 * --INFO--
 * Address:	8012DD04
 * Size:	000088
 */
void Obj::doUpdate()
{
	mFsm->exec(this);

	if (!playData->isDemoFlag(DEMO_Meet_Red_Pikmin)) {
		mTargetVelocity  = Vector3f::zero;
		mCurrentVelocity = mTargetVelocity;
	}
}

/*
 * --INFO--
 * Address:	8012DD8C
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8012DD90
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8012DDB0
 * Size:	000088
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* mat            = mShadowJoint->getWorldMatrix();
	shadowParam.mPosition   = Vector3f(mat->mMatrix.mtxView[0][3], mat->mMatrix.mtxView[1][3], mat->mMatrix.mtxView[2][3]);
	shadowParam.mPosition.y = 2.0f + mPosition.y;

	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 100.0f;

	shadowParam.mSize = 10.0f;
}

/*
 * --INFO--
 * Address:	8012DE38
 * Size:	000040
 */
void Obj::bounceCallback(Sys::Triangle* triangle)
{
	if (getStateID() == 0) {
		enableEvent(0, EB_Constrained);
	}
}

/*
 * --INFO--
 * Address:	8012DE78
 * Size:	0000A0
 */
bool Obj::pressCallBack(Game::Creature* creature, float p1, CollPart* collpart)
{
	if (creature->isPiki() && isAlive()) {
		if (!isEvent(0, EB_Bittered)) {
			mFsm->transit(this, KOCHAPPY_Press, nullptr);
			return true;
		}
		return false;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8012DF18
 * Size:	000020
 */
void Obj::doStartStoneState() { EnemyBase::doStartStoneState(); }

/*
 * --INFO--
 * Address:	8012DF38
 * Size:	000004
 */
void Obj::doFinishStoneState() { }

/*
 * --INFO--
 * Address:	8012DF3C
 * Size:	000064
 */
Vector3f Obj::getOffsetForMapCollision()
{
	Vector3f offset;
	Matrixf* worldMat = mShadowJoint->getWorldMatrix();

	offset.x = worldMat->mMatrix.mtxView[0][3];
	offset.x -= mPosition.x;

	offset.z = worldMat->mMatrix.mtxView[2][3];
	offset.z -= mPosition.z;

	offset.y = 0.0f;

	return offset;
}

/*
 * --INFO--
 * Address:	8012DFA0
 * Size:	000028
 */
void Obj::startCarcassMotion() { EnemyBase::startMotion(KOCHAPPYANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	8012DFC8
 * Size:	00008C
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(1);
	mMouthSlots.setup(0, mModel, "kamu");

	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.getSlot(i)->mRadius = 15.0f;
	}
}

/*
 * --INFO--
 * Address:	8012E054
 * Size:	00008C
 */
void Obj::initWalkSmokeEffect()
{
	if ((mModel->getJoint("asiL") != nullptr) && (mModel->getJoint("asiR") != nullptr)) {
		mWalkSmokeMgr.alloc(2);
		mWalkSmokeMgr.setup(0, mModel, "asiL", 4.0f);
		mWalkSmokeMgr.setup(1, mModel, "asiR", 4.0f);
	}
}

/*
 * --INFO--
 * Address:	8012E0E0
 * Size:	000008
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

} // namespace KochappyBase
} // namespace Game
