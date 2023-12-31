#include "Game/Entities/FireChappy.h"
#include "efx/THanacho.h"

namespace Game {
namespace FireChappy {

/**
 * @note Address: 0x8028F62C
 * @note Size: 0xAC
 */
Obj::Obj()
{
	createEffect();
	createMaterialAnimation();
}

/**
 * @note Address: 0x8028F6D8
 * @note Size: 0x58
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	ChappyBase::Obj::onInit(initArg);
	setupEffect();
	mOnFire = false;
	startFireState();
	startMaterialAnimation();
}

/**
 * @note Address: 0x8028F730
 * @note Size: 0x48
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishFireState(false);
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x8028F778
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/**
 * @note Address: 0x8028F77C
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8028F79C
 * @note Size: 0xC0
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = mModel->mJ3dModel;
	modelData          = j3dModel->mModelData;
	j3dModel->calcMaterial();
	updateMaterialAnimation();

	for (u16 i = 0; i < modelData->mMaterialTable.mMaterialNum; i++) {
		J3DMatPacket* packet  = &j3dModel->mMatPackets[i];
		j3dSys.mMatPacket     = packet;
		J3DMaterial* material = modelData->mMaterialTable.mMaterials[i];
		material->diff(packet->mShapePacket->mDiffFlag);
	}
}

/**
 * @note Address: 0x8028F85C
 * @note Size: 0x34
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateFireState();
}

/**
 * @note Address: 0x8028F890
 * @note Size: 0xA0
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* worldMat       = mShadowJoint->getWorldMatrix();
	shadowParam.mPosition   = Vector3f(worldMat->mMatrix.mtxView[0][3], worldMat->mMatrix.mtxView[1][3], worldMat->mMatrix.mtxView[2][3]);
	shadowParam.mPosition.y = mPosition.y + 5.0f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);

	if (isEvent(1, EB2_Earthquake)) {
		shadowParam.mBoundingSphere.mRadius = 75.0f;
	} else {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	}

	shadowParam.mSize = 32.0f;
}

/**
 * @note Address: 0x8028F930
 * @note Size: 0xE0
 */
void Obj::collisionCallback(CollEvent& collEvent)
{
	ChappyBase::Obj::collisionCallback(collEvent);
	if (mOnFire && collEvent.mCollidingCreature && collEvent.mCollidingCreature->isAlive()
	    && (collEvent.mCollidingCreature->isPiki() || collEvent.mCollidingCreature->isNavi())) {
		InteractFire fire(this, static_cast<ChappyBase::Parms*>(mParms)->mGeneral.mAttackDamage.mValue);
		collEvent.mCollidingCreature->stimulate(fire);
	}
}

/**
 * @note Address: 0x8028FA10
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x8028FA44
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x8028FA78
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x8028FA98
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x8028FAB8
 * @note Size: 0x48
 */
void Obj::startFireState()
{
	if (!mOnFire) {
		mOnFire = true;
		startBodyEffect();
	}
	mAnimationFireTimer = 30.0f;
}

/**
 * @note Address: 0x8028FB00
 * @note Size: 0x94
 */
void Obj::finishFireState(bool check)
{
	if (mOnFire) {
		mOnFire = false;
		finishBodyEffect();
		if (check) {
			createDeadSteamEffect();
		} else {
			createDeadSmokeEffect();
		}
		getJAIObject()->startSound(PSSE_EN_FIRE_CHAPPY_F_END, 0);
	}
}

/**
 * @note Address: 0x8028FB94
 * @note Size: 0x10C
 */
void Obj::updateFireState()
{
	if (mOnFire) {
		getJAIObject()->startSound(PSSE_EN_FIRE_CHAPPY_FLAME, 0);
		updateEfxLod();

		if (mWaterBox && mOnFire) {
			mOnFire = false;
			finishBodyEffect();
			createDeadSteamEffect();
			getJAIObject()->startSound(PSSE_EN_FIRE_CHAPPY_F_END, 0);
		}
		return;
	}

	if (isAlive() && !mWaterBox) {
		if (!mOnFire) {
			mOnFire = true;
			startBodyEffect();
		}

		mAnimationFireTimer = 30.0f;
	}
}

/**
 * @note Address: 0x8028FCA0
 * @note Size: 0x4C
 */
void Obj::createMaterialAnimation() { mLoopAnimators = new Sys::MatLoopAnimator[2]; }

/**
 * @note Address: 0x8028FCEC
 * @note Size: 0x60
 */
void Obj::startMaterialAnimation()
{
	Sys::MatLoopAnimator* texLoopAnimator = &mLoopAnimators[0];
	Sys::MatTexAnimation* texAnimation    = C_MGR->mTexAnimation;
	texLoopAnimator->start(texAnimation);

	Sys::MatLoopAnimator* tevRegLoopAnimator = &mLoopAnimators[1];
	Sys::MatTevRegAnimation* tevRegAnimation = C_MGR->mTevRegAnimation;
	tevRegLoopAnimator->start(tevRegAnimation);
}

/**
 * @note Address: 0x8028FD4C
 * @note Size: 0x108
 */
void Obj::updateMaterialAnimation()
{
	f32 p1 = 30.0f;
	if (!mOnFire) {
		Sys::MatBaseAnimation* animation = mLoopAnimators[0].mAnimation;
		f32 p2                           = mLoopAnimators[0].mCurrFrame;
		f32 frameMax                     = (animation) ? animation->getFrameMax() : 0.0f;
		frameMax -= 30.0f;

		if (mAnimationFireTimer == 30.0f) {
			if (p2 >= frameMax - 1.0f && p2 <= frameMax) {
				mAnimationFireTimer -= 0.5f;
			}
		} else {
			mAnimationFireTimer -= 0.5f;
			if (mAnimationFireTimer < 0.0f) {
				mAnimationFireTimer = 0.0f;
			}
		}

		if (mAnimationFireTimer <= 0.0f) {
			p1 = 0.0f;
		} else {
			p1 = mAnimationFireTimer;
		}
	}

	mLoopAnimators[0].animate(p1);
	mLoopAnimators[1].animate(p1);
}

/**
 * @note Address: 0x8028FE54
 * @note Size: 0x2C
 */
void Obj::updateEfxLod() { mEfxBody->setRateLOD(mLod.isFlag(AILOD_IsMid | AILOD_IsFar)); }

/**
 * @note Address: 0x8028FE80
 * @note Size: 0x288
 */
void Obj::createEffect()
{
	mEfxBody      = new efx::TYakiBody;
	mEfxHanacho   = new efx::THanachoY;
	mEfxFlick     = new efx::TYakiFlick;
	mEfxDeadsmoke = new efx::TYakiDeadsmoke;
	mEfxSteam     = new efx::TYakiSteam;
}

/**
 * @note Address: 0x80290108
 * @note Size: 0x84
 */
void Obj::setupEffect()
{
	Matrixf* bodyMat = mModel->getJoint("body")->getWorldMatrix();
	mEfxBody->setMtxptr(bodyMat->mMatrix.mtxView);
	mEfxFlick->mMtx     = bodyMat;
	mEfxDeadsmoke->mMtx = bodyMat;
	mEfxSteam->mMtx     = bodyMat;

	Matrixf* headMat  = mModel->getJoint("head")->getWorldMatrix();
	mEfxHanacho->mMtx = headMat;
}

/**
 * @note Address: 0x8029018C
 * @note Size: 0x34
 */
void Obj::startSleepEffect() { mEfxHanacho->create(nullptr); }

/**
 * @note Address: 0x802901C0
 * @note Size: 0x30
 */
void Obj::finishSleepEffect() { mEfxHanacho->fade(); }

/**
 * @note Address: 0x802901F0
 * @note Size: 0x34
 */
void Obj::startBodyEffect() { mEfxBody->create(nullptr); }

/**
 * @note Address: 0x80290224
 * @note Size: 0x30
 */
void Obj::finishBodyEffect() { mEfxBody->fade(); }

/**
 * @note Address: 0x80290254
 * @note Size: 0x40
 */
void Obj::createFlickEffect()
{
	if (mOnFire) {
		mEfxFlick->create(nullptr);
	}
}

/**
 * @note Address: 0x80290294
 * @note Size: 0x34
 */
void Obj::createDeadSmokeEffect() { mEfxDeadsmoke->create(nullptr); }

/**
 * @note Address: 0x802902C8
 * @note Size: 0x34
 */
void Obj::createDeadSteamEffect() { mEfxSteam->create(nullptr); }

/**
 * @note Address: 0x802902FC
 * @note Size: 0x8C
 */
void Obj::effectDrawOn()
{
	mEfxBody->endDemoDrawOn();
	mEfxFlick->endDemoDrawOn();
	mEfxDeadsmoke->endDemoDrawOn();
	mEfxSteam->endDemoDrawOn();
	mEfxHanacho->endDemoDrawOn();
}

/**
 * @note Address: 0x80290388
 * @note Size: 0x8C
 */
void Obj::effectDrawOff()
{
	mEfxBody->startDemoDrawOff();
	mEfxFlick->startDemoDrawOff();
	mEfxDeadsmoke->startDemoDrawOff();
	mEfxSteam->startDemoDrawOff();
	mEfxHanacho->startDemoDrawOff();
}

} // namespace FireChappy
} // namespace Game
