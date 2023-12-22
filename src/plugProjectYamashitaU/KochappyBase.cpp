#include "types.h"
#include "Game/Entities/KochappyBase.h"
#include "Game/gamePlayData.h"

namespace Game {
namespace KochappyBase {

/**
 * @note Address: 0x8012DAE8
 * @note Size: 0x148
 */
Obj::Obj()
    : mFsm(nullptr)
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/**
 * @note Address: 0x8012DC30
 * @note Size: 0x68
 */
void Obj::birth(Vector3f& position, f32 p1)
{
	EnemyBase::birth(position, p1);
	mFsm->start(this, KOCHAPPY_Wait, (WaitArg*)'rand');
	mShadowJoint = mModel->getJoint("ago");
	mAlertTime   = 0.0f;
}

/**
 * @note Address: 0x8012DC98
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x8012DC9C
 * @note Size: 0x68
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	mShadowJoint = mModel->getJoint("ago");
	mAlertTime   = 0.0f;
	mFsm->start(this, KOCHAPPY_Wait, (WaitArg*)'rand');
}

/**
 * @note Address: 0x8012DD04
 * @note Size: 0x88
 */
void Obj::doUpdate()
{
	mFsm->exec(this);

	if (!playData->isDemoFlag(DEMO_Meet_Red_Pikmin)) {
		mTargetVelocity  = Vector3f::zero;
		mCurrentVelocity = mTargetVelocity;
	}
}

/**
 * @note Address: 0x8012DD8C
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x8012DD90
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8012DDB0
 * @note Size: 0x88
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

/**
 * @note Address: 0x8012DE38
 * @note Size: 0x40
 */
void Obj::bounceCallback(Sys::Triangle* triangle)
{
	if (getStateID() == 0) {
		enableEvent(0, EB_Constrained);
	}
}

/**
 * @note Address: 0x8012DE78
 * @note Size: 0xA0
 */
bool Obj::pressCallBack(Game::Creature* creature, f32 p1, CollPart* collpart)
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

/**
 * @note Address: 0x8012DF18
 * @note Size: 0x20
 */
void Obj::doStartStoneState() { EnemyBase::doStartStoneState(); }

/**
 * @note Address: 0x8012DF38
 * @note Size: 0x4
 */
void Obj::doFinishStoneState() { }

/**
 * @note Address: 0x8012DF3C
 * @note Size: 0x64
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

/**
 * @note Address: 0x8012DFA0
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { EnemyBase::startMotion(KOCHAPPYANIM_Carry, nullptr); }

/**
 * @note Address: 0x8012DFC8
 * @note Size: 0x8C
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(1);
	mMouthSlots.setup(0, mModel, "kamu");

	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.getSlot(i)->mRadius = 15.0f;
	}
}

/**
 * @note Address: 0x8012E054
 * @note Size: 0x8C
 */
void Obj::initWalkSmokeEffect()
{
	if ((mModel->getJoint("asiL") != nullptr) && (mModel->getJoint("asiR") != nullptr)) {
		mWalkSmokeMgr.alloc(2);
		mWalkSmokeMgr.setup(0, mModel, "asiL", 4.0f);
		mWalkSmokeMgr.setup(1, mModel, "asiR", 4.0f);
	}
}

/**
 * @note Address: 0x8012E0E0
 * @note Size: 0x8
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

} // namespace KochappyBase
} // namespace Game
